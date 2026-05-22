# WebSocket Proxy Server

This proxy accepts plain `ws://` connections and forwards them to the secure `wss://` backend server.

## Why?

The game mod can't use TLS due to cross-compilation issues, so this proxy handles the TLS termination.

## Deploy to Render.com

1. Create a new Web Service on Render.com
2. Connect this repository
3. Set Root Directory to: `proxy-server`
4. Build Command: `npm install`
5. Start Command: `npm start`
6. Add environment variable: `TARGET=wss://multiplayeredit.onrender.com`

## Local Testing

```bash
cd proxy-server
npm install
npm start
```

Then use `ws://localhost:8080` in your mod settings.
