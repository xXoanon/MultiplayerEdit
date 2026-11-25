import { DurableObject } from "cloudflare:workers";

const CHARS = "ABCDEFGHJKMNPQRSTUVWXYZ23456789";
const ROOM_TTL = 2 * 60 * 60 * 1000;
const MAX_ROOM_LIFETIME = 7 * 24 * 60 * 60 * 1000;
const STALE_PING_TTL = 5 * 60 * 1000;
const MAX_QUEUE = 100;
const TURN_FETCH_TIMEOUT_MS = 5000;
const TURN_CACHE_MS = 6 * 60 * 60 * 1000;
const TURN_ERROR_COOLDOWN_MS = 5000;

const HEADERS = {
    "Content-Type": "application/json",
    "Access-Control-Allow-Origin": "*",
    "Access-Control-Allow-Methods": "GET,POST,DELETE,OPTIONS",
    "Access-Control-Allow-Headers": "Content-Type, ngrok-skip-browser-warning, Bypass-Tunnel-Reminder, X-Room-Token, X-Player-Token",
};

function json(data, status = 200) {
    return new Response(JSON.stringify(data), {
        status,
        headers: HEADERS,
    });
}

function randomToken() {
    return crypto.randomUUID().replace(/-/g, "");
}

async function hashPassword(password) {
    const data = new TextEncoder().encode(password || "");
    const digest = await crypto.subtle.digest("SHA-256", data);
    return Array.from(new Uint8Array(digest))
        .map((b) => b.toString(16).padStart(2, "0"))
        .join("");
}

async function passwordMatches(room, password) {
    if (!room.hasPassword) return true;
    if (room.passwordHash) {
        return (await hashPassword(password)) === room.passwordHash;
    }
    return (password || "") === (room.password || "");
}

async function fetchWithTimeout(url, options, timeoutMs) {
    const controller = new AbortController();
    const timer = setTimeout(() => controller.abort(), timeoutMs);
    try {
        return await fetch(url, { ...options, signal: controller.signal });
    } finally {
        clearTimeout(timer);
    }
}

function normalizeIceServers(iceServers) {
    const normalized = [];
    if (!iceServers) return normalized;
    const serverList = Array.isArray(iceServers) ? iceServers : [iceServers];
    for (const s of serverList) {
        if (!s) continue;
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
    return normalized;
}

function isHostAuthorized(req, room) {
    if (!room.hostToken) return true;
    return req.headers.get("X-Room-Token") === room.hostToken;
}

function playerIdForToken(req, room) {
    const token = req.headers.get("X-Player-Token");
    if (!token) return -1;
    const tokens = room.playerTokens || {};
    for (const [id, value] of Object.entries(tokens)) {
        if (value === token) return Number(id);
    }
    return -1;
}

function isPlayerAuthorized(req, room, playerId) {
    if (!room.hostToken && (!room.playerTokens || Object.keys(room.playerTokens).length === 0)) {
        return true;
    }
    return playerIdForToken(req, room) === playerId;
}

function isRoomMember(req, room) {
    if (isHostAuthorized(req, room)) return true;
    if (playerIdForToken(req, room) !== -1) return true;
    return !room.hostToken && (!room.playerTokens || Object.keys(room.playerTokens).length === 0);
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
        this.lastPingSave = 0;
        this.cachedTurnServers = null;
        this.cachedTurnExpiry = 0;
        this.lastGoodTurnServers = null;
        this.lastTurnError = 0;
        this.turnFetchPromise = null;

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
            const bytes = new Uint8Array(6);
            crypto.getRandomValues(bytes);
            code = Array.from(bytes, (b) => CHARS[b % CHARS.length]).join("");
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
            const created = room.created || 0;
            const lastActivity = room.lastPing || created;
            const idle = now - lastActivity > ROOM_TTL;
            const tooOld = created > 0 && now - created > MAX_ROOM_LIFETIME;
            if (idle || tooOld) {
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
        if (q.length >= MAX_QUEUE) {
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
        if (this.turnFetchPromise) {
            return this.turnFetchPromise;
        }
        if (now - this.lastTurnError < TURN_ERROR_COOLDOWN_MS) {
            return this.lastGoodTurnServers;
        }

        this.turnFetchPromise = this.fetchTurnServers()
            .catch((err) => {
                console.error("TURN fetch failed:", err);
                return this.lastGoodTurnServers;
            })
            .finally(() => {
                this.turnFetchPromise = null;
            });
        return this.turnFetchPromise;
    }

    async fetchTurnServers() {
        const now = Date.now();
        let normalized = [];

        if (this.env?.METERED_APP_NAME && this.env?.METERED_API_KEY) {
            try {
                const resp = await fetchWithTimeout(
                    `https://${this.env.METERED_APP_NAME}.metered.live/api/v1/turn/credentials?apiKey=${this.env.METERED_API_KEY}`,
                    {},
                    TURN_FETCH_TIMEOUT_MS
                );
                if (resp.ok) {
                    const data = await resp.json();
                    normalized = normalizeIceServers(Array.isArray(data) ? data : data.iceServers);
                }
            } catch (err) {
                console.warn("Metered TURN fetch failed:", err?.message || err);
            }
        }

        if (normalized.length === 0 && this.env?.TURN_KEY_ID && this.env?.TURN_KEY_API_TOKEN) {
            try {
                const resp = await fetchWithTimeout(
                    `https://rtc.live.cloudflare.com/v1/turn/keys/${this.env.TURN_KEY_ID}/credentials/generate-ice-servers`,
                    {
                        method: "POST",
                        headers: {
                            "Authorization": `Bearer ${this.env.TURN_KEY_API_TOKEN}`,
                            "Content-Type": "application/json",
                        },
                        body: JSON.stringify({ ttl: 86400 }),
                    },
                    TURN_FETCH_TIMEOUT_MS
                );
                if (resp.ok) {
                    const data = await resp.json();
                    normalized = normalizeIceServers(data.iceServers);
                }
            } catch (err) {
                console.warn("Cloudflare TURN fetch failed:", err?.message || err);
            }
        }

        if (normalized.length > 0) {
            this.cachedTurnServers = normalized;
            this.cachedTurnExpiry = now + TURN_CACHE_MS;
            this.lastGoodTurnServers = normalized;
            this.lastTurnError = 0;
            return normalized;
        }

        this.lastTurnError = now;
        return this.lastGoodTurnServers;
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
            const { hostName, playerName, roomName, description, playerLimit, isPrivate, version, iconStr, colorIndex } = body;
            const password = body.password || "";
            const hasPassword = !!body.hasPassword || password !== "";
            const code = this.genCode();
            const roomId = crypto.randomUUID();
            const host = hostName || playerName || "Unknown";

            const roomObj = {
                roomId,
                hostToken: randomToken(),
                playerTokens: {},
                hostName: host,
                iconStr: iconStr || "",
                colorIndex: typeof colorIndex === "number" ? colorIndex : 0,
                roomName: roomName || "Room",
                description: description || "",
                playerLimit: playerLimit || 0,
                isPrivate: !!isPrivate,
                hasPassword,
                passwordHash: hasPassword ? await hashPassword(password) : "",
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
            const resData = { roomCode: code, roomId, hostToken: roomObj.hostToken };
            if (turnServers && turnServers.length > 0) resData.turnServers = turnServers;
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
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);
            if (!isHostAuthorized(req, room)) {
                return json({ error: "unauthorized" }, 403);
            }
            this.deleteRoom(code);
            this.saveRooms(true);
            return json({ ok: true });
        }

        if (action === "turn" && parts.length === 3 && req.method === "GET") {
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);
            if (!isRoomMember(req, room)) {
                return json({ error: "unauthorized" }, 403);
            }
            const turnServers = await this.getTurnServers();
            return json({ turnServers: turnServers || [] });
        }

        if (action === "join" && req.method === "POST") {
            const { playerName, password, iconStr, colorIndex } = await req.json().catch(() => ({}));
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            if (!(await passwordMatches(room, password))) {
                return json({ error: "invalid password" }, 403);
            }

            if (room.banned && room.banned.includes(playerName)) {
                return json({ error: "you are banned" }, 403);
            }

            if (room.playerLimit > 0 && room.players.length >= room.playerLimit) {
                return json({ error: "room full" }, 400);
            }

            const playerId = room.nextId++;
            if (!room.playerTokens) room.playerTokens = {};
            const playerToken = randomToken();
            room.playerTokens[playerId] = playerToken;
            room.players.push({ id: playerId, name: playerName });

            const joinMsg = {
                type: "client_joined",
                playerId,
                playerName,
                iconStr: iconStr || "",
                colorIndex: typeof colorIndex === "number" ? colorIndex : 0
            };
            this.enqueue(code, "hostQueue", joinMsg);
            this.saveRooms(true);

            const turnServers = await this.getTurnServers();
            const resData = {
                playerId,
                playerToken,
                hostName: room.hostName,
                hostIconStr: room.iconStr || "",
                hostColorIndex: typeof room.colorIndex === "number" ? room.colorIndex : 0
            };
            if (turnServers && turnServers.length > 0) resData.turnServers = turnServers;
            return json(resData);
        }

        if (action === "ban" && req.method === "POST") {
            const { playerName } = await req.json().catch(() => ({}));
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);
            if (!isHostAuthorized(req, room)) {
                return json({ error: "unauthorized" }, 403);
            }

            if (!room.banned) room.banned = [];
            if (!room.banned.includes(playerName)) {
                room.banned.push(playerName);
            }

            for (const player of room.players) {
                if (player.name === playerName) {
                    delete room.playerTokens?.[player.id];
                }
            }
            room.players = room.players.filter((p) => p.name !== playerName);
            this.saveRooms(true);
            return json({ ok: true });
        }

        if (action === "leave" && req.method === "POST") {
            const { playerId } = await req.json().catch(() => ({}));
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            const targetId = Number(playerId);
            if (!Number.isInteger(targetId) || targetId <= 0) {
                return json({ error: "invalid player id" }, 400);
            }

            const isHost = isHostAuthorized(req, room);
            if (!isHost && !isPlayerAuthorized(req, room, targetId)) {
                return json({ error: "unauthorized" }, 403);
            }

            room.players = room.players.filter((p) => p.id !== targetId);
            delete room.playerTokens?.[targetId];
            this.saveRooms(true);
            return json({ ok: true });
        }

        if (action === "signal" && req.method === "GET") {
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            const role = url.searchParams.get("role");
            const playerId = Number(url.searchParams.get("playerId") || "0");
            if (role !== "host" && role !== "client") {
                return json({ error: "invalid role" }, 400);
            }
            if (role === "host") {
                if (!isHostAuthorized(req, room)) {
                    return json({ error: "unauthorized" }, 403);
                }
                const now = Date.now();
                room.lastPing = now;
                if (now - this.lastPingSave > 60000) {
                    this.lastPingSave = now;
                    this.saveRooms(true);
                }
            } else {
                if (!Number.isInteger(playerId) || playerId <= 0 || !isPlayerAuthorized(req, room, playerId)) {
                    return json({ error: "unauthorized" }, 403);
                }
            }

            const queueName = role === "host" ? "hostQueue" : `clientQueue_${playerId}`;

            const initialMsgs = this.dequeue(code, queueName);
            if (initialMsgs.length > 0) return json(initialMsgs);

            const timeoutParam = Number(url.searchParams.get("timeout") || "0");
            const requestedTimeout = timeoutParam > 0 ? timeoutParam : 1000;
            const actualTimeout = Math.min(requestedTimeout, 25000);

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
            const room = this.rooms.get(code);
            if (!room) return json({ error: "room not found" }, 404);

            const msg = await req.json().catch(() => ({}));
            let targetQueue = "";

            const hostHeader = req.headers.get("X-Room-Token");
            const isHost = room.hostToken
                ? hostHeader === room.hostToken
                : msg.targetPlayerId !== undefined;

            if (isHost) {
                if (msg.type === "client_joined") {
                    return json({ error: "invalid message type" }, 400);
                }
                const targetId = Number(msg.targetPlayerId);
                if (!Number.isInteger(targetId) || targetId <= 0) {
                    return json({ error: "missing targetPlayerId" }, 400);
                }
                if (msg.type !== "offer" && msg.type !== "candidate" && msg.type !== "error") {
                    return json({ error: "invalid message type" }, 400);
                }
                msg.playerId = 0;
                targetQueue = `clientQueue_${targetId}`;
            } else {
                const playerId = Number(msg.playerId);
                if (!Number.isInteger(playerId) || playerId <= 0 || !isPlayerAuthorized(req, room, playerId)) {
                    return json({ error: "unauthorized" }, 403);
                }
                if (msg.type !== "answer" && msg.type !== "candidate") {
                    return json({ error: "invalid message type" }, 400);
                }
                msg.playerId = playerId;
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
