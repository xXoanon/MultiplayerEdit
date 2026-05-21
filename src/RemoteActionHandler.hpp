#pragma once

#include "ActionSerializer.hpp"
#include <string>
#include <unordered_map>

class GameObject;
class LevelEditorLayer;

namespace mpedit {

    /**
     * Handles incoming remote actions and applies them to the local editor.
     * Maintains a UUID-to-GameObject mapping for tracking remote objects.
     */
    class RemoteActionHandler {
    public:
        static RemoteActionHandler& get();

        // Register network handlers for remote actions
        void setupHandlers();
        void clearHandlers();

        // Apply remote actions to the local editor
        void handleRemotePlaceObjects(int playerId, std::vector<ActionSerializer::ObjectData> const& objects);
        void handleRemoteDeleteObjects(int playerId, std::vector<std::string> const& uuids);
        void handleRemoteMoveObjects(int playerId, std::vector<ActionSerializer::MoveData> const& moves);
        void handleRemoteTransformObjects(int playerId, std::vector<ActionSerializer::TransformData> const& transforms);

        // UUID management
        void registerObject(std::string const& uuid, GameObject* obj);
        void unregisterObject(std::string const& uuid);
        GameObject* getObjectByUUID(std::string const& uuid) const;
        std::string getUUIDForObject(GameObject* obj) const;

        // Generate a new UUID
        static std::string generateUUID();

        // Clear all mappings (called when leaving editor)
        void clearMappings();

        // Flag to suppress outgoing messages when processing remote actions
        bool isProcessingRemote() const { return m_processingRemote; }

    private:
        RemoteActionHandler() = default;
        ~RemoteActionHandler() = default;

        RemoteActionHandler(RemoteActionHandler const&) = delete;
        RemoteActionHandler& operator=(RemoteActionHandler const&) = delete;

        LevelEditorLayer* getEditorLayer() const;

        // UUID ↔ GameObject bidirectional mapping
        std::unordered_map<std::string, GameObject*> m_uuidToObject;
        std::unordered_map<GameObject*, std::string> m_objectToUuid;

        bool m_processingRemote = false;

        // Counter for UUID generation
        static inline int s_uuidCounter = 0;
    };

} // namespace mpedit
