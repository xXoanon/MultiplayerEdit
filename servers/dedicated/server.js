#!/usr/bin/env node
const readline = require("readline");
const fs = require("fs");
const path = require("path");
const crypto = require("crypto");
const prompts = require("prompts");
const saveReader = require("./src/save-reader");
const proto = require("./src/protocol");
const { RoomManager } = require("./src/room-manager");
const { WSServer } = require("./src/ws-server");
let roomManager = null;
let wsServer = null;
let rlAdmin = null;
let focusedRoomCode = null;
let serverStartTime = Date.now();
let globalAutosaveInterval = 5;
let autosaveTimer = null;

const configPath = path.join(process.cwd(), "config.json");
const defaultConfig = {
  useConfig: 0,
  mode: "gmd",
  customPath: "",
  selectedLevels: ["all"],
  port: 7575,
  maxPlayers: 0,
  password: "",
  autosaveInterval: 0,
  defaultViewOnly: false
};
let serverConfig = { ...defaultConfig };
if (fs.existsSync(configPath)) {
  try {
    const parsed = JSON.parse(fs.readFileSync(configPath, "utf8"));
    serverConfig = { ...defaultConfig, ...parsed };
  } catch (e) {
    console.error("\x1b[31m[ERROR]\x1b[0m Failed to parse config.json. Using defaults.");
  }
}

function parseCommand(line) {
  const trimmed = line.trim();
  if (!trimmed.startsWith("/")) return null;
  const flags = {};
  const positional = [];
  const tokens = [];
  let current = "";
  let inQuote = false;
  let quoteChar = "";
  for (let i = 0; i < trimmed.length; i++) {
    const c = trimmed[i];
    if (inQuote) {
      if (c === quoteChar) {
        inQuote = false;
      } else {
        current += c;
      }
    } else if (c === '"' || c === "'") {
      inQuote = true;
      quoteChar = c;
    } else if (c === " ") {
      if (current.length > 0) {
        tokens.push(current);
        current = "";
      }
    } else {
      current += c;
    }
  }
  if (current.length > 0) tokens.push(current);
  if (tokens.length === 0) return null;
  const cmd = tokens[0].toLowerCase();
  if (cmd === "/message" || cmd === "/rename") {
    const idx = trimmed.indexOf(" ");
    if (idx !== -1) {
      let rest = trimmed.substring(idx + 1).trim();
      const restFlags = {};
      while (rest.startsWith("-")) {
        const spaceIdx = rest.indexOf(" ");
        if (spaceIdx === -1) break;
        const flag = rest.substring(0, spaceIdx).replace(/^-+/, "");
        const eqIdx = flag.indexOf("=");
        if (eqIdx !== -1) {
          restFlags[flag.substring(0, eqIdx).toLowerCase()] = flag.substring(
            eqIdx + 1,
          );
        } else {
          restFlags[flag.toLowerCase()] = true;
        }
        rest = rest.substring(spaceIdx + 1).trim();
      }
      return { cmd, positional: [rest], flags: restFlags };
    }
    return { cmd, positional: [], flags: {} };
  }
  for (let i = 1; i < tokens.length; i++) {
    const t = tokens[i];
    if (t.startsWith("-")) {
      const key = t.replace(/^-+/, "");
      const eqIdx = key.indexOf("=");
      if (eqIdx !== -1) {
        flags[key.substring(0, eqIdx).toLowerCase()] = key.substring(eqIdx + 1);
      } else {
        flags[key.toLowerCase()] = true;
      }
    } else {
      positional.push(t);
    }
  }
  return { cmd, positional, flags };
}
function formatUptime(ms) {
  const seconds = Math.floor(ms / 1000);
  const minutes = Math.floor(seconds / 60);
  const hours = Math.floor(minutes / 60);
  const days = Math.floor(hours / 24);
  if (days > 0) return `${days}d ${hours % 24}h ${minutes % 60}m`;
  if (hours > 0) return `${hours}h ${minutes % 60}m`;
  return `${minutes}m ${seconds % 60}s`;
}
function printRoomsTable() {
  if (roomManager.rooms.size === 0) {
    console.log("  \x1b[33mNo active rooms.\x1b[0m");
    return;
  }
  console.log("");
  console.log(
    "  \x1b[1mCode   \x1b[0m│\x1b[1m Level Name                \x1b[0m│\x1b[1m Players \x1b[0m│\x1b[1m Objects \x1b[0m│\x1b[1m Status\x1b[0m",
  );
  for (const [code, room] of roomManager.rooms) {
    const name =
      room.levelName.length > 24
        ? room.levelName.substring(0, 22) + ".."
        : room.levelName;
    const players =
      room.maxPlayers > 0
        ? `${room.players.size}/${room.maxPlayers}`
        : `${room.players.size}`;
    const objects = room.uuids.length.toLocaleString();
    let status = "";
    if (code === focusedRoomCode) status += "\x1b[36m★ focused\x1b[0m";
    if (room.dirty) status += (status ? " · " : "") + "\x1b[33munsaved\x1b[0m";
    if (room.password) status += (status ? " · " : "") + "\x1b[35m🔒\x1b[0m";
    console.log(
      `  \x1b[36m${code}\x1b[0m │ ${name.padEnd(26)} │ ${players.padStart(7)} │ ${objects.padStart(7)} │ ${status}`,
    );
  }
  console.log("");
}
function printRoomDetails(room) {
  const code = room.code;
  console.log("");
  console.log(
    `  \x1b[36m\x1b[1m═══ Room: "${room.levelName}" [${code}] ═══\x1b[0m`,
  );
  console.log(`  Objects:     ${room.uuids.length.toLocaleString()}`);
  console.log(
    `  Players:     ${room.players.size}${room.maxPlayers > 0 ? "/" + room.maxPlayers : ""}`,
  );
  console.log(
    `  Password:    ${room.password ? "\x1b[35m" + room.password + "\x1b[0m" : "\x1b[90mnone\x1b[0m"}`,
  );
  console.log(
    `  View-Only:   ${room.settings.defaultViewOnly ? "\x1b[33myes\x1b[0m" : "no"}`,
  );
  console.log(`  Dirty:       ${room.dirty ? "\x1b[33myes\x1b[0m" : "no"}`);
  if (room.players.size > 0) {
    console.log("");
    console.log("  \x1b[1mID\x1b[0m │ \x1b[1mName\x1b[0m");
    for (const [id, p] of room.players) {
      const voTag = p.isViewOnly ? " \x1b[33m[view-only]\x1b[0m" : "";
      console.log(`  ${String(id).padStart(2)} │ ${p.name}${voTag}`);
    }
  }
  console.log("");
}
function getFocusedRoom() {
  if (focusedRoomCode) {
    const room = roomManager.getRoom(focusedRoomCode);
    if (room) return room;
    focusedRoomCode = null;
  }
  if (roomManager.rooms.size === 1) {
    return roomManager.rooms.values().next().value;
  }
  return null;
}
function requireFocusedRoom() {
  const room = getFocusedRoom();
  if (!room) {
    console.log(
      "  \x1b[31mNo room focused.\x1b[0m Use \x1b[1m/focus <CODE>\x1b[0m first, or \x1b[1m/rooms\x1b[0m to list rooms.",
    );
    return null;
  }
  return room;
}
function resolvePlayer(room, arg) {
  const id = parseInt(arg);
  if (!isNaN(id) && room.players.has(id)) return id;
  for (const [pid, p] of room.players) {
    if (p.name && p.name.toLowerCase() === arg.toLowerCase()) return pid;
  }
  return null;
}
async function loadLevelsFromSource(mode) {
  const levels = [];
  if (mode === "gd") {
    const savePath = saveReader.findSaveFile();
    if (!savePath || !fs.existsSync(savePath)) {
      console.error(
        "\x1b[31m[ERROR]\x1b[0m Could not locate CCLocalLevels.dat. Verify Geometry Dash is installed.",
      );
      return levels;
    }
    console.log(
      `\n\x1b[36m[INFO]\x1b[0m Reading CCLocalLevels.dat: ${savePath}...`,
    );
    try {
      const xml = saveReader.decryptSaveFile(savePath);
      levels.push(...saveReader.parseLevels(xml));
    } catch (e) {
      console.error(
        "\x1b[31m[ERROR]\x1b[0m Failed to parse CCLocalLevels.dat:",
        e.message,
      );
    }
  } else if (mode === "gmd") {
    const levelsDir = path.join(process.cwd(), "levels");
    if (!fs.existsSync(levelsDir)) {
      fs.mkdirSync(levelsDir, { recursive: true });
    }
    const files = fs.readdirSync(levelsDir).filter((f) => f.endsWith(".gmd"));
    if (files.length === 0) {
      console.error(
        "\n\x1b[31m[ERROR]\x1b[0m No .gmd files found in levels/ directory.",
      );
      return levels;
    }
    console.log("");
    for (const file of files) {
      console.log(`\x1b[36m[INFO]\x1b[0m Loading ${file}...`);
      try {
        const xml = fs.readFileSync(path.join(levelsDir, file), "utf8");
        const parsed = saveReader.parseGmd(xml);
        parsed.forEach((l) => (l.filename = file));
        levels.push(...parsed);
      } catch (e) {
        console.error(
          `\x1b[31m[ERROR]\x1b[0m Failed to read ${file}:`,
          e.message,
        );
      }
    }
  }
  return levels;
}
async function promptAndLoadLevels() {
  if (serverConfig.useConfig === 1) {
    if (serverConfig.mode === "none") return { _skip: true };
    if (serverConfig.mode === "custom") {
      const manualPath = serverConfig.customPath;
      if (!manualPath || !fs.existsSync(manualPath)) {
        console.error("\n\x1b[31m[ERROR]\x1b[0m Invalid customPath in config or file does not exist.");
        return [];
      }
      if (!manualPath.endsWith(".gmd")) {
        console.error("\n\x1b[31m[ERROR]\x1b[0m Only .gmd files are supported.");
        return [];
      }
      try {
        const xml = fs.readFileSync(manualPath, "utf8");
        const parsed = saveReader.parseGmd(xml);
        parsed.forEach((l) => (l.filename = path.basename(manualPath)));
        return parsed;
      } catch (e) {
        console.error("\x1b[31m[ERROR]\x1b[0m Failed to read file:", e.message);
        return [];
      }
    }
    return await loadLevelsFromSource(serverConfig.mode);
  }

  const modeResponse = await prompts({
    type: "select",
    name: "mode",
    message: "Where do you want to load levels from?",
    choices: [
      { title: "My Geometry Dash Saves (CCLocalLevels.dat)", value: "gd" },
      { title: "Local .gmd files (from the levels folder)", value: "gmd" },
      { title: "Enter a custom file path...", value: "custom" },
      { title: "Don't host any levels (remote uploads only)", value: "none" },
    ],
  });
  if (!modeResponse.mode) return [];

  serverConfig.mode = modeResponse.mode;

  if (modeResponse.mode === "none") {
      return { _skip: true };
  }

  if (modeResponse.mode === "custom") {
    const rl = readline.createInterface({
      input: process.stdin,
      output: process.stdout,
    });
    const manualPath = await new Promise((resolve) =>
      rl.question("\x1b[33mEnter full path to a .gmd file:\x1b[0m ", resolve),
    );
    rl.close();
    
    serverConfig.customPath = manualPath;
    
    if (!manualPath || !fs.existsSync(manualPath)) {
      console.error(
        "\n\x1b[31m[ERROR]\x1b[0m Invalid path or file does not exist.",
      );
      return [];
    }
    if (!manualPath.endsWith(".gmd")) {
      console.error("\n\x1b[31m[ERROR]\x1b[0m Only .gmd files are supported.");
      return [];
    }
    try {
      const xml = fs.readFileSync(manualPath, "utf8");
      const parsed = saveReader.parseGmd(xml);
      parsed.forEach((l) => (l.filename = path.basename(manualPath)));
      return parsed;
    } catch (e) {
      console.error("\x1b[31m[ERROR]\x1b[0m Failed to read file:", e.message);
      return [];
    }
  }
  return await loadLevelsFromSource(modeResponse.mode);
}
async function selectLevels(levels) {
  if (levels.length === 0) return [];
  if (serverConfig.useConfig === 1) {
    if (serverConfig.selectedLevels.includes("all")) return levels;
    return levels.filter(l => serverConfig.selectedLevels.includes(l.filename) || serverConfig.selectedLevels.includes(l.name));
  }
  const response = await prompts({
    type: "multiselect",
    name: "selectedLevels",
    message: "Select levels to host (space to toggle, enter to confirm)",
    choices: levels.map((l, i) => {
      const prefix = l.filename ? `${l.filename} - ` : "";
      return {
        title: `${prefix}${l.name} (${l.objectCount} objects)`,
        value: l,
      };
    }),
    hint: "- Space to select. Return to submit.",
  });
  const selected = response.selectedLevels || [];
  serverConfig.selectedLevels = selected.map(l => l.filename || l.name);
  return selected;
}

const HELP_CATEGORIES = [
  {
    name: "Focus & Navigation",
    commands: [
      { cmd: "/focus <CODE>", desc: "Focus on a room for admin commands" },
      { cmd: "/unfocus", desc: "Clear room focus" },
    ],
  },
  {
    name: "Room Management",
    commands: [
      { cmd: "/rooms", desc: "List all active rooms" },
      { cmd: "/host", desc: "Host new levels on the fly" },
      { cmd: "/close <CODE>", desc: "Close a room  (-nosave -silent -force)" },
    ],
  },
  {
    name: "Player Management",
    commands: [
      { cmd: "/players", desc: "List players in focused room" },
      { cmd: "/kick <player>", desc: "Kick a player  (-reason=<text>)" },
      { cmd: "/ban <player>", desc: "Ban a player  (-reason=<text> -global)" },
      { cmd: "/unban <name>", desc: "Unban a player  (-global)" },
      { cmd: "/banlist", desc: "Show ban list for focused room" },
      { cmd: "/viewonly <player> <on|off>", desc: "Toggle view-only mode" },
      { cmd: "/message <text>", desc: "Broadcast message  (-global)" },
    ],
  },
  {
    name: "Save & Export",
    commands: [
      { cmd: "/save", desc: "Save focused room  (-all)" },
      { cmd: "/export", desc: "Export focused room  (-all -dir=<path>)" },
    ],
  },
  {
    name: "Room Settings",
    commands: [
      {
        cmd: "/password <pass>",
        desc: 'Set room password  ("none" to remove)',
      },
      { cmd: "/maxplayers <count>", desc: "Set max players (0 = unlimited)" },
      { cmd: "/rename <name>", desc: "Rename the level" },
    ],
  },
  {
    name: "Access Tokens",
    commands: [
      { cmd: "/token generate", desc: "Generate a new upload token" },
      { cmd: "/token remove <token>", desc: "Revoke a token" },
      { cmd: "/token list", desc: "List all valid tokens" },
    ],
  },
  {
    name: "Server",
    commands: [
      { cmd: "/makeconfig", desc: "Save current startup settings to config.json" },
      { cmd: "/status", desc: "Server health info" },
      { cmd: "/help", desc: "Show this help" },
      { cmd: "/stop", desc: "Shut down  (-nosave -force)" },
    ],
  },
];
function printHelp() {
  console.log("\n  \x1b[36m\x1b[1mAdmin Commands\x1b[0m\n");
  for (const cat of HELP_CATEGORIES) {
    console.log(`  \x1b[1m${cat.name}\x1b[0m`);
    for (const c of cat.commands) {
      console.log(`    \x1b[33m${c.cmd.padEnd(32)}\x1b[0m ${c.desc}`);
    }
    console.log("");
  }
}
async function handleCommand(parsed) {
  const { cmd, positional: args, flags } = parsed;
  switch (cmd) {
    case "/focus": {
      if (args.length !== 1)
        return console.log("  \x1b[33mUsage:\x1b[0m /focus <CODE>");
      const code = args[0].toUpperCase();
      const room = roomManager.getRoom(code);
      if (!room) return console.log(`  \x1b[31mRoom not found:\x1b[0m ${code}`);
      focusedRoomCode = code;
      printRoomDetails(room);
      break;
    }
    case "/unfocus": {
      focusedRoomCode = null;
      console.log("  Focus cleared.");
      break;
    }
    case "/rooms": {
      printRoomsTable();
      break;
    }
    case "/host": {
      if (rlAdmin) rlAdmin.pause();
      try {
        const levels = await promptAndLoadLevels();
        if (levels.length === 0) {
          console.log("  \x1b[33mNo levels loaded.\x1b[0m");
          break;
        }
        const selected = await selectLevels(levels);
        if (selected.length === 0) {
          console.log("  \x1b[33mNo levels selected.\x1b[0m");
          break;
        }
        const settingsResponse = await prompts([
          {
            type: "number",
            name: "maxPlayers",
            message: "Max players per room (0 for unlimited)",
            initial: 0,
          },
          {
            type: "text",
            name: "password",
            message: "Room password (leave blank for none)",
            initial: "",
          },
          {
            type: "toggle",
            name: "defaultViewOnly",
            message: "Default new players to view-only mode?",
            initial: false,
            active: "yes",
            inactive: "no",
          },
        ]);
        const maxPlayers =
          typeof settingsResponse.maxPlayers === "number" &&
          isFinite(settingsResponse.maxPlayers) &&
          settingsResponse.maxPlayers >= 0
            ? settingsResponse.maxPlayers
            : 0;
        const password = settingsResponse.password || "";
        const defaultViewOnly = !!settingsResponse.defaultViewOnly;
        console.log("");
        for (const level of selected) {
          const room = roomManager.createRoomForLevel(
            level,
            maxPlayers,
            password,
            defaultViewOnly,
          );
          console.log(
            `  \x1b[32m\x1b[1m✓ Room created: "${room.levelName}" [${room.code}]\x1b[0m`,
          );
        }
        console.log("");
        printRoomsTable();
      } finally {
        if (rlAdmin) rlAdmin.resume();
      }
      break;
    }
    case "/close": {
      if (args.length !== 1)
        return console.log(
          "  \x1b[33mUsage:\x1b[0m /close <CODE>  (-nosave -silent -force)",
        );
      const closeAll = args[0].toLowerCase() === "all";
      const targets = [];
      if (closeAll) {
        for (const [code, room] of roomManager.rooms) {
          targets.push({ code, room });
        }
      } else {
        const code = args[0].toUpperCase();
        const room = roomManager.getRoom(code);
        if (!room)
          return console.log(`  \x1b[31mRoom not found:\x1b[0m ${code}`);
        targets.push({ code, room });
      }
      if (targets.length === 0)
        return console.log("  \x1b[33mNo rooms to close.\x1b[0m");
      const totalPlayers = targets.reduce(
        (sum, t) => sum + t.room.players.size,
        0,
      );
      if (totalPlayers > 0 && !flags.force) {
        if (rlAdmin) rlAdmin.pause();
        const confirm = await prompts({
          type: "confirm",
          name: "proceed",
          message: `${targets.length} room(s) with ${totalPlayers} active player(s). Close anyway?`,
          initial: false,
        });
        if (rlAdmin) rlAdmin.resume();
        if (!confirm.proceed) {
          console.log("  Cancelled.");
          return;
        }
      }
      for (const { code, room } of targets) {
        if (!flags.silent && room.players.size > 0) {
          const w = new proto.Writer();
          w.writeOpcode(proto.Opcode.ServerMessage);
          w.writeString("Room closed by admin");
          room._relayFrom(0, w.finish());
        }
        if (!flags.nosave) {
          try {
            const levelsDir = path.join(process.cwd(), "levels");
            const outFile = saveReader.exportToGmd(room, levelsDir, "_save");
            console.log(
              `  \x1b[35m[SAVE]\x1b[0m Saved "${room.levelName}" to ${path.basename(outFile)}`,
            );
          } catch (e) {
            console.error(
              `  \x1b[31m[ERROR]\x1b[0m Failed to save "${room.levelName}":`,
              e.message,
            );
          }
        }
        roomManager.deleteRoom(code);
        if (focusedRoomCode === code) focusedRoomCode = null;
        console.log(
          `  \x1b[31m\x1b[1m✗ Room closed: "${room.levelName}" [${code}]\x1b[0m`,
        );
      }
      break;
    }
    case "/players": {
      const room = requireFocusedRoom();
      if (!room) return;
      if (room.players.size === 0) {
        console.log(`  \x1b[36m[${room.code}]\x1b[0m No players connected.`);
        return;
      }
      console.log(
        `\n  \x1b[36m[${room.code}]\x1b[0m Players (${room.players.size}${room.maxPlayers > 0 ? "/" + room.maxPlayers : ""}):\n`,
      );
      console.log(
        "  \x1b[1mID\x1b[0m │ \x1b[1mName\x1b[0m               │ \x1b[1mView-Only\x1b[0m",
      );
      for (const [id, p] of room.players) {
        const vo = p.isViewOnly ? "\x1b[33myes\x1b[0m" : "no";
        console.log(
          `  ${String(id).padStart(2)} │ ${(p.name || "Unknown").padEnd(18)} │ ${vo}`,
        );
      }
      console.log("");
      break;
    }
    case "/kick": {
      if (args.length < 1)
        return console.log(
          "  \x1b[33mUsage:\x1b[0m /kick <playerId or Name>  (-reason=<text>)",
        );
      const room = requireFocusedRoom();
      if (!room) return;
      const pid = resolvePlayer(room, args[0]);
      if (pid === null)
        return console.log("  \x1b[31m\x1b[1m[ADMIN]\x1b[0m Player not found");
      const reason = flags.reason || "You have been kicked";
      const target = room.players.get(pid);
      if (target) {
        const errBuf = proto.serializeError(reason);
        target.ws.send(errBuf);
        target.ws.close(1008, "Kicked");
        room.removePlayer(pid);
      }
      console.log(
        `  \x1b[31m\x1b[1m[ADMIN]\x1b[0m Kicked player ${args[0]} (reason: ${reason})`,
      );
      break;
    }
    case "/ban": {
      if (args.length < 1)
        return console.log(
          "  \x1b[33mUsage:\x1b[0m /ban <playerId or Name>  (-reason=<text> -global)",
        );
      const room = requireFocusedRoom();
      if (!room) return;
      const pid = resolvePlayer(room, args[0]);
      if (pid === null)
        return console.log("  \x1b[31m\x1b[1m[ADMIN]\x1b[0m Player not found");
      const reason = flags.reason || "You have been banned";
      const target = room.players.get(pid);
      if (target) {
        if (flags.global) {
          for (const [, r] of roomManager.rooms) {
            r.banned.add(target.name);
          }
          console.log(
            `  \x1b[31m\x1b[1m[ADMIN]\x1b[0m Banned "${target.name}" from all rooms (reason: ${reason})`,
          );
        } else {
          room.banned.add(target.name);
          console.log(
            `  \x1b[31m\x1b[1m[ADMIN]\x1b[0m Banned "${target.name}" from "${room.levelName}" (reason: ${reason})`,
          );
        }
        const errBuf = proto.serializeError(reason);
        target.ws.send(errBuf);
        target.ws.close(1008, "Banned");
        room.removePlayer(pid);
      }
      break;
    }
    case "/unban": {
      if (args.length < 1)
        return console.log("  \x1b[33mUsage:\x1b[0m /unban <name>  (-global)");
      const name = args[0];
      if (flags.global) {
        for (const [, r] of roomManager.rooms) {
          r.banned.delete(name);
        }
        console.log(
          `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Unbanned "${name}" from all rooms.`,
        );
      } else {
        const room = requireFocusedRoom();
        if (!room) return;
        room.banned.delete(name);
        console.log(
          `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Unbanned "${name}" from "${room.levelName}".`,
        );
      }
      break;
    }
    case "/banlist": {
      const room = requireFocusedRoom();
      if (!room) return;
      if (room.banned.size === 0) {
        console.log(`  \x1b[36m[${room.code}]\x1b[0m Ban list is empty.`);
      } else {
        console.log(`\n  \x1b[36m[${room.code}]\x1b[0m Banned players:\n`);
        for (const name of room.banned) {
          console.log(`    • ${name}`);
        }
        console.log("");
      }
      break;
    }
    case "/viewonly": {
      if (args.length !== 2 || (args[1] !== "on" && args[1] !== "off")) {
        return console.log(
          "  \x1b[33mUsage:\x1b[0m /viewonly <playerId or Name> <on|off>",
        );
      }
      const room = requireFocusedRoom();
      if (!room) return;
      const pid = resolvePlayer(room, args[0]);
      if (pid === null)
        return console.log("  \x1b[31m\x1b[1m[ADMIN]\x1b[0m Player not found");
      const isOn = args[1] === "on";
      const w = new proto.Writer();
      w.writeOpcode(proto.Opcode.SetViewOnly);
      w.writeU32(pid);
      w.writeBool(isOn);
      room._relayFrom(0, w.finish());
      const player = room.players.get(pid);
      if (player) player.isViewOnly = isOn;
      console.log(
        `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Set view-only to ${isOn} for player ${args[0]}`,
      );
      break;
    }
    case "/message": {
      if (args.length === 0 || args[0] === "")
        return console.log(
          "  \x1b[33mUsage:\x1b[0m /message <text>  (-global)",
        );
      const text = args[0];
      if (flags.global) {
        for (const [, room] of roomManager.rooms) {
          const w = new proto.Writer();
          w.writeOpcode(proto.Opcode.ServerMessage);
          w.writeString(text);
          room._relayFrom(0, w.finish());
        }
        console.log(
          `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Broadcasted to all rooms: ${text}`,
        );
      } else {
        const room = requireFocusedRoom();
        if (!room) return;
        const w = new proto.Writer();
        w.writeOpcode(proto.Opcode.ServerMessage);
        w.writeString(text);
        room._relayFrom(0, w.finish());
        console.log(
          `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Broadcasted to "${room.levelName}": ${text}`,
        );
      }
      break;
    }
    case "/save": {
      const rooms = [];
      if (flags.all) {
        for (const [, room] of roomManager.rooms) rooms.push(room);
      } else {
        const room = requireFocusedRoom();
        if (!room) return;
        rooms.push(room);
      }
      for (const room of rooms) {
        try {
          const levelsDir = path.join(process.cwd(), "levels");
          const outFile = saveReader.exportToGmd(room, levelsDir, "_save");
          console.log(
            `  \x1b[35m[SAVE]\x1b[0m Saved "${room.levelName}" to ${path.basename(outFile)}`,
          );
        } catch (e) {
          console.error(
            `  \x1b[31m[ERROR]\x1b[0m Failed to save "${room.levelName}":`,
            e.message,
          );
        }
      }
      break;
    }
    case "/export": {
      const rooms = [];
      if (flags.all) {
        for (const [, room] of roomManager.rooms) rooms.push(room);
      } else {
        const room = requireFocusedRoom();
        if (!room) return;
        rooms.push(room);
      }
      const outDir = flags.dir || path.join(process.cwd(), "levels");
      for (const room of rooms) {
        try {
          const outFile = saveReader.exportToGmd(room, outDir);
          console.log(
            `  \x1b[35m[EXPORT]\x1b[0m Exported "${room.levelName}" to ${outFile}`,
          );
        } catch (e) {
          console.error(
            `  \x1b[31m[ERROR]\x1b[0m Failed to export "${room.levelName}":`,
            e.message,
          );
        }
      }
      break;
    }
    case "/password": {
      const room = requireFocusedRoom();
      if (!room) return;
      if (args.length === 0)
        return console.log(
          '  \x1b[33mUsage:\x1b[0m /password <password>  (use "none" to remove)',
        );
      const pass =
        args[0].toLowerCase() === "none" || args[0] === '""' ? "" : args[0];
      room.password = pass;
      if (pass) {
        console.log(
          `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Password set for "${room.levelName}".`,
        );
      } else {
        console.log(
          `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Password removed for "${room.levelName}".`,
        );
      }
      break;
    }
    case "/maxplayers": {
      const room = requireFocusedRoom();
      if (!room) return;
      if (args.length !== 1)
        return console.log("  \x1b[33mUsage:\x1b[0m /maxplayers <count>");
      const count = parseInt(args[0]);
      if (isNaN(count) || count < 0)
        return console.log("  \x1b[31mInvalid number.\x1b[0m");
      room.maxPlayers = count;
      console.log(
        `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Max players set to ${count === 0 ? "unlimited" : count} for "${room.levelName}".`,
      );
      break;
    }
    case "/rename": {
      const room = requireFocusedRoom();
      if (!room) return;
      if (args.length === 0 || args[0] === "")
        return console.log("  \x1b[33mUsage:\x1b[0m /rename <name>");
      const newName = args[0];
      room.levelName = newName;
      if (room.settings) room.settings.levelName = newName;
      console.log(
        `  \x1b[36m\x1b[1m[ADMIN]\x1b[0m Room renamed to "${newName}".`,
      );
      break;
    }
    case "/status": {
      const uptime = formatUptime(Date.now() - serverStartTime);
      let totalPlayers = 0;
      for (const [, room] of roomManager.rooms) {
        totalPlayers += room.players.size;
      }
      const memUsage = (process.memoryUsage().heapUsed / 1024 / 1024).toFixed(
        1,
      );
      console.log("");
      console.log("  \x1b[36m\x1b[1mServer Status\x1b[0m");
      console.log(`  Uptime:        ${uptime}`);
      console.log(`  Port:          ${roomManager.port}`);
      console.log(`  Rooms:         ${roomManager.rooms.size}`);
      console.log(`  Total Players: ${totalPlayers}`);
      console.log(`  Memory:        ${memUsage} MB`);
      console.log(
        `  Autosave:      ${globalAutosaveInterval > 0 ? "every " + globalAutosaveInterval + " min" : "disabled"}`,
      );
      console.log("");
      break;
    }
    case "/token": {
      if (args.length === 0)
        return console.log(
          "  \x1b[33mUsage:\x1b[0m /token <generate|remove|list> [args]",
        );
      const sub = args[0].toLowerCase();
      if (sub === "generate") {
        const token = crypto.randomBytes(16).toString("hex");
        roomManager.addToken(token);
        console.log(
          `  \x1b[32m\x1b[1m[TOKEN]\x1b[0m Generated new token: \x1b[36m${token}\x1b[0m`,
        );
      } else if (sub === "remove") {
        if (args.length < 2)
          return console.log("  \x1b[33mUsage:\x1b[0m /token remove <token>");
        const success = roomManager.removeToken(args[1]);
        if (success)
          console.log(
            `  \x1b[31m\x1b[1m[TOKEN]\x1b[0m Removed token: ${args[1]}`,
          );
        else console.log(`  \x1b[31mToken not found.\x1b[0m`);
      } else if (sub === "list") {
        console.log(
          `\n  \x1b[36m\x1b[1mValid Tokens (\x1b[0m${roomManager.tokens.size}\x1b[36m\x1b[1m)\x1b[0m\n`,
        );
        for (const t of roomManager.tokens) {
          console.log(`    • ${t}`);
        }
        console.log("");
      } else {
        console.log("  \x1b[31mUnknown /token subcommand.\x1b[0m");
      }
      break;
    }
    case "/makeconfig": {
      if (fs.existsSync(configPath)) {
        if (rlAdmin) rlAdmin.pause();
        const confirm = await prompts({
          type: "confirm",
          name: "proceed",
          message: "This will overwrite the current config.json, proceed?",
          initial: false,
        });
        if (rlAdmin) rlAdmin.resume();
        if (!confirm.proceed) {
          console.log("  \x1b[33mCancelled.\x1b[0m");
          break;
        }
      }
      
      serverConfig.useConfig = 1;
      try {
        fs.writeFileSync(configPath, JSON.stringify(serverConfig, null, 2), "utf8");
        console.log("  \x1b[32m\x1b[1m[CONFIG]\x1b[0m Saved current startup settings to config.json");
      } catch (e) {
        console.error("  \x1b[31m[ERROR]\x1b[0m Failed to save config.json:", e.message);
      }
      break;
    }
    case "/help": {
      printHelp();
      break;
    }
    case "/stop": {
      let totalPlayers = 0;
      for (const [, room] of roomManager.rooms) {
        totalPlayers += room.players.size;
      }
      if (totalPlayers > 0 && !flags.force) {
        if (rlAdmin) rlAdmin.pause();
        const confirm = await prompts({
          type: "confirm",
          name: "proceed",
          message: `${totalPlayers} player(s) still connected. Shut down?`,
          initial: false,
        });
        if (rlAdmin) rlAdmin.resume();
        if (!confirm.proceed) {
          console.log("  Cancelled.");
          return;
        }
      }
      console.log("\x1b[31m\x1b[1m[ADMIN]\x1b[0m Stopping server...");
      for (const [, room] of roomManager.rooms) {
        if (room.players.size > 0) {
          const w = new proto.Writer();
          w.writeOpcode(proto.Opcode.ServerMessage);
          w.writeString("Server shutting down");
          room._relayFrom(0, w.finish());
        }
      }
      if (!flags.nosave) {
        for (const [, room] of roomManager.rooms) {
          try {
            const levelsDir = path.join(process.cwd(), "levels");
            const outFile = saveReader.exportToGmd(room, levelsDir, "_save");
            console.log(
              `  \x1b[35m[SAVE]\x1b[0m Saved "${room.levelName}" to ${path.basename(outFile)}`,
            );
          } catch (e) {
            console.error(
              `  \x1b[31m[ERROR]\x1b[0m Failed to save "${room.levelName}":`,
              e.message,
            );
          }
        }
      }
      wsServer.stop();
      roomManager.stop();
      process.exit(0);
      break;
    }
    default:
      console.log(
        "  \x1b[31mUnknown command.\x1b[0m Type \x1b[1m/help\x1b[0m for a list of commands.",
      );
  }
}
async function main() {
  console.log(
    "\x1b[36m\x1b[1m MultiplayerEdit Dedicated Server \x1b[0m\n",
  );
  const levels = await promptAndLoadLevels();
  if (levels.length === 0 && !levels._skip) {
    console.error(
      "\n\x1b[31m[ERROR]\x1b[0m No levels found to host. Exiting...",
    );
    process.exit(1);
  }
  let selectedLevels = [];
  let response = { port: 7575, maxPlayers: 0, password: '', autosaveInterval: 0 };
  
  if (!levels._skip) {
      selectedLevels = await selectLevels(levels);
      if (selectedLevels.length === 0) {
        console.error("No levels selected. Exiting...");
        process.exit(0);
      }
      
      if (serverConfig.useConfig === 1) {
        response = serverConfig;
      } else {
        response = await prompts([
          {
            type: "number",
            name: "port",
            message: "Port",
            initial: 7575,
          },
          {
            type: "number",
            name: "maxPlayers",
            message: "Max Players per room (0 for unlimited)",
            initial: 0,
          },
          {
            type: "text",
            name: "password",
            message: "Server Password (leave blank for none)",
          },
          {
            type: "number",
            name: "autosaveInterval",
            message: "Autosave interval in minutes (0 to disable)",
            initial: 0,
          },
          {
            type: "toggle",
            name: "defaultViewOnly",
            message: "Default new players to view-only mode?",
            initial: false,
            active: "yes",
            inactive: "no",
          }
        ]);
      }
  } else {
      if (serverConfig.useConfig === 1) {
        response = serverConfig;
      } else {
        response = await prompts([
          {
            type: "number",
            name: "port",
            message: "Port",
            initial: 7575,
          },
          {
            type: "number",
            name: "autosaveInterval",
            message: "Autosave interval in minutes (0 to disable)",
            initial: 0,
          }
        ]);
        response.maxPlayers = 0;
        response.password = '';
        response.defaultViewOnly = false;
      }
  }
  if (serverConfig.useConfig !== 1) {
    serverConfig.port = response.port || 7575;
    serverConfig.maxPlayers = response.maxPlayers ?? 0;
    serverConfig.password = response.password || "";
    serverConfig.autosaveInterval = response.autosaveInterval ?? 0;
    serverConfig.defaultViewOnly = !!response.defaultViewOnly;
  }
  const port =
    typeof response.port === "number" &&
    isFinite(response.port) &&
    response.port > 0
      ? response.port
      : 7575;
  const maxPlayers =
    typeof response.maxPlayers === "number" &&
    isFinite(response.maxPlayers) &&
    response.maxPlayers >= 0
      ? response.maxPlayers
      : 0;
  const roomPassword = response.password || "";
  globalAutosaveInterval =
    typeof response.autosaveInterval === "number" &&
    isFinite(response.autosaveInterval) &&
    response.autosaveInterval >= 0
      ? response.autosaveInterval
      : 5;
  const defaultViewOnly = !!response.defaultViewOnly;
  roomManager = new RoomManager();
  wsServer = new WSServer(roomManager);
  console.log("\nStarting server...");
  roomManager.start(port, false);
  console.log("");
  for (const level of selectedLevels) {
    const room = roomManager.createRoomForLevel(
      level,
      maxPlayers,
      roomPassword,
      defaultViewOnly,
    );
    console.log(
      `  \x1b[32m\x1b[1m✓ Room created: "${room.levelName}" [${room.code}]\x1b[0m`,
    );
  }
  if (globalAutosaveInterval > 0) {
    autosaveTimer = setInterval(() => {
      roomManager._performAutoSave();
    }, globalAutosaveInterval * 60000);
    console.log(
      `\n  \x1b[32m✓ Autosave enabled (every ${globalAutosaveInterval} minutes)\x1b[0m`,
    );
  }
  await wsServer.start(port);
  serverStartTime = Date.now();
  if (roomManager.rooms.size === 1) {
    focusedRoomCode = roomManager.rooms.keys().next().value;
  }
  printRoomsTable();
  console.log(`\x1b[36m\x1b[1m  Server running on port ${port}!\x1b[0m`);
  if (roomManager.rooms.size === 1) {
    console.log(
      `\x1b[33m  Players can connect by entering 'ws://<your-ip>:${port}' in the game.\x1b[0m`,
    );
  } else {
    console.log(
      `\x1b[33m  Players must connect with a room code: 'ws://<your-ip>:${port}/<CODE>'\x1b[0m`,
    );
  }
  console.log("\n  Type \x1b[1m/help\x1b[0m for a list of admin commands.\n");
  rlAdmin = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  rlAdmin.on("line", async (line) => {
    const parsed = parseCommand(line);
    if (!parsed) return;
    try {
      await handleCommand(parsed);
    } catch (e) {
      console.error(`  \x1b[31m[ERROR]\x1b[0m Command failed:`, e.message);
    }
  });
}
main().catch(console.error);
