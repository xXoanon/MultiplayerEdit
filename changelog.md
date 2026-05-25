# 0.1.1
- Fixed an EXCEPTION_ACCESS_VIOLATION (DEP violation) crash caused by using `schedule_selector` in `$modify` wrapper classes.

# 0.1.0
- Added real-time multiplayer level editing.
- Synchronized object placement, deletion, movement, scaling, rotation, and more.
- Isolated undo/redo stacks per player so actions do not overwrite other players' histories.
- Added live player cursors in the editor.
- Badge previews next to player cursors showing their selected object.
- Live playtesting showing the players custom icons in real-time.
- Added in-editor multiplayer panel (player list, session status HUD overlay, join/leave notifications).