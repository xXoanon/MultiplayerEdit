const http = require("http");
const WebSocket = require("ws");
const proto = require("./protocol");
class WSServer {
  constructor(roomManager) {
    this.roomManager = roomManager;
    this.server = http.createServer((req, res) => this._handleHttp(req, res));
    this.server.keepAliveTimeout = 0;
    this.server.headersTimeout = 0;
    this.wss = new WebSocket.Server({
      noServer: true,
      maxPayload: 16 * 1024 * 1024,
    });
    this.server.on("upgrade", (request, socket, head) => {
      const url = new URL(request.url, `http://${request.headers.host}`);
      const pathParts = url.pathname.split("/").filter(Boolean);
      let roomCode = null;
      if (pathParts.length > 0) {
        roomCode = pathParts[0].toUpperCase();
      } else if (this.roomManager.rooms.size === 1) {
        roomCode = Array.from(this.roomManager.rooms.keys())[0];
      } else {
        this.wss.handleUpgrade(request, socket, head, (ws) => {
          ws.send(
            proto.serializeError(
              "Please specify the room code in the URL (e.g., https://host:port/CODE).",
            ),
          );
          ws.close(1008, "Room code not specified");
        });
        return;
      }
      const room = this.roomManager.getRoom(roomCode);
      if (!room) {
        this.wss.handleUpgrade(request, socket, head, (ws) => {
          ws.send(proto.serializeError(`Room not found: ${roomCode}`));
          ws.close(1008, "Room not found");
        });
        return;
      }
      this.wss.handleUpgrade(request, socket, head, (ws) => {
        this.wss.emit("connection", ws, request, room);
      });
    });
    this.wss.on("connection", (ws, request, room) => {
      const url = new URL(request.url, `http://${request.headers.host}`);
      ws._providedPassword = url.searchParams.get("password") || "";
      this._handleConnection(ws, request, room);
    });
  }
  start(port) {
    return new Promise((resolve) => {
      this.server.listen(port, "0.0.0.0", () => {
        resolve();
      });
    });
  }
  stop() {
    this.server.close();
    for (const client of this.wss.clients) {
      client.close();
    }
  }
  _handleHttp(req, res) {
    res.setHeader("Access-Control-Allow-Origin", "*");
    res.setHeader("Access-Control-Allow-Methods", "GET, POST, OPTIONS");
    res.setHeader(
      "Access-Control-Allow-Headers",
      "Content-Type, Authorization",
    );

    if (req.method === "OPTIONS") {
      res.writeHead(204);
      res.end();
      return;
    }

    if (req.method === "GET" && req.url === "/rooms") {
      res.writeHead(200, { "Content-Type": "application/json" });
      res.end(JSON.stringify(this.roomManager.getRoomList()));
      return;
    }

    // Helper to check auth
    const checkAuth = () => {
      const authHeader = req.headers["authorization"];
      if (!authHeader || !authHeader.startsWith("Bearer ")) return null;
      const token = authHeader.substring(7);
      if (!this.roomManager.isValidToken(token)) return null;
      return token;
    };

    
    const parsedUrl = new URL(req.url, 'http://localhost');
    
    if (req.method === "GET" && parsedUrl.pathname === "/api/backups") {
      const code = parsedUrl.searchParams.get("code");
      const token = parsedUrl.searchParams.get("token");
      
      const room = this.roomManager.getRoom(code);
      if (!room || room.ownerToken !== token) {
        res.writeHead(401, { "Content-Type": "text/html" });
        res.end("<h1>Unauthorized</h1><p>Invalid room code or token.</p>");
        return;
      }
      
      const fsModule = require('fs');
      const path = require('path');
      const levelsDir = path.join(__dirname, '..', 'levels');
      
      let html = `
        <!DOCTYPE html>
        <html>
        <head>
          <title>Room Backups - ${room.levelName}</title>
          <style>
            body { font-family: sans-serif; background: #1a1a1a; color: #fff; padding: 2rem; max-width: 800px; margin: 0 auto; }
            h1 { border-bottom: 2px solid #333; padding-bottom: 0.5rem; }
            .file-card { background: #2a2a2a; padding: 1rem; margin: 1rem 0; border-radius: 8px; display: flex; justify-content: space-between; align-items: center; }
            .btn { background: #4CAF50; color: white; padding: 0.5rem 1rem; text-decoration: none; border-radius: 4px; font-weight: bold; }
            .btn:hover { background: #45a049; }
          </style>
        </head>
        <body>
          <h1>Files for "${room.levelName}" (Code: ${code})</h1>
      `;

      try {
        const prefix = `${room.code}_`;
        const legacyPrefix = room.levelName.replace(/[^a-zA-Z0-9]/g, '_');
        const matchFiles = files.filter(f => (f.startsWith(prefix) || f.startsWith(legacyPrefix)) && f.endsWith('.gmd'));
        
        if (matchFiles.length === 0) {
          html += `<p>No backup files found yet. Save the level in-game to create a backup!</p>`;
        } else {
          for (const f of matchFiles) {
            const stat = fsModule.statSync(path.join(levelsDir, f));
            const sizeKB = (stat.size / 1024).toFixed(1);
            const date = stat.mtime.toLocaleString();
            
            const dlLink = `/api/download?code=${encodeURIComponent(code)}&token=${encodeURIComponent(token)}&file=${encodeURIComponent(f)}`;
            
            html += `
              <div class="file-card">
                <div>
                  <strong>${f}</strong><br>
                  <small style="color: #aaa;">${sizeKB} KB • ${date}</small>
                </div>
                <a href="${dlLink}" class="btn">Download</a>
              </div>
            `;
          }
        }
      } catch (e) {
        html += `<p style="color: #ff5555;">Error reading levels directory.</p>`;
      }
      
      html += `</body></html>`;
      
      res.writeHead(200, { "Content-Type": "text/html" });
      res.end(html);
      return;
    }
    
    if (req.method === "GET" && parsedUrl.pathname === "/api/download") {
      const code = parsedUrl.searchParams.get("code");
      const token = parsedUrl.searchParams.get("token");
      const filename = parsedUrl.searchParams.get("file");
      
      const room = this.roomManager.getRoom(code);
      if (!room || room.ownerToken !== token) {
        res.writeHead(401, { "Content-Type": "text/plain" });
        res.end("Unauthorized");
        return;
      }
      
      if (!filename || filename.includes('..') || filename.includes('/') || filename.includes('\\') || !filename.endsWith('.gmd')) {
        res.writeHead(400, { "Content-Type": "text/plain" });
        res.end("Invalid filename");
        return;
      }
      
      const fsModule = require('fs');
      const path = require('path');
      const filepath = path.join(__dirname, '..', 'levels', filename);
      
      if (!fsModule.existsSync(filepath)) {
        res.writeHead(404, { "Content-Type": "text/plain" });
        res.end("File not found");
        return;
      }
      
      res.writeHead(200, {
        "Content-Type": "application/octet-stream",
        "Content-Disposition": `attachment; filename="${filename}"`
      });
      fsModule.createReadStream(filepath).pipe(res);
      return;
    }

    if (req.method === "GET" && req.url.startsWith("/api/my-rooms")) {
      const token = checkAuth();
      if (!token) {
        res.writeHead(401);
        res.end(JSON.stringify({ error: "Unauthorized" }));
        return;
      }
      const myRooms = [];
      for (const [code, room] of this.roomManager.rooms) {
        if (room.ownerToken === token) {
          myRooms.push({
            code: room.code,
            name: room.levelName,
            players: room.players.size,
            maxPlayers: room.maxPlayers,
            password: room.password,
          });
        }
      }
      res.writeHead(200, { "Content-Type": "application/json" });
      res.end(JSON.stringify({ rooms: myRooms }));
      return;
    }

    if (req.method === "POST" && req.url === "/api/manage") {
      const token = checkAuth();
      if (!token) {
        res.writeHead(401);
        res.end(JSON.stringify({ error: "Unauthorized" }));
        return;
      }
      let body = "";
      req.on("data", (chunk) => (body += chunk.toString()));
      req.on("end", () => {
        try {
          const data = JSON.parse(body);
          const room = this.roomManager.getRoom(data.code);
          if (!room || room.ownerToken !== token) {
            res.writeHead(404);
            res.end(
              JSON.stringify({ error: "Room not found or not owned by you" }),
            );
            return;
          }

          if (data.action === "close") {
            this.roomManager.deleteRoom(data.code);
          } else if (data.action === "setPassword") {
            room.password = data.password || "";
            this.roomManager.saveManifest();
          } else if (data.action === "setMaxPlayers") {
            room.maxPlayers = data.maxPlayers || 100;
            this.roomManager.saveManifest();
          } else if (data.action === "rename") {
            room.levelName = data.name || room.levelName;
            this.roomManager.saveManifest();
          }

          res.writeHead(200, { "Content-Type": "application/json" });
          res.end(JSON.stringify({ success: true }));
        } catch (e) {
          res.writeHead(400);
          res.end(JSON.stringify({ error: "Bad Request" }));
        }
      });
      return;
    }

    if (req.method === "POST" && req.url === "/api/host") {
      const token = checkAuth();
      if (!token) {
        res.writeHead(401);
        res.end(JSON.stringify({ error: "Unauthorized" }));
        return;
      }

      let body = "";
      req.on("data", (chunk) => (body += chunk.toString()));
      req.on("end", () => {
        try {
          const data = JSON.parse(body);
          if (!data.levelName || typeof data.levelName !== "string") {
            res.writeHead(400);
            res.end(
              JSON.stringify({ error: "Missing levelName" }),
            );
            return;
          }
          if (data.levelString !== undefined && typeof data.levelString !== "string") {
            res.writeHead(400);
            res.end(
              JSON.stringify({ error: "Invalid levelString" }),
            );
            return;
          }
          const level = {
            name: data.levelName,
            levelString: data.levelString || "",
            songID: data.songID || 0,
            audioTrack: data.audioTrack || 0,
          };
          const room = this.roomManager.createRoomForLevel(
            level,
            data.maxPlayers !== undefined ? data.maxPlayers : 100,
            data.password || "",
            data.defaultViewOnly || false,
          );
          room.ownerToken = token;
          this.roomManager.saveManifest();

          res.writeHead(200, { "Content-Type": "application/json" });
          res.end(JSON.stringify({ success: true, code: room.code }));
        } catch (e) {
          console.error("Error in /api/host:", e);
          res.writeHead(400);
          res.end(JSON.stringify({ error: "Invalid JSON or level data" }));
        }
      });
      return;
    }

    res.writeHead(404);
    res.end("Not Found");
  }
  _handleConnection(ws, request, room) {
    ws.binaryType = "nodebuffer";
    let playerId = -1;
    ws.on("message", (message) => {
      if (playerId === -1) {
        if (message.length > 0 && message[0] === proto.Opcode.PlayerJoined) {
          const r = new proto.Reader(message.slice(1));
          const msg = proto.deserializePlayerJoined(r);
          if (!r.error) {
            playerId = room.addPlayer(
              msg.name,
              msg.colorIndex,
              ws,
              msg.iconStr,
            );
            if (playerId === null) {
              ws.close();
            }
          } else {
            ws.close(1008, "Invalid handshake");
          }
        } else {
          ws.close(1008, "Expected handshake");
        }
        return;
      }
      room.handleMessage(playerId, message);
    });
    ws.on("close", (code, reason) => {
      if (playerId === -1) {
        console.log(
          `  \x1b[33m[DISCONNECT]\x1b[0m Unauthenticated socket closed (Code: ${code})`,
        );
      }
      if (playerId !== -1) {
        room.removePlayer(playerId);
      }
    });
    ws.on("error", (err) => {
      console.error(
        `  \x1b[31m[ERROR]\x1b[0m Connection error for player ${playerId}:`,
        err.message,
      );
    });
  }
}
module.exports = { WSServer };
