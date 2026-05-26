# 0.1.2
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
- Fixed crash when editing triggers
- Fixed the redo button not bringing back objects when they were deleted

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