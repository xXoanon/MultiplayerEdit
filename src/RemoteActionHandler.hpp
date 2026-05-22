#pragma once

#include "ActionSerializer.hpp"
#include <string>
#include <unordered_map>
#include <Geode/binding/MusicDownloadDelegate.hpp>

#include <optional>
#include <vector>

class GameObject;
class LevelEditorLayer;

namespace mpedit {

    struct LockInfo {
        int playerId;
        float timeLeft;
    };

    /**
     * Handles incoming remote actions and applies them to the local editor.
     * Maintains a UUID-to-GameObject mapping for tracking remote objects.
     */
    class RemoteActionHandler : public MusicDownloadDelegate {
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
        void handleRemoteUpdateObjects(int playerId, std::vector<ActionSerializer::ObjectData> const& objects);
        void handleRemoteLockObjects(int playerId, std::vector<std::string> const& uuids, bool locked);
        void handleRemoteSyncLevel(int playerId, std::vector<ActionSerializer::ObjectData> const& objects, ActionSerializer::LevelSettingsData const& settings, std::vector<ActionSerializer::LockData> const& locks, bool isPendingSync = false);
        void handleRemoteUpdateSettings(int playerId, ActionSerializer::LevelSettingsData const& settings);

        std::unordered_map<std::string, LockInfo> const& getObjectLocks() const { return m_objectLocks; }
        
        // Call this every frame to decay lock timers
        void updateLocks(float dt);

        // History pruning helper
        void pruneObjectFromHistory(LevelEditorLayer* editor, GameObject* obj);

        // UUID management
        void registerObject(std::string const& uuid, GameObject* obj);
        void unregisterObject(std::string const& uuid);
        GameObject* getObjectByUUID(std::string const& uuid) const;
        std::string getUUIDForObject(GameObject* obj) const;
        std::string getOrCreateUUID(GameObject* obj);

        // Generate a new UUID
        static std::string generateUUID();

        // Clear all mappings (called when leaving editor)
        void clearMappings();

        // Flag to suppress outgoing messages when processing remote actions
        bool isProcessingRemote() const { return m_processingRemote; }

        bool isInitialSyncCompleted() const;
        void setInitialSyncCompleted(bool completed) { m_initialSyncCompleted = completed; }

        void applyPendingSync();
        bool hasPendingSync() const { return m_pendingSync.has_value(); }

        std::vector<std::string> const& getExpectedUuids() const { return m_expectedUuids; }
        void setExpectedUuids(std::vector<std::string> const& uuids) { m_expectedUuids = uuids; }
        void clearExpectedUuids() { m_expectedUuids.clear(); }

        void downloadSongFinished(int id) override;
        void downloadSongFailed(int id, GJSongError error) override;
        void downloadSongStarted(int id) override {}
        void loadSongInfoFinished(SongInfoObject* object) override {}
        void loadSongInfoFailed(int id, GJSongError errorType) override {}

    private:
        RemoteActionHandler() = default;
        ~RemoteActionHandler() = default;

        RemoteActionHandler(RemoteActionHandler const&) = delete;
        RemoteActionHandler& operator=(RemoteActionHandler const&) = delete;

        LevelEditorLayer* getEditorLayer() const;

        // UUID ↔ GameObject bidirectional mapping
        std::unordered_map<std::string, GameObject*> m_uuidToObject;
        std::unordered_map<GameObject*, std::string> m_objectToUuid;

        // UUID ↔ Lock info
        std::unordered_map<std::string, LockInfo> m_objectLocks;

        bool m_processingRemote = false;
        bool m_initialSyncCompleted = false;

        struct PendingSync {
            int playerId;
            std::vector<ActionSerializer::ObjectData> objects;
            ActionSerializer::LevelSettingsData settings;
            std::vector<ActionSerializer::LockData> locks;
        };
        std::optional<PendingSync> m_pendingSync;
        std::vector<std::string> m_expectedUuids;

        // Counter for UUID generation
        static inline int s_uuidCounter = 0;
    };

} // namespace mpedit
