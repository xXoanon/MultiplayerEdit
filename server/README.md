# Multiplayer Edit — Relay Server

This is the WebSocket relay server that facilitates real-time communication between Multiplayer Edit mod clients.

## Requirements

- Node.js 18+ 

## Setup

```bash
cd server
npm install
```

## Running

```bash
npm start
```

The server will start on port **8765** by default. You can change this with the `PORT` environment variable:

```bash
PORT=3000 npm start
```

## How It Works

1. **Host** creates a room → gets a 6-character room code
2. **Guests** join using the room code
3. All editor actions (place, delete, move objects) are relayed to all other players in the room
4. Cursor positions are broadcast at 10Hz
5. Rooms auto-cleanup after 30 minutes of inactivity

## Protocol

The server uses JSON messages over WebSocket. See the implementation plan for the full protocol specification.
