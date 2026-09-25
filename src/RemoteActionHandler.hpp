#pragma once

#include "ActionSerializer.hpp"
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <Geode/binding/MusicDownloadDelegate.hpp>

#include <optional>
#include <vector>

class GameObject;
class LevelEditorLayer;

namespace mpedit {
    void updateStartPosCache(GameObject* obj);

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

        void setupHandlers();
        void clearHandlers();

        void handleRemotePlaceObjects(int playerId, std::vector<ActionSerializer::ObjectData> const& objects);
        void handleRemoteDeleteObjects(int playerId, std::vector<std::string> const& uuids);
        void handleRemoteMoveObjects(int playerId, std::vector<ActionSerializer::MoveData> const& moves);
        void handleRemoteTransformObjects(int playerId, std::vector<ActionSerializer::TransformData> const& transforms);
        void handleRemoteReconcileObjects(int playerId, std::vector<ActionSerializer::ReconcileData> const& reconciles);
        void handleRemoteUpdateObjects(int playerId, std::vector<ActionSerializer::ObjectData> const& objects);
        void handleRemoteLockObjects(int playerId, std::vector<std::string> const& uuids, bool locked);
        void handleRemoteSyncLevel(int playerId, std::string const& objectsString, std::vector<std::string> const& uuids, ActionSerializer::LevelSettingsData const& settings, std::vector<ActionSerializer::LockData> const& locks, bool isPendingSync = false);
        void handleRemoteUpdateSettings(int playerId, ActionSerializer::LevelSettingsData const& settings);
        void handleRemoteUpdateColorChannel(int playerId, ActionSerializer::ColorChannelData const& data);

        std::unordered_map<std::string, LockInfo> const& getObjectLocks() const { return m_objectLocks; }
        
        void updateLocks(float dt);
        void flushDeferredDeletions();

        void pruneObjectFromHistory(LevelEditorLayer* editor, GameObject* obj);

        void registerObject(std::string const& uuid, GameObject* obj);
        void unregisterObject(std::string const& uuid);
        GameObject* getObjectByUUID(std::string const& uuid) const;
        std::string getUUIDForObject(GameObject* obj) const;
        std::string getOrCreateUUID(GameObject* obj);
        bool isObjectAlive(GameObject* obj) const;
        void markObjectActive(GameObject* obj);
        void markObjectInactive(GameObject* obj);
        void clearActiveObjects();

        static std::string generateUUID();

        void clearMappings();

        void queueObjectForPlacement(std::string const& uuid, GameObject* obj);
        void flushPendingPlacements();
        bool isObjectPendingPlacement(GameObject* obj) const;



        bool isProcessingRemote() const { return m_processingRemote; }

        bool isInitialSyncCompleted() const;
        void setInitialSyncCompleted(bool completed) { m_initialSyncCompleted = completed; }

        void applyPendingSync();
        bool hasPendingSync() const { return m_pendingSync.has_value(); }

        void setEditorForInit(LevelEditorLayer* editor) { m_editorForInit = editor; }
        LevelEditorLayer* getEditorForInit() const { return m_editorForInit; }

        std::vector<std::string> const& getExpectedUuids() const { return m_expectedUuids; }
        void setExpectedUuids(std::vector<std::string> const& uuids) { m_expectedUuids = uuids; }
        void clearExpectedUuids() { m_expectedUuids.clear(); }

        void downloadSongFinished(int id) override;
        void downloadSongFailed(int id, GJSongError error) override;
        void downloadSongStarted(int id) override {}
        void loadSongInfoFinished(SongInfoObject* object) override {}
        void loadSongInfoFailed(int id, GJSongError errorType) override {}

        void sendSnapshotToServer(std::function<void()> onComplete = nullptr);
        std::unordered_map<GameObject*, std::string>& getTrackedSelections() { return m_preSelectSaveStrings; }

    private:
        RemoteActionHandler() = default;
        ~RemoteActionHandler() = default;

        RemoteActionHandler(RemoteActionHandler const&) = delete;
        RemoteActionHandler& operator=(RemoteActionHandler const&) = delete;

        int getLocalPlayerId() const;
        LevelEditorLayer* getEditorLayer() const;
        void updateStatusNode();

        void applyLevelSettings(LevelEditorLayer* editor, ActionSerializer::LevelSettingsData const& settings);

        std::unordered_map<std::string, GameObject*> m_uuidToObject;
        std::unordered_map<GameObject*, std::string> m_objectToUuid;
        std::unordered_set<GameObject*> m_activeObjects;

        std::unordered_map<std::string, LockInfo> m_objectLocks;
        std::unordered_map<GameObject*, std::string> m_preSelectSaveStrings;

        std::vector<cocos2d::CCObject*> m_deferredDeletionObjects;

        bool m_processingRemote = false;
        bool m_initialSyncCompleted = false;

        LevelEditorLayer* m_editorForInit = nullptr;

        struct PendingSync {
            int playerId;
            std::string objectsString;
            std::vector<std::string> uuids;
            ActionSerializer::LevelSettingsData settings;
            std::vector<ActionSerializer::LockData> locks;
        };
        std::optional<PendingSync> m_pendingSync;
        std::vector<std::string> m_expectedUuids;

        struct ChunkedSyncState {
            int hostPlayerId = -1;
            uint32_t totalChunks = 0;
            uint32_t totalObjects = 0;
            ActionSerializer::LevelSettingsData settings;
            std::vector<std::string> chunks;
            std::vector<std::vector<std::string>> uuidChunks;
            bool active = false;
        };
        ChunkedSyncState m_chunkedSync;

        struct PendingPlacement {
            std::string uuid;
            geode::Ref<GameObject> obj;
        };
        std::vector<PendingPlacement> m_pendingPlacements;


        static inline int s_uuidCounter = 0;
    };

}
