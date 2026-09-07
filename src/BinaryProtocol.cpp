#include "BinaryProtocol.hpp"

namespace mpedit::proto {


    void writeObjectData(Writer& w, ActionSerializer::ObjectData const& obj) {
        w.writeString(obj.uuid);
        w.writeString(obj.saveString);
        w.writeVarInt(static_cast<uint32_t>(obj.objectID));
        w.writeF32(obj.x);
        w.writeF32(obj.y);
        w.writeF32(obj.rotation);
        w.writeF32(obj.scaleX);
        w.writeF32(obj.scaleY);
        uint8_t flags = 0;
        if (obj.flipX) flags |= 0x01;
        if (obj.flipY) flags |= 0x02;
        w.writeU8(flags);
        w.writeI32(obj.zOrder);
        w.writeVarInt(static_cast<uint32_t>(obj.editorLayer));
        w.writeVarInt(static_cast<uint32_t>(obj.editorLayer2));
        w.writeI32(obj.mainColorChannel);
        w.writeI32(obj.secondColorChannel);
        w.writeVarInt(static_cast<uint32_t>(obj.groups.size()));
        for (auto g : obj.groups) {
            w.writeVarInt(static_cast<uint32_t>(g));
        }
    }

    ActionSerializer::ObjectData readObjectData(Reader& r) {
        ActionSerializer::ObjectData obj;
        obj.uuid = r.readString();
        obj.saveString = r.readString();
        obj.objectID = static_cast<int>(r.readVarInt());
        obj.x = r.readF32();
        obj.y = r.readF32();
        obj.rotation = r.readF32();
        obj.scaleX = r.readF32();
        obj.scaleY = r.readF32();
        uint8_t flags = r.readU8();
        obj.flipX = (flags & 0x01) != 0;
        obj.flipY = (flags & 0x02) != 0;
        obj.zOrder = r.readI32();
        obj.editorLayer = static_cast<int>(r.readVarInt());
        obj.editorLayer2 = static_cast<int>(r.readVarInt());
        obj.mainColorChannel = r.readI32();
        obj.secondColorChannel = r.readI32();
        uint32_t groupCount = r.readVarInt();
        obj.groups.resize(groupCount);
        for (uint32_t i = 0; i < groupCount; ++i) {
            obj.groups[i] = static_cast<int>(r.readVarInt());
        }
        return obj;
    }

    void writeMoveData(Writer& w, ActionSerializer::MoveData const& move) {
        w.writeString(move.uuid);
        w.writeF32(move.dx);
        w.writeF32(move.dy);
    }

    ActionSerializer::MoveData readMoveData(Reader& r) {
        ActionSerializer::MoveData m;
        m.uuid = r.readString();
        m.dx = r.readF32();
        m.dy = r.readF32();
        return m;
    }

    void writeTransformData(Writer& w, ActionSerializer::TransformData const& t) {
        w.writeString(t.uuid);
        w.writeF32(t.rotation);
        w.writeF32(t.scaleX);
        w.writeF32(t.scaleY);
        uint8_t flags = 0;
        if (t.flipX) flags |= 0x01;
        if (t.flipY) flags |= 0x02;
        w.writeU8(flags);
    }

    ActionSerializer::TransformData readTransformData(Reader& r) {
        ActionSerializer::TransformData t;
        t.uuid = r.readString();
        t.rotation = r.readF32();
        t.scaleX = r.readF32();
        t.scaleY = r.readF32();
        uint8_t flags = r.readU8();
        t.flipX = (flags & 0x01) != 0;
        t.flipY = (flags & 0x02) != 0;
        return t;
    }

    void writeReconcileData(Writer& w, ActionSerializer::ReconcileData const& r) {
        w.writeString(r.uuid);
        w.writeF32(r.x);
        w.writeF32(r.y);
        w.writeF32(r.rotation);
        w.writeF32(r.scaleX);
        w.writeF32(r.scaleY);
        uint8_t flags = 0;
        if (r.flipX) flags |= 0x01;
        if (r.flipY) flags |= 0x02;
        w.writeU8(flags);
    }

    ActionSerializer::ReconcileData readReconcileData(Reader& r) {
        ActionSerializer::ReconcileData data;
        data.uuid = r.readString();
        data.x = r.readF32();
        data.y = r.readF32();
        data.rotation = r.readF32();
        data.scaleX = r.readF32();
        data.scaleY = r.readF32();
        uint8_t flags = r.readU8();
        data.flipX = (flags & 0x01) != 0;
        data.flipY = (flags & 0x02) != 0;
        return data;
    }

    void writeLockData(Writer& w, ActionSerializer::LockData const& lock) {
        w.writeString(lock.uuid);
        w.writeVarInt(static_cast<uint32_t>(lock.playerId));
        w.writeF32(lock.timeLeft);
    }

    ActionSerializer::LockData readLockData(Reader& r) {
        ActionSerializer::LockData l;
        l.uuid = r.readString();
        l.playerId = static_cast<int>(r.readVarInt());
        l.timeLeft = r.readF32();
        return l;
    }

    void writeSettingsData(Writer& w, ActionSerializer::LevelSettingsData const& s) {
        w.writeString(s.saveString);
        w.writeVarInt(static_cast<uint32_t>(s.audioTrack));
        w.writeVarInt(static_cast<uint32_t>(s.songID));
        w.writeF32(s.levelLength);
        w.writeString(s.levelName);
    }

    ActionSerializer::LevelSettingsData readSettingsData(Reader& r) {
        ActionSerializer::LevelSettingsData s;
        s.saveString = r.readString();
        s.audioTrack = static_cast<int>(r.readVarInt());
        s.songID = static_cast<int>(r.readVarInt());
        s.levelLength = r.readF32();
        s.levelName = r.readString();
        return s;
    }


    std::vector<uint8_t> serializePlaceObjects(
        std::vector<ActionSerializer::ObjectData> const& objects)
    {
        Writer w;
        w.writeOpcode(Opcode::PlaceObjects);
        w.writeVarInt(static_cast<uint32_t>(objects.size()));
        for (auto const& obj : objects) {
            writeObjectData(w, obj);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeDeleteObjects(
        std::vector<std::string> const& uuids)
    {
        Writer w;
        w.writeOpcode(Opcode::DeleteObjects);
        w.writeVarInt(static_cast<uint32_t>(uuids.size()));
        for (auto const& uuid : uuids) {
            w.writeString(uuid);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeMoveObjects(
        std::vector<ActionSerializer::MoveData> const& moves)
    {
        Writer w;
        w.writeOpcode(Opcode::MoveObjects);
        w.writeVarInt(static_cast<uint32_t>(moves.size()));
        for (auto const& m : moves) {
            writeMoveData(w, m);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeTransformObjects(
        std::vector<ActionSerializer::TransformData> const& transforms)
    {
        Writer w;
        w.writeOpcode(Opcode::TransformObjects);
        w.writeVarInt(static_cast<uint32_t>(transforms.size()));
        for (auto const& t : transforms) {
            writeTransformData(w, t);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeReconcileObjects(
        std::vector<ActionSerializer::ReconcileData> const& reconciles)
    {
        Writer w;
        w.writeOpcode(Opcode::ReconcileObjects);
        w.writeVarInt(static_cast<uint32_t>(reconciles.size()));
        for (auto const& r : reconciles) {
            writeReconcileData(w, r);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeUpdateObjects(
        std::vector<ActionSerializer::ObjectData> const& objects)
    {
        Writer w;
        w.writeOpcode(Opcode::UpdateObjects);
        w.writeVarInt(static_cast<uint32_t>(objects.size()));
        for (auto const& obj : objects) {
            writeObjectData(w, obj);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeLockObjects(
        std::vector<std::string> const& uuids, bool locked)
    {
        Writer w;
        w.writeOpcode(Opcode::LockObjects);
        w.writeBool(locked);
        w.writeVarInt(static_cast<uint32_t>(uuids.size()));
        for (auto const& uuid : uuids) {
            w.writeString(uuid);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeCursorUpdate(
        float x, float y, std::string const& status)
    {
        Writer w;
        w.writeOpcode(Opcode::CursorUpdate);
        w.writeF32(x);
        w.writeF32(y);
        w.writeString(status);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeMoveBatch(
        std::vector<ActionSerializer::MoveData> const& moves)
    {
        Writer w;
        w.writeOpcode(Opcode::MoveBatch);
        w.writeVarInt(static_cast<uint32_t>(moves.size()));
        for (auto const& m : moves) {
            writeMoveData(w, m);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeUpdateSettings(
        ActionSerializer::LevelSettingsData const& settings)
    {
        Writer w;
        w.writeOpcode(Opcode::UpdateSettings);
        writeSettingsData(w, settings);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeSyncLevelStart(
        uint32_t totalChunks, uint32_t totalObjects,
        ActionSerializer::LevelSettingsData const& settings)
    {
        Writer w;
        w.writeOpcode(Opcode::SyncLevelStart);
        w.writeVarInt(totalChunks);
        w.writeVarInt(totalObjects);
        writeSettingsData(w, settings);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeSyncLevelChunk(
        uint32_t chunkIndex, const uint8_t* data, size_t dataLen,
        std::vector<std::string> const& uuids)
    {
        Writer w;
        w.writeOpcode(Opcode::SyncLevelChunk);
        w.writeVarInt(chunkIndex);
        w.writeVarInt(static_cast<uint32_t>(dataLen));
        w.writeBytes(data, dataLen);
        w.writeVarInt(static_cast<uint32_t>(uuids.size()));
        for (auto const& uuid : uuids) {
            w.writeString(uuid);
        }
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeSyncLevelEnd() {
        Writer w;
        w.writeOpcode(Opcode::SyncLevelEnd);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeSyncLocksChunk(std::vector<ActionSerializer::LockData> const& locks) {
        Writer w;
        w.writeOpcode(Opcode::SyncLocksChunk);
        w.writeVarInt(locks.size());
        for (auto const& lock : locks) writeLockData(w, lock);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeRequestSnapshot() {
        Writer w;
        w.writeOpcode(Opcode::RequestSnapshot);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializePlayerJoined(
        int playerId, std::string const& name, int colorIndex, std::string const& iconStr)
    {
        Writer w;
        w.writeOpcode(Opcode::PlayerJoined);
        w.writeVarInt(static_cast<uint32_t>(playerId));
        w.writeString(name);
        w.writeVarInt(static_cast<uint32_t>(colorIndex));
        w.writeString(iconStr);
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializePlayerLeft(int playerId) {
        Writer w;
        w.writeOpcode(Opcode::PlayerLeft);
        w.writeVarInt(static_cast<uint32_t>(playerId));
        return std::move(w.takeData());
    }

    std::vector<uint8_t> serializeError(std::string const& message) {
        Writer w;
        w.writeOpcode(Opcode::Error);
        w.writeString(message);
        return std::move(w.takeData());
    }


    PlaceObjectsMsg deserializePlaceObjects(Reader& r) {
        PlaceObjectsMsg msg;
        uint32_t count = r.readVarInt();
        msg.objects.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.objects.push_back(readObjectData(r));
        }
        return msg;
    }

    DeleteObjectsMsg deserializeDeleteObjects(Reader& r) {
        DeleteObjectsMsg msg;
        uint32_t count = r.readVarInt();
        msg.uuids.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.uuids.push_back(r.readString());
        }
        return msg;
    }

    MoveObjectsMsg deserializeMoveObjects(Reader& r) {
        MoveObjectsMsg msg;
        uint32_t count = r.readVarInt();
        msg.moves.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.moves.push_back(readMoveData(r));
        }
        return msg;
    }

    TransformObjectsMsg deserializeTransformObjects(Reader& r) {
        TransformObjectsMsg msg;
        uint32_t count = r.readVarInt();
        msg.transforms.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.transforms.push_back(readTransformData(r));
        }
        return msg;
    }

    ReconcileObjectsMsg deserializeReconcileObjects(Reader& r) {
        ReconcileObjectsMsg msg;
        uint32_t count = r.readVarInt();
        msg.reconciles.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.reconciles.push_back(readReconcileData(r));
        }
        return msg;
    }

    UpdateObjectsMsg deserializeUpdateObjects(Reader& r) {
        UpdateObjectsMsg msg;
        uint32_t count = r.readVarInt();
        msg.objects.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.objects.push_back(readObjectData(r));
        }
        return msg;
    }

    LockObjectsMsg deserializeLockObjects(Reader& r) {
        LockObjectsMsg msg;
        msg.locked = r.readBool();
        uint32_t count = r.readVarInt();
        msg.uuids.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.uuids.push_back(r.readString());
        }
        return msg;
    }

    CursorUpdateMsg deserializeCursorUpdate(Reader& r) {
        CursorUpdateMsg msg;
        msg.x = r.readF32();
        msg.y = r.readF32();
        msg.status = r.readString();
        return msg;
    }

    MoveBatchMsg deserializeMoveBatch(Reader& r) {
        MoveBatchMsg msg;
        uint32_t count = r.readVarInt();
        msg.moves.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            msg.moves.push_back(readMoveData(r));
        }
        return msg;
    }

    SyncLevelStartMsg deserializeSyncLevelStart(Reader& r) {
        SyncLevelStartMsg msg;
        msg.totalChunks = r.readVarInt();
        msg.totalObjects = r.readVarInt();
        msg.settings = readSettingsData(r);
        return msg;
    }

    SyncLevelChunkMsg deserializeSyncLevelChunk(Reader& r) {
        SyncLevelChunkMsg msg;
        msg.chunkIndex = r.readVarInt();
        uint32_t dataLen = r.readVarInt();
        msg.data.resize(dataLen);
        if (dataLen > 0) {
            const uint8_t* ptr = r.currentPtr();
            std::memcpy(msg.data.data(), ptr, dataLen);
            r.skip(dataLen);
        }
        uint32_t uuidCount = r.readVarInt();
        msg.uuids.reserve(uuidCount);
        for (uint32_t i = 0; i < uuidCount; ++i) {
            msg.uuids.push_back(r.readString());
        }
        return msg;
    }

    void deserializeSyncLevelEnd(Reader& r) {
    }

    SyncLocksChunkMsg deserializeSyncLocksChunk(Reader& r) {
        SyncLocksChunkMsg msg;
        size_t lockCount = r.readVarInt();
        for (size_t i = 0; i < lockCount; i++) {
            msg.locks.push_back(readLockData(r));
        }
        return msg;
    }

    PlayerJoinedMsg deserializePlayerJoined(Reader& r) {
        PlayerJoinedMsg msg;
        msg.playerId = static_cast<int>(r.readVarInt());
        msg.name = r.readString();
        msg.colorIndex = static_cast<int>(r.readVarInt());
        if (r.hasRemaining()) { msg.iconStr = r.readString(); }
        return msg;
    }

    PlayerLeftMsg deserializePlayerLeft(Reader& r) {
        PlayerLeftMsg msg;
        msg.playerId = static_cast<int>(r.readVarInt());
        return msg;
    }

    ErrorMsg deserializeError(Reader& r) {
        ErrorMsg msg;
        msg.message = r.readString();
        return msg;
    }

    ServerMessageMsg deserializeServerMessage(Reader& r) {
        ServerMessageMsg msg;
        msg.message = r.readString();
        return msg;
    }

    UpdateSettingsMsg deserializeUpdateSettings(Reader& r) {
        UpdateSettingsMsg msg;
        msg.settings = readSettingsData(r);
        return msg;
    }

    std::vector<uint8_t> serializeRoomInfo(int localPlayerId, std::vector<RoomInfoPlayer> const& players) {
        Writer w;
        w.writeOpcode(Opcode::RoomInfo);
        w.writeVarInt(static_cast<uint32_t>(localPlayerId));
        w.writeVarInt(static_cast<uint32_t>(players.size()));
        for (auto const& p : players) {
            w.writeVarInt(static_cast<uint32_t>(p.id));
            w.writeString(p.name);
            w.writeVarInt(static_cast<uint32_t>(p.colorIndex));
            w.writeString(p.iconStr);
        }
        return w.takeData();
    }

    RoomInfoMsg deserializeRoomInfo(Reader& r) {
        RoomInfoMsg msg;
        msg.localPlayerId = static_cast<int>(r.readVarInt());
        uint32_t count = r.readVarInt();
        msg.players.reserve(count);
        for (uint32_t i = 0; i < count; ++i) {
            RoomInfoPlayer p;
            p.id = static_cast<int>(r.readVarInt());
            p.name = r.readString();
            p.colorIndex = static_cast<int>(r.readVarInt());
            p.iconStr = r.readString();
            msg.players.push_back(p);
        }
        return msg;
    }

    std::vector<uint8_t> serializeUpdateColorChannel(ActionSerializer::ColorChannelData const& data) {
        Writer w;
        w.writeOpcode(Opcode::UpdateColorChannel);
        w.writeU32(data.channelID);
        w.writeU8(data.color.r); w.writeU8(data.color.g); w.writeU8(data.color.b);
        w.writeU8(data.fromColor.r); w.writeU8(data.fromColor.g); w.writeU8(data.fromColor.b);
        w.writeU8(data.toColor.r); w.writeU8(data.toColor.g); w.writeU8(data.toColor.b);
        w.writeF32(data.duration);
        w.writeU8(data.blending ? 1 : 0);
        w.writeU32(data.playerColor);
        w.writeF32(data.fromOpacity);
        w.writeF32(data.toOpacity);
        w.writeF32(data.copyHSV.h);
        w.writeF32(data.copyHSV.s);
        w.writeF32(data.copyHSV.v);
        w.writeU8(data.copyHSV.absoluteSaturation ? 1 : 0);
        w.writeU8(data.copyHSV.absoluteBrightness ? 1 : 0);
        w.writeU32(data.copyID);
        w.writeU8(data.copyOpacity ? 1 : 0);
        w.writeU8(data.copyColorCalculated ? 1 : 0);
        w.writeU32(data.colorID);
        w.writeU8(data.copyColorLoop ? 1 : 0);
        w.writeU8(data.legacyHSV ? 1 : 0);
        return w.takeData();
    }

    UpdateColorChannelMsg deserializeUpdateColorChannel(Reader& r) {
        UpdateColorChannelMsg msg;
        msg.data.channelID = r.readU32();
        msg.data.color.r = r.readU8(); msg.data.color.g = r.readU8(); msg.data.color.b = r.readU8();
        msg.data.fromColor.r = r.readU8(); msg.data.fromColor.g = r.readU8(); msg.data.fromColor.b = r.readU8();
        msg.data.toColor.r = r.readU8(); msg.data.toColor.g = r.readU8(); msg.data.toColor.b = r.readU8();
        msg.data.duration = r.readF32();
        msg.data.blending = r.readU8() != 0;
        msg.data.playerColor = r.readU32();
        msg.data.fromOpacity = r.readF32();
        msg.data.toOpacity = r.readF32();
        msg.data.copyHSV.h = r.readF32();
        msg.data.copyHSV.s = r.readF32();
        msg.data.copyHSV.v = r.readF32();
        msg.data.copyHSV.absoluteSaturation = r.readU8() != 0;
        msg.data.copyHSV.absoluteBrightness = r.readU8() != 0;
        msg.data.copyID = r.readU32();
        msg.data.copyOpacity = r.readU8() != 0;
        msg.data.copyColorCalculated = r.readU8() != 0;
        msg.data.colorID = r.readU32();
        msg.data.copyColorLoop = r.readU8() != 0;
        msg.data.legacyHSV = r.readU8() != 0;
        return msg;
    }



    std::vector<uint8_t> serializeChatMessage(std::string const& message) {
        Writer w;
        w.writeOpcode(Opcode::ChatMessage);
        w.writeString(message);
        return w.takeData();
    }

    ChatMessageMsg deserializeChatMessage(Reader& r) {
        ChatMessageMsg msg;
        msg.message = r.readString();
        return msg;
    }

    std::vector<uint8_t> serializePing(uint32_t timestamp) {
        Writer w;
        w.writeOpcode(Opcode::Ping);
        w.writeU32(timestamp);
        return w.takeData();
    }
    uint32_t deserializePing(Reader& r) {
        return r.readU32();
    }

    std::vector<uint8_t> serializePong(uint32_t timestamp) {
        Writer w;
        w.writeOpcode(Opcode::Pong);
        w.writeU32(timestamp);
        return w.takeData();
    }
    uint32_t deserializePong(Reader& r) {
        return r.readU32();
    }

    std::vector<uint8_t> serializePingUpdate(uint32_t ping) {
        Writer w;
        w.writeOpcode(Opcode::PingUpdate);
        w.writeU32(ping);
        return w.takeData();
    }
    uint32_t deserializePingUpdate(Reader& r) {
        return r.readU32();
    }


}
