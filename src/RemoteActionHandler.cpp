#include "RemoteActionHandler.hpp"
#include "NetworkManager.hpp"
#include "SessionManager.hpp"
#include "ui/MultiplayerPopup.hpp"
#include <Geode/Geode.hpp>
#include <random>
#include <sstream>
#include <iomanip>

using namespace geode::prelude;

namespace mpedit {

    RemoteActionHandler& RemoteActionHandler::get() {
        static RemoteActionHandler instance;
        return instance;
    }

    void RemoteActionHandler::setupHandlers() {
        MusicDownloadManager::sharedState()->addMusicDownloadDelegate(this);

        auto& net = NetworkManager::get();

        net.on("objects_placed", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto objects = ActionSerializer::deserializePlacedObjects(data);
            handleRemotePlaceObjects(playerId, objects);
        });

        net.on("objects_deleted", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto uuids = ActionSerializer::deserializeDeletedObjects(data);
            handleRemoteDeleteObjects(playerId, uuids);
        });

        net.on("objects_moved", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto moves = ActionSerializer::deserializeMovedObjects(data);
            handleRemoteMoveObjects(playerId, moves);
        });

        net.on("objects_transformed", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto transforms = ActionSerializer::deserializeTransformedObjects(data);
            handleRemoteTransformObjects(playerId, transforms);
        });

        net.on("update_objects", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto updates = ActionSerializer::deserializeUpdatedObjects(data);
            handleRemoteUpdateObjects(playerId, updates);
        });

        net.on("lock_objects", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            bool locked = data.get<bool>("locked").unwrapOr(false);
            auto uuids = ActionSerializer::deserializeDeletedObjects(data); // uses objectKeys array
            handleRemoteLockObjects(playerId, uuids, locked);
        });

        net.on("sync_level", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            auto targetIdRes = data.get<int>("targetPlayerId");
            if (!idRes || !targetIdRes) return;
            
            int targetId = *targetIdRes;
            if (targetId != SessionManager::get().getLocalPlayerId()) return; // Not for us

            auto objects = ActionSerializer::deserializePlacedObjects(data); // uses objects array
            auto settings = ActionSerializer::deserializeLevelSettings(data);
            auto locks = ActionSerializer::deserializeSyncLevelLocks(data);
            handleRemoteSyncLevel(*idRes, objects, settings, locks);
        });

        net.on("update_settings", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto settings = ActionSerializer::deserializeLevelSettings(data);
            handleRemoteUpdateSettings(playerId, settings);
        });
    }

    void RemoteActionHandler::clearHandlers() {
        MusicDownloadManager::sharedState()->removeMusicDownloadDelegate(this);
        clearMappings();
        m_objectLocks.clear();
        m_pendingSync.reset();
        m_initialSyncCompleted = false;
        // Handlers are cleared via NetworkManager::clearHandlers()
    }

    static LevelEditorLayer* findEditorLayer(CCNode* parent) {
        if (!parent) return nullptr;
        if (auto* editor = typeinfo_cast<LevelEditorLayer*>(parent)) {
            return editor;
        }
        if (parent->getChildren()) {
            for (auto* child : CCArrayExt<CCNode*>(parent->getChildren())) {
                if (auto* editor = findEditorLayer(child)) {
                    return editor;
                }
            }
        }
        return nullptr;
    }

    LevelEditorLayer* RemoteActionHandler::getEditorLayer() const {
        if (auto* editor = LevelEditorLayer::get()) {
            return editor;
        }
        auto* dir = CCDirector::sharedDirector();
        if (auto* scene = dir->getRunningScene()) {
            if (auto* editor = findEditorLayer(scene)) {
                return editor;
            }
        }
        if (auto* nextScene = dir->getNextScene()) {
            if (auto* editor = findEditorLayer(nextScene)) {
                return editor;
            }
        }
        return nullptr;
    }

    void RemoteActionHandler::applyPendingSync() {
        if (!m_pendingSync) return;
        auto sync = m_pendingSync.value();
        m_pendingSync.reset();
        handleRemoteSyncLevel(sync.playerId, sync.objects, sync.settings, sync.locks, true);
    }

    void RemoteActionHandler::handleRemotePlaceObjects(
        int playerId, 
        std::vector<ActionSerializer::ObjectData> const& objects
    ) {
        auto* editor = getEditorLayer();
        if (!editor) {
            log::warn("RemoteActionHandler: No editor layer found");
            return;
        }

        m_processingRemote = true;

        for (auto& objData : objects) {
            auto* obj = editor->createObject(objData.objectID, {objData.x, objData.y}, false);
            if (!obj) {
                log::warn("RemoteActionHandler: Failed to create object ID {}", objData.objectID);
                continue;
            }

            obj->setRotation(objData.rotation);
            obj->setScaleX(objData.scaleX);
            obj->setScaleY(objData.scaleY);
            obj->setFlipX(objData.flipX);
            obj->setFlipY(objData.flipY);
            obj->m_editorLayer = objData.editorLayer;
            obj->m_editorLayer2 = objData.editorLayer2;

            registerObject(objData.uuid, obj);
            log::debug("RemoteActionHandler: Placed object {} (uuid={})", objData.objectID, objData.uuid);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteDeleteObjects(
        int playerId, 
        std::vector<std::string> const& uuids
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& uuid : uuids) {
            auto* obj = getObjectByUUID(uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for deletion", uuid);
                continue;
            }

            // Deselect first to prevent dangling pointer crashes in EditorUI
            if (auto* editorUI = editor->m_editorUI) {
                if (editorUI->m_selectedObject == obj || (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(obj))) {
                    editorUI->deselectObject(obj);
                }
            }

            pruneObjectFromHistory(editor, obj);
            editor->removeObject(obj, true);
            unregisterObject(uuid);
            log::debug("RemoteActionHandler: Deleted object (uuid={})", uuid);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteMoveObjects(
        int playerId, 
        std::vector<ActionSerializer::MoveData> const& moves
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& move : moves) {
            auto* obj = getObjectByUUID(move.uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for move", move.uuid);
                continue;
            }

            auto pos = obj->getPosition();
            obj->setPosition({pos.x + move.dx, pos.y + move.dy});
            log::debug("RemoteActionHandler: Moved object (uuid={}) by ({}, {})", move.uuid, move.dx, move.dy);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteTransformObjects(
        int playerId, 
        std::vector<ActionSerializer::TransformData> const& transforms
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& t : transforms) {
            auto* obj = getObjectByUUID(t.uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for transform", t.uuid);
                continue;
            }

            obj->setRotation(t.rotation);
            obj->setScaleX(t.scaleX);
            obj->setScaleY(t.scaleY);
            obj->setFlipX(t.flipX);
            obj->setFlipY(t.flipY);
            log::debug("RemoteActionHandler: Transformed object (uuid={})", t.uuid);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteUpdateObjects(
        int playerId, 
        std::vector<ActionSerializer::ObjectData> const& objects
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& objData : objects) {
            auto* oldObj = getObjectByUUID(objData.uuid);
            if (!oldObj) {
                log::warn("RemoteActionHandler: Object to update not found (uuid={})", objData.uuid);
                continue;
            }

            // Get selection state
            auto* editorUI = editor->m_editorUI;
            bool wasSelected = false;
            if (editorUI->m_selectedObject == oldObj || (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(oldObj))) {
                wasSelected = true;
                editorUI->deselectObject(oldObj);
            }

            pruneObjectFromHistory(editor, oldObj);
            // Remove old object
            editor->removeObject(oldObj, true);
            unregisterObject(objData.uuid);

            // Recreate object using saveString to ensure ALL properties are loaded
            // We use createObjectsFromString because it parses the raw GD level string format
            auto arr = editor->createObjectsFromString(objData.saveString, true, true);
            if (arr && arr->count() > 0) {
                auto* newObj = static_cast<GameObject*>(arr->objectAtIndex(0));
                registerObject(objData.uuid, newObj);
                log::debug("RemoteActionHandler: Updated object {} via saveString", objData.uuid);

                if (wasSelected) {
                    editorUI->selectObject(newObj, true);
                }
            } else {
                log::error("RemoteActionHandler: Failed to create updated object from saveString");
            }
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteLockObjects(
        int playerId, 
        std::vector<std::string> const& uuids, 
        bool locked
    ) {
        if (locked) {
            for (auto& uuid : uuids) {
                // Set lock timeout to 3 seconds. It will be refreshed by cursor_update or explicitly released
                m_objectLocks[uuid] = LockInfo { playerId, 3.0f }; 
            }
        } else {
            for (auto& uuid : uuids) {
                auto it = m_objectLocks.find(uuid);
                if (it != m_objectLocks.end() && it->second.playerId == playerId) {
                    m_objectLocks.erase(it);
                }
            }
        }
    }

    void RemoteActionHandler::handleRemoteSyncLevel(
        int playerId, 
        std::vector<ActionSerializer::ObjectData> const& objects, 
        ActionSerializer::LevelSettingsData const& settings,
        std::vector<ActionSerializer::LockData> const& locks,
        bool isPendingSync
    ) {
        auto* editor = getEditorLayer();
        if (!editor) {
            log::info("RemoteActionHandler: Editor not ready yet, loading level string before entering editor");
            
            // Build the native level string
            std::string levelString = settings.saveString;
            std::vector<std::string> expectedUuids;
            for (auto const& obj : objects) {
                if (!obj.saveString.empty()) {
                    levelString += ";" + obj.saveString;
                    expectedUuids.push_back(obj.uuid);
                }
            }
            m_expectedUuids = expectedUuids;

            // Create game level
            auto* level = GJGameLevel::create();
            level->m_levelName = "Multiplayer Session";
            level->m_levelType = GJLevelType::Editor;
            level->m_levelString = levelString;
            level->m_audioTrack = settings.audioTrack;
            level->m_songID = settings.songID;
            level->m_levelLength = settings.levelLength;

            // Open the editor scene
            auto* scene = LevelEditorLayer::scene(level, false);
            cocos2d::CCDirector::sharedDirector()->pushScene(scene);

            // Close MultiplayerPopup if open
            if (MultiplayerPopup::s_instance) {
                MultiplayerPopup::s_instance->forceClose();
            }

            m_pendingSync = PendingSync {
                playerId,
                objects,
                settings,
                locks
            };
            return;
        }

        m_pendingSync.reset();

        if (isPendingSync) {
            log::info("RemoteActionHandler: Applying pending sync locks (objects already natively loaded)");
            // Apply locks
            m_objectLocks.clear();
            for (auto const& lock : locks) {
                m_objectLocks[lock.uuid] = LockInfo { lock.playerId, lock.timeLeft };
            }
            m_initialSyncCompleted = true;
            return;
        }

        m_processingRemote = true;

        log::info("RemoteActionHandler: Syncing level state with {} objects from player {}", objects.size(), playerId);

        // Deselect all selected objects first to prevent dangling pointers in EditorUI!
        if (auto* editorUI = editor->m_editorUI) {
            editorUI->deselectAll();
        }

        // Delete all existing objects
        auto* allObjects = editor->m_objects;
        if (allObjects) {
            auto copy = cocos2d::CCArray::create();
            copy->addObjectsFromArray(allObjects);
            for (auto* obj : CCArrayExt<GameObject*>(copy)) {
                editor->removeObject(obj, true);
            }
        }
        clearMappings();

        // Clear local undo/redo lists since all objects are replaced
        if (editor->m_undoObjects) {
            editor->m_undoObjects->removeAllObjects();
        }
        if (editor->m_redoObjects) {
            editor->m_redoObjects->removeAllObjects();
        }

        // Apply level settings
        if (!settings.saveString.empty() && editor->m_levelSettings) {
            auto* newSettings = LevelSettingsObject::objectFromString(settings.saveString);
            if (newSettings) {
                // Safely swap m_effectManager to sync level colors without crashing
                if (newSettings->m_effectManager) {
                    newSettings->m_effectManager->retain();
                    if (newSettings->m_effectManager->getParent() == newSettings) {
                        newSettings->m_effectManager->removeFromParent();
                    }
                    if (editor->m_levelSettings->m_effectManager) {
                        editor->m_levelSettings->m_effectManager->release();
                    }
                    editor->m_levelSettings->m_effectManager = newSettings->m_effectManager;
                }
                
                editor->m_levelSettings->m_startMode = newSettings->m_startMode;
                editor->m_levelSettings->m_startSpeed = newSettings->m_startSpeed;
                editor->m_levelSettings->m_startMini = newSettings->m_startMini;
                editor->m_levelSettings->m_startDual = newSettings->m_startDual;
                editor->m_levelSettings->m_twoPlayerMode = newSettings->m_twoPlayerMode;
                editor->m_levelSettings->m_isFlipped = newSettings->m_isFlipped;
                editor->m_levelSettings->m_songOffset = newSettings->m_songOffset;
                
                editor->updateOptions();
            }
        }
        
        if (editor->m_level) {
            editor->m_level->m_audioTrack = settings.audioTrack;
            editor->m_level->m_songID = settings.songID;
            editor->m_level->m_levelLength = settings.levelLength;
            
            // Try to play the music
            if (settings.songID > 0) {
                if (MusicDownloadManager::sharedState()->isSongDownloaded(settings.songID)) {
                    GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
                } else {
                    geode::Notification::create("Custom song not downloaded locally.", geode::NotificationIcon::Info)->show();
                }
            } else {
                // Official song
                GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
            }
        }
        
        // Spawn all objects
        for (auto& objData : objects) {
            if (objData.saveString.empty()) continue;
            auto arr = editor->createObjectsFromString(objData.saveString, true, true);
            if (arr && arr->count() > 0) {
                auto* newObj = static_cast<GameObject*>(arr->objectAtIndex(0));
                registerObject(objData.uuid, newObj);
            }
        }

        // Apply locks
        m_objectLocks.clear();
        for (auto const& lock : locks) {
            m_objectLocks[lock.uuid] = LockInfo { lock.playerId, lock.timeLeft };
        }

        // Force UI options update (e.g. background, ground, colors)
        editor->levelSettingsUpdated();

        geode::Notification::create("Level Synced!", geode::NotificationIcon::Success)->show();

        m_initialSyncCompleted = true;
        m_processingRemote = false;
    }

    void RemoteActionHandler::updateLocks(float dt) {
        for (auto it = m_objectLocks.begin(); it != m_objectLocks.end(); ) {
            it->second.timeLeft -= dt;
            if (it->second.timeLeft <= 0.f) {
                it = m_objectLocks.erase(it);
            } else {
                ++it;
            }
        }
    }

    void RemoteActionHandler::registerObject(std::string const& uuid, GameObject* obj) {
        m_uuidToObject[uuid] = obj;
        m_objectToUuid[obj] = uuid;
    }

    void RemoteActionHandler::unregisterObject(std::string const& uuid) {
        auto it = m_uuidToObject.find(uuid);
        if (it != m_uuidToObject.end()) {
            GameObject* obj = it->second;
            m_objectToUuid.erase(obj);
            m_uuidToObject.erase(it);
        }
    }

    void RemoteActionHandler::pruneObjectFromHistory(LevelEditorLayer* editor, GameObject* obj) {
        if (!editor || !obj) return;

        auto pruneList = [](cocos2d::CCArray* list, GameObject* target) {
            if (!list) return;
            std::vector<cocos2d::CCObject*> toRemove;
            for (auto* item : geode::cocos::CCArrayExt<UndoObject*>(list)) {
                if (!item) continue;
                
                // Check m_objects array
                if (item->m_objects) {
                    if (item->m_objects->containsObject(target)) {
                        item->m_objects->removeObject(target);
                    }
                    if (item->m_objects->count() == 0) {
                        toRemove.push_back(item);
                        continue;
                    }
                }
                
                // Check m_objectCopy
                if (item->m_objectCopy && item->m_objectCopy->m_object == target) {
                    toRemove.push_back(item);
                    continue;
                }
            }
            for (auto* item : toRemove) {
                list->removeObject(item);
            }
        };

        pruneList(editor->m_undoObjects, obj);
        pruneList(editor->m_redoObjects, obj);
    }

    GameObject* RemoteActionHandler::getObjectByUUID(std::string const& uuid) const {
        auto it = m_uuidToObject.find(uuid);
        return it != m_uuidToObject.end() ? it->second : nullptr;
    }

    std::string RemoteActionHandler::getUUIDForObject(GameObject* obj) const {
        auto it = m_objectToUuid.find(obj);
        return it != m_objectToUuid.end() ? it->second : "";
    }

    std::string RemoteActionHandler::getOrCreateUUID(GameObject* obj) {
        if (!obj) return "";
        auto it = m_objectToUuid.find(obj);
        if (it != m_objectToUuid.end()) {
            return it->second;
        }
        auto uuid = generateUUID();
        registerObject(uuid, obj);
        return uuid;
    }

    std::string RemoteActionHandler::generateUUID() {
        static std::mt19937 rng(std::random_device{}());
        static std::uniform_int_distribution<int> dist(0, 0xFFFF);

        int playerId = SessionManager::get().getLocalPlayerId();
        int counter = s_uuidCounter++;
        int random = dist(rng);

        std::ostringstream ss;
        ss << std::hex << std::setfill('0')
           << std::setw(4) << playerId << "-"
           << std::setw(8) << counter << "-"
           << std::setw(4) << random;

        return ss.str();
    }

    void RemoteActionHandler::clearMappings() {
        m_uuidToObject.clear();
        m_objectToUuid.clear();
        m_objectLocks.clear();
        m_expectedUuids.clear();
        m_initialSyncCompleted = false;
        s_uuidCounter = 0;
    }

    bool RemoteActionHandler::isInitialSyncCompleted() const {
        if (SessionManager::get().getRole() == SessionManager::Role::Host) {
            return true;
        }
        return m_initialSyncCompleted;
    }

    void RemoteActionHandler::downloadSongFinished(int id) {
        auto* editor = getEditorLayer();
        if (editor && editor->m_level && editor->m_level->m_songID == id) {
            GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
            geode::Notification::create("Song downloaded! Playing now.", geode::NotificationIcon::Success)->show();
        }
    }

    void RemoteActionHandler::downloadSongFailed(int id, GJSongError error) {
        geode::Notification::create("Failed to download custom song", geode::NotificationIcon::Error)->show();
    }

    void RemoteActionHandler::handleRemoteUpdateSettings(int playerId, ActionSerializer::LevelSettingsData const& settings) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        log::info("RemoteActionHandler: Updating level settings from player {}", playerId);

        // Apply level settings
        if (!settings.saveString.empty() && editor->m_levelSettings) {
            auto* newSettings = LevelSettingsObject::objectFromString(settings.saveString);
            if (newSettings) {
                // Safely swap m_effectManager to sync level colors without crashing
                if (newSettings->m_effectManager) {
                    newSettings->m_effectManager->retain();
                    if (newSettings->m_effectManager->getParent() == newSettings) {
                        newSettings->m_effectManager->removeFromParent();
                    }
                    if (editor->m_levelSettings->m_effectManager) {
                        editor->m_levelSettings->m_effectManager->release();
                    }
                    editor->m_levelSettings->m_effectManager = newSettings->m_effectManager;
                }
                
                editor->m_levelSettings->m_startMode = newSettings->m_startMode;
                editor->m_levelSettings->m_startSpeed = newSettings->m_startSpeed;
                editor->m_levelSettings->m_startMini = newSettings->m_startMini;
                editor->m_levelSettings->m_startDual = newSettings->m_startDual;
                editor->m_levelSettings->m_twoPlayerMode = newSettings->m_twoPlayerMode;
                editor->m_levelSettings->m_isFlipped = newSettings->m_isFlipped;
                editor->m_levelSettings->m_songOffset = newSettings->m_songOffset;
                
                editor->updateOptions();
            }
        }
        
        if (editor->m_level) {
            bool songChanged = (editor->m_level->m_songID != settings.songID || editor->m_level->m_audioTrack != settings.audioTrack);
            editor->m_level->m_audioTrack = settings.audioTrack;
            editor->m_level->m_songID = settings.songID;
            editor->m_level->m_levelLength = settings.levelLength;
            
            // Try to play the music if it changed
            if (songChanged) {
                if (settings.songID > 0) {
                    if (MusicDownloadManager::sharedState()->isSongDownloaded(settings.songID)) {
                        GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
                    }
                } else {
                    GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
                }
            }
        }

        // Force UI options update (e.g. background, ground, colors)
        editor->levelSettingsUpdated();

        m_processingRemote = false;
    }

} // namespace mpedit
