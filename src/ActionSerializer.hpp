#pragma once

#include <matjson.hpp>
#include <string>
#include <vector>

// Forward declarations for GD types
class GameObject;

namespace mpedit {

    /**
     * Serializes editor actions into JSON messages for network transmission,
     * and deserializes incoming messages back into actionable data.
     */
    namespace ActionSerializer {

        /**
         * Object data structure for network transmission.
         * Contains all properties needed to reconstruct an object.
         */
        struct ObjectData {
            std::string uuid;       // Mod-assigned unique identifier
            std::string saveString; // GD native save string (full object state)
            int objectID = 0;       // GD object type ID
            float x = 0.f;
            float y = 0.f;
            float rotation = 0.f;
            float scaleX = 1.f;
            float scaleY = 1.f;
            bool flipX = false;
            bool flipY = false;
            int zOrder = 0;
            int editorLayer = 0;
            int editorLayer2 = 0;
            // Groups
            std::vector<int> groups;
            // Color channels
            int mainColorChannel = -1;
            int secondColorChannel = -1;
        };

        struct LevelSettingsData {
            std::string saveString;
            int audioTrack = 0;
            int songID = 0;
            float levelLength = 0;
        };

        struct MoveData {
            std::string uuid;
            float dx = 0.f;
            float dy = 0.f;
        };

        struct TransformData {
            std::string uuid;
            float rotation = 0.f;
            float scaleX = 1.f;
            float scaleY = 1.f;
            bool flipX = false;
            bool flipY = false;
        };

        struct LockData {
            std::string uuid;
            int playerId = 0;
            float timeLeft = 3.0f;
        };

        // === Serialization (local action → JSON) ===

        matjson::Value serializePlaceObjects(std::vector<ObjectData> const& objects);
        matjson::Value serializeSyncLevel(int targetPlayerId, std::string const& objectsString, std::vector<std::string> const& uuids, LevelSettingsData const& settings, std::vector<LockData> const& locks);
        matjson::Value serializeDeleteObjects(std::vector<std::string> const& uuids);
        matjson::Value serializeMoveObjects(std::vector<MoveData> const& moves);
        matjson::Value serializeTransformObjects(std::vector<TransformData> const& transforms);
        matjson::Value serializeUpdateObjects(std::vector<ObjectData> const& objects);
        matjson::Value serializeCursorUpdate(float x, float y, std::string const& status);
        matjson::Value serializeLockObjects(std::vector<std::string> const& uuids, bool locked);
        matjson::Value serializeUpdateSettings(LevelSettingsData const& settings);

        // === Deserialization (JSON → action data) ===

        std::vector<ObjectData> deserializePlacedObjects(matjson::Value const& data);
        std::vector<std::string> deserializeDeletedObjects(matjson::Value const& data);
        std::vector<MoveData> deserializeMovedObjects(matjson::Value const& data);
        std::vector<TransformData> deserializeTransformedObjects(matjson::Value const& data);
        std::vector<ObjectData> deserializeUpdatedObjects(matjson::Value const& data);
        LevelSettingsData deserializeLevelSettings(matjson::Value const& data);
        std::vector<LockData> deserializeSyncLevelLocks(matjson::Value const& data);

        // === GameObject helpers ===

        ObjectData extractObjectData(GameObject* obj, std::string const& uuid);
        matjson::Value objectDataToJson(ObjectData const& data);
        ObjectData jsonToObjectData(matjson::Value const& json);

    } // namespace ActionSerializer

} // namespace mpedit
