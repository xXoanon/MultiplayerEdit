import { DurableObject } from "cloudflare:workers";

const CHARS = "ABCDEFGHJKMNPQRSTUVWXYZ23456789";
const ROOM_TTL = 2 * 60 * 60 * 1000;
const STALE_PING_TTL = 60 * 1000;

const HEADERS = {
    "Content-Type": "application/json",
    "Access-Control-Allow-Origin": "*",
    "Access-Control-Allow-Methods": "GET,POST,DELETE,OPTIONS",
    "Access-Control-Allow-Headers": "Content-Type, ngrok-skip-browser-warning, Bypass-Tunnel-Reminder",
};

function json(data, status = 200) {
    return new Response(JSON.stringify(data), {
        status,
        headers: HEADERS,
    });
}

export class SignalingHub extends DurableObject {
    constructor(ctx, env) {
        super(ctx, env);
        this.ctx = ctx;
        this.env = env;
        this.rooms = new Map();
        this.queues = new Map();
        this.waiters = new Map();
        this.lastSaveTime = 0;
        this.lastCleanup = 0;
        this.cachedTurnServers = null;
        this.cachedTurnExpiry = 0;
        this.lastTurnError = 0;

        this.ctx.blockConcurrencyWhile(async () => {
            try {
                const stored = await this.ctx.storage.get("rooms");
                if (stored && typeof stored === "object") {
                    this.rooms = new Map(Object.entries(stored));
                }
            } catch (err) {
                console.error("Failed to restore rooms from storage:", err);
            }
        });
    }

    saveRooms(force = false) {
        const now = Date.now();
        if (!force && now - this.lastSaveTime < 10000) return;
        this.lastSaveTime = now;
        try {
            const obj = Object.fromEntries(this.rooms);
            this.ctx.storage.put("rooms", obj).catch(() => {});
        } catch {}
    }

    genCode() {
        let code;
        let exists = true;
        while (exists) {
            code = Array.from({ length: 6 }, () =>
                CHARS[Math.floor(Math.random() * CHARS.length)]
            ).join("");
            exists = this.rooms.has(code);
        }
        return code;
    }

    cleanupStale() {
        const now = Date.now();
        if (now - this.lastCleanup < 60000) return;
        this.lastCleanup = now;

        let changed = false;
        for (const [code, room] of this.rooms.entries()) {
            if (now - room.created > ROOM_TTL || (room.lastPing && now - room.lastPing > 90 * 1000)) {
                this.deleteRoom(code);
                changed = true;
            }
        }
        if (changed) {
            this.saveRooms(true);
        }
    }

    deleteRoom(code) {
        this.rooms.delete(code);
        for (const [key, waiters] of this.waiters.entries()) {
            if (key.startsWith(code + ":")) {
                for (const waiter of waiters) {
                    clearTimeout(waiter.timer);
                    waiter.resolve([]);
                }
                this.waiters.delete(key);
            }
        }
        for (const key of this.queues.keys()) {
            if (key.startsWith(code + ":")) {
                this.queues.delete(key);
            }
        }
    }

    enqueue(code, queueName, msg) {
        const key = `${code}:${queueName}`;
        const activeWaiters = this.waiters.get(key);
        if (activeWaiters && activeWaiters.length > 0) {
            const waiter = activeWaiters.shift();
            clearTimeout(waiter.timer);
            if (activeWaiters.length === 0) {
                this.waiters.delete(key);
            }
            waiter.resolve([msg]);
            return;
        }

        let q = this.queues.get(key);
        if (!q) {
            q = [];
            this.queues.set(key, q);
        }
        if (q.length >= 50) {
            q.shift();
        }
        q.push(msg);
    }

    dequeue(code, queueName) {
        const key = `${code}:${queueName}`;
        const queue = this.queues.get(key);
        if (!queue || queue.length === 0) return [];
        this.queues.delete(key);
        return queue;
    }

    async getTurnServers() {
        const now = Date.now();
        if (this.cachedTurnServers && now < this.cachedTurnExpiry) {
            return this.cachedTurnServers;
        }

        if (now - this.lastTurnError < 30000) {
            return null;
        }

        if (this.env && this.env.METERED_APP_NAME && this.env.METERED_API_KEY) {
            try {
                const resp = await fetch(
                    `https://${this.env.METERED_APP_NAME}.metered.live/api/v1/turn/credentials?apiKey=${this.env.METERED_API_KEY}`
                );
                if (resp.ok) {
                    const data = await resp.json();
                    const list = Array.isArray(data) ? data : (data.iceServers || []);
                    const normalized = [];
                    for (const s of list) {
                        const urls = Array.isArray(s.urls) ? s.urls : [s.urls || s.url];
                        for (const u of urls) {
                            if (u && typeof u === "string" && (u.startsWith("turn:") || u.startsWith("turns:"))) {
                                normalized.push({
                                    urls: u,
                                    username: s.username || "",
                                    credential: s.credential || "",
                                });
                            }
                        }
                    }
                    if (normalized.length > 0) {
                        this.cachedTurnServers = normalized;
                        this.cachedTurnExpiry = now + 12 * 60 * 60 * 1000;
                        return normalized;
                    }
                }
            } catch {}
        }

        const turnKeyId = this.env?.TURN_KEY_ID;
        const turnApiToken = this.env?.TURN_KEY_API_TOKEN;

        if (turnKeyId && turnApiToken) {
            try {
                const resp = await fetch(
                    `https://rtc.live.cloudflare.com/v1/turn/keys/${turnKeyId}/credentials/generate-ice-servers`,
                    {
                        method: "POST",
                        headers: {
                            "Authorization": `Bearer ${turnApiToken}`,
                            "Content-Type": "application/json",
                        },
                        body: JSON.stringify({ ttl: 86400 }),
                    }
                );

                if (resp.ok) {
                    const data = await resp.json();
                    const iceServers = data.iceServers;
                    if (iceServers) {
                        const normalized = [];
                        const serverList = Array.isArray(iceServers) ? iceServers : [iceServers];

                        for (const s of serverList) {
                            const urls = Array.isArray(s.urls) ? s.urls : [s.urls || s.url];
                            for (const u of urls) {
                                if (u && typeof u === "string" && (u.startsWith("turn:") || u.startsWith("turns:"))) {
                                    normalized.push({
                                        urls: u,
                                        username: s.username || "",
                                        credential: s.credential || "",
                                    });
                                }
                            }
                        }

                        if (normalized.length > 0) {
                            this.cachedTurnServers = normalized;
                            this.cachedTurnExpiry = now + 12 * 60 * 60 * 1000;
                            return normalized;
                        }
                    }
                }
            } catch {}
        }

        this.lastTurnError = now;
        return null;
    }

    async fetch(req) {
        if (req.method === "OPTIONS") return json({ ok: true });

        const url = new URL(req.url);
        const parts = url.pathname.split("/").filter(Boolean);

        if (parts.length === 0 && req.method === "GET") {
            if (req.headers.get("accept")?.includes("application/json")) {
                return json({ status: "ok", service: "multiplayer-edit-signaling" });
            }
            return new Response(LANDING_HTML, {
                headers: {
                    "Content-Type": "text/html; charset=utf-8",
                    "Cache-Control": "no-cache",
                },
            });
        }

        if (parts[0] === "health" && req.method === "GET") {
            return json({ status: "ok" });
        }

        if (parts[0] !== "rooms") return json({ error: "not found" }, 404);

        this.cleanupStale();

        if (parts.length === 1 && req.method === "GET") {
            const now = Date.now();
            const list = [];

            for (const [code, room] of this.rooms.entries()) {
                if (!room.isPrivate && room.version && room.version !== "Unknown"
                    && room.lastPing && now - room.lastPing <= STALE_PING_TTL) {
                    list.push({
                        roomCode: code,
                        hostName: room.hostName,
                        roomName: room.roomName || "Room",
                        description: room.description || "",
                        playerCount: room.players.length,
                        playerLimit: room.playerLimit || 0,
                        isPrivate: !!room.isPrivate,
                        hasPassword: !!room.hasPassword,
                        version: room.version || "Unknown",
                        created: room.created || 0,
                    });
                }
            }

            list.sort((a, b) => b.created - a.created);
            return json(list);
        }

        if (parts.length === 1 && req.method === "POST") {
            const body = await req.json().catch(() => ({}));
            const { hostName, playerName, roomName, description, playerLimit, isPrivate, hasPassword, password, version, iconStr, colorIndex } = body;
            const code = this.genCode();
            const roomId = crypto.randomUUID();
            const host = hostName || playerName || "Unknown";

            const roomObj = {
                roomId,
                hostName: host,
                iconStr: iconStr || "",
                colorIndex: typeof colorIndex === "number" ? colorIndex : 0,
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
                banned: [],
            };

            this.rooms.set(code, roomObj);
            this.saveRooms(true);

            const turnServers = await this.getTurnServers();
            const resData = { roomCode: code, roomId };
            if (turnServers) resData.turnServers = turnServers;
            return json(resData);
        }

        const code = parts[1]?.toUpperCase();
        const action = parts[2];

        if (parts.length === 2 && req.method === "GET") {
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);
            return json({
                roomCode: code,
                hostName: room.hostName,
                playerCount: room.players.length,
                roomId: room.roomId,
            });
        }

        if (parts.length === 2 && req.method === "DELETE") {
            this.deleteRoom(code);
            this.saveRooms(true);
            return json({ ok: true });
        }

        if (action === "join" && req.method === "POST") {
            const { playerName, password, iconStr, colorIndex } = await req.json().catch(() => ({}));
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            const now = Date.now();
            if (room.lastPing && now - room.lastPing > 45000) {
                this.deleteRoom(code);
                this.saveRooms(true);
                return json({ error: "room is no longer active" }, 410);
            }

            if (room.hasPassword && room.password !== password) {
                return json({ error: "invalid password" }, 403);
            }

            if (room.banned && room.banned.includes(playerName)) {
                return json({ error: "you are banned" }, 403);
            }

            if (room.playerLimit > 0 && room.players.length >= room.playerLimit) {
                return json({ error: "room full" }, 400);
            }

            const playerId = room.nextId++;
            room.players.push({ id: playerId, name: playerName });

            const joinMsg = {
                type: "client_joined",
                playerId,
                playerName,
                iconStr: iconStr || "",
                colorIndex: typeof colorIndex === "number" ? colorIndex : 0
            };
            this.enqueue(code, "hostQueue", joinMsg);
            this.saveRooms();

            const turnServers = await this.getTurnServers();
            const resData = {
                playerId,
                hostName: room.hostName,
                hostIconStr: room.iconStr || "",
                hostColorIndex: typeof room.colorIndex === "number" ? room.colorIndex : 0
            };
            if (turnServers) resData.turnServers = turnServers;
            return json(resData);
        }

        if (action === "ban" && req.method === "POST") {
            const { playerName } = await req.json().catch(() => ({}));
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            if (!room.banned) room.banned = [];
            if (!room.banned.includes(playerName)) {
                room.banned.push(playerName);
                this.saveRooms();
            }
            return json({ ok: true });
        }

        if (action === "leave" && req.method === "POST") {
            const { playerId } = await req.json().catch(() => ({}));
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            room.players = room.players.filter(p => p.id !== playerId);
            this.saveRooms();
            return json({ ok: true });
        }

        if (action === "signal" && req.method === "GET") {
            const role = url.searchParams.get("role");
            const playerId = Number(url.searchParams.get("playerId") || "0");
            const queueName = role === "host" ? "hostQueue" : `clientQueue_${playerId}`;

            const room = this.rooms.get(code);
            if (role === "host" && room) {
                room.lastPing = Date.now();
            }

            const initialMsgs = this.dequeue(code, queueName);
            if (initialMsgs.length > 0) return json(initialMsgs);

            const timeoutParam = Number(url.searchParams.get("timeout") || "0");
            const requestedTimeout = timeoutParam > 0 ? timeoutParam : 1000;
            const actualTimeout = Math.min(requestedTimeout, 1500);

            return new Promise((resolve) => {
                const key = `${code}:${queueName}`;
                if (!this.waiters.has(key)) {
                    this.waiters.set(key, []);
                }

                const waiter = {
                    resolve: (msgs) => resolve(json(msgs)),
                    timer: null,
                };

                waiter.timer = setTimeout(() => {
                    const activeWaiters = this.waiters.get(key);
                    if (activeWaiters) {
                        const idx = activeWaiters.indexOf(waiter);
                        if (idx !== -1) activeWaiters.splice(idx, 1);
                        if (activeWaiters.length === 0) this.waiters.delete(key);
                    }
                    resolve(json([]));
                }, actualTimeout);

                this.waiters.get(key).push(waiter);
            });
        }

        if (action === "signal" && req.method === "POST") {
            const msg = await req.json().catch(() => ({}));
            let targetQueue = "";

            if (msg.type === "offer" || (msg.type === "candidate" && msg.targetPlayerId !== undefined)) {
                targetQueue = `clientQueue_${msg.targetPlayerId}`;
            } else if (msg.type === "answer" || (msg.type === "candidate" && msg.playerId !== undefined)) {
                targetQueue = "hostQueue";
            }

            if (targetQueue) {
                this.enqueue(code, targetQueue, msg);
            }

            return json({ ok: true });
        }

        return json({ error: "not found" }, 404);
    }
}

const LANDING_HTML = `<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Multiplayer Edit Signaling Server</title>
    <style>
        body {
            font-family: monospace;
            background: #000;
            color: #ccc;
            padding: 20px;
            margin: 0;
            line-height: 1.6;
        }
        a { color: #66b3ff; }
        a:hover { text-decoration: none; }
        .val { color: #fff; }
    </style>
</head>
<body>
    <strong>Multiplayer Edit Signaling Server</strong><br><br>

    URL: <span class="val">https://multiplayer-edit.d050.workers.dev</span><br>
    Status: <span class="val" id="status">testing...</span><br>
    Latency: <span class="val" id="latency">-</span><br>
    Public Rooms: <span class="val" id="rooms">-</span><br><br>

    <a href="https://github.com/xXoanon/MultiplayerEdit">github</a> | 
    <a href="https://discord.gg/mdsuxYu2YP">discord</a>

    <script>
        function updatePing() {
            const start = performance.now();
            fetch("/health")
                .then(res => {
                    if (!res.ok) throw new Error();
                    const ping = Math.round(performance.now() - start);
                    document.getElementById("status").textContent = "ok";
                    document.getElementById("latency").textContent = ping + "ms";
                })
                .catch(() => {
                    document.getElementById("status").textContent = "unreachable";
                    document.getElementById("latency").textContent = "err";
                });
        }

        function updateRooms() {
            fetch("/rooms")
                .then(res => res.json())
                .then(data => {
                    if (Array.isArray(data)) {
                        document.getElementById("rooms").textContent = data.length;
                    }
                })
                .catch(() => {});
        }

        updatePing();
        updateRooms();
        setInterval(() => {
            if (!document.hidden) {
                updatePing();
                updateRooms();
            }
        }, 15000);
    </script>
</body>
</html>`;

export default {
    async fetch(request, env) {
        if (request.method === "OPTIONS") {
            return json({ ok: true });
        }

        const url = new URL(request.url);
        const parts = url.pathname.split("/").filter(Boolean);

        if (parts.length === 0 && request.method === "GET") {
            if (request.headers.get("accept")?.includes("application/json")) {
                return json({ status: "ok", service: "multiplayer-edit-signaling" });
            }
            return new Response(LANDING_HTML, {
                headers: {
                    "Content-Type": "text/html; charset=utf-8",
                    "Cache-Control": "no-cache",
                },
            });
        }

        if (parts[0] === "health" && request.method === "GET") {
            return json({ status: "ok" });
        }

        const id = env.SIGNALING_HUB.idFromName("global_signaling_hub");
        const stub = env.SIGNALING_HUB.get(id);
        return stub.fetch(request);
    },
};
