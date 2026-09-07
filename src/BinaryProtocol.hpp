#pragma once

#include "ActionSerializer.hpp"
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
#include <stdexcept>

namespace mpedit::proto {

    enum class Opcode : uint8_t {
        PlaceObjects      = 0x01,
        DeleteObjects     = 0x02,
        MoveObjects       = 0x03,
        TransformObjects  = 0x04,
        UpdateObjects     = 0x05,
        LockObjects       = 0x06,
        ReconcileObjects  = 0x07,

        SyncLevelStart    = 0x10,
        SyncLevelChunk    = 0x11,
        SyncLevelEnd      = 0x12,
        RequestSnapshot   = 0x13,
        SyncLocksChunk    = 0x14,

        UpdateSettings    = 0x20,
        UpdateColorChannel = 0x21,

        PlayerJoined      = 0x30,
        PlayerLeft        = 0x31,
        RoomInfo          = 0x32,
        HostMigration     = 0x33,
        Reconnect         = 0x34,
        SetViewOnly       = 0x35,
        KickPlayer        = 0x36,
        BanPlayer         = 0x37,
        ServerMessage     = 0x38,

        CursorUpdate      = 0x40,
        MoveBatch         = 0x41,
        ChatMessage       = 0x42,

        Heartbeat         = 0x50,
        Ping              = 0x51,
        Pong              = 0x52,
        PingUpdate        = 0x53,

        Error             = 0xFF,

        Relay             = 0xFE,
    };


    class Writer {
    public:
        Writer() { m_buf.reserve(256); }
        explicit Writer(size_t reserve) { m_buf.reserve(reserve); }

        void writeU8(uint8_t v) {
            m_buf.push_back(v);
        }

        void writeU16(uint16_t v) {
            m_buf.push_back(static_cast<uint8_t>(v & 0xFF));
            m_buf.push_back(static_cast<uint8_t>((v >> 8) & 0xFF));
        }

        void writeU32(uint32_t v) {
            m_buf.push_back(static_cast<uint8_t>(v & 0xFF));
            m_buf.push_back(static_cast<uint8_t>((v >> 8) & 0xFF));
            m_buf.push_back(static_cast<uint8_t>((v >> 16) & 0xFF));
            m_buf.push_back(static_cast<uint8_t>((v >> 24) & 0xFF));
        }

        void writeI32(int32_t v) {
            writeU32(static_cast<uint32_t>(v));
        }

        void writeF32(float v) {
            uint32_t bits;
            std::memcpy(&bits, &v, sizeof(bits));
            writeU32(bits);
        }

        void writeVarInt(uint32_t v) {
            while (v >= 0x80) {
                m_buf.push_back(static_cast<uint8_t>(v | 0x80));
                v >>= 7;
            }
            m_buf.push_back(static_cast<uint8_t>(v));
        }

        void writeString(std::string const& s) {
            writeVarInt(static_cast<uint32_t>(s.size()));
            m_buf.insert(m_buf.end(), s.begin(), s.end());
        }

        void writeBool(bool v) {
            writeU8(v ? 1 : 0);
        }

        void writeBytes(const uint8_t* data, size_t len) {
            m_buf.insert(m_buf.end(), data, data + len);
        }

        void writeOpcode(Opcode op) {
            writeU8(static_cast<uint8_t>(op));
        }

        std::vector<uint8_t> const& data() const { return m_buf; }
        std::vector<uint8_t>&& takeData() { return std::move(m_buf); }
        size_t size() const { return m_buf.size(); }

    private:
        std::vector<uint8_t> m_buf;
    };


    class Reader {
    public:
        Reader(const uint8_t* data, size_t len)
            : m_data(data), m_len(len), m_pos(0) {}

        uint8_t readU8() {
            if (m_error || !checkRemaining(1)) return 0;
            return m_data[m_pos++];
        }

        uint16_t readU16() {
            if (m_error || !checkRemaining(2)) return 0;
            uint16_t v = static_cast<uint16_t>(m_data[m_pos])
                       | (static_cast<uint16_t>(m_data[m_pos + 1]) << 8);
            m_pos += 2;
            return v;
        }

        uint32_t readU32() {
            if (m_error || !checkRemaining(4)) return 0;
            uint32_t v = static_cast<uint32_t>(m_data[m_pos])
                       | (static_cast<uint32_t>(m_data[m_pos + 1]) << 8)
                       | (static_cast<uint32_t>(m_data[m_pos + 2]) << 16)
                       | (static_cast<uint32_t>(m_data[m_pos + 3]) << 24);
            m_pos += 4;
            return v;
        }

        int32_t readI32() {
            return static_cast<int32_t>(readU32());
        }

        float readF32() {
            if (m_error) return 0.0f;
            uint32_t bits = readU32();
            float v;
            std::memcpy(&v, &bits, sizeof(v));
            return v;
        }

        uint32_t readVarInt() {
            if (m_error) return 0;
            uint32_t v = 0;
            int shift = 0;
            while (true) {
                if (!checkRemaining(1)) return 0;
                uint8_t b = m_data[m_pos++];
                v |= static_cast<uint32_t>(b & 0x7F) << shift;
                if ((b & 0x80) == 0) break;
                shift += 7;
                if (shift >= 35) {
                    m_error = true;
                    return 0;
                }
            }
            return v;
        }

        std::string readString() {
            if (m_error) return "";
            uint32_t len = readVarInt();
            if (m_error || !checkRemaining(len)) return "";
            std::string s(reinterpret_cast<const char*>(m_data + m_pos), len);
            m_pos += len;
            return s;
        }

        bool readBool() {
            return readU8() != 0;
        }

        Opcode readOpcode() {
            return static_cast<Opcode>(readU8());
        }

        bool hasRemaining() const { return !m_error && m_pos < m_len; }
        size_t remaining() const { return m_error ? 0 : m_len - m_pos; }
        size_t position() const { return m_pos; }

        bool hasError() const { return m_error; }

        const uint8_t* currentPtr() const { return m_data + m_pos; }
        void skip(size_t bytes) {
            if (m_error || !checkRemaining(bytes)) return;
            m_pos += bytes;
        }

    private:
        bool checkRemaining(size_t need) {
            if (m_pos + need > m_len) {
                m_error = true;
                return false;
            }
            return true;
        }

    private:
        const uint8_t* m_data;
        size_t m_len;
        size_t m_pos;
        bool m_error = false;
    };


    void writeObjectData(Writer& w, ActionSerializer::ObjectData const& obj);
    ActionSerializer::ObjectData readObjectData(Reader& r);

    void writeMoveData(Writer& w, ActionSerializer::MoveData const& move);
    ActionSerializer::MoveData readMoveData(Reader& r);

    void writeTransformData(Writer& w, ActionSerializer::TransformData const& t);
    ActionSerializer::TransformData readTransformData(Reader& r);

    void writeLockData(Writer& w, ActionSerializer::LockData const& lock);
    ActionSerializer::LockData readLockData(Reader& r);

    void writeSettingsData(Writer& w, ActionSerializer::LevelSettingsData const& s);
    ActionSerializer::LevelSettingsData readSettingsData(Reader& r);


    std::vector<uint8_t> serializePlaceObjects(
        std::vector<ActionSerializer::ObjectData> const& objects);

    std::vector<uint8_t> serializeDeleteObjects(
        std::vector<std::string> const& uuids);

    std::vector<uint8_t> serializeMoveObjects(
        std::vector<ActionSerializer::MoveData> const& moves);

    std::vector<uint8_t> serializeTransformObjects(
        std::vector<ActionSerializer::TransformData> const& transforms);

    std::vector<uint8_t> serializeReconcileObjects(
        std::vector<ActionSerializer::ReconcileData> const& reconciles);

    std::vector<uint8_t> serializeUpdateObjects(
        std::vector<ActionSerializer::ObjectData> const& objects);

    std::vector<uint8_t> serializeLockObjects(
        std::vector<std::string> const& uuids, bool locked);

    std::vector<uint8_t> serializeCursorUpdate(
        float x, float y, std::string const& status);

    std::vector<uint8_t> serializeMoveBatch(
        std::vector<ActionSerializer::MoveData> const& moves);

    std::vector<uint8_t> serializeUpdateSettings(
        ActionSerializer::LevelSettingsData const& settings);

    std::vector<uint8_t> serializeUpdateColorChannel(
        ActionSerializer::ColorChannelData const& data);

    std::vector<uint8_t> serializeChatMessage(std::string const& message);

    std::vector<uint8_t> serializeSyncLevelStart(
        uint32_t totalChunks, uint32_t totalObjects,
        ActionSerializer::LevelSettingsData const& settings);

    std::vector<uint8_t> serializeSyncLevelChunk(
        uint32_t chunkIndex, const uint8_t* data, size_t dataLen,
        std::vector<std::string> const& uuids);

    std::vector<uint8_t> serializeSyncLevelEnd();

    std::vector<uint8_t> serializeSyncLocksChunk(std::vector<ActionSerializer::LockData> const& locks);

    std::vector<uint8_t> serializeRequestSnapshot();

    std::vector<uint8_t> serializePlayerJoined(
        int playerId, std::string const& name, int colorIndex, std::string const& iconStr = "");
    std::vector<uint8_t> serializePlayerLeft(int playerId);
    std::vector<uint8_t> serializeError(std::string const& message);

    struct RoomInfoPlayer {
        int id;
        std::string name;
        int colorIndex;
        std::string iconStr;
    };
    struct RoomInfoMsg {
        int localPlayerId;
        std::vector<RoomInfoPlayer> players;
    };

    std::vector<uint8_t> serializeRoomInfo(int localPlayerId, std::vector<RoomInfoPlayer> const& players);
    RoomInfoMsg deserializeRoomInfo(Reader& r);


    struct PlaceObjectsMsg {
        std::vector<ActionSerializer::ObjectData> objects;
    };
    PlaceObjectsMsg deserializePlaceObjects(Reader& r);

    struct DeleteObjectsMsg {
        std::vector<std::string> uuids;
    };
    DeleteObjectsMsg deserializeDeleteObjects(Reader& r);

    struct MoveObjectsMsg {
        std::vector<ActionSerializer::MoveData> moves;
    };
    MoveObjectsMsg deserializeMoveObjects(Reader& r);

    struct TransformObjectsMsg {
        std::vector<ActionSerializer::TransformData> transforms;
    };
    TransformObjectsMsg deserializeTransformObjects(Reader& r);

    struct ReconcileObjectsMsg {
        std::vector<ActionSerializer::ReconcileData> reconciles;
    };
    ReconcileObjectsMsg deserializeReconcileObjects(Reader& r);

    struct UpdateObjectsMsg {
        std::vector<ActionSerializer::ObjectData> objects;
    };
    UpdateObjectsMsg deserializeUpdateObjects(Reader& r);

    struct LockObjectsMsg {
        bool locked;
        std::vector<std::string> uuids;
    };
    LockObjectsMsg deserializeLockObjects(Reader& r);

    struct CursorUpdateMsg {
        float x, y;
        std::string status;
    };
    CursorUpdateMsg deserializeCursorUpdate(Reader& r);

    struct MoveBatchMsg {
        std::vector<ActionSerializer::MoveData> moves;
    };
    MoveBatchMsg deserializeMoveBatch(Reader& r);

    struct SyncLevelStartMsg {
        uint32_t totalChunks;
        uint32_t totalObjects;
        ActionSerializer::LevelSettingsData settings;
    };
    SyncLevelStartMsg deserializeSyncLevelStart(Reader& r);

    struct SyncLevelChunkMsg {
        uint32_t chunkIndex;
        std::vector<uint8_t> data;
        std::vector<std::string> uuids;
    };
    SyncLevelChunkMsg deserializeSyncLevelChunk(Reader& r);

    struct SyncLevelEndMsg {};
    void deserializeSyncLevelEnd(Reader& r);
    struct SyncLocksChunkMsg {
        std::vector<ActionSerializer::LockData> locks;
    };
    SyncLocksChunkMsg deserializeSyncLocksChunk(Reader& r);

    struct PlayerJoinedMsg {
        int playerId;
        std::string name;
        int colorIndex;
        std::string iconStr;
    };
    PlayerJoinedMsg deserializePlayerJoined(Reader& r);

    struct PlayerLeftMsg {
        int playerId;
    };
    PlayerLeftMsg deserializePlayerLeft(Reader& r);

    struct ErrorMsg {
        std::string message;
    };
    ErrorMsg deserializeError(Reader& r);

    struct ServerMessageMsg {
        std::string message;
    };
    ServerMessageMsg deserializeServerMessage(Reader& r);

    struct UpdateSettingsMsg {
        ActionSerializer::LevelSettingsData settings;
    };
    UpdateSettingsMsg deserializeUpdateSettings(Reader& r);

    struct UpdateColorChannelMsg {
        ActionSerializer::ColorChannelData data;
    };
    UpdateColorChannelMsg deserializeUpdateColorChannel(Reader& r);

    struct ChatMessageMsg {
        std::string message;
    };
    ChatMessageMsg deserializeChatMessage(Reader& r);

    std::vector<uint8_t> serializePing(uint32_t timestamp);
    uint32_t deserializePing(Reader& r);

    std::vector<uint8_t> serializePong(uint32_t timestamp);
    uint32_t deserializePong(Reader& r);

    std::vector<uint8_t> serializePingUpdate(uint32_t ping);
    uint32_t deserializePingUpdate(Reader& r);

}
