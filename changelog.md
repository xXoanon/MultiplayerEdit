# 0.6.2
- Added a config file for starting pre-configured dedicated servers. You can find this file (config.json) and more information about how it works in the README in /servers/dedicated.
- Now shows the ping of every user connected in the player list.
- Added a profanity filter for lobby names and chat (this can be disabled in the mod settings).
- Added more feedback when connecting to a host.
- Fixed ship, ufo, and jetpack not showing the cube icon overlay when playtesting.
- Fixed icons in platformer mode not flipping properly when going left.
- Fixed desync happening when players try to edit an object being moved with a move trigger while someone is in playtest and activating the move trigger.
- Fixed crash that happens if you try to undo when someone deletes an object at the same time.
- Tried to fix crash that happens when android users connect to a dedicated server with more than 1 player.
- Optimized signaling server even more to reduce usage.
- Updated to Geode 5.10.1.

# 0.6.1
- Added cloud hosting! Players can now upload their levels directly to a dedicated server in-game. You can of course host your own and do this for free (Read the documentation to learn how), but there will be a paid dedicated server service hosted officially by me (in the future) which will be set up by default.
- Players can view and manage their cloud hosted rooms from the "Dedicated Servers" menu.
- Updated Dedicated Server to add hosting multiple levels simultaneously, hosting and stopping sessions without restarting the server, more commands (and variables for those commands), and a lot more.
- Optimized signaling server even more.
- Fixed signaling server bug where fast polling connections were being held too long.
- Fixed bug where objects placed by other players appear on the wrong layer.

# 0.6.0
- Added dedicated Server support for headless server hosting! See the `servers/dedicated` folder for instructions on how to run a dedicated server.
- Added a "Servers" button in the Multiplayer menu. Here you can directly join or save dedicated server IPs.
- When connected to a dedicated server, you can save a local copy of the level manually, or save directly to the servers level folder.
- The dedicated server CLI has dedicated admin commands.
- Added a chat so you can text other people in your session! You can either press "/" to open up a quick message box in the editor, or go into the multiplayer edit menu and view the full chat.
- Other players can see your messages sent in chat above your cursor.
- Now shows the players cube icon next to the username on the player list and chat.
- Added a view button on the player list to jump to their cursor in the editor.
- Added a check to tell you if you're on an outdated version of the mod.
- Added an option to make the default setting of the room to be view-only to prevent trolling.
- Added notification telling you when someone joins or leaves the session.
- Limited setting the player name in the mod settings to only 15 characters.
- Fixed the Multiplayer Edit button in the editor overlapping with other UI elements (and also made the text golden lol).
- Fixed crash that happens on android when guests leave or get kicked.
- Fixed issue where after hosting, the multiplayer editor pop up becomes unresponsive until you press esc and reopen it again.
- Fixed a bug where placing or selecting a large amount of objects would instantly freeze and softlock the game.
- Fixed crash when deleting an object another player is interacting with in playtest.
- Tried optimizing the signaling server logic by balancing memory time and http requests more efficiently.
- Increased and refined the information given when connecting to a host (also fuck ICE).
- Checked and fixed a lot of outdated information in the various README files.

# 0.5.4
- Added a button for joining the discord server.
- Redesigned the patreon button to match the discord button.
- More codebase cleanup

# 0.5.3
- Removed unnecessary hooks in the edit object menu to fix crashes on android.

# 0.5.2
- Added node-ids to dependencies.
- Cleaned up some code in EditorHooks.cpp.
- Fixed issue where players would be named "Player" instead of their gd username when they had never changed their name in the mod settings.

# 0.5.1
- Fixed overlapping UI in the room browser when there are a large numbers of rooms.
- The room browser now shows the specific mod version being used by the host.
- Rooms are now sorted by their time created, with newer lobbies being sorted first.
- Now filters out rooms before the v0.5.1 update.
- Fixed not being able to join rooms which are private and also have a password.
- Removed useless android builds from repo (oops).

# 0.5.0
- Massive UI Overhaul! The legacy Multiplayer menu has been completely replaced with a more user friendly interface.
- Added a public room browser to easily find and join active lobbies.
- Added a dedicated session manager with a host config panel (set name, description, player limit, and password).
- Added view-only restrictions. View-only players have a lock icon on their cursor and are prevented from editing the level while still being able to watch and playtest.
- Added mod controls for hosts to kick, ban, or toggle players into view-only mode from the player list.
- Fixed a major issue where pre-existing level objects would randomly jumble around when selected or moved.
- Fixed issue where guests can only see the host, and no other players in lobbies with more than two people.
- Added syncing to the levels background, ground, middleground, platformer mode toggle, and a bunch more.
- Fixed a game crash when a host or guest abruptly disconnects when joining or editing.
- Fixed joining session sometimes being stuck on "syncing level" due to connections dropping during the connecting to host process.
- Fixed cursor and icon positions wildly teleporting around the editor in lobbies with more than 2 players.
- Removed queuing level edits while players are in playtest, and just switched back to real time playtest editing to prevent bugs with object syncing.
- Overhauled logic for color channel sync and fixed a lot of bugs regarding it.
- Hosting/Joining now gives you more feedback.
- Removed the song autoplay when downloading a song in a session.
- Fixed hitboxes and collision not updating in real time for objects that have been scaled.
- Fixed a visual bug where multi-part objects (like slopes) would flip their main body but fail to flip their detail lines.
- Fixed selecting/deselecting objects causing them to be unnecessarily recreated for other players, which broke Z-order and corrupted transforms.
- Fixed hosting being bugged after subsequent hosting of sessions without restarting the editor.
- Fixed the display name not being used in certain places.
- Fixed pre-existing start positions not syncing when guests join.
- Fixed crash on ARM devices where trying to change certain level settings crash the game.
- Fixed issue where you softlock after hosting on mobile.
- Removed some test files from the codebase.
- Added role check for guests to prevent guests from potentially sending malicious "Relay" packets.
- Updated to Geode 5.9.0.

# 0.4.4
- Start Position properties are now fully synced between players, except for the enabled/disabled state which is local for each player.
- The multiplayer lobby UI now updates the player count and names in real time as players join or leave.
- Improved playtesting sync to be much smoother and added support for mini and dual.
- Minor changes to about.md and README.md to make some important points easier to understand.
- Fixed a crash that occurred when joining a host caused by a memory issue with teleport portals.
- Fixed a bug where players would sometimes duplicate in the lobby, which caused missing/glitching cursors.
- Fixed a crash that occurred when a guest unexpectedly closes the game.
- Fixed an issue where the game would get stuck on "Waiting for level sync from host..."
- Cleaned up a lot of the codebase.
- Significantly optimized level syncing on massive levels by compressing level data.
- Fixed object ID desyncs for pre-existing level objects when multiple players join.

# 0.4.3
- Fixed a bug where placing, moving, or deleting teleport portals would cause game crashes and duplicate portal desyncs.
- Drastically reduced signaling server load by optimizing polling.

# 0.4.2
- Reduced overlay opacity on objects selected by other players.
- Fixed object desync when quickly deselecting. Objects now sync their final state to all players the moment they are deselected.
- Fixed crash when joining a host.
- Improved cursor accuracy.
- Replaced WebSocket signaling with HTTP long polling.
- Removed "exception based" error handling with error flags, matching Geode guidelines.
- Fixed a bug regarding data channel sends.
- Disabled libdatachannel's WebSocket module to reduce binary size.
- Fixed a race condition where the MessageBatcher would send a stale transform after deselecting, overwriting the correct state.
- Fixed objects not syncing that were tracked but already removed from GD's internal selection array.
- Added a Patreon donate button.

# 0.4.1
- Fixed desync issues with color channels and property edits.
- Fixed multi object rotation being bugged.
- Added a buffer queue to hopefully reduce dropped messages.
- Fixed severe desync and level corruption issues when receiving remote edits while actively playtesting. Edits are now cleanly queued during playtest instead of appearing in realtime. This should hopefully fix certain desync issues.
- Fixed a race condition window when building fast that caused objects to duplicate or drift.
- Replaced HTTP polling-based signaling with a proper WebSocket relay.
- Fixed the signaling server consuming excessive Deno KV reads by removing infinite polling loops. The host no longer polls for new clients, they are pushed instantly via WebSocket.
- Signaling WebSocket is automatically closed once the P2P connection is established, minimizing server resource usage.

# 0.4.0
- Completely overhauled netoworking by switching from a central WebSocket relay server to P2P connections using WebRTC data channels (You may need to reset the URL in the mod settings back to default if you came from an older version).
- Players now connect directly to each other, so there should be no connection bottlenecks in theory.
- Added a lightweight signaling server (Deno Deploy) that only handles initial matchmaking. All game data flows directly between players serverless.
- Replaced JSON message format with a compact binary wire protocol.
- Chunked initial level sync for large levels.
- Removed dependency on the old Render.com relay server (will still stay up for legacy users on older versions).
- Fixed the iOS binary (`.ios.dylib`) missing from the `.geode` package by adding the iOS platform to the automated GitHub Actions build matrix (oops).
- Fixed objects occasionally snapping back to their original position or losing property changes (like color channels) when modifying them rapidly (e.g. copy + paste and then rotate).
- Fixed desyncs when performing extremely fast keyboard inputs before network ticks.

# 0.3.0
- Fixed the synchronizing level screen never loading bug when joining a session.
- Fixed level colors glitching out after joining or when the host changes colors.
- Fixed mirror (flip X/Y) not syncing to other players.
- Fixed flipped objects showing the OPPOSITE flip state on remote players after editing them.
- Fixed host sending a duplicate level sync to itself when a player joins.
- Fixed objects sometimes not appearing after a level sync completes.
- Improved server stability.
- Copy/paste and duplicate now sync as one batched message instead of sending individually, reducing lag.
- Reduced performance overhead in the editor by skipping unnecessary per-frame checks when not actively editing.
- Fixed a rare issue where reconnecting could cause object sync conflicts.
- Internal code cleanup and refactoring.

# 0.2.3
- Increased max payload to 50mb.
- Optimized server loads to prevent dropped connections.

# 0.2.2
- Fixed player icons not showing up when playtesting.
- Fixed random host connection drops/disconnections by forwarding WebSocket `ping` and `pong` to server.
- Added WebSocket ping heartbeats to detect and clean up stale and half-open connections.
- Purged standard C++ exception handling (`try`/`catch`) and exception-prone parser calls (`std::stoi` / `std::stof`), replacing them with Geode's safe `numFromString` utility.

# 0.2.1
- Fixed Use-After-Free crashes (`EXCEPTION_ACCESS_VIOLATION` / DEP violation) during multiplayer editor playtesting and editing by nullifying dangling pointers to deleted objects (like gamemode portals, teleport portals, and rings) on player objects, layer states, and UI fields.
- Fixed a C++ array-out-of-bounds `std::out_of_range` crash when extracting object groups by safely capping group extraction at 10.
- Fixed memory safety on all deletion routes by proactively unregistering deleted objects from the UUID bidirectional maps and tracked selections.

# 0.2.0
- Added proper support for macOS and Android.
- Fixed TLS handshake connection failures on Android and macOS.
- Fixed selector-based scheduler crashes (DEP violations) in the MultiplayerPopup UI.
- Added a 30 second ping interval heartbeat to prevent server idle terminations.
- Deferred the client-side editor exit logic to run on the next frame to prevent use-after-free crashes inside `networkUpdate()`.
- Added a dummy sender node to the `onExitEditor` call to prevent null pointer dereferences inside GD.
- Fixed copy/paste and duplication synchronization in the level editor.
- Fixed initial rendering of text objects for remote players.
- Fixed mobile player cursors drifting when panning the camera.
- Fixed undo/redo synchronization and potential memory corruption crashes by replacing failing `typeinfo_cast` calls in history pruning with type-safe iterations.
- Fixed selection highlights and object locks when copy-pasting or duplicating objects by correcting the host's active session checks in object placement hooks.
- Fixed host level duplication issue when a guest joins.
- Fixed server keeping zombie connections in between hosting levels, causing hosting to break in certain cirumstances.
- Fixed crash when editing triggers.
- Fixed the redo button not bringing back objects when they were deleted.
- Fixed input for server URL to make it possible to actually input URLs manually.

# 0.1.1
- Fixed an EXCEPTION_ACCESS_VIOLATION (DEP violation) crash on Windows/Wine caused by using `schedule_selector` in `$modify` wrapper classes.

# 0.1.0
- Added real-time multiplayer level editing.
- Synchronized object placement, deletion, movement, scaling, rotation, and more.
- Isolated undo/redo stacks per player so actions do not overwrite other players' histories.
- Added live player cursors in the editor.
- Badge previews next to player cursors showing their selected object.
- Live playtesting showing the players custom icons in real-time.
- Added in-editor multiplayer panel (player list, session status HUD overlay, join/leave notifications).