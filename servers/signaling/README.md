# Multiplayer Edit Signaling Server

This is the Cloudflare Workers signaling server that handles matchmaking and WebRTC SDP exchange for the Multiplayer Edit mod.

Because the mod uses WebRTC Data Channels, players connect directly to each other peer to peer. This server is **only** used for the initial handshake to exchange connection metadata (SDP offers, answers, and ICE candidates). Once a player joins a room, all game data flows directly between players.

## Setup and Hosting (Cloudflare Workers)

1. Go to your [Cloudflare Dashboard](https://dash.cloudflare.com/) and navigate to **Compute (Workers & Pages)**.
2. Create or select your Worker.
3. Click **Edit code** on the top right.
4. Paste the contents of `worker.js` into `index.js`.
5. Under **Bindings**, ensure a Durable Object binding is set:
   - **Variable name:** `SIGNALING_HUB`
   - **Class name:** `SignalingHub`
6. Click **Deploy**.

## Using Your Custom Server

In Geometry Dash, go to the Multiplayer Edit mod settings and change the **Signaling Server URL** to your Worker's URL (e.g. `https://multiplayer-edit.d050.workers.dev`). Make sure it uses `https://`.

## How It Works

1. **Host** creates a room -> POSTs to `/rooms` and receives a 6-character room code.
2. **Guests** join using the room code -> POSTs to `/rooms/:code/join` and gets the Host's metadata.
3. **Host** generates a WebRTC Offer for each guest and POSTs it to the signaling server.
4. **Guest** polls for the Offer, generates an Answer, and POSTs it back.
5. **Host** polls for the Answer.
6. Direct P2P connection is established! The signaling server is no longer used for this session.

## API Endpoints

| Method | Endpoint | Description |
|--------|----------|-------------|
| POST | `/rooms` | Create room. Body: `{hostName, roomName, description, playerLimit, isPrivate, hasPassword, password, version}` |
| GET | `/rooms` | Get list of public active rooms |
| GET | `/rooms/:code` | Get room info |
| POST | `/rooms/:code/join` | Join room. Body: `{playerName, password}` |
| POST | `/rooms/:code/leave` | Leave room. Body: `{playerId}` |
| POST | `/rooms/:code/signal` | Send WebRTC message (Offer, Answer, or ICE). Body: `{type, ...msg}` |
| GET | `/rooms/:code/signal?role=<host\|client>&playerId=N` | Poll for pending WebRTC messages |
| POST | `/rooms/:code/ban` | Ban a player from a room. Body: `{playerName}` |
| DELETE | `/rooms/:code` | Close room (Host only) |
| GET | `/health` | Health check |
