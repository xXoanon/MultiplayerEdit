#include "RemoteActionHandler.hpp"
#include "P2PManager.hpp"
#include "BinaryProtocol.hpp"
#include "SessionManager.hpp"
#include "MessageBatcher.hpp"
#include "ui/menu/MultiplayerMenuPopup.hpp"
#include <Geode/Geode.hpp>
#include <Geode/utils/file.hpp>
#include <random>
#include <sstream>
#include <iomanip>
#include <set>
#include <cmath>

using namespace geode::prelude;

namespace mpedit {

    namespace {
        std::set<GameObject*> snapshotExistingObjects(LevelEditorLayer* editor) {
            std::set<GameObject*> existing;
            if (editor && editor->m_objects) {
                for (auto* obj : CCArrayExt<GameObject*>(editor->m_objects)) {
                    if (obj) existing.insert(obj);
                }
            }
            return existing;
        }

        std::vector<GameObject*> createObjectsFromSaveStringRobust(LevelEditorLayer* editor, std::string const& saveStr) {
            std::vector<GameObject*> newObjects;
            if (!editor || saveStr.empty()) return newObjects;

            auto* arr = editor->createObjectsFromString(saveStr, true, true);
            if (arr) {
                for (auto* obj : CCArrayExt<GameObject*>(arr)) {
                    if (obj) {
                        newObjects.push_back(obj);
                    }
                }
            }
            return newObjects;
        }

        void applyTransformSafe(GameObject* obj, float rotation, float scaleX, float scaleY, bool flipX, bool flipY) {
            if (!obj) return;
            obj->setRotation(rotation);
            obj->setFlipX(flipX);
            obj->setFlipY(flipY);
            obj->setScaleX(scaleX);
            obj->setScaleY(scaleY);

            obj->dirtifyObjectRect();
            
            obj->getObjectRect();
            obj->calculateOrientedBox();

            auto* editor = LevelEditorLayer::get();
            if (!editor || editor->m_playbackMode == PlaybackMode::Not) {
                obj->updateStartPos();
                obj->updateStartValues();
            }
        }
    }

    RemoteActionHandler& RemoteActionHandler::get() {
        static RemoteActionHandler instance;
        return instance;
    }

    void RemoteActionHandler::setupHandlers() {
        MusicDownloadManager::sharedState()->addMusicDownloadDelegate(this);

        auto& net = P2PManager::get();

        net.on(proto::Opcode::PlaceObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializePlaceObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing PlaceObjects");
                return;
            }
            handleRemotePlaceObjects(playerId, msg.objects);
        });

        net.on(proto::Opcode::DeleteObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeDeleteObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing DeleteObjects");
                return;
            }
            handleRemoteDeleteObjects(playerId, msg.uuids);
        });

        net.on(proto::Opcode::MoveObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeMoveObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing MoveObjects");
                return;
            }
            handleRemoteMoveObjects(playerId, msg.moves);
        });

        net.on(proto::Opcode::MoveBatch, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeMoveBatch(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing MoveBatch");
                return;
            }
            handleRemoteMoveObjects(playerId, msg.moves);
        });



        net.on(proto::Opcode::TransformObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeTransformObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing TransformObjects");
                return;
            }
            handleRemoteTransformObjects(playerId, msg.transforms);
        });

        net.on(proto::Opcode::ReconcileObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeReconcileObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing ReconcileObjects");
                return;
            }
            handleRemoteReconcileObjects(playerId, msg.reconciles);
        });

        net.on(proto::Opcode::UpdateObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeUpdateObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing UpdateObjects");
                return;
            }
            handleRemoteUpdateObjects(playerId, msg.objects);
        });

        net.on(proto::Opcode::LockObjects, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeLockObjects(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing LockObjects");
                return;
            }
            handleRemoteLockObjects(playerId, msg.uuids, msg.locked);
        });

        net.on(proto::Opcode::UpdateSettings, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeUpdateSettings(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing UpdateSettings");
                return;
            }
            handleRemoteUpdateSettings(playerId, msg.settings);
        });

        net.on(proto::Opcode::UpdateColorChannel, [this](int playerId, proto::Reader& reader) {
            if (playerId == P2PManager::get().getLocalPlayerId()) return;
            auto msg = proto::deserializeUpdateColorChannel(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing UpdateColorChannel");
                return;
            }
            handleRemoteUpdateColorChannel(playerId, msg.data);
        });

        net.on(proto::Opcode::SyncLevelStart, [this](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeSyncLevelStart(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing SyncLevelStart");
                return;
            }
            m_chunkedSync.hostPlayerId = playerId;
            m_chunkedSync.totalChunks = msg.totalChunks;
            m_chunkedSync.totalObjects = msg.totalObjects;
            m_chunkedSync.settings = msg.settings;
            m_chunkedSync.chunks.clear();
            m_chunkedSync.chunks.resize(msg.totalChunks);
            m_chunkedSync.uuidChunks.clear();
            m_chunkedSync.uuidChunks.resize(msg.totalChunks);
            m_chunkedSync.active = true;
            
            SessionManager::get().updateStatus(fmt::format("Syncing level (0/{})...", msg.totalChunks));

            log::info("RemoteActionHandler: SyncLevelStart received ({} chunks, {} objects)",
                msg.totalChunks, msg.totalObjects);
        });

        net.on(proto::Opcode::SyncLevelChunk, [this](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeSyncLevelChunk(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing SyncLevelChunk");
                return;
            }
            if (!m_chunkedSync.active || playerId != m_chunkedSync.hostPlayerId) return;
            if (msg.chunkIndex < m_chunkedSync.totalChunks) {
                m_chunkedSync.chunks[msg.chunkIndex] = std::string(msg.data.begin(), msg.data.end());
                m_chunkedSync.uuidChunks[msg.chunkIndex] = msg.uuids;

                SessionManager::get().updateStatus(fmt::format("Syncing level ({}/{})...", msg.chunkIndex + 1, m_chunkedSync.totalChunks));

                log::info("RemoteActionHandler: SyncLevelChunk received: {}/{}",
                    msg.chunkIndex + 1, m_chunkedSync.totalChunks);
            }
        });

        net.on(proto::Opcode::RequestSnapshot, [this](int playerId, proto::Reader& reader) {
            log::info("RemoteActionHandler: Received RequestSnapshot from server");
            this->sendSnapshotToServer();
        });

        net.on(proto::Opcode::HostMigration, [this](int playerId, proto::Reader& reader) {
            int newHostId = reader.readU32();
            if (reader.hasError()) return;
            log::info("RemoteActionHandler: Host migrated to {}", newHostId);
        });

        net.on(proto::Opcode::SetViewOnly, [](int playerId, proto::Reader& reader) {
            uint32_t targetId = reader.readU32();
            bool isViewOnly = reader.readBool();
            if (reader.hasError()) return;
            SessionManager::get().setPlayerViewOnly(targetId, isViewOnly);
            if (targetId == SessionManager::get().getLocalPlayerId()) {
                if (isViewOnly) {
                    geode::Notification::create("You are now in View-Only mode.", cocos2d::CCSprite::createWithSpriteFrameName("GJ_lock_001.png"))->show();
                } else {
                    geode::Notification::create("You are no longer in View-Only mode.", cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
                }
            }
        });

        net.on(proto::Opcode::Error, [](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeError(reader);
            if (reader.hasError()) return;
            geode::queueInMainThread([msg] {
                SessionManager::get().dispatchError(msg.message);
                SessionManager::get().leaveSession();
            });
        });

        net.on(proto::Opcode::ServerMessage, [](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeServerMessage(reader);
            if (reader.hasError()) return;
            geode::queueInMainThread([msg] {
                geode::Notification::create("Server says: " + msg.message, geode::NotificationIcon::Info)->show();
            });
        });

        net.on(proto::Opcode::KickPlayer, [](int playerId, proto::Reader& reader) {
            uint32_t targetId = reader.readU32();
            if (reader.hasError()) return;
            if (targetId == SessionManager::get().getLocalPlayerId()) {
                geode::Notification::create("You have been kicked by the host.", cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteIcon_001.png"))->show();
                SessionManager::get().leaveSession();
                
                geode::queueInMainThread([] {
                    if (LevelEditorLayer::get()) {
                        auto* director = cocos2d::CCDirector::sharedDirector();
                        if (auto* runningScene = director->getRunningScene()) {
                            std::function<EditorPauseLayer*(cocos2d::CCNode*)> findPauseLayer = [&](cocos2d::CCNode* parent) -> EditorPauseLayer* {
                                if (!parent) return nullptr;
                                if (auto* pause = typeinfo_cast<EditorPauseLayer*>(parent)) {
                                    return pause;
                                }
                                if (parent->getChildren()) {
                                    for (auto* child : geode::cocos::CCArrayExt<cocos2d::CCNode*>(parent->getChildren())) {
                                        if (auto* p = findPauseLayer(child)) return p;
                                    }
                                }
                                return nullptr;
                            };

                            auto* pauseLayer = findPauseLayer(runningScene);
                            if (pauseLayer) {
                                auto* dummySender = cocos2d::CCNode::create();
                                pauseLayer->onExitEditor(dummySender);
                            } else {
                                director->popScene();
                            }
                        }
                    }
                });
            }
        });

        net.on(proto::Opcode::BanPlayer, [](int playerId, proto::Reader& reader) {
            uint32_t targetId = reader.readU32();
            if (reader.hasError()) return;
            if (targetId == SessionManager::get().getLocalPlayerId()) {
                geode::Notification::create("You have been banned by the host.", cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteIcon_001.png"))->show();
                SessionManager::get().leaveSession();
                
                geode::queueInMainThread([] {
                    if (LevelEditorLayer::get()) {
                        auto* director = cocos2d::CCDirector::sharedDirector();
                        if (auto* runningScene = director->getRunningScene()) {
                            std::function<EditorPauseLayer*(cocos2d::CCNode*)> findPauseLayer = [&](cocos2d::CCNode* parent) -> EditorPauseLayer* {
                                if (!parent) return nullptr;
                                if (auto* pause = typeinfo_cast<EditorPauseLayer*>(parent)) {
                                    return pause;
                                }
                                if (parent->getChildren()) {
                                    for (auto* child : geode::cocos::CCArrayExt<cocos2d::CCNode*>(parent->getChildren())) {
                                        if (auto* p = findPauseLayer(child)) return p;
                                    }
                                }
                                return nullptr;
                            };

                            auto* pauseLayer = findPauseLayer(runningScene);
                            if (pauseLayer) {
                                auto* dummySender = cocos2d::CCNode::create();
                                pauseLayer->onExitEditor(dummySender);
                            } else {
                                director->popScene();
                            }
                        }
                    }
                });
            }
        });

        net.on(proto::Opcode::SyncLocksChunk, [this](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeSyncLocksChunk(reader);
            if (reader.hasError()) return;
            for (auto const& lock : msg.locks) {
                m_objectLocks[lock.uuid] = {lock.playerId, 0.0f};
            }
        });

        net.on(proto::Opcode::SyncLevelEnd, [this](int playerId, proto::Reader& reader) {
            proto::deserializeSyncLevelEnd(reader);
            if (reader.hasError()) {
                log::error("RemoteActionHandler: Error deserializing SyncLevelEnd");
                return;
            }
            if (!m_chunkedSync.active || playerId != m_chunkedSync.hostPlayerId) return;

            std::string compressedString = "";
            for (auto const& chunk : m_chunkedSync.chunks) {
                compressedString += chunk;
            }
            
            std::string objectsString = "";
            if (!compressedString.empty()) {
                geode::ByteVector bytes(compressedString.begin(), compressedString.end());
                if (bytes.size() >= 4 && bytes[0] == 'P' && bytes[1] == 'K' && bytes[2] == 0x03 && bytes[3] == 0x04) {
                    if (auto unzip = geode::utils::file::Unzip::create(bytes)) {
                        if (auto extracted = unzip.unwrap().extract("level.txt")) {
                            objectsString = std::string(extracted.unwrap().begin(), extracted.unwrap().end());
                        } else {
                            log::error("RemoteActionHandler: Failed to extract level.txt from sync payload");
                        }
                    } else {
                        log::error("RemoteActionHandler: Failed to create unzipper for sync payload");
                    }
                } else {
                    objectsString = compressedString;
                }
            }
            
            std::vector<std::string> uuids;
            uuids.reserve(m_chunkedSync.totalObjects);
            for (auto const& uuidChunk : m_chunkedSync.uuidChunks) {
                uuids.insert(uuids.end(), uuidChunk.begin(), uuidChunk.end());
            }

            SessionManager::get().updateStatus("Sync complete, loading...");

            log::info("RemoteActionHandler: Reassembled sync string, size: {} bytes, {} objects",
                objectsString.size(), uuids.size());
            handleRemoteSyncLevel(playerId, objectsString, uuids, m_chunkedSync.settings, {});

            m_chunkedSync.active = false;
            m_chunkedSync.chunks.clear();
            m_chunkedSync.uuidChunks.clear();
        });
    }

    void RemoteActionHandler::clearHandlers() {
        MusicDownloadManager::sharedState()->removeMusicDownloadDelegate(this);
        clearMappings();
        m_expectedUuids.clear();
        m_objectLocks.clear();
        m_pendingSync.reset();
        m_initialSyncCompleted = false;
        m_chunkedSync.active = false;
        m_chunkedSync.chunks.clear();
        m_chunkedSync.uuidChunks.clear();
        P2PManager::get().clearHandlers();
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

    bool isEditorReady(LevelEditorLayer* editor) {
        return editor && editor->m_editorUI;
    }

    LevelEditorLayer* RemoteActionHandler::getEditorLayer() const {
        if (m_editorForInit) {
            return m_editorForInit;
        }

        if (auto* editor = LevelEditorLayer::get()) {
            if (isEditorReady(editor)) {
                return editor;
            }
            log::debug("RemoteActionHandler: LevelEditorLayer::get() returned an unready editor, falling through");
        }

        auto* dir = CCDirector::sharedDirector();
        if (auto* scene = dir->getRunningScene()) {
            if (auto* editor = findEditorLayer(scene)) {
                if (isEditorReady(editor)) {
                    return editor;
                }
            }
        }
        if (auto* nextScene = dir->getNextScene()) {
            if (auto* editor = findEditorLayer(nextScene)) {
                log::debug("RemoteActionHandler: editor resolved via getNextScene() (ready={})",
                    isEditorReady(editor));
                return editor;
            }
        }
        return nullptr;
    }

    void RemoteActionHandler::flushDeferredDeletions() {
        if (!m_deferredDeletionObjects.empty()) {
            for (auto* obj : m_deferredDeletionObjects) {
                obj->release();
            }
            log::info("RemoteActionHandler: Flushed {} deferred deletion objects", m_deferredDeletionObjects.size());
            m_deferredDeletionObjects.clear();
        }
    }

    void RemoteActionHandler::applyPendingSync() {
        if (!m_pendingSync) {
            log::debug("RemoteActionHandler: applyPendingSync called but no pending sync");
            return;
        }
        auto sync = m_pendingSync.value();
        m_pendingSync.reset();
        log::info("RemoteActionHandler: Applying pending sync (objectsStringLen={}, uuids={}, settingsLen={}, locks={})",
            sync.objectsString.size(), sync.uuids.size(), sync.settings.saveString.size(), sync.locks.size());
        LevelEditorLayer* override = m_editorForInit;
        handleRemoteSyncLevel(sync.playerId, sync.objectsString, sync.uuids, sync.settings, sync.locks, true);
        m_editorForInit = nullptr;
        (void)override;
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

        std::unordered_set<std::string> processedUUIDs;

        for (size_t i = 0; i < objects.size(); i++) {
            auto const& objData = objects[i];
            if (processedUUIDs.count(objData.uuid)) continue;
            processedUUIDs.insert(objData.uuid);
            
            if (!objData.saveString.empty()) {
                auto newObjs = createObjectsFromSaveStringRobust(editor, objData.saveString);
                if (!newObjs.empty()) {
                    GameObject* obj = nullptr;
                    for (auto* createdObj : newObjs) {
                        if (createdObj->m_objectID == objData.objectID) {
                            if (objData.objectID == 747) {
                                if (auto* tp = typeinfo_cast<TeleportPortalObject*>(createdObj)) {
                                    if (!tp->m_isYellowPortal) {
                                        obj = createdObj;
                                        break;
                                    }
                                }
                            } else {
                                obj = createdObj;
                                break;
                            }
                        }
                    }
                    if (!obj) obj = newObjs.front();
                    
                    if (obj->m_objectID == 31) {
                        if (auto* startPos = typeinfo_cast<StartPosObject*>(obj)) {
                            startPos->loadSettingsFromString(objData.saveString);
                        }
                    }

                    for (auto* createdObj : newObjs) {
                        if (createdObj->m_editorLayer != objData.editorLayer || createdObj->m_editorLayer2 != objData.editorLayer2) {
                            editor->removeObjectFromSection(createdObj);
                            createdObj->m_editorLayer = objData.editorLayer;
                            createdObj->m_editorLayer2 = objData.editorLayer2;
                            editor->addToSection(createdObj);
                        }
                    }

                    applyTransformSafe(obj, objData.rotation, objData.scaleX, objData.scaleY, objData.flipX, objData.flipY);
                    registerObject(objData.uuid, obj);
                    
                    if (obj->m_objectID == 31) {
                        updateStartPosCache(obj);
                    }

                    log::debug("RemoteActionHandler: Placed object {} via saveString (uuid={})", objData.objectID, objData.uuid);
                    
                    if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                        if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                            for (size_t j = 0; j < objects.size(); j++) {
                                auto const& orangeData = objects[j];
                                if (orangeData.objectID == 749 && !processedUUIDs.count(orangeData.uuid)) {
                                    auto* orange = tpPortal->m_orangePortal;
                                    orange->setPositionOverride({orangeData.x, orangeData.y});
                                    applyTransformSafe(orange, orangeData.rotation, orangeData.scaleX,
                                                       orangeData.scaleY, orangeData.flipX, orangeData.flipY);
                                    registerObject(orangeData.uuid, orange);
                                    processedUUIDs.insert(orangeData.uuid);
                                    break;
                                }
                            }
                        }
                    }
                    continue;
                }
            }

            auto* obj = editor->createObject(objData.objectID, {objData.x, objData.y}, true);
            if (!obj) {
                log::warn("RemoteActionHandler: Failed to create object ID {}", objData.objectID);
                continue;
            }

            if (obj->m_editorLayer != objData.editorLayer || obj->m_editorLayer2 != objData.editorLayer2) {
                editor->removeObjectFromSection(obj);
                obj->m_editorLayer = objData.editorLayer;
                obj->m_editorLayer2 = objData.editorLayer2;
                editor->addToSection(obj);
            }

            applyTransformSafe(obj, objData.rotation, objData.scaleX, objData.scaleY, objData.flipX, objData.flipY);
            obj->m_editorLayer = objData.editorLayer;
            obj->m_editorLayer2 = objData.editorLayer2;

            registerObject(objData.uuid, obj);
            log::debug("RemoteActionHandler: Placed object {} (uuid={})", objData.objectID, objData.uuid);
            
            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                    for (size_t j = 0; j < objects.size(); j++) {
                        auto const& orangeData = objects[j];
                        if (orangeData.objectID == 749 && !processedUUIDs.count(orangeData.uuid)) {
                            auto* orange = tpPortal->m_orangePortal;
                            orange->setPositionOverride({orangeData.x, orangeData.y});
                            applyTransformSafe(orange, orangeData.rotation, orangeData.scaleX,
                                               orangeData.scaleY, orangeData.flipX, orangeData.flipY);
                            registerObject(orangeData.uuid, orange);
                            processedUUIDs.insert(orangeData.uuid);
                            break;
                        }
                    }
                }
            }
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

            if (auto* editorUI = editor->m_editorUI) {
                if (editorUI->m_selectedObject == obj || (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(obj))) {
                    editorUI->deselectObject(obj);
                    if (editorUI->m_selectedObject == obj) {
                        editorUI->m_selectedObject = nullptr;
                    }
                    if (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(obj)) {
                        editorUI->m_selectedObjects->removeObject(obj);
                    }
                }
            }

            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                if (tpPortal->m_isYellowPortal) {
                    continue;
                }
            }

            pruneObjectFromHistory(editor, obj);
            
            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                    auto orangeUuid = getUUIDForObject(tpPortal->m_orangePortal);
                    auto* orange = tpPortal->m_orangePortal;
                    tpPortal->m_orangePortal = nullptr;
                    if (editor->m_playbackMode != PlaybackMode::Not) {
                        orange->retain();
                        m_deferredDeletionObjects.push_back(orange);
                    }
                    editor->removeObject(orange, true);
                    if (!orangeUuid.empty()) unregisterObject(orangeUuid);
                }
            }

            if (editor->m_playbackMode != PlaybackMode::Not) {
                obj->retain();
                m_deferredDeletionObjects.push_back(obj);
            }
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

            TeleportPortalObject* tpOrange = nullptr;
            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                    tpOrange = tpPortal->m_orangePortal;
                    editor->removeObjectFromSection(tpOrange);
                }
            }

            editor->removeObjectFromSection(obj);
            
            auto pos = obj->getPosition();
            
            if (editor->m_playbackMode != PlaybackMode::Not) {
                obj->m_startPosition = cocos2d::CCPoint{
                    obj->m_startPosition.x + move.dx,
                    obj->m_startPosition.y + move.dy
                };
            }
            
            obj->setPosition({pos.x + move.dx, pos.y + move.dy});
            obj->dirtifyObjectRect();
            
            obj->getObjectRect();
            obj->calculateOrientedBox();

            if (editor->m_playbackMode == PlaybackMode::Not) {
                obj->updateStartPos();
            }
            editor->addToSection(obj);
            
            if (tpOrange) {
                tpOrange->getObjectRect();
                tpOrange->calculateOrientedBox();
                editor->addToSection(tpOrange);
            }

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


        log::debug("RemoteActionHandler: applying remote transform (playerId={}, n={})", playerId, transforms.size());
        m_processingRemote = true;

        for (auto& t : transforms) {
            auto* obj = getObjectByUUID(t.uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for transform", t.uuid);
                continue;
            }

            editor->removeObjectFromSection(obj);
            
            applyTransformSafe(obj, t.rotation, t.scaleX, t.scaleY, t.flipX, t.flipY);
            
            obj->getObjectRect();
            obj->calculateOrientedBox();
            
            editor->addToSection(obj);

            log::debug("RemoteActionHandler: transformed object (uuid={}..., rot={:.1f}, flipX={}, flipY={})",
                t.uuid.substr(0, 8), t.rotation, t.flipX, t.flipY);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteReconcileObjects(
        int playerId,
        std::vector<ActionSerializer::ReconcileData> const& reconciles
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;


        log::debug("RemoteActionHandler: applying remote reconcile (playerId={}, n={})", playerId, reconciles.size());
        m_processingRemote = true;

        for (auto& r : reconciles) {
            auto* obj = getObjectByUUID(r.uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for reconcile", r.uuid);
                continue;
            }

            editor->removeObjectFromSection(obj);
            
            if (editor->m_playbackMode != PlaybackMode::Not) {
                obj->m_startPosition = cocos2d::CCPoint{r.x, r.y};
            } else {
                obj->setPosition(cocos2d::CCPoint{r.x, r.y});
            }
            
            applyTransformSafe(obj, r.rotation, r.scaleX, r.scaleY, r.flipX, r.flipY);
            
            obj->getObjectRect();
            obj->calculateOrientedBox();
            
            editor->addToSection(obj);


            log::debug("RemoteActionHandler: reconciled object (uuid={}..., pos=({}, {}), rot={:.1f})",
                r.uuid.substr(0, 8), r.x, r.y, r.rotation);
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
        std::unordered_set<std::string> processedUUIDs;

        for (size_t i = 0; i < objects.size(); i++) {
            auto const& objData = objects[i];
            auto* oldObj = getObjectByUUID(objData.uuid);
            if (!oldObj) {
                log::warn("RemoteActionHandler: Object to update not found (uuid={})", objData.uuid);
                continue;
            }

            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(oldObj)) {
                if (tpPortal->m_isYellowPortal) {
                    tpPortal->setPositionOverride({objData.x, objData.y});
                    applyTransformSafe(oldObj, objData.rotation, objData.scaleX, objData.scaleY, objData.flipX, objData.flipY);
                    log::debug("RemoteActionHandler: Updated orange portal directly without recreation");
                    continue;
                }
            }

            auto* editorUI = editor->m_editorUI;
            bool wasSelected = false;
            if (editorUI && (editorUI->m_selectedObject == oldObj || (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(oldObj)))) {
                wasSelected = true;
                editorUI->deselectObject(oldObj);
                if (editorUI->m_selectedObject == oldObj) {
                    editorUI->m_selectedObject = nullptr;
                }
                if (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(oldObj)) {
                    editorUI->m_selectedObjects->removeObject(oldObj);
                }
            }

            pruneObjectFromHistory(editor, oldObj);
            
            std::string orangeOldUuid;
            ActionSerializer::ObjectData oldOrangeData;
            bool hadOldOrange = false;
            
            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(oldObj)) {
                if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                    orangeOldUuid = getUUIDForObject(tpPortal->m_orangePortal);
                    oldOrangeData = ActionSerializer::extractObjectData(tpPortal->m_orangePortal, orangeOldUuid);
                    hadOldOrange = true;
                    
                    auto* orange = tpPortal->m_orangePortal;
                    tpPortal->m_orangePortal = nullptr;
                    if (editor->m_playbackMode != PlaybackMode::Not) {
                        orange->retain();
                        m_deferredDeletionObjects.push_back(orange);
                    }
                    editor->removeObject(orange, true);
                    if (!orangeOldUuid.empty()) unregisterObject(orangeOldUuid);
                }
            }

            auto objDataCopy = objData;
            ActionSerializer::injectLocalStartPosState(objDataCopy, oldObj);

            if (editor->m_playbackMode != PlaybackMode::Not) {
                oldObj->retain();
                m_deferredDeletionObjects.push_back(oldObj);
            }
            editor->removeObject(oldObj, true);
            unregisterObject(objDataCopy.uuid);

            auto newObjs = createObjectsFromSaveStringRobust(editor, objDataCopy.saveString);
            if (!newObjs.empty()) {
                GameObject* newObj = nullptr;
                for (auto* createdObj : newObjs) {
                    if (createdObj->m_objectID == objData.objectID) {
                        if (objData.objectID == 747) {
                            if (auto* tp = typeinfo_cast<TeleportPortalObject*>(createdObj)) {
                                if (!tp->m_isYellowPortal) {
                                    newObj = createdObj;
                                    break;
                                }
                            }
                        } else {
                            newObj = createdObj;
                            break;
                        }
                    }
                }
                if (!newObj) newObj = newObjs.front();
                
                if (newObj->m_objectID == 31) {
                    if (auto* startPos = typeinfo_cast<StartPosObject*>(newObj)) {
                        startPos->loadSettingsFromString(objDataCopy.saveString);
                    }
                }

                applyTransformSafe(newObj, objData.rotation, objData.scaleX, objData.scaleY, objData.flipX, objData.flipY);
                registerObject(objData.uuid, newObj);
                
                if (newObj->m_objectID == 31) {
                    updateStartPosCache(newObj);
                }

                log::debug("RemoteActionHandler: Updated object {} via saveString", objData.uuid);
                
                if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(newObj)) {
                    if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                        bool foundInData = false;
                        for (size_t j = 0; j < objects.size(); j++) {
                            auto const& orangeData = objects[j];
                            if (orangeData.objectID == 749 && !processedUUIDs.count(orangeData.uuid)) {
                                auto* orange = tpPortal->m_orangePortal;
                                orange->setPositionOverride({orangeData.x, orangeData.y});
                                applyTransformSafe(orange, orangeData.rotation, orangeData.scaleX,
                                                   orangeData.scaleY, orangeData.flipX, orangeData.flipY);
                                registerObject(orangeData.uuid, orange);
                                processedUUIDs.insert(orangeData.uuid);
                                foundInData = true;
                                break;
                            }
                        }
                        if (!foundInData && hadOldOrange) {
                            auto* orange = tpPortal->m_orangePortal;
                            orange->setPositionOverride({oldOrangeData.x, oldOrangeData.y});
                            applyTransformSafe(orange, oldOrangeData.rotation, oldOrangeData.scaleX,
                                               oldOrangeData.scaleY, oldOrangeData.flipX, oldOrangeData.flipY);
                            if (!orangeOldUuid.empty()) {
                                registerObject(orangeOldUuid, orange);
                            }
                        }
                    }
                }

                if (wasSelected && editorUI) {
                    editorUI->selectObject(newObj, true);
                }
            } else {
                auto* fallbackObj = editor->createObject(objData.objectID, {objData.x, objData.y}, true);
                if (fallbackObj) {
                    applyTransformSafe(fallbackObj, objData.rotation, objData.scaleX, objData.scaleY, objData.flipX, objData.flipY);
                    fallbackObj->m_editorLayer = objData.editorLayer;
                    fallbackObj->m_editorLayer2 = objData.editorLayer2;
                    registerObject(objData.uuid, fallbackObj);
                    log::warn("RemoteActionHandler: Updated object {} via fallback createObject", objData.uuid);
                    
                    if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(fallbackObj)) {
                        if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                            bool foundInData = false;
                            for (size_t j = 0; j < objects.size(); j++) {
                                auto const& orangeData = objects[j];
                                if (orangeData.objectID == 749 && !processedUUIDs.count(orangeData.uuid)) {
                                    auto* orange = tpPortal->m_orangePortal;
                                    orange->setPositionOverride({orangeData.x, orangeData.y});
                                    applyTransformSafe(orange, orangeData.rotation, orangeData.scaleX,
                                                       orangeData.scaleY, orangeData.flipX, orangeData.flipY);
                                    registerObject(orangeData.uuid, orange);
                                    processedUUIDs.insert(orangeData.uuid);
                                    foundInData = true;
                                    break;
                                }
                            }
                            if (!foundInData && hadOldOrange) {
                                auto* orange = tpPortal->m_orangePortal;
                                orange->setPositionOverride({oldOrangeData.x, oldOrangeData.y});
                                applyTransformSafe(orange, oldOrangeData.rotation, oldOrangeData.scaleX,
                                                   oldOrangeData.scaleY, oldOrangeData.flipX, oldOrangeData.flipY);
                                if (!orangeOldUuid.empty()) {
                                    registerObject(orangeOldUuid, orange);
                                }
                            }
                        }
                    }

                    if (wasSelected && editorUI) {
                        editorUI->selectObject(fallbackObj, true);
                    }
                } else {
                    log::error("RemoteActionHandler: Failed to create updated object from saveString AND fallback");
                }
            }
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteLockObjects(
        int playerId, 
        std::vector<std::string> const& uuids, 
        bool locked
    ) {
        m_processingRemote = true;

        if (locked) {
            auto* editor = getEditorLayer();
            auto* editorUI = editor ? editor->m_editorUI : nullptr;
            for (auto& uuid : uuids) {
                m_objectLocks[uuid] = LockInfo { playerId, 3.0f }; 
                
                if (editorUI) {
                    auto* obj = getObjectByUUID(uuid);
                    if (obj) {
                        if (editorUI->m_selectedObject == obj || (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(obj))) {
                            editorUI->deselectObject(obj);
                            if (editorUI->m_selectedObject == obj) {
                                editorUI->m_selectedObject = nullptr;
                            }
                            if (editorUI->m_selectedObjects && editorUI->m_selectedObjects->containsObject(obj)) {
                                editorUI->m_selectedObjects->removeObject(obj);
                            }
                        }
                    }
                }
            }
        } else {
            for (auto& uuid : uuids) {
                auto it = m_objectLocks.find(uuid);
                if (it != m_objectLocks.end() && it->second.playerId == playerId) {
                    m_objectLocks.erase(it);
                }
            }
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteSyncLevel(
        int playerId,
        std::string const& objectsString,
        std::vector<std::string> const& uuids,
        ActionSerializer::LevelSettingsData const& settings,
        std::vector<ActionSerializer::LockData> const& locks,
        bool isPendingSync
    ) {
        log::info("RemoteActionHandler: sync_level received (playerId={}, objectsStringLen={}, uuids={}, settingsLen={}, locks={}, pending={})",
            playerId, objectsString.size(), uuids.size(), settings.saveString.size(), locks.size(), isPendingSync);

        auto* editor = getEditorLayer();
        if (!editor) {
            log::info("RemoteActionHandler: Editor not ready yet, opening editor with settings-only level string");

            std::string levelString = settings.saveString;
            m_expectedUuids = uuids;

            m_pendingSync = PendingSync {
                playerId,
                objectsString,
                uuids,
                settings,
                locks
            };

            auto* level = GJGameLevel::create();
            level->m_levelName = settings.levelName.empty() ? "Multiplayer Session" : settings.levelName;
            level->m_levelType = GJLevelType::Editor;
            level->m_levelString = levelString;
            level->m_audioTrack = settings.audioTrack;
            level->m_songID = settings.songID;
            level->m_levelLength = settings.levelLength;

            auto* scene = LevelEditorLayer::scene(level, false);
            if (!scene) {
                log::error("RemoteActionHandler: LevelEditorLayer::scene returned null — cannot open editor for sync!");
                m_pendingSync.reset();
                return;
            }

            if (MultiplayerMenuPopup::s_instance) {
                MultiplayerMenuPopup::s_instance->forceClose();
            }

            cocos2d::CCDirector::sharedDirector()->pushScene(scene);

            log::info("RemoteActionHandler: Pushed editor scene; pending sync will apply in init() (hasPending={})",
                m_pendingSync.has_value());
            return;
        }

        if (!editor->m_editorUI || !editor->m_objectLayer) {
            log::warn("RemoteActionHandler: Editor found but not fully initialized (editorUI={} objectLayer={}) — deferring as pending sync",
                static_cast<void*>(editor->m_editorUI), static_cast<void*>(editor->m_objectLayer));
            m_pendingSync = PendingSync { playerId, objectsString, uuids, settings, locks };
            return;
        }

        log::info("RemoteActionHandler: Editor ready (m_objects count before sync = {})",
            editor->m_objects ? editor->m_objects->count() : 0);

        m_pendingSync.reset();
        m_processingRemote = true;

        if (auto* editorUI = editor->m_editorUI) {
            editorUI->deselectAll();
        }

        if (!isPendingSync) {
            if (editor->m_objects) {
                auto copy = cocos2d::CCArray::create();
                copy->addObjectsFromArray(editor->m_objects);
                
                for (auto* obj : CCArrayExt<GameObject*>(copy)) {
                    if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                        if (!tpPortal->m_isYellowPortal) {
                            tpPortal->m_orangePortal = nullptr;
                        }
                    }
                }

                for (auto* obj : CCArrayExt<GameObject*>(copy)) {
                    if (editor->m_objects->containsObject(obj)) {
                        editor->removeObject(obj, true);
                    }
                }
            }
            if (editor->m_undoObjects) editor->m_undoObjects->removeAllObjects();
            if (editor->m_redoObjects) editor->m_redoObjects->removeAllObjects();
        }
        clearMappings();
        m_expectedUuids.clear();

        log::info("RemoteActionHandler: Syncing level state ({} objects) from player {} (pending={})",
            uuids.size(), playerId, isPendingSync);

        applyLevelSettings(editor, settings);

        if (!objectsString.empty()) {
            std::vector<std::string> parts;
            std::stringstream ss(objectsString);
            std::string item;
            while (std::getline(ss, item, ';')) {
                if (!item.empty()) parts.push_back(item);
            }

            auto newObjs = createObjectsFromSaveStringRobust(editor, objectsString);
            log::info("RemoteActionHandler: Spawned {} objects from objectsString (len={})",
                newObjs.size(), objectsString.size());
            int index = 0;
            for (auto* obj : newObjs) {
                if (index < static_cast<int>(uuids.size())) {
                    registerObject(uuids[index], obj);
                } else {
                    registerObject(generateUUID(), obj);
                }
                
                if (obj->m_objectID == 31) {
                    if (index < static_cast<int>(parts.size())) {
                        if (auto* startPos = typeinfo_cast<StartPosObject*>(obj)) {
                            startPos->loadSettingsFromString(parts[index]);
                        }
                    }
                    updateStartPosCache(obj);
                }
                
                index++;
            }
            if (index != static_cast<int>(uuids.size())) {
                log::warn("RemoteActionHandler: object/uuid count mismatch on sync "
                          "(spawned={}, uuids={})", index, uuids.size());
            }
        } else if (!uuids.empty()) {
            log::warn("RemoteActionHandler: sync_level had {} uuids but empty objectsString — "
                      "objects cannot be spawned (host sent no object data)", uuids.size());
        }

        m_objectLocks.clear();
        for (auto const& lock : locks) {
            m_objectLocks[lock.uuid] = LockInfo { lock.playerId, lock.timeLeft };
        }

        editor->levelSettingsUpdated();

        geode::Notification::create("Level Synced!", geode::NotificationIcon::Success)->show();

        m_initialSyncCompleted = true;
        m_processingRemote = false;
        log::info("RemoteActionHandler: sync_level complete (final m_objects count = {})",
            editor->m_objects ? editor->m_objects->count() : 0);
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
        auto existingUuidIt = m_objectToUuid.find(obj);
        if (existingUuidIt != m_objectToUuid.end()) {
            m_uuidToObject.erase(existingUuidIt->second);
        }
        auto existingObjIt = m_uuidToObject.find(uuid);
        if (existingObjIt != m_uuidToObject.end()) {
            m_objectToUuid.erase(existingObjIt->second);
        }
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
            for (auto* itemObj : geode::cocos::CCArrayExt<cocos2d::CCObject*>(list)) {
                if (!itemObj) continue;
                auto* item = static_cast<UndoObject*>(itemObj);
                
                if (item->m_objects) {
                    std::vector<cocos2d::CCObject*> innerToRemove;
                    for (auto* innerObj : geode::cocos::CCArrayExt<cocos2d::CCObject*>(item->m_objects)) {
                        if (innerObj == target) {
                            innerToRemove.push_back(innerObj);
                        } else if (auto* copy = geode::cast::typeinfo_cast<GameObjectCopy*>(innerObj)) {
                            if (copy->m_object == target) {
                                innerToRemove.push_back(innerObj);
                            }
                        }
                    }
                    for (auto* innerObj : innerToRemove) {
                        item->m_objects->removeObject(innerObj);
                    }

                    if (item->m_objects->count() == 0) {
                        toRemove.push_back(item);
                        continue;
                    }
                }
                
                if (item->m_objectCopy && item->m_objectCopy->m_object && item->m_objectCopy->m_object == target) {
                    toRemove.push_back(item);
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
        if (it != m_uuidToObject.end()) {
            auto* obj = it->second;
            if (auto* editor = LevelEditorLayer::get()) {
                if (editor->m_objects && editor->m_objects->containsObject(obj)) {
                    return obj;
                }
            }
        }
        return nullptr;
    }

    std::string RemoteActionHandler::getUUIDForObject(GameObject* obj) const {
        if (!obj) return "";
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
        m_preSelectSaveStrings.clear();
        m_pendingPlacements.clear();

        m_initialSyncCompleted = false;
    }

    void RemoteActionHandler::queueObjectForPlacement(std::string const& uuid, GameObject* obj) {
        if (!obj || uuid.empty()) return;
        m_pendingPlacements.push_back(PendingPlacement { uuid, geode::Ref<GameObject>(obj) });
    }

    bool RemoteActionHandler::isObjectPendingPlacement(GameObject* obj) const {
        if (!obj) return false;
        for (auto const& p : m_pendingPlacements) {
            if (p.obj == obj) return true;
        }
        return false;
    }

    void RemoteActionHandler::flushPendingPlacements() {
        if (m_pendingPlacements.empty()) return;

        auto* editor = getEditorLayer();
        if (!editor || !editor->m_objects) {
            m_pendingPlacements.clear();
            return;
        }

        std::vector<ActionSerializer::ObjectData> objects;
        objects.reserve(m_pendingPlacements.size());
        for (auto& p : m_pendingPlacements) {
            if (!p.obj || !editor->m_objects->containsObject(p.obj)) continue;
            objects.push_back(ActionSerializer::extractObjectData(p.obj, p.uuid));
            
            MessageBatcher::get().removePending(p.uuid);
            
            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(static_cast<GameObject*>(p.obj))) {
                if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                    auto* orange = tpPortal->m_orangePortal;
                    auto orangeUuid = getOrCreateUUID(orange);
                    objects.push_back(ActionSerializer::extractObjectData(orange, orangeUuid));
                    MessageBatcher::get().removePending(orangeUuid);
                }
            }
        }
        m_pendingPlacements.clear();

        if (!objects.empty() && !m_processingRemote) {
            constexpr size_t MAX_OBJECTS_PER_MESSAGE = 100;
            for (size_t i = 0; i < objects.size(); i += MAX_OBJECTS_PER_MESSAGE) {
                size_t chunkCount = std::min(MAX_OBJECTS_PER_MESSAGE, objects.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(objects.begin() + i, objects.begin() + i + chunkCount);
                auto data = proto::serializePlaceObjects(chunk);
                P2PManager::get().send(data, ChannelType::Reliable);
            }
            log::debug("RemoteActionHandler: Flushed batched placement of {} objects", objects.size());
        }
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
            geode::Notification::create("Song downloaded!", geode::NotificationIcon::Success)->show();
        }
    }

    void RemoteActionHandler::downloadSongFailed(int id, GJSongError error) {
        geode::Notification::create("Failed to download custom song", geode::NotificationIcon::Error)->show();
    }

    void RemoteActionHandler::applyLevelSettings(LevelEditorLayer* editor, ActionSerializer::LevelSettingsData const& settings) {
        if (!editor) return;

        if (!settings.saveString.empty() && editor->m_levelSettings) {
            auto* newSettings = LevelSettingsObject::objectFromString(settings.saveString);
            if (newSettings) {
                editor->m_levelSettings->m_startMode = newSettings->m_startMode;
                editor->m_levelSettings->m_startSpeed = newSettings->m_startSpeed;
                editor->m_levelSettings->m_startMini = newSettings->m_startMini;
                editor->m_levelSettings->m_startDual = newSettings->m_startDual;
                editor->m_levelSettings->m_twoPlayerMode = newSettings->m_twoPlayerMode;
                editor->m_levelSettings->m_isFlipped = newSettings->m_isFlipped;
                editor->m_levelSettings->m_songOffset = newSettings->m_songOffset;
                
                editor->m_levelSettings->m_mirrorMode = newSettings->m_mirrorMode;
                editor->m_levelSettings->m_rotateGameplay = newSettings->m_rotateGameplay;
                editor->m_levelSettings->m_platformerMode = newSettings->m_platformerMode;
                editor->m_levelSettings->m_fadeIn = newSettings->m_fadeIn;
                editor->m_levelSettings->m_fadeOut = newSettings->m_fadeOut;
                editor->m_levelSettings->m_backgroundIndex = newSettings->m_backgroundIndex;
                editor->m_levelSettings->m_groundIndex = newSettings->m_groundIndex;
                editor->m_levelSettings->m_middleGroundIndex = newSettings->m_middleGroundIndex;
                editor->m_levelSettings->m_startsWithStartPos = newSettings->m_startsWithStartPos;

                if (auto* newEffectMgr = newSettings->m_effectManager) {
                    if (auto* oldEffectMgr = editor->m_levelSettings->m_effectManager) {
                        if (auto* newDict = newEffectMgr->m_colorActionDict) {
                            if (auto* oldDict = oldEffectMgr->m_colorActionDict) {
                                auto copyColor = [](ColorAction* oldAction, ColorAction* newAction) {
                                    if (oldAction && newAction) {
                                        oldAction->m_color = newAction->m_color;
                                        oldAction->m_fromColor = newAction->m_fromColor;
                                        oldAction->m_toColor = newAction->m_toColor;
                                        oldAction->m_duration = newAction->m_duration;
                                        oldAction->m_blending = newAction->m_blending;
                                        oldAction->m_playerColor = newAction->m_playerColor;
                                        oldAction->m_fromOpacity = newAction->m_fromOpacity;
                                        oldAction->m_toOpacity = newAction->m_toOpacity;
                                        oldAction->m_copyHSV = newAction->m_copyHSV;
                                        oldAction->m_copyID = newAction->m_copyID;
                                        oldAction->m_copyOpacity = newAction->m_copyOpacity;
                                        oldAction->m_copyColorCalculated = newAction->m_copyColorCalculated;
                                        oldAction->m_colorID = newAction->m_colorID;
                                        oldAction->m_copyColorLoop = newAction->m_copyColorLoop;
                                        oldAction->m_legacyHSV = newAction->m_legacyHSV;
                                    }
                                };
                                
                                for (size_t i = 0; i < newEffectMgr->m_colorActionVector.size(); i++) {
                                    if (i < oldEffectMgr->m_colorActionVector.size()) {
                                        auto* newAction = newEffectMgr->m_colorActionVector[i];
                                        auto* oldAction = oldEffectMgr->m_colorActionVector[i];
                                        copyColor(oldAction, newAction);
                                        if (oldAction) {
                                            oldEffectMgr->updateColorAction(oldAction);
                                            oldEffectMgr->colorActionChanged(oldAction);
                                        }
                                    }
                                }

                                auto* keys = newDict->allKeys();
                                if (keys) {
                                    for (int i = 0; i < keys->count(); i++) {
                                        auto* keyObj = keys->objectAtIndex(i);
                                        intptr_t k = 0;
                                        if (auto* strKey = typeinfo_cast<cocos2d::CCString*>(keyObj)) {
                                            k = std::stoi(strKey->getCString());
                                        } else if (auto* intKey = typeinfo_cast<cocos2d::CCInteger*>(keyObj)) {
                                            k = intKey->getValue();
                                        }
                                        
                                        auto* newAction = static_cast<ColorAction*>(newDict->objectForKey(k));
                                        if (!newAction && keyObj) {
                                            if (auto* strKey = typeinfo_cast<cocos2d::CCString*>(keyObj)) {
                                                newAction = static_cast<ColorAction*>(newDict->objectForKey(strKey->getCString()));
                                            }
                                        }
                                        
                                        auto* oldAction = static_cast<ColorAction*>(oldDict->objectForKey(k));
                                        
                                        if (!oldAction) {
                                            oldAction = ColorAction::create();
                                            oldDict->setObject(oldAction, k);
                                        }
                                        if (newAction && oldAction) {
                                            copyColor(oldAction, newAction);
                                            
                                            oldEffectMgr->updateColorAction(oldAction);
                                            oldEffectMgr->colorActionChanged(oldAction);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                editor->m_updateColorSprites = true;
                editor->updateOptions();
            }
        }

        if (editor->m_level) {
            bool songChanged = (editor->m_level->m_songID != settings.songID
                || editor->m_level->m_audioTrack != settings.audioTrack);
            editor->m_level->m_audioTrack = settings.audioTrack;
            editor->m_level->m_songID = settings.songID;
            editor->m_level->m_levelLength = settings.levelLength;

            if (songChanged) {
                if (settings.songID > 0) {
                    if (MusicDownloadManager::sharedState()->isSongDownloaded(settings.songID)) {
                        GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
                    } else {
                        geode::Notification::create("Custom song not downloaded locally.", geode::NotificationIcon::Info)->show();
                    }
                } else {
                    GameManager::get()->fadeInMusic(editor->m_level->getAudioFileName());
                }
            }
        }
    }

    void RemoteActionHandler::handleRemoteUpdateSettings(int playerId, ActionSerializer::LevelSettingsData const& settings) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        log::info("RemoteActionHandler: Updating level settings from player {}", playerId);

        applyLevelSettings(editor, settings);

        editor->levelSettingsUpdated();

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteUpdateColorChannel(int playerId, ActionSerializer::ColorChannelData const& data) {
        auto* editor = getEditorLayer();
        if (!editor || !editor->m_levelSettings || !editor->m_levelSettings->m_effectManager) return;

        m_processingRemote = true;

        log::info("RemoteActionHandler: Updating color channel {} from player {}", data.channelID, playerId);

        auto* effectMgr = editor->m_levelSettings->m_effectManager;
        
        ColorAction* action = effectMgr->getColorAction(data.channelID);
        if (!action) {
            m_processingRemote = false;
            return;
        }

        action->m_color = data.color;
        action->m_fromColor = data.fromColor;
        action->m_toColor = data.toColor;
        action->m_duration = data.duration;
        action->m_blending = data.blending;
        action->m_playerColor = data.playerColor;
        action->m_fromOpacity = data.fromOpacity;
        action->m_toOpacity = data.toOpacity;
        action->m_copyHSV = data.copyHSV;
        action->m_copyID = data.copyID;
        action->m_copyOpacity = data.copyOpacity;
        action->m_copyColorCalculated = data.copyColorCalculated;
        action->m_colorID = data.colorID;
        action->m_copyColorLoop = data.copyColorLoop;
        action->m_legacyHSV = data.legacyHSV;

        if (action->m_colorSprite) {
            effectMgr->updateColorAction(action);
            effectMgr->colorActionChanged(action);
        }

        editor->m_updateColorSprites = true;
        editor->updateOptions();

        m_processingRemote = false;
    }
}
