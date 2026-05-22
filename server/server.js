const express = require('express');
const http = require('http');
const WebSocket = require('ws');
const crypto = require('crypto');

const app = express();
const server = http.createServer(app);

// WebSocket server configuration
// Render.com handles TLS termination, so we only need plain WebSocket server
const wss = new WebSocket.Server({ 
    server,
    // Handle both ws:// and wss:// (Render terminates TLS for us)
    perMessageDeflate: false
});

const PORT = process.env.PORT || 8765;
const HOST = process.env.HOST || '0.0.0.0';

// ============================================================
// Room Management
// ============================================================

class Room {
    constructor(hostWs, hostName) {
        this.code = Room.generateCode();
        this.players = new Map();
        this.nextPlayerId = 1;
        this.hostId = this.addPlayer(hostWs, hostName);
        this.createdAt = Date.now();
    }

    static generateCode() {
        // Generate a 6-character alphanumeric code
        return crypto.randomBytes(3).toString('hex').toUpperCase();
    }

    addPlayer(ws, name) {
        const id = this.nextPlayerId++;
        const colorIndex = this.players.size;
        
        this.players.set(id, {
            ws,
            name,
            id,
            colorIndex,
            cursorX: 0,
            cursorY: 0
        });

        if (ws) {
            ws._playerId = id;
            ws._roomCode = this.code;
        }

        return id;
    }

    removePlayer(playerId) {
        this.players.delete(playerId);
    }

    getPlayerList() {
        const list = [];
        for (const [id, player] of this.players) {
            list.push({
                id: player.id,
                name: player.name,
                colorIndex: player.colorIndex,
                status: player.status || ""
            });
        }
        return list;
    }

    broadcast(message, excludePlayerId = null) {
        const raw = JSON.stringify(message);
        for (const [id, player] of this.players) {
            if (id !== excludePlayerId && player.ws.readyState === WebSocket.OPEN) {
                player.ws.send(raw);
            }
        }
    }

    sendTo(playerId, message) {
        const player = this.players.get(playerId);
        if (player && player.ws.readyState === WebSocket.OPEN) {
            player.ws.send(JSON.stringify(message));
        }
    }

    get isEmpty() {
        return this.players.size === 0;
    }

    get playerCount() {
        return this.players.size;
    }
}

// Active rooms: code → Room
const rooms = new Map();

// ============================================================
// HTTP Endpoints (for polling fallback)
// ============================================================

app.use(express.json({ limit: '10mb' }));

// Health check
app.get('/', (req, res) => {
    res.json({
        name: 'Multiplayer Edit Server',
        version: '0.1.0',
        rooms: rooms.size,
        connections: wss.clients.size
    });
});

// Polling endpoints for clients that can't use WebSocket directly
const pollQueues = new Map(); // clientId → message[]

app.post('/send', (req, res) => {
    // Process message from HTTP client
    const message = req.body;
    const clientId = req.headers['x-client-id'] || 'unknown';
    
    handleMessage(null, message, clientId);
    
    // Return any pending messages for this client
    const queue = pollQueues.get(clientId) || [];
    pollQueues.set(clientId, []);
    res.json(queue);
});

app.get('/poll', (req, res) => {
    const clientId = req.headers['x-client-id'] || 'unknown';
    const queue = pollQueues.get(clientId) || [];
    pollQueues.set(clientId, []);
    res.json(queue);
});

// ============================================================
// WebSocket Handler
// ============================================================

wss.on('connection', (ws) => {
    console.log(`[WS] New connection`);

    ws.on('message', (raw) => {
        try {
            const message = JSON.parse(raw.toString());
            handleMessage(ws, message);
        } catch (e) {
            console.error(`[WS] Failed to parse message:`, e.message);
            ws.send(JSON.stringify({ event: 'error', message: 'Invalid JSON' }));
        }
    });

    ws.on('close', () => {
        console.log(`[WS] Connection closed (player=${ws._playerId})`);
        handleDisconnect(ws);
    });

    ws.on('error', (err) => {
        console.error(`[WS] Error:`, err.message);
    });
});

// ============================================================
// Message Handler
// ============================================================

function handleMessage(ws, message, httpClientId = null) {
    const action = message.action;

    switch (action) {
        case 'host':
            handleHost(ws, message, httpClientId);
            break;

        case 'join':
            handleJoin(ws, message, httpClientId);
            break;

        case 'leave':
            handleLeave(ws);
            break;

        case 'place_objects':
        case 'delete_objects':
        case 'move_objects':
        case 'transform_objects':
        case 'update_objects':
        case 'lock_objects':
        case 'sync_level':
        case 'update_settings':
            handleEditorAction(ws, message);
            break;

        case 'cursor_update':
            handleCursorUpdate(ws, message);
            break;

        default:
            sendError(ws, `Unknown action: ${action}`);
    }
}

function handleHost(ws, message, httpClientId) {
    const playerName = message.playerName || 'Host';
    const room = new Room(ws, playerName);
    rooms.set(room.code, room);

    const response = {
        event: 'room_created',
        roomCode: room.code,
        playerId: room.hostId
    };

    if (ws) {
        ws.send(JSON.stringify(response));
    } else if (httpClientId) {
        const queue = pollQueues.get(httpClientId) || [];
        queue.push(response);
        pollQueues.set(httpClientId, queue);
    }

    console.log(`[Room] Created room ${room.code} by ${playerName}`);
}

function handleJoin(ws, message, httpClientId) {
    const roomCode = message.roomCode?.toUpperCase();
    const playerName = message.playerName || 'Player';

    if (!roomCode) {
        sendError(ws, 'Room code is required');
        return;
    }

    const room = rooms.get(roomCode);
    if (!room) {
        sendError(ws, `Room '${roomCode}' not found`);
        return;
    }

    if (room.playerCount >= 8) {
        sendError(ws, 'Room is full (max 8 players)');
        return;
    }

    const playerId = room.addPlayer(ws, playerName);

    // Send join confirmation to the new player
    const joinResponse = {
        event: 'room_joined',
        roomCode: room.code,
        playerId: playerId,
        players: room.getPlayerList()
    };

    if (ws) {
        ws.send(JSON.stringify(joinResponse));
    }

    // Notify existing players
    room.broadcast({
        event: 'player_joined',
        playerId: playerId,
        playerName: playerName,
        colorIndex: room.players.get(playerId)?.colorIndex || 0
    }, playerId);

    console.log(`[Room] ${playerName} joined room ${roomCode} (${room.playerCount} players)`);
}

function handleLeave(ws) {
    if (!ws || !ws._roomCode) return;

    const room = rooms.get(ws._roomCode);
    if (!room) return;

    const playerId = ws._playerId;

    if (playerId === room.hostId) {
        room.broadcast({
            event: 'error',
            message: 'The host has left the session.'
        }, playerId);
        rooms.delete(ws._roomCode);
        console.log(`[Room] Host left, room ${ws._roomCode} deleted`);
        return;
    }

    room.removePlayer(playerId);

    // Notify remaining players
    room.broadcast({
        event: 'player_left',
        playerId: playerId
    });

    // Clean up empty rooms
    if (room.isEmpty) {
        rooms.delete(ws._roomCode);
        console.log(`[Room] Room ${ws._roomCode} deleted (empty)`);
    }

    console.log(`[Room] Player ${playerId} left room ${ws._roomCode}`);
}

function handleEditorAction(ws, message) {
    if (!ws || !ws._roomCode) return;

    const room = rooms.get(ws._roomCode);
    if (!room) return;

    // Map action type to event type
    const actionToEvent = {
        'place_objects': 'objects_placed',
        'delete_objects': 'objects_deleted',
        'move_objects': 'objects_moved',
        'transform_objects': 'objects_transformed',
        'update_objects': 'update_objects',
        'lock_objects': 'lock_objects',
        'sync_level': 'sync_level',
        'update_settings': 'update_settings'
    };

    const eventType = actionToEvent[message.action];
    if (!eventType) return;

    // Broadcast to all other players with the sender's ID
    const broadcastMsg = {
        ...message,
        event: eventType,
        playerId: ws._playerId
    };
    delete broadcastMsg.action;

    if (eventType === 'sync_level' && message.targetPlayerId !== undefined) {
        const targetPlayer = room.players.get(message.targetPlayerId);
        if (targetPlayer && targetPlayer.ws) {
            targetPlayer.ws.send(JSON.stringify(broadcastMsg));
        }
    } else {
        room.broadcast(broadcastMsg, ws._playerId);
    }
}

function handleCursorUpdate(ws, message) {
    if (!ws || !ws._roomCode) return;

    const room = rooms.get(ws._roomCode);
    if (!room) return;

    const player = room.players.get(ws._playerId);
    if (player) {
        player.cursorX = message.x || 0;
        player.cursorY = message.y || 0;
        player.status = message.status || "";
    }

    // Broadcast cursor position to other players
    room.broadcast({
        event: 'cursor_moved',
        playerId: ws._playerId,
        x: message.x || 0,
        y: message.y || 0,
        status: message.status || ""
    }, ws._playerId);
}

function handleDisconnect(ws) {
    handleLeave(ws);
}

function sendError(ws, msg) {
    if (ws && ws.readyState === WebSocket.OPEN) {
        ws.send(JSON.stringify({ event: 'error', message: msg }));
    }
    console.log(`[Error] ${msg}`);
}

// ============================================================
// Room Cleanup (remove stale rooms every 5 minutes)
// ============================================================

setInterval(() => {
    const now = Date.now();
    const staleTimeout = 30 * 60 * 1000; // 30 minutes

    for (const [code, room] of rooms) {
        if (room.isEmpty || (now - room.createdAt > staleTimeout && room.playerCount === 0)) {
            rooms.delete(code);
            console.log(`[Cleanup] Removed stale room ${code}`);
        }
    }
}, 5 * 60 * 1000);

// ============================================================
// Start Server
// ============================================================

server.listen(PORT, HOST, () => {
    console.log(`========================================`);
    console.log(`  Multiplayer Edit Server v0.1.0`);
    console.log(`  Listening on ${HOST}:${PORT}`);
    console.log(`  WebSocket: ws://${HOST}:${PORT}`);
    console.log(`  HTTP:      http://${HOST}:${PORT}`);
    console.log(`========================================`);
});
