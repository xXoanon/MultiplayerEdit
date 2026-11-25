const Opcode = {
    PlaceObjects:       0x01,
    DeleteObjects:      0x02,
    MoveObjects:        0x03,
    TransformObjects:   0x04,
    UpdateObjects:      0x05,
    LockObjects:        0x06,
    ReconcileObjects:   0x07,
    SyncLevelStart:     0x10,
    SyncLevelChunk:     0x11,
    SyncLevelEnd:       0x12,
    RequestSnapshot:    0x13,
    SyncLocksChunk:     0x14,
    UpdateSettings:     0x20,
    UpdateColorChannel: 0x21,
    PlayerJoined:       0x30,
    PlayerLeft:         0x31,
    RoomInfo:           0x32,
    HostMigration:      0x33,
    Reconnect:          0x34,
    SetViewOnly:        0x35,
    KickPlayer:         0x36,
    BanPlayer:          0x37,
    ServerMessage:      0x38,
    CursorUpdate:       0x40,
    MoveBatch:          0x41,
    ChatMessage:        0x42,
    Heartbeat:          0x50,
    Ping:               0x51,
    Pong:               0x52,
    PingUpdate:         0x53,
    Error:              0xFF,
    Relay:              0xFE,
};
class Writer {
    constructor(reserve = 256) {
        this.buf = Buffer.alloc(reserve);
        this.pos = 0;
    }
    _grow(needed) {
        while (this.pos + needed > this.buf.length) {
            const next = Buffer.alloc(this.buf.length * 2);
            this.buf.copy(next);
            this.buf = next;
        }
    }
    writeU8(v) {
        this._grow(1);
        this.buf[this.pos++] = v & 0xFF;
    }
    writeU16(v) {
        this._grow(2);
        this.buf.writeUInt16LE(v, this.pos);
        this.pos += 2;
    }
    writeU32(v) {
        this._grow(4);
        this.buf.writeUInt32LE(v >>> 0, this.pos);
        this.pos += 4;
    }
    writeI32(v) {
        this._grow(4);
        this.buf.writeInt32LE(v, this.pos);
        this.pos += 4;
    }
    writeF32(v) {
        this._grow(4);
        this.buf.writeFloatLE(v, this.pos);
        this.pos += 4;
    }
    writeVarInt(v) {
        v = v >>> 0;
        while (v >= 0x80) {
            this.writeU8((v & 0x7F) | 0x80);
            v >>>= 7;
        }
        this.writeU8(v);
    }
    writeString(s) {
        const bytes = Buffer.from(s, 'utf-8');
        this.writeVarInt(bytes.length);
        this._grow(bytes.length);
        bytes.copy(this.buf, this.pos);
        this.pos += bytes.length;
    }
    writeBool(v) {
        this.writeU8(v ? 1 : 0);
    }
    writeBytes(buf, offset, length) {
        this._grow(length);
        buf.copy(this.buf, this.pos, offset, offset + length);
        this.pos += length;
    }
    writeOpcode(op) {
        this.writeU8(op);
    }
    finish() {
        return Buffer.from(this.buf.buffer, this.buf.byteOffset, this.pos);
    }
}
class Reader {
    constructor(buf) {
        this.buf = buf;
        this.pos = 0;
        this.error = false;
    }
    _check(n) {
        if (this.error) return false;
        if (this.pos + n > this.buf.length) {
            this.error = true;
            return false;
        }
        return true;
    }
    readU8() {
        if (!this._check(1)) return 0;
        return this.buf[this.pos++];
    }
    readU16() {
        if (!this._check(2)) return 0;
        const v = this.buf.readUInt16LE(this.pos);
        this.pos += 2;
        return v;
    }
    readU32() {
        if (!this._check(4)) return 0;
        const v = this.buf.readUInt32LE(this.pos);
        this.pos += 4;
        return v;
    }
    readI32() {
        if (!this._check(4)) return 0;
        const v = this.buf.readInt32LE(this.pos);
        this.pos += 4;
        return v;
    }
    readF32() {
        if (!this._check(4)) return 0;
        const v = this.buf.readFloatLE(this.pos);
        this.pos += 4;
        return v;
    }
    readVarInt() {
        if (this.error) return 0;
        let v = 0, shift = 0;
        while (true) {
            if (!this._check(1)) return 0;
            const b = this.buf[this.pos++];
            v |= (b & 0x7F) << shift;
            if ((b & 0x80) === 0) break;
            shift += 7;
            if (shift >= 35) {
                this.error = true;
                return 0;
            }
        }
        return v >>> 0;
    }
    readString() {
        if (this.error) return '';
        const len = this.readVarInt();
        if (this.error || !this._check(len)) return '';
        const s = this.buf.toString('utf-8', this.pos, this.pos + len);
        this.pos += len;
        return s;
    }
    readBool() {
        return this.readU8() !== 0;
    }
    readOpcode() {
        return this.readU8();
    }
    readBytes(n) {
        if (!this._check(n)) return Buffer.alloc(0);
        const slice = Buffer.from(this.buf.buffer, this.buf.byteOffset + this.pos, n);
        this.pos += n;
        return slice;
    }
    skip(n) {
        if (!this._check(n)) return;
        this.pos += n;
    }
    remaining() {
        return this.error ? 0 : this.buf.length - this.pos;
    }
    hasRemaining() {
        return !this.error && this.pos < this.buf.length;
    }
}
function writeObjectData(w, obj) {
    w.writeString(obj.uuid);
    w.writeString(obj.saveString);
    w.writeVarInt(obj.objectID);
    w.writeF32(obj.x);
    w.writeF32(obj.y);
    w.writeF32(obj.rotation);
    w.writeF32(obj.scaleX);
    w.writeF32(obj.scaleY);
    let flags = 0;
    if (obj.flipX) flags |= 0x01;
    if (obj.flipY) flags |= 0x02;
    w.writeU8(flags);
    w.writeI32(obj.zOrder);
    w.writeVarInt(obj.editorLayer);
    w.writeVarInt(obj.editorLayer2);
    w.writeI32(obj.mainColorChannel);
    w.writeI32(obj.secondColorChannel);
    w.writeVarInt(obj.groups.length);
    for (const g of obj.groups) {
        w.writeVarInt(g);
    }
}
function readObjectData(r) {
    const obj = {
        uuid: r.readString(),
        saveString: r.readString(),
        objectID: r.readVarInt(),
        x: r.readF32(),
        y: r.readF32(),
        rotation: r.readF32(),
        scaleX: r.readF32(),
        scaleY: r.readF32(),
    };
    const flags = r.readU8();
    obj.flipX = (flags & 0x01) !== 0;
    obj.flipY = (flags & 0x02) !== 0;
    obj.zOrder = r.readI32();
    obj.editorLayer = r.readVarInt();
    obj.editorLayer2 = r.readVarInt();
    obj.mainColorChannel = r.readI32();
    obj.secondColorChannel = r.readI32();
    const groupCount = r.readVarInt();
    obj.groups = [];
    for (let i = 0; i < groupCount; i++) {
        obj.groups.push(r.readVarInt());
    }
    return obj;
}
function writeMoveData(w, m) {
    w.writeString(m.uuid);
    w.writeF32(m.dx);
    w.writeF32(m.dy);
}
function readMoveData(r) {
    return {
        uuid: r.readString(),
        dx: r.readF32(),
        dy: r.readF32(),
    };
}
function writeTransformData(w, t) {
    w.writeString(t.uuid);
    w.writeF32(t.rotation);
    w.writeF32(t.scaleX);
    w.writeF32(t.scaleY);
    let flags = 0;
    if (t.flipX) flags |= 0x01;
    if (t.flipY) flags |= 0x02;
    w.writeU8(flags);
}
function readTransformData(r) {
    const t = {
        uuid: r.readString(),
        rotation: r.readF32(),
        scaleX: r.readF32(),
        scaleY: r.readF32(),
    };
    const flags = r.readU8();
    t.flipX = (flags & 0x01) !== 0;
    t.flipY = (flags & 0x02) !== 0;
    return t;
}
function writeLockData(w, lock) {
    w.writeString(lock.uuid);
    w.writeVarInt(lock.playerId);
    w.writeF32(lock.timeLeft);
}
function readLockData(r) {
    return {
        uuid: r.readString(),
        playerId: r.readVarInt(),
        timeLeft: r.readF32(),
    };
}
function writeSettingsData(w, s) {
    w.writeString(s.saveString);
    w.writeVarInt(s.audioTrack);
    w.writeVarInt(s.songID);
    w.writeF32(s.levelLength);
    w.writeString(s.levelName || "");
}
function readSettingsData(r) {
    return {
        saveString: r.readString(),
        audioTrack: r.readVarInt(),
        songID: r.readVarInt(),
        levelLength: r.readF32(),
        levelName: r.readString(),
    };
}
function serializePlaceObjects(objects) {
    const w = new Writer();
    w.writeOpcode(Opcode.PlaceObjects);
    w.writeVarInt(objects.length);
    for (const obj of objects) writeObjectData(w, obj);
    return w.finish();
}
function serializeDeleteObjects(uuids) {
    const w = new Writer();
    w.writeOpcode(Opcode.DeleteObjects);
    w.writeVarInt(uuids.length);
    for (const uuid of uuids) w.writeString(uuid);
    return w.finish();
}
function serializeLockObjects(uuids, locked) {
    const w = new Writer();
    w.writeOpcode(Opcode.LockObjects);
    w.writeBool(locked);
    w.writeVarInt(uuids.length);
    for (const uuid of uuids) w.writeString(uuid);
    return w.finish();
}
function serializePlayerJoined(playerId, name, colorIndex, iconStr = "") {
    const w = new Writer();
    w.writeOpcode(Opcode.PlayerJoined);
    w.writeVarInt(playerId);
    w.writeString(name);
    w.writeVarInt(colorIndex);
    w.writeString(iconStr);
    return w.finish();
}
function serializePlayerLeft(playerId) {
    const w = new Writer();
    w.writeOpcode(Opcode.PlayerLeft);
    w.writeVarInt(playerId);
    return w.finish();
}
function serializeRoomInfo(localPlayerId, players) {
    const w = new Writer();
    w.writeOpcode(Opcode.RoomInfo);
    w.writeVarInt(localPlayerId);
    w.writeVarInt(players.length);
    for (const p of players) {
        w.writeVarInt(p.id);
        w.writeString(p.name);
        w.writeVarInt(p.colorIndex);
        w.writeString(p.iconStr || "");
    }
    return w.finish();
}
function serializeError(message) {
    const w = new Writer();
    w.writeOpcode(Opcode.Error);
    w.writeString(message);
    return w.finish();
}
function serializeSyncLevelStart(totalChunks, totalObjects, settings) {
    const w = new Writer();
    w.writeOpcode(Opcode.SyncLevelStart);
    w.writeVarInt(totalChunks);
    w.writeVarInt(totalObjects);
    writeSettingsData(w, settings);
    return w.finish();
}
function serializeSyncLevelChunk(chunkIndex, data, uuids) {
    const w = new Writer();
    w.writeOpcode(Opcode.SyncLevelChunk);
    w.writeVarInt(chunkIndex);
    w.writeVarInt(data.length);
    w.writeBytes(data, 0, data.length);
    w.writeVarInt(uuids.length);
    for (const uuid of uuids) w.writeString(uuid);
    return w.finish();
}
function serializeSyncLevelEnd() {
    const w = new Writer();
    w.writeOpcode(Opcode.SyncLevelEnd);
    return w.finish();
}

function serializeSyncLocksChunk(locks) {
    const w = new Writer();
    w.writeOpcode(Opcode.SyncLocksChunk);
    w.writeVarInt(locks.length);
    for (const lock of locks) writeLockData(w, lock);
    return w.finish();
}
function serializeRelay(fromPlayerId, payload) {
    const w = new Writer();
    w.writeOpcode(Opcode.Relay);
    w.writeVarInt(fromPlayerId);
    w.writeBytes(payload, 0, payload.length);
    return w.finish();
}
function serializeRequestSnapshot() {
    const w = new Writer();
    w.writeOpcode(Opcode.RequestSnapshot);
    return w.finish();
}
function serializeHeartbeat() {
    const w = new Writer();
    w.writeOpcode(Opcode.Heartbeat);
    return w.finish();
}
function deserializePlaceObjects(r) {
    const count = r.readVarInt();
    const objects = [];
    for (let i = 0; i < count; i++) objects.push(readObjectData(r));
    return { objects };
}
function deserializeDeleteObjects(r) {
    const count = r.readVarInt();
    const uuids = [];
    for (let i = 0; i < count; i++) uuids.push(r.readString());
    return { uuids };
}
function deserializeMoveObjects(r) {
    const count = r.readVarInt();
    const moves = [];
    for (let i = 0; i < count; i++) moves.push(readMoveData(r));
    return { moves };
}
function deserializeTransformObjects(r) {
    const count = r.readVarInt();
    const transforms = [];
    for (let i = 0; i < count; i++) transforms.push(readTransformData(r));
    return { transforms };
}
function deserializeUpdateObjects(r) {
    const count = r.readVarInt();
    const objects = [];
    for (let i = 0; i < count; i++) objects.push(readObjectData(r));
    return { objects };
}
function deserializeLockObjects(r) {
    const locked = r.readBool();
    const count = r.readVarInt();
    const uuids = [];
    for (let i = 0; i < count; i++) uuids.push(r.readString());
    return { locked, uuids };
}
function deserializeSyncLevelStart(r) {
    return {
        totalChunks: r.readVarInt(),
        totalObjects: r.readVarInt(),
        settings: readSettingsData(r),
    };
}
function deserializeSyncLevelChunk(r) {
    const chunkIndex = r.readVarInt();
    const dataLen = r.readVarInt();
    const data = r.readBytes(dataLen);
    const uuidCount = r.readVarInt();
    const uuids = [];
    for (let i = 0; i < uuidCount; i++) uuids.push(r.readString());
    return { chunkIndex, data, uuids };
}
function deserializeSyncLevelEnd(r) {
    return {};
}

function deserializeSyncLocksChunk(r) {
    const lockCount = r.readVarInt();
    const locks = [];
    for (let i = 0; i < lockCount; i++) locks.push(readLockData(r));
    return { locks };
}
function deserializePlayerJoined(r) {
    return {
        playerId: r.readVarInt(),
        name: r.readString(),
        colorIndex: r.readVarInt(),
        iconStr: r.hasRemaining() ? r.readString() : "",
    };
}
function deserializeCursorUpdate(r) {
    return {
        x: r.readF32(),
        y: r.readF32(),
        status: r.readString(),
    };
}

function deserializeChatMessage(r) {
    return { message: r.readString() };
}

function deserializeUpdateSettings(r) {
    return { settings: readSettingsData(r) };
}
module.exports = {
    Opcode,
    Writer,
    Reader,
    writeObjectData, readObjectData,
    writeMoveData, readMoveData,
    writeTransformData, readTransformData,
    writeLockData, readLockData,
    writeSettingsData, readSettingsData,
    serializePlaceObjects,
    serializeDeleteObjects,
    serializeLockObjects,
    serializePlayerJoined,
    serializePlayerLeft,
    serializeRoomInfo,
    serializeError,
    serializeSyncLevelStart,
    serializeSyncLevelChunk,
    serializeSyncLevelEnd,
    serializeSyncLocksChunk,
    serializeRelay,
    serializeRequestSnapshot,
    serializeHeartbeat,
    deserializePlaceObjects,
    deserializeDeleteObjects,
    deserializeMoveObjects,
    deserializeTransformObjects,
    deserializeUpdateObjects,
    deserializeLockObjects,
    deserializeSyncLevelStart,
    deserializeSyncLevelChunk,
    deserializeSyncLevelEnd,
    deserializeSyncLocksChunk,
    serializeSyncLocksChunk,
    deserializePlayerJoined,
    deserializeCursorUpdate,
    deserializeChatMessage,
    deserializeUpdateSettings,
};
