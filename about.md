# Multiplayer Edit

Collaborate with friends in real-time level editing! Host a session and build together.

## Features

- **Host & Join Sessions** — Create a room with a 6-character code and invite friends to join.
- **Live Sync** — Object placement, deletion, movement, rotation, and scaling synchronize instantly across all players.
- **Isolated Undo/Redo** — Action stacks are kept local, ensuring undoing a placement doesn't interfere with other players.
- **Player Cursors & Equipped Badges** — View live player cursors with tool badges showing the specific object they currently have selected.
- **Real-time Playtest Icons** — Watch players playtest in real-time with their actual icon customization.
- **Edit Locking** — Smart selection locks prevent multiple players from editing the same objects simultaneously, preventing conflict issues or crashes.
- **In-Editor HUD** — Displays connection state, room code, and a player list.
- **Notifications** — Alerts when players join or leave the session.

## How to Use

1. Open any level in the editor.
2. Click the **Multiplayer** button in the editor pause menu or "My Levels" page.
3. **Host** a new session to generate a room code, or **Join** using a code shared by your friend.
4. Build, edit, and playtest together in real-time!

## Server Configuration

This mod relies on a WebSocket relay server (hosted by me personally in US-East). However, you can specify a custom server URL in the mod settings if you prefer to host a server yourself. Setup instructions for hosting your own server are located in the `server/` directory of the source repository.