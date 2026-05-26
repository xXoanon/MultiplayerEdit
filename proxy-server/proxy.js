// WebSocket Proxy Server
// Accepts plain ws:// connections and forwards to wss:// backend
const express = require('express');
const http = require('http');
const WebSocket = require('ws');

const PORT = process.env.PORT || 8080;
const TARGET = process.env.TARGET || 'wss://multiplayeredit.onrender.com';

const app = express();
const server = http.createServer(app);
const wss = new WebSocket.Server({ server });

// Health check endpoint
app.get('/', (req, res) => {
    res.json({
        name: 'MultiplayerEdit WebSocket Proxy',
        status: 'running',
        target: TARGET,
        connections: wss.clients.size
    });
});

wss.on('connection', (clientWs, req) => {
    console.log(`[${new Date().toISOString()}] Client connected from ${req.socket.remoteAddress}`);
    
    // Connect to target WSS server
    const targetWs = new WebSocket(TARGET);
    let isConnected = false;
    
    targetWs.on('open', () => {
        console.log(`[${new Date().toISOString()}] Connected to target: ${TARGET}`);
        isConnected = true;
    });
    
    targetWs.on('message', (data) => {
        if (clientWs.readyState === WebSocket.OPEN) {
            clientWs.send(data);
        }
    });

    targetWs.on('ping', (data) => {
        if (clientWs.readyState === WebSocket.OPEN) {
            clientWs.ping(data);
        }
    });

    targetWs.on('pong', (data) => {
        if (clientWs.readyState === WebSocket.OPEN) {
            clientWs.pong(data);
        }
    });
    
    targetWs.on('close', (code, reason) => {
        console.log(`[${new Date().toISOString()}] Target closed: ${code} ${reason}`);
        if (clientWs.readyState === WebSocket.OPEN) {
            clientWs.close(code, reason);
        }
    });
    
    targetWs.on('error', (err) => {
        console.error(`[${new Date().toISOString()}] Target error:`, err.message);
        if (clientWs.readyState === WebSocket.OPEN) {
            clientWs.close(1011, 'Target connection error');
        }
    });
    
    clientWs.on('message', (data) => {
        if (targetWs.readyState === WebSocket.OPEN) {
            targetWs.send(data);
        } else if (!isConnected) {
            // Queue message until connected
            targetWs.once('open', () => {
                if (targetWs.readyState === WebSocket.OPEN) {
                    targetWs.send(data);
                }
            });
        }
    });

    clientWs.on('ping', (data) => {
        if (targetWs.readyState === WebSocket.OPEN) {
            targetWs.ping(data);
        }
    });

    clientWs.on('pong', (data) => {
        if (targetWs.readyState === WebSocket.OPEN) {
            targetWs.pong(data);
        }
    });
    
    clientWs.on('close', (code, reason) => {
        console.log(`[${new Date().toISOString()}] Client closed: ${code} ${reason}`);
        if (targetWs.readyState === WebSocket.OPEN) {
            targetWs.close(code, reason);
        }
    });
    
    clientWs.on('error', (err) => {
        console.error(`[${new Date().toISOString()}] Client error:`, err.message);
        if (targetWs.readyState === WebSocket.OPEN) {
            targetWs.close();
        }
    });
});

server.listen(PORT, '0.0.0.0', () => {
    console.log(`========================================`);
    console.log(`  MultiplayerEdit WebSocket Proxy`);
    console.log(`  Listening on port ${PORT}`);
    console.log(`  ws://0.0.0.0:${PORT} -> ${TARGET}`);
    console.log(`========================================`);
});
