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

        // === Serialization (local action → JSON) ===

        matjson::Value serializePlaceObjects(std::vector<ObjectData> const& objects);
        matjson::Value serializeDeleteObjects(std::vector<std::string> const& uuids);
        matjson::Value serializeMoveObjects(std::vector<MoveData> const& moves);
        matjson::Value serializeTransformObjects(std::vector<TransformData> const& transforms);
        matjson::Value serializeCursorUpdate(float x, float y);

        // === Deserialization (JSON → action data) ===

        std::vector<ObjectData> deserializePlacedObjects(matjson::Value const& data);
        std::vector<std::string> deserializeDeletedObjects(matjson::Value const& data);
        std::vector<MoveData> deserializeMovedObjects(matjson::Value const& data);
        std::vector<TransformData> deserializeTransformedObjects(matjson::Value const& data);

        // === GameObject helpers ===

        ObjectData extractObjectData(GameObject* obj, std::string const& uuid);
        matjson::Value objectDataToJson(ObjectData const& data);
        ObjectData jsonToObjectData(matjson::Value const& json);

    } // namespace ActionSerializer

} // namespace mpedit
