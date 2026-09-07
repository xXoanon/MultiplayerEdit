# Multiplayer Edit Dedicated Server

This is the Node.js dedicated server for the Multiplayer Edit mod.

It reads levels from your local `CCLocalLevels.dat` save file or `.gmd` files, hosts them in memory, and syncs edits across all connected players. Unlike standard P2P hosting, Geometry Dash does not need to be open to keep the server running.

You can host **multiple levels simultaneously** on a single server instance, each with its own room code, password, and player limit.

## Requirements

- [Node.js](https://nodejs.org/)

## Setup and Hosting

1. Install dependencies:
   ```bash
   npm install
   ```
2. Start the server:
   ```bash
   npm start
   ```
3. The server will ask you where you want to load levels from:
   - **My Geometry Dash Saves:** Automatically locates your `CCLocalLevels.dat` file and lists your game's levels.
   - **Local .gmd files:** Reads `.gmd` files from the `levels/` folder next to the script.
   - **Custom file path:** Paste a direct path to any `.gmd` file on your system.
4. Select the levels you want to host. You can select multiple levels by pressing **Space** on each one and then pressing **Enter** to confirm.
5. Configure the server settings (Port, Max Players, Password, Autosave interval, and Default View-Only state). These settings apply to all the selected levels.

After starting, the server will display a summary table showing all hosted rooms with their unique room codes.

## Auto-Configuration

If you want to automate server hosting, you can use the `config.json` file located in the `servers/dedicated/` folder.

By default, the server ignores this file because the `"useConfig"` setting is `0`.

To automate your server:
1. Open `config.json` and set `"useConfig": 1`.
2. Configure the other settings:
   - **`mode`**: Where to load levels from. Options are `"gd"` (loads from CCLocalLevels.dat), `"gmd"` (loads from the levels folder), `"custom"` (loads a specific file), or `"none"` (boots an empty server for remote uploads).
   - **`customPath`**: The exact file path to a `.gmd` file if `mode` is set to `"custom"`.
   - **`selectedLevels`**: A list of level names to host (e.g., `["Level 1", "Level 2"]`), or `["all"]` to host everything found.
   - **`port`**: The port to host on.
   - **`maxPlayers`**: Player limit per room (`0` for unlimited).
   - **`password`**: Server password (leave blank for none).
   - **`autosaveInterval`**: How often to autosave in minutes (`0` to disable).
   - **`defaultViewOnly`**: Whether new players join in view-only mode (`true` or `false`).
3. Run `npm start`. The server will instantly start using these settings without asking any questions.

If you want to easily generate a config file based on your current settings, you can start the server normally, and once it's running, type `/makeconfig` in the terminal, and it will save all your settings into `config.json` and enable it for your next boot.

## Playing over the Internet

To play with people outside your local network, you need a public address.

### Port Forwarding
1. Forward TCP port 7575 to your computer's local IP address in your router settings.
2. Players connect using your public IP: `ws://[your-public-ip]:7575/[ROOM_CODE]`

### Tunnels
If you cannot port forward, use a tunnel service. I personally recommend ngrok or localtunnel, as they have both been tested and confirmed to work well.

**ngrok:**
```bash
ngrok http 7575
```
This gives you a URL like `https://1234.ngrok-free.app`. Use it to connect in-game.

**localtunnel:**
```bash
npx localtunnel --port 7575
```
This gives you a URL like `https://my-server.loca.lt`. Use it to connect in-game.

## Connecting from Geometry Dash

1. Click the **Servers** button in the Multiplayer menu.
2. Click **Add Server** and enter the server's URL. If the server is hosting multiple levels, append the room code to the URL: `ws://your-ip:7575/ABCD12`
3. Click **Join**.

If the server is only hosting a single level, you can connect without a room code and it will automatically join that level.

*Note: To actually save the multiplayer level to your device, open the Editor Pause Menu and click **Save**. The dedicated server will always save and store levels independently in the levels folder and will never overwrite your local game level files.*

## Cloud Hosting & Remote Uploads

If you want to allow players (or yourself) to upload levels to the dedicated server directly from the game without using the terminal, you can use the **Auth Token** system.

1. In the server terminal, type `/token generate`. This creates a unique key.
2. The player goes to the mod settings in Geometry Dash and enters the server's IP address into the **Cloud Hosting URL** setting, and pastes the token into the **Cloud Auth Token** setting.
3. They can now go to their "My Levels" tab in-game and click the **Host** button on any of their levels to instantly put it up on the server! 
4. Players can go to Multiplayer -> Servers -> "My Hosted Rooms" to view, change settings, or shut down any rooms they have uploaded.

## Admin Commands

Use these commands in the server terminal. Commands that target a specific room require you to focus on that room first using `/focus`, unless the server is only hosting one level (in which case it auto-focuses).

### Focus & Navigation

* `/focus <CODE>` - Focus on a room to use admin commands on it. Shows a detailed info panel for the room.
* `/unfocus` - Clear room focus.

### Room Management

* `/rooms` - List all active rooms with their codes, player counts, and status.
* `/host` - Host new levels on the fly without restarting the server. Opens the interactive level selection menu.
* `/close <CODE>` - Close a specific room. Use `/close all` to close all rooms.
  * `-nosave` - Skip saving the level before closing.
  * `-silent` - Don't send a disconnect message to players before kicking them.
  * `-force` - Skip confirmation when players are connected.

### Player Management

* `/players` - List all players in the focused room.
* `/kick <playerId or Name>` - Kick a player.
  * `-reason=<text>` - Custom reason shown to the player. Default: "You have been kicked"
* `/ban <playerId or Name>` - Ban a player.
  * `-reason=<text>` - Custom reason shown to the player. Default: "You have been banned"
  * `-global` - Ban from all rooms on the server.
* `/unban <name>` - Unban a player.
  * `-global` - Unban from all rooms.
* `/banlist` - Show the ban list for the focused room.
* `/viewonly <playerId or Name> <on|off>` - Force a player into or out of view-only mode.
* `/message <text>` - Broadcast a notification message to all players in the focused room.
  * `-global` - Send to all players across all rooms.

### Save & Export

* `/save` - Force a manual save to `[LevelName]_save.gmd`.
  * `-all` - Save all rooms.
* `/export` - Export the level to `[LevelName]_export.gmd` in the `levels/` folder.
  * `-all` - Export all rooms.
  * `-dir=<path>` - Custom output directory.

### Room Settings

* `/password <password>` - Set or change the password for the focused room. Use `/password none` to remove it.
* `/maxplayers <count>` - Change the max player limit. Use `0` for unlimited.
* `/rename <name>` - Rename the level.

### Server
* `/makeconfig` - Save current startup settings to `config.json` and enable auto-configuration for next boot.
* `/status` - Show server health info (uptime, rooms, players, memory usage).
* `/help` - Show a list of all commands.
* `/stop` - Shut down the server. Saves all rooms and disconnects all players.
  * `-nosave` - Don't save rooms before shutting down.
  * `-force` - Skip confirmation when players are connected.

### Access Tokens

* `/token generate` - Generate a new secure upload token.
* `/token remove <token>` - Revoke a token, preventing further uploads from that user.
* `/token list` - Show all valid tokens.

## Saving & Auto-Saving

There are three ways levels are saved on the dedicated server (all saves go to the `levels/` folder):

1. **Auto-Saving:** When starting the server, you can specify an autosave interval in minutes. The server will automatically write a `[LevelName]_autosave.gmd` file in the background for each active room.
2. **Terminal `/save`:** Typing `/save` in the terminal forces an immediate manual save to `[LevelName]_save.gmd`. Use `/save -all` to save all rooms at once.
3. **In-Game "Save":** When a player clicks "Save" or "Save and Exit" inside Geometry Dash, it triggers the same manual save, creating or updating `[LevelName]_save.gmd`.

You can directly import any of these `.gmd` files into Geometry Dash at any time, or use the `/export` command in the terminal to generate a clean `[LevelName]_export.gmd`.