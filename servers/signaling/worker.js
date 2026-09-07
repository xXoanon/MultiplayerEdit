
const kv = await Deno.openKv();
const ROOM_TTL = 2 * 60 * 60 * 1000;
const CHARS = "ABCDEFGHJKMNPQRSTUVWXYZ23456789";
const lastPingCache = new Map();
let roomListCache = null;
let roomListCacheTime = 0;
const bcSender = new BroadcastChannel("signal-wakeup");
const bcReceiver = new BroadcastChannel("signal-wakeup");


async function enqueueKv(code, queueName, msg) {
    const msgId = Date.now() + "_" + crypto.randomUUID();
    await kv.atomic()
        .set(["rooms", code, queueName, msgId], msg, { expireIn: ROOM_TTL })
        .commit();
    bcSender.postMessage({ code, queueName });
}

async function dequeueKv(code, queueName) {
    const prefix = ["rooms", code, queueName];
    const msgs = [];
    const entriesToDelete = [];

    for await (const entry of kv.list({ prefix })) {
        const lastKeyPart = entry.key[entry.key.length - 1];
        if (lastKeyPart === "wakeup") continue;
        msgs.push(entry.value);
        entriesToDelete.push(entry);
    }

    if (msgs.length === 0) return [];

    let atomic = kv.atomic();
    let ops = 0;
    for (const entry of entriesToDelete) {
        atomic = atomic.check(entry).delete(entry.key);
        ops++;
        if (ops === 10) {
            await atomic.commit();
            atomic = kv.atomic();
            ops = 0;
        }
    }
    if (ops > 0) {
        await atomic.commit();
    }

    return msgs;
}

async function genCode() {
    let code;
    let exists = true;
    while (exists) {
        code = Array.from({ length: 6 }, () =>
            CHARS[Math.floor(Math.random() * CHARS.length)]
        ).join("");
        const res = await kv.get(["rooms", code]);
        exists = !!res.value;
    }
    return code;
}

function json(data, status = 200) {
    return new Response(JSON.stringify(data), {
        status,
        headers: {
            "Content-Type": "application/json",
            "Access-Control-Allow-Origin": "*",
            "Access-Control-Allow-Methods": "GET,POST,DELETE,OPTIONS",
            "Access-Control-Allow-Headers": "Content-Type",
        },
    });
}

Deno.serve(async (req) => {
    if (req.method === "OPTIONS") return json({ ok: true });

    const url = new URL(req.url);
    const parts = url.pathname.split("/").filter(Boolean);

    if (parts[0] === "health" && req.method === "GET") {
        return json({ status: "ok" });
    }

    if (parts[0] !== "rooms") return json({ error: "not found" }, 404);

    if (parts.length === 1 && req.method === "GET") {
        const now = Date.now();
        if (roomListCache && now - roomListCacheTime < 5000) {
            return json(roomListCache);
        }

        const rooms = [];

        for await (const entry of kv.list({ prefix: ["room_meta"] })) {
            const room = entry.value;
            if (!room.isPrivate && room.version && room.version !== "Unknown"
                && room.lastPing && Date.now() - room.lastPing <= 5 * 60 * 1000) {
                rooms.push({
                    roomCode: entry.key[1],
                    hostName: room.hostName,
                    roomName: room.roomName || "Room",
                    description: room.description || "",
                    playerCount: room.players.length,
                    playerLimit: room.playerLimit || 0,
                    isPrivate: !!room.isPrivate,
                    hasPassword: !!room.hasPassword,
                    version: room.version || "Unknown",
                    created: room.created || 0
                });
            }
        }

        rooms.sort((a, b) => b.created - a.created);
        roomListCache = rooms;
        roomListCacheTime = now;
        return json(rooms);
    }

    if (parts.length === 1 && req.method === "POST") {
        const { hostName, playerName, roomName, description, playerLimit, isPrivate, hasPassword, password, version } = await req.json();
        const code = await genCode();
        const roomId = crypto.randomUUID();

        const host = hostName || playerName || "Unknown";

        const roomObj = {
            roomId,
            hostName: host,
            roomName: roomName || "Room",
            description: description || "",
            playerLimit: playerLimit || 0,
            isPrivate: !!isPrivate,
            hasPassword: !!hasPassword,
            password: password || "",
            version: version || "Unknown",
            nextId: 1,
            created: Date.now(),
            players: [{ id: 0, name: host }],
            lastPing: Date.now(),
        };

        let atomic = kv.atomic();
        atomic = atomic.set(["rooms", code], roomObj, { expireIn: 15 * 60 * 1000 });
        atomic = atomic.set(["room_meta", code], roomObj, { expireIn: 15 * 60 * 1000 });
        await atomic.commit();

        return json({ roomCode: code, roomId });
    }

    const code = parts[1]?.toUpperCase();
    const action = parts[2];

    if (parts.length === 2 && req.method === "GET") {
        const roomRes = await kv.get(["rooms", code]);
        const room = roomRes.value;
        if (!room) return json({ error: "room not found" }, 404);
        return json({
            roomCode: code,
            hostName: room.hostName,
            playerCount: room.players.length,
            roomId: room.roomId,
        });
    }

    if (parts.length === 2 && req.method === "DELETE") {
        let atomic = kv.atomic();
        atomic = atomic.delete(["rooms", code]);
        atomic = atomic.delete(["room_meta", code]);
        await atomic.commit();

        return json({ ok: true });
    }

    if (action === "join" && req.method === "POST") {
        const { playerName, password } = await req.json();

        let success = false;
        let playerId = -1;
        let retries = 5;
        let hostName = "";

        while (!success && retries > 0) {
            const currentRes = await kv.get(["rooms", code]);
            const currentRoom = currentRes.value;
            if (!currentRoom) return json({ error: "room not found" }, 404);

            if (currentRoom.hasPassword && currentRoom.password !== password)
                return json({ error: "invalid password" }, 403);

            if (currentRoom.banned && currentRoom.banned.includes(playerName))
                return json({ error: "you are banned" }, 403);

            if (currentRoom.playerLimit > 0 && currentRoom.players.length >= currentRoom.playerLimit)
                return json({ error: "room full" }, 400);

            hostName = currentRoom.hostName;
            playerId = currentRoom.nextId++;
            currentRoom.players.push({ id: playerId, name: playerName });

            const commit = await kv
                .atomic()
                .check(currentRes)
                .set(["rooms", code], currentRoom, { expireIn: 15 * 60 * 1000 })
                .set(["room_meta", code], currentRoom, { expireIn: 15 * 60 * 1000 })
                .commit();

            success = commit.ok;
            retries--;
        }

        if (!success) return json({ error: "concurrent join failed" }, 500);

        const joinMsg = { type: "client_joined", playerId, playerName };
        await enqueueKv(code, "hostQueue", joinMsg);

        return json({ playerId, hostName });
    }

    if (action === "ban" && req.method === "POST") {
        const { playerName } = await req.json();

        let success = false;
        let retries = 5;

        while (!success && retries > 0) {
            const currentRes = await kv.get(["rooms", code]);
            const currentRoom = currentRes.value;
            if (!currentRoom) return json({ error: "room not found" }, 404);

            if (!currentRoom.banned) currentRoom.banned = [];
            if (!currentRoom.banned.includes(playerName)) {
                currentRoom.banned.push(playerName);
            }

            const commit = await kv
                .atomic()
                .check(currentRes)
                .set(["rooms", code], currentRoom, { expireIn: 15 * 60 * 1000 })
                .set(["room_meta", code], currentRoom, { expireIn: 15 * 60 * 1000 })
                .commit();

            success = commit.ok;
            retries--;
        }
        if (!success) return json({ error: "concurrent ban failed" }, 500);
        return json({ ok: true });
    }

    if (action === "leave" && req.method === "POST") {
        const { playerId } = await req.json();

        let success = false;
        let retries = 5;

        while (!success && retries > 0) {
            const currentRes = await kv.get(["rooms", code]);
            const currentRoom = currentRes.value;
            if (!currentRoom) return json({ error: "room not found" }, 404);

            currentRoom.players = currentRoom.players.filter(p => p.id !== playerId);

            const commit = await kv
                .atomic()
                .check(currentRes)
                .set(["rooms", code], currentRoom, { expireIn: 15 * 60 * 1000 })
                .set(["room_meta", code], currentRoom, { expireIn: 15 * 60 * 1000 })
                .commit();

            success = commit.ok;
            retries--;
        }
        return json({ ok: success });
    }

    if (action === "signal" && req.method === "GET") {
        const role = url.searchParams.get("role");
        const playerId = Number(url.searchParams.get("playerId") || "0");
        const queueName = role === "host" ? "hostQueue" : `clientQueue_${playerId}`;

        if (role === "host") {
            const cachedPing = lastPingCache.get(code) || 0;
            if (Date.now() - cachedPing >= 240000) {
                let success = false;
                let retries = 3;
                while (!success && retries > 0) {
                    const currentRes = await kv.get(["rooms", code]);
                    if (!currentRes.value) break;
                    currentRes.value.lastPing = Date.now();
                    const commit = await kv.atomic()
                        .check(currentRes)
                        .set(["rooms", code], currentRes.value, { expireIn: 15 * 60 * 1000 })
                        .set(["room_meta", code], currentRes.value, { expireIn: 15 * 60 * 1000 })
                        .commit();
                    success = commit.ok;
                    retries--;
                }
                lastPingCache.set(code, Date.now());
            }
        }

        const initialMsgs = await dequeueKv(code, queueName);
        if (initialMsgs.length > 0) return json(initialMsgs);

        const timeoutParam = Number(url.searchParams.get("timeout") || "0");
        const requestedTimeout = timeoutParam > 0 ? timeoutParam : 1000;
        const actualTimeout = Math.min(requestedTimeout, 1500);

        return new Promise((resolve) => {
            let isResolved = false;

            const onMessage = async (event) => {
                if (isResolved) return;
                if (event.data.code !== code || event.data.queueName !== queueName) return;

                isResolved = true;
                clearTimeout(timer);
                bcReceiver.removeEventListener("message", onMessage);
                const msgs = await dequeueKv(code, queueName);
                resolve(json(msgs));
            };

            bcReceiver.addEventListener("message", onMessage);

            const timer = setTimeout(() => {
                if (isResolved) return;
                isResolved = true;
                bcReceiver.removeEventListener("message", onMessage);
                resolve(json([]));
            }, actualTimeout);
        });
    }

    if (action === "signal" && req.method === "POST") {
        const msg = await req.json();
        let targetQueue = "";

        if (msg.type === "offer" || (msg.type === "candidate" && msg.targetPlayerId !== undefined)) {
            targetQueue = `clientQueue_${msg.targetPlayerId}`;
        } else if (msg.type === "answer" || (msg.type === "candidate" && msg.playerId !== undefined)) {
            targetQueue = "hostQueue";
        }

        if (targetQueue) {
            await enqueueKv(code, targetQueue, msg);
        }

        return json({ ok: true });
    }

    return json({ error: "not found" }, 404);
});

