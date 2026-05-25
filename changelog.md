# 0.1.2
- Added proper support for macOS and Android.
- Added a 30 second ping interval heartbeat to prevent server idle terminations.
- Deferred the client-side editor exit logic to run on the next frame to prevent use-after-free crashes inside `networkUpdate()`.
- Added a dummy sender node to the `onExitEditor` call to prevent null pointer dereferences inside GD.

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