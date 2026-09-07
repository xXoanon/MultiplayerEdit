#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>
#include <Geode/modify/LevelBrowserLayer.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <Geode/binding/TeleportPortalObject.hpp>
#include <Geode/utils/file.hpp>
#include <Geode/loader/Dirs.hpp>

#include "SessionManager.hpp"
#include "P2PManager.hpp"
#include "BinaryProtocol.hpp"
#include "MessageBatcher.hpp"
#include "ActionSerializer.hpp"
#include "RemoteActionHandler.hpp"
#include "ui/menu/MultiplayerMenuPopup.hpp"
#include "ui/menu/CreateRoomPopup.hpp"
#include "ui/QuickChatPopup.hpp"

#include "ui/SessionStatusNode.hpp"
#include "ui/CursorNode.hpp"
#include "ui/UpdateHelperNode.hpp"

using namespace geode::prelude;
using namespace mpedit;

namespace {
    int s_selectedObjectID = 1;
    bool s_inTransformSync = false;
    cocos2d::CCPoint s_lastTouchPos = {0.f, 0.f};
    bool s_isTouching = false;
    std::set<GameObject*> s_startPosObjects;
    std::unordered_map<GameObject*, std::string> s_startPosSaveStrings;
}

namespace mpedit {
    void updateStartPosCache(GameObject* obj) {
        if (obj && obj->m_objectID == 31 && s_startPosObjects.count(obj)) {
            if (auto* editor = LevelEditorLayer::get()) {
                s_startPosSaveStrings[obj] = obj->getSaveString(editor);
            }
        }
    }
}


class $modify(MPEditorPauseLayer, EditorPauseLayer) {
    bool init(LevelEditorLayer* editor) {
        if (!EditorPauseLayer::init(editor)) return false;

        auto* btnSprite = ButtonSprite::create(
            "Multiplayer Edit", 90, true, "goldFont.fnt", "GJ_button_01.png", 30.f, 0.45f
        );
        auto* btn = CCMenuItemSpriteExtra::create(
            btnSprite,
            this,
            menu_selector(MPEditorPauseLayer::onMultiplayer)
        );
        btn->setID("multiplayer-button"_spr);

        CCMenu* targetMenu = typeinfo_cast<CCMenu*>(this->getChildByIDRecursive("resume-menu"));
        if (!targetMenu) {
            targetMenu = typeinfo_cast<CCMenu*>(this->getChildByIDRecursive("center-button-menu"));
        }
        
        auto& session = SessionManager::get();

        if (session.isInSession() && session.getRole() == SessionManager::Role::Client && P2PManager::get().isDedicatedServer()) {
            auto* saveCopySprite = ButtonSprite::create(
                "Save Copy", 90, true, "goldFont.fnt", "GJ_button_01.png", 30.f, 0.45f
            );
            auto* saveCopyBtn = CCMenuItemSpriteExtra::create(
                saveCopySprite,
                this,
                menu_selector(MPEditorPauseLayer::onSaveLocal)
            );
            saveCopyBtn->setID("save-copy-button"_spr);
            if (targetMenu) {
                targetMenu->addChild(saveCopyBtn);
            }
        }

        if (targetMenu) {
            targetMenu->addChild(btn);
            targetMenu->updateLayout();
        } else {
            auto* fallbackMenu = CCMenu::create();
            fallbackMenu->setID("multiplayer-menu"_spr);
            fallbackMenu->setPosition({0, 0});
            
            auto winSize = CCDirector::sharedDirector()->getWinSize();
            btn->setPosition({winSize.width / 2.f, 40.f});
            fallbackMenu->addChild(btn);
            this->addChild(fallbackMenu, 10);
        }

        if (session.isInSession()) {
            auto disableBtn = [this](const char* id) {
                if (auto* btn = typeinfo_cast<CCMenuItemSpriteExtra*>(this->getChildByIDRecursive(id))) {
                    btn->setEnabled(false);
                    std::function<void(cocos2d::CCNode*)> grayOut = [&](cocos2d::CCNode* n) {
                        if (!n) return;
                        if (auto* rgba = typeinfo_cast<cocos2d::CCNodeRGBA*>(n)) {
                            rgba->setColor({100, 100, 100});
                        }
                        if (n->getChildren()) {
                            for (auto* c : CCArrayExt<cocos2d::CCNode*>(n->getChildren())) {
                                grayOut(c);
                            }
                        }
                    };
                    grayOut(btn->getNormalImage());
                }
            };

            if (session.getRole() == SessionManager::Role::Host) {
                disableBtn("save-and-play-button");
            } else if (session.getRole() == SessionManager::Role::Client) {
                if (!P2PManager::get().isDedicatedServer()) {
                    disableBtn("save-button");
                    disableBtn("save-and-exit-button");
                }
                disableBtn("save-and-play-button");
            }
        }

        return true;
    }

    void onSaveLocal(CCObject* sender) {
        // First, call original saveLevel to generate the level string properly
        EditorPauseLayer::saveLevel();
        auto* editor = LevelEditorLayer::get();
        if (editor && editor->m_level) {
            auto* newLevel = GameLevelManager::sharedState()->createNewLevel();
            if (newLevel) {
                newLevel->m_levelName = std::string(editor->m_level->m_levelName) + " local";
                newLevel->m_levelString = editor->m_level->m_levelString;
                newLevel->m_audioTrack = editor->m_level->m_audioTrack;
                newLevel->m_songID = editor->m_level->m_songID;
                newLevel->m_levelLength = editor->m_level->m_levelLength;
                Notification::create("Saved local copy!", cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
            }
        }
    }

    void onMultiplayer(CCObject*) {
        if (SessionManager::get().isInSession()) {
            MultiplayerMenuPopup::create()->show();
        } else {
            CreateRoomPopup::create(nullptr)->show();
        }
    }

    void onSave(CCObject* sender) {
        if (SessionManager::get().isInSession() && SessionManager::get().getRole() == SessionManager::Role::Client) {
            if (!P2PManager::get().isDedicatedServer()) {
                Notification::create("Guests cannot save levels", NotificationIcon::Warning)->show();
                return;
            }
            if (auto* btn = typeinfo_cast<CCMenuItemSpriteExtra*>(sender)) {
                btn->setEnabled(false);
            }
            auto* loadingCircle = LoadingCircle::create();
            loadingCircle->setParentLayer(this);
            loadingCircle->show();

            this->retain();
            RemoteActionHandler::get().sendSnapshotToServer([this, sender, loadingCircle]() {
                loadingCircle->fadeAndRemove();
                Notification::create("Saved to Server!", cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
                if (auto* btn = typeinfo_cast<CCMenuItemSpriteExtra*>(sender)) {
                    btn->setEnabled(true);
                }
                this->release();
            });
            return;
        }
        EditorPauseLayer::onSave(sender);
    }

    void onSaveAndPlay(CCObject* sender) {
        if (SessionManager::get().isInSession()) {
            Notification::create("Cannot Save & Play in multiplayer", NotificationIcon::Warning)->show();
            return;
        }
        EditorPauseLayer::onSaveAndPlay(sender);
    }

    void onSaveAndExit(CCObject* sender) {
        auto& session = SessionManager::get();
        if (session.isInSession()) {
            if (session.getRole() == SessionManager::Role::Client) {
                if (!P2PManager::get().isDedicatedServer()) {
                    Notification::create("Guests cannot save levels", NotificationIcon::Warning)->show();
                    return;
                }
                if (auto* btn = typeinfo_cast<CCMenuItemSpriteExtra*>(sender)) {
                    btn->setEnabled(false);
                }
                auto* loadingCircle = LoadingCircle::create();
                loadingCircle->setParentLayer(this);
                loadingCircle->show();

                // Keep this layer alive in case of rapid clicks, though loading circle blocks touches
                this->retain(); 
                RemoteActionHandler::get().sendSnapshotToServer([this, sender, loadingCircle]() {
                    loadingCircle->fadeAndRemove();
                    Notification::create("Saved to Server!", cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
                    this->m_saved = true;
                    this->onExitEditor(sender);
                    this->release();
                });
                return;
            }
            session.leaveSession();
        }
        EditorPauseLayer::onSaveAndExit(sender);
    }

    void onExitEditor(CCObject* sender) {
        auto& session = SessionManager::get();
        if (session.isInSession()) {
            session.leaveSession();
        }
        EditorPauseLayer::onExitEditor(sender);
    }
};


class $modify(MPLevelBrowserLayer, LevelBrowserLayer) {
    bool init(GJSearchObject* object) {
        if (!LevelBrowserLayer::init(object)) return false;

        if (object->m_searchType != SearchType::MyLevels) return true;

        auto* btnSprite = ButtonSprite::create(
            "Multiplayer Edit", 90, true, "goldFont.fnt", "GJ_button_01.png", 30.f, 0.45f
        );
        auto* btn = CCMenuItemSpriteExtra::create(
            btnSprite,
            this,
            menu_selector(MPLevelBrowserLayer::onMultiplayer)
        );
        btn->setID("multiplayer-button"_spr);

        if (auto* targetMenu = typeinfo_cast<CCMenu*>(this->getChildByIDRecursive("new-item-menu"))) {
            targetMenu->addChild(btn);
            targetMenu->updateLayout();
        } else {
            auto* centerMenu = CCMenu::create();
            centerMenu->setID("multiplayer-menu"_spr);
            auto winSize = CCDirector::sharedDirector()->getWinSize();
            centerMenu->setPosition({winSize.width / 2.f, 35.f});
            btn->setPosition({0, 0});
            centerMenu->addChild(btn);
            this->addChild(centerMenu, 10);
        }

        return true;
    }

    void onMultiplayer(CCObject*) {
        MultiplayerMenuPopup::create()->show();
    }
};


namespace {
    void sendChunkedLockObjects(std::vector<std::string> const& uuids, bool locked) {
        constexpr size_t MAX_UUIDS_PER_MESSAGE = 300;
        for (size_t i = 0; i < uuids.size(); i += MAX_UUIDS_PER_MESSAGE) {
            size_t count = std::min(MAX_UUIDS_PER_MESSAGE, uuids.size() - i);
            std::vector<std::string> chunk(uuids.begin() + i, uuids.begin() + i + count);
            auto data = proto::serializeLockObjects(chunk, locked);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
        }
    }

    void sendChunkedDeleteObjects(std::vector<std::string> const& uuids) {
        constexpr size_t MAX_UUIDS_PER_MESSAGE = 300;
        for (size_t i = 0; i < uuids.size(); i += MAX_UUIDS_PER_MESSAGE) {
            size_t count = std::min(MAX_UUIDS_PER_MESSAGE, uuids.size() - i);
            std::vector<std::string> chunk(uuids.begin() + i, uuids.begin() + i + count);
            auto data = proto::serializeDeleteObjects(chunk);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
        }
    }

    void sendChunkedMoveObjects(std::vector<ActionSerializer::MoveData> const& moves) {
        constexpr size_t MAX_MOVES_PER_MESSAGE = 300;
        for (size_t i = 0; i < moves.size(); i += MAX_MOVES_PER_MESSAGE) {
            size_t count = std::min(MAX_MOVES_PER_MESSAGE, moves.size() - i);
            std::vector<ActionSerializer::MoveData> chunk(moves.begin() + i, moves.begin() + i + count);
            auto data = proto::serializeMoveObjects(chunk);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
        }
    }

    void sendChunkedUpdateObjects(std::vector<ActionSerializer::ObjectData> const& updates) {
        constexpr size_t MAX_UPDATES_PER_MESSAGE = 100;
        for (size_t i = 0; i < updates.size(); i += MAX_UPDATES_PER_MESSAGE) {
            size_t count = std::min(MAX_UPDATES_PER_MESSAGE, updates.size() - i);
            std::vector<ActionSerializer::ObjectData> chunk(updates.begin() + i, updates.begin() + i + count);
            auto data = proto::serializeUpdateObjects(chunk);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
        }
    }

    void sendChunkedReconcileObjects(std::vector<ActionSerializer::ReconcileData> const& reconciles) {
        constexpr size_t MAX_RECONCILES_PER_MESSAGE = 1000;
        for (size_t i = 0; i < reconciles.size(); i += MAX_RECONCILES_PER_MESSAGE) {
            size_t count = std::min(MAX_RECONCILES_PER_MESSAGE, reconciles.size() - i);
            std::vector<ActionSerializer::ReconcileData> chunk(reconciles.begin() + i, reconciles.begin() + i + count);
            auto data = proto::serializeReconcileObjects(chunk);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
        }
    }

    void sendChunkedSync(LevelEditorLayer* editor, int targetPlayerId, std::function<void()> onComplete = nullptr) {
        auto& handler = RemoteActionHandler::get();

        std::string fullObjectsString;
        std::vector<std::string> allUuids;

        if (editor->m_objects) {
            int index = 0;
            for (auto* obj : CCArrayExt<GameObject*>(editor->m_objects)) {
                if (!obj) continue;
                auto uuid = handler.getUUIDForObject(obj);
                if (uuid.empty()) {
                    uuid = RemoteActionHandler::generateUUID();
                    handler.registerObject(uuid, obj);
                }
                allUuids.push_back(uuid);
                fullObjectsString += std::string(obj->getSaveString(editor)) + ";";
                index++;
            }
        }

        std::string compressedBytes = "";
        if (!fullObjectsString.empty()) {
            auto tempPath = geode::dirs::getTempDir() / "sync_level.zip";
            {
                if (auto zipRes = geode::utils::file::Zip::create(tempPath)) {
                    (void)zipRes.unwrap().add("level.txt", fullObjectsString);
                } else {
                    log::error("Failed to create temp zip for sync payload");
                }
            }

            if (auto dataRes = geode::utils::file::readBinary(tempPath)) {
                auto bytes = dataRes.unwrap();
                compressedBytes = std::string(bytes.begin(), bytes.end());
            } else {
                log::error("Failed to read compressed sync payload from temp file");
            }

            std::error_code ec;
            std::filesystem::remove(tempPath, ec);
        }

        constexpr size_t MAX_CHUNK_BYTES = 10000;
        constexpr size_t MAX_UUIDS_PER_CHUNK = 150;

        struct ChunkData {
            std::string objectsString;
            std::vector<std::string> uuids;
        };
        std::vector<ChunkData> chunks;

        size_t byteOffset = 0;
        size_t uuidOffset = 0;

        while (byteOffset < compressedBytes.size() || uuidOffset < allUuids.size()) {
            ChunkData chunk;
            
            size_t bytesToTake = std::min(MAX_CHUNK_BYTES, compressedBytes.size() - byteOffset);
            if (bytesToTake > 0) {
                chunk.objectsString = compressedBytes.substr(byteOffset, bytesToTake);
                byteOffset += bytesToTake;
            }

            size_t uuidsToTake = std::min(MAX_UUIDS_PER_CHUNK, allUuids.size() - uuidOffset);
            if (uuidsToTake > 0) {
                chunk.uuids.insert(chunk.uuids.end(), allUuids.begin() + uuidOffset, allUuids.begin() + uuidOffset + uuidsToTake);
                uuidOffset += uuidsToTake;
            }

            chunks.push_back(std::move(chunk));
        }

        if (chunks.empty()) {
            chunks.push_back(ChunkData());
        }

        ActionSerializer::LevelSettingsData settings;
        if (editor->m_levelSettings) {
            settings.saveString = editor->m_levelSettings->getSaveString();
        }
        if (editor->m_level) {
            settings.audioTrack = editor->m_level->m_audioTrack;
            settings.songID = editor->m_level->m_songID;
            settings.levelLength = editor->m_level->m_levelLength;
            settings.levelName = editor->m_level->m_levelName;
        }

        uint32_t totalChunks = static_cast<uint32_t>(chunks.size());
        uint32_t totalObjects = static_cast<uint32_t>(allUuids.size());

        auto startMsg = proto::serializeSyncLevelStart(totalChunks, totalObjects, settings);
        P2PManager::get().sendTo(targetPlayerId, startMsg, ChannelType::Reliable);

        std::vector<ActionSerializer::LockData> locks;
        for (auto const& [uuid, lockInfo] : handler.getObjectLocks()) {
            locks.push_back({uuid, lockInfo.playerId, lockInfo.timeLeft});
        }

        auto serializedChunks = std::make_shared<std::vector<std::vector<uint8_t>>>();
        for (uint32_t i = 0; i < totalChunks; ++i) {
            serializedChunks->push_back(
                proto::serializeSyncLevelChunk(
                    i,
                    reinterpret_cast<const uint8_t*>(chunks[i].objectsString.data()),
                    chunks[i].objectsString.size(),
                    chunks[i].uuids
                )
            );
        }

        auto nextChunkIndex = std::make_shared<uint32_t>(0);
        auto sharedLocks = std::make_shared<std::vector<ActionSerializer::LockData>>(std::move(locks));

        auto* senderNode = UpdateHelperNode::create(
            [targetPlayerId, totalChunks, serializedChunks, nextChunkIndex, sharedLocks, onComplete](float dt) {
                auto& net = P2PManager::get();

                constexpr size_t BUFFER_THRESHOLD = 256 * 1024;
                if (net.getReliableBufferedAmount(targetPlayerId) > BUFFER_THRESHOLD) {
                    return;
                }

                size_t lockChunkCount = (sharedLocks->size() + 999) / 1000;
                if (lockChunkCount == 0) lockChunkCount = 1;
                if (*nextChunkIndex < totalChunks) {
                    net.sendTo(targetPlayerId, (*serializedChunks)[*nextChunkIndex], ChannelType::Reliable);
                    (*nextChunkIndex)++;
                } else if (*nextChunkIndex < totalChunks + lockChunkCount) {
                    if (!sharedLocks->empty()) {
                        size_t lockChunkIdx = *nextChunkIndex - totalChunks;
                        size_t startIdx = lockChunkIdx * 1000;
                        size_t count = std::min((size_t)1000, sharedLocks->size() - startIdx);
                        std::vector<ActionSerializer::LockData> chunk(sharedLocks->begin() + startIdx, sharedLocks->begin() + startIdx + count);
                        net.sendTo(targetPlayerId, proto::serializeSyncLocksChunk(chunk), ChannelType::Reliable);
                    }
                    (*nextChunkIndex)++;
                } else {
                    auto endMsg = proto::serializeSyncLevelEnd();
                    net.sendTo(targetPlayerId, endMsg, ChannelType::Reliable);

                    if (auto* notifNode = cocos2d::CCDirector::sharedDirector()->getNotificationNode()) {
                        if (auto* node = notifNode->getChildByTag(9991 + targetPlayerId)) {
                            node->removeFromParentAndCleanup(true);
                        }
                    }
                    if (onComplete) onComplete();
                }
            },
            0.01f
        );
        senderNode->setTag(9991 + targetPlayerId);
        
        if (auto* notifNode = cocos2d::CCDirector::sharedDirector()->getNotificationNode()) {
            notifNode->addChild(senderNode);
        } else {
            editor->addChild(senderNode);
        }
    }

    void registerObjectsWithUuids(LevelEditorLayer* editor,
                                  std::vector<std::string> const& uuids) {
        if (!editor || !editor->m_objects) return;
        auto& handler = RemoteActionHandler::get();
        int index = 0;
        for (auto* obj : CCArrayExt<GameObject*>(editor->m_objects)) {
            if (!obj) continue;
            if (index < static_cast<int>(uuids.size()) && !uuids[index].empty()) {
                handler.registerObject(uuids[index], obj);
            } else {
                if (handler.getUUIDForObject(obj).empty()) {
                    handler.registerObject(RemoteActionHandler::generateUUID(), obj);
                }
            }
            index++;
        }
        if (index != static_cast<int>(uuids.size())) {
            log::warn("EditorHooks: object/uuid count mismatch on sync "
                      "(objects={}, uuids={})", index, uuids.size());
        }
    }
}

class $modify(MPLevelEditorLayer, LevelEditorLayer) {
    struct Fields {
        float m_cursorSendTimer = 0.f;
        bool m_sessionActive = false;
        bool m_inUndoRedo = false;
        cocos2d::CCPoint m_lastSentLevelPos = {0.f, 0.f};
        bool m_wasPlaytesting = false;

        ~Fields() {
            auto& session = SessionManager::get();
            if (session.isInSession()) {
                session.leaveSession();
                log::info("EditorHooks: Left session automatically on editor destructor (Fields)");
            }
            session.clearCallbacks();
        }
    };

    void levelSettingsUpdated() {
        LevelEditorLayer::levelSettingsUpdated();

        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;

        auto& session = SessionManager::get();
        if (session.isInSession()) {
            ActionSerializer::LevelSettingsData settings;
            if (this->m_levelSettings) {
                settings.saveString = this->m_levelSettings->getSaveString();
            }
            if (this->m_level) {
                settings.audioTrack = this->m_level->m_audioTrack;
                settings.songID = this->m_level->m_songID;
                settings.levelLength = this->m_level->m_levelLength;
            }
            auto data = proto::serializeUpdateSettings(settings);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
            log::info("EditorHooks: Broadcasted update_settings");
        }
    }

    bool init(GJGameLevel* level, bool unk) {
        if (!LevelEditorLayer::init(level, unk)) return false;

        s_startPosObjects.clear();
        s_startPosSaveStrings.clear();
        if (this->m_objects) {
            for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                if (obj->m_objectID == 31) {
                    s_startPosObjects.insert(obj);
                    s_startPosSaveStrings[obj] = obj->getSaveString(this);
                }
            }
        }

        m_fields->m_sessionActive = SessionManager::get().isInSession();

        auto& handler = RemoteActionHandler::get();
        handler.clearMappings();

        SessionManager::get().onSessionStarted(this, [this]() {
            auto& session = SessionManager::get();
            if (this->m_objects) {
                auto& handler = RemoteActionHandler::get();
                int index = 0;
                for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                    if (obj && handler.getUUIDForObject(obj).empty()) {
                        handler.registerObject(RemoteActionHandler::generateUUID(), obj);
                    }
                    index++;
                }
            }
        });

        auto& session = SessionManager::get();
        if (session.isInSession()) {
            bool hasPending = handler.hasPendingSync();

            if (!hasPending) {
                auto const& expected = handler.getExpectedUuids();
                if (!expected.empty()) {
                    if (this->m_objects) {
                        registerObjectsWithUuids(this, expected);
                    }
                    handler.clearExpectedUuids();
                } else if (this->m_objects) {
                    int index = 0;
                    for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                        if (obj && handler.getUUIDForObject(obj).empty()) {
                            handler.registerObject(RemoteActionHandler::generateUUID(), obj);
                        }
                        index++;
                    }
                }
            } else {
                handler.clearExpectedUuids();
            }

            handler.setInitialSyncCompleted(true);

            if (session.getRole() == SessionManager::Role::Host) {
                for (auto const& player : session.getPlayers()) {
                    if (player.id != session.getLocalPlayerId()) {
                        sendChunkedSync(this, player.id);
                        log::info("EditorHooks: Sent chunked sync_level to existing player {}", player.id);
                    }
                }
            }
        }

        SessionManager::get().onPlayerJoined(this, [this](PlayerInfo const& info) {
            auto& session = SessionManager::get();
            if (session.getRole() == SessionManager::Role::Host && info.id != session.getLocalPlayerId()) {
                sendChunkedSync(this, info.id);
                log::info("EditorHooks: Sent chunked sync_level to new player {}", info.id);
            }
        });

        if (handler.hasPendingSync()) {
            handler.setEditorForInit(this);
            handler.applyPendingSync();
            handler.setEditorForInit(nullptr);
        }

        auto* helper = UpdateHelperNode::create([this](float dt) {
            this->networkUpdate(dt);
        }, 0.05f);
        if (helper) {
            helper->setID("network-update-helper"_spr);
            this->addChild(helper);
        }

        auto* status = SessionStatusNode::create();
        status->setID("session-status"_spr);
        this->addChild(status, 1000);

        auto* cursorNode = CursorNode::create();
        cursorNode->setID("cursor-node"_spr);
        this->m_objectLayer->addChild(cursorNode, 999);

        return true;
    }

    void onExit() {
        LevelEditorLayer::onExit();
        
        auto& session = SessionManager::get();
        if (session.isInSession()) {
            session.leaveSession();
            log::info("EditorHooks: Left session automatically on editor exit");
        }
        session.removeListener(this);
        
        s_startPosObjects.clear();
        s_startPosSaveStrings.clear();
    }


    GameObject* createObject(int objectID, cocos2d::CCPoint position, bool noUndo) {
        auto* obj = LevelEditorLayer::createObject(objectID, position, noUndo);
        return obj;
    }

    void removeObject(GameObject* obj, bool undo) {
        if (!obj) {
            LevelEditorLayer::removeObject(obj, undo);
            return;
        }

        if (obj->m_objectID == 31) {
            s_startPosObjects.erase(obj);
            s_startPosSaveStrings.erase(obj);
        }

        obj->retain();

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

            if (m_gameState.m_lastActivatedPortal1 == obj) {
                m_gameState.m_lastActivatedPortal1 = nullptr;
            }
            if (m_gameState.m_lastActivatedPortal2 == obj) {
                m_gameState.m_lastActivatedPortal2 = nullptr;
            }
            if (this->m_player1) {
                if (this->m_player1->m_lastActivatedPortal == obj) {
                    this->m_player1->m_lastActivatedPortal = nullptr;
                }
                if (this->m_player1->m_touchingRings && this->m_player1->m_touchingRings->containsObject(obj)) {
                    this->m_player1->m_touchingRings->removeObject(obj);
                }
            }
            if (this->m_player2) {
                if (this->m_player2->m_lastActivatedPortal == obj) {
                    this->m_player2->m_lastActivatedPortal = nullptr;
                }
                if (this->m_player2->m_touchingRings && this->m_player2->m_touchingRings->containsObject(obj)) {
                    this->m_player2->m_touchingRings->removeObject(obj);
                }
            }
            if (this->m_endPortal == obj) {
                this->m_endPortal = nullptr;
            }
            if (this->m_player1CollisionBlock == obj) {
                this->m_player1CollisionBlock = nullptr;
            }
            if (this->m_player2CollisionBlock == obj) {
                this->m_player2CollisionBlock = nullptr;
            }
            if (this->m_startPosObject == obj) {
                this->m_startPosObject = nullptr;
            }
            if (this->m_copyStateObject == obj) {
                this->m_copyStateObject = nullptr;
            }
            if (this->m_editorUI) {
                if (this->m_editorUI->m_selectedObject == obj) {
                    this->m_editorUI->m_selectedObject = nullptr;
                }
                if (this->m_editorUI->m_snapObject == obj) {
                    this->m_editorUI->m_snapObject = nullptr;
                }
                if (this->m_editorUI->m_selectedObjects && this->m_editorUI->m_selectedObjects->containsObject(obj)) {
                    this->m_editorUI->m_selectedObjects->removeObject(obj);
                }
            }

        bool inUndoRedo = m_fields->m_inUndoRedo;
        bool shouldBroadcastDelete = session.isInSession()
            && !handler.isProcessingRemote() && !inUndoRedo && !session.isLocalPlayerViewOnly() && obj;

        if (shouldBroadcastDelete) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    log::info("EditorHooks: Blocked removal of locked object (uuid={})", uuid);
                    obj->release();
                    return;
                }
                std::vector<std::string> uuids = {uuid};

                sendChunkedDeleteObjects(uuids);
                handler.unregisterObject(uuid);
                log::debug("EditorHooks: Deleted object(s) (uuid={})", uuid);
            }
        }

        if (obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                handler.unregisterObject(uuid);
            }
            handler.getTrackedSelections().erase(obj);
        }

        LevelEditorLayer::removeObject(obj, undo);

        obj->release();
    }

    void handleAction(bool undo, cocos2d::CCArray* undoObjects) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isLocalPlayerViewOnly() && !handler.isProcessingRemote()) {
            LevelEditorLayer::handleAction(undo, undoObjects);
            return;
        }

        if (!session.isInSession() || handler.isProcessingRemote() || !undoObjects || undoObjects->count() == 0) {
            LevelEditorLayer::handleAction(undo, undoObjects);
            return;
        }

        std::unordered_set<GameObject*> affectedObjects;
        auto* lastItem = static_cast<UndoObject*>(undoObjects->lastObject());
        if (lastItem) {
            if (lastItem->m_objects) {
                for (auto* innerObj : geode::cocos::CCArrayExt<cocos2d::CCObject*>(lastItem->m_objects)) {
                    if (auto* gObj = geode::cast::typeinfo_cast<GameObject*>(innerObj)) {
                        affectedObjects.insert(gObj);
                    } else if (auto* copy = geode::cast::typeinfo_cast<GameObjectCopy*>(innerObj)) {
                        if (copy->m_object) {
                            affectedObjects.insert(copy->m_object);
                        }
                    }
                }
            }
            if (lastItem->m_objectCopy && lastItem->m_objectCopy->m_object) {
                affectedObjects.insert(lastItem->m_objectCopy->m_object);
            }
        }

        for (auto* gObj : affectedObjects) {
            if (!gObj) continue;
            auto uuid = handler.getUUIDForObject(gObj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    log::info("EditorHooks: Blocked undo/redo of locked object");
                    return;
                }
            }
        }

        std::unordered_map<GameObject*, cocos2d::CCPoint> positionsBefore;
        std::unordered_map<GameObject*, std::string> saveStringsBefore;
        std::unordered_set<GameObject*> existedBefore;

        for (auto* obj : affectedObjects) {
            if (!obj) continue;
            if (this->m_objects && this->m_objects->containsObject(obj)) {
                existedBefore.insert(obj);
                positionsBefore[obj] = obj->getPosition();
                saveStringsBefore[obj] = obj->getSaveString(this);
            }
        }

        m_fields->m_inUndoRedo = true;
        LevelEditorLayer::handleAction(undo, undoObjects);

        std::vector<ActionSerializer::ObjectData> placedObjects;
        std::vector<std::string> deletedUuids;
        std::vector<ActionSerializer::MoveData> movedObjects;
        std::vector<ActionSerializer::ObjectData> updatedObjects;

        for (auto* obj : affectedObjects) {
            if (!obj) continue;
            
            bool existed_before = existedBefore.find(obj) != existedBefore.end();
            bool existed_after = this->m_objects && this->m_objects->containsObject(obj);
            
            if (existed_before && !existed_after) {
                std::string uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    deletedUuids.push_back(uuid);
                    handler.unregisterObject(uuid);
                }
            } 
            else if (!existed_before && existed_after) {
                std::string uuid = handler.getUUIDForObject(obj);
                if (uuid.empty()) {
                    uuid = RemoteActionHandler::generateUUID();
                    handler.registerObject(uuid, obj);
                }
                placedObjects.push_back(ActionSerializer::extractObjectData(obj, uuid));
            } 
            else if (existed_before && existed_after) {
                std::string uuid = handler.getUUIDForObject(obj);
                if (uuid.empty()) {
                    uuid = RemoteActionHandler::generateUUID();
                    handler.registerObject(uuid, obj);
                }
                
                std::string currentSave = obj->getSaveString(this);
                if (saveStringsBefore[obj] != currentSave) {
                    updatedObjects.push_back(ActionSerializer::extractObjectData(obj, uuid));
                } else {
                    cocos2d::CCPoint oldPos = positionsBefore[obj];
                    float dx = obj->getPositionX() - oldPos.x;
                    float dy = obj->getPositionY() - oldPos.y;
                    if (dx != 0.f || dy != 0.f) {
                        ActionSerializer::MoveData md;
                        md.uuid = uuid;
                        md.dx = dx;
                        md.dy = dy;
                        movedObjects.push_back(md);
                    }
                }
            }
        }
        if (!placedObjects.empty()) {
            auto data = proto::serializePlaceObjects(placedObjects);
            P2PManager::get().send(std::move(data), ChannelType::Reliable);
            log::info("EditorHooks: Synced redo placement of {} objects", placedObjects.size());
        }
        if (!deletedUuids.empty()) {
            sendChunkedDeleteObjects(deletedUuids);
            log::info("EditorHooks: Synced undo deletion of {} objects", deletedUuids.size());
        }
        if (!movedObjects.empty()) {
            sendChunkedMoveObjects(movedObjects);
        }
        if (!updatedObjects.empty()) {
            sendChunkedUpdateObjects(updatedObjects);
        }
        
        m_fields->m_inUndoRedo = false;
    }

    void networkUpdate(float dt) {
        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        auto& handler = RemoteActionHandler::get();
        bool isPlaytesting = this->m_playbackMode != PlaybackMode::Not;
        
        if (isPlaytesting && !m_fields->m_wasPlaytesting) {
            MessageBatcher::get().flush();
            handler.flushPendingPlacements();
            if (auto* ui = this->m_editorUI) {
                ui->deselectAll();
            }
        } else if (!isPlaytesting && m_fields->m_wasPlaytesting) {
            handler.flushDeferredDeletions();
        }
        m_fields->m_wasPlaytesting = isPlaytesting;

        P2PManager::get().dispatchMessages();

        handler.updateLocks(dt);
        MessageBatcher::get().update(dt);

        handler.flushPendingPlacements();

        m_fields->m_cursorSendTimer += dt;
        if (m_fields->m_cursorSendTimer >= 0.033f) {
            m_fields->m_cursorSendTimer = 0.f;
            
            if (this->m_objectLayer) {
                cocos2d::CCPoint levelPos;
                std::string statusStr = "";

                if (this->m_playbackMode != PlaybackMode::Not && this->m_player1) {
                    levelPos = this->m_player1->getPosition();
                    
                    auto* gm = GameManager::get();
                    int iconType = 0;
                    if (this->m_player1->m_isShip) {
                        iconType = this->m_player1->m_isPlatformer ? 8 : 1;
                    } else if (this->m_player1->m_isBall) {
                        iconType = 2;
                    } else if (this->m_player1->m_isBird) {
                        iconType = 3;
                    } else if (this->m_player1->m_isDart) {
                        iconType = 4;
                    } else if (this->m_player1->m_isRobot) {
                        iconType = 5;
                    } else if (this->m_player1->m_isSpider) {
                        iconType = 6;
                    } else if (this->m_player1->m_isSwing) {
                        iconType = 7;
                    }

                    auto col1 = gm->colorForIdx(gm->getPlayerColor());
                    auto col2 = gm->colorForIdx(gm->getPlayerColor2());
                    bool glowEnabled = gm->getPlayerGlow();
                    auto colGlow = gm->colorForIdx(gm->getPlayerGlowColor());

                    std::stringstream ss;
                    ss << "pt:1:" 
                       << iconType << ":" 
                       << this->m_player1->getRotation() << ":" 
                       << (this->m_player1->m_isUpsideDown ? 1 : 0) << ":"
                       << gm->getPlayerFrame() << ":"
                       << gm->getPlayerShip() << ":"
                       << gm->getPlayerBall() << ":"
                       << gm->getPlayerBird() << ":"
                       << gm->getPlayerDart() << ":"
                       << gm->getPlayerRobot() << ":"
                       << gm->getPlayerSpider() << ":"
                       << gm->getPlayerSwing() << ":"
                       << static_cast<int>(col1.r) << ":" << static_cast<int>(col1.g) << ":" << static_cast<int>(col1.b) << ":"
                       << static_cast<int>(col2.r) << ":" << static_cast<int>(col2.g) << ":" << static_cast<int>(col2.b) << ":"
                       << (glowEnabled ? 1 : 0) << ":"
                       << static_cast<int>(colGlow.r) << ":" << static_cast<int>(colGlow.g) << ":" << static_cast<int>(colGlow.b) << ":"
                       << (this->m_player1->m_vehicleSize < 1.0f ? 1 : 0);
                       
                    if (this->m_player2 && this->m_gameState.m_isDualMode) {
                        int p2IconType = 0;
                        if (this->m_player2->m_isShip) p2IconType = this->m_player2->m_isPlatformer ? 8 : 1;
                        else if (this->m_player2->m_isBall) p2IconType = 2;
                        else if (this->m_player2->m_isBird) p2IconType = 3;
                        else if (this->m_player2->m_isDart) p2IconType = 4;
                        else if (this->m_player2->m_isRobot) p2IconType = 5;
                        else if (this->m_player2->m_isSpider) p2IconType = 6;
                        else if (this->m_player2->m_isSwing) p2IconType = 7;
                        
                        auto p2Pos = this->m_player2->getPosition();
                        ss << ":1:"
                           << p2Pos.x << ":" << p2Pos.y << ":"
                           << this->m_player2->getRotation() << ":"
                           << (this->m_player2->m_isUpsideDown ? 1 : 0) << ":"
                           << (this->m_player2->m_vehicleSize < 1.0f ? 1 : 0) << ":"
                           << p2IconType;
                    } else {
                        ss << ":0:0:0:0:0:0:0";
                    }
                    
                    ss << ":" << (this->m_player1->m_isGoingLeft ? 1 : 0);
                    ss << ":" << (this->m_player2 && this->m_player2->m_isGoingLeft ? 1 : 0);
                    
                    statusStr = ss.str();
                } else {
#ifdef GEODE_IS_MOBILE
                    if (s_isTouching) {
                        levelPos = this->m_objectLayer->convertToNodeSpace(s_lastTouchPos);
                        m_fields->m_lastSentLevelPos = levelPos;
                    } else {
                        levelPos = m_fields->m_lastSentLevelPos;
                    }
#else
                    auto mousePos = geode::cocos::getMousePos();
                    levelPos = this->m_objectLayer->convertToNodeSpace(mousePos);
#endif
                    
                    if (auto* ui = this->m_editorUI) {
                        int mode = ui->m_selectedMode;
                        int swipe = ui->m_swipeEnabled ? 1 : 0;
                        int objectId = 0;
                        if (mode == 2) {
                            objectId = s_selectedObjectID;
                        } else if (mode == 3) {
                            if (ui->m_selectedObject) {
                                objectId = ui->m_selectedObject->m_objectID;
                            } else if (ui->m_selectedObjects && ui->m_selectedObjects->count() > 0) {
                                if (auto* first = typeinfo_cast<GameObject*>(ui->m_selectedObjects->objectAtIndex(0))) {
                                    objectId = first->m_objectID;
                                }
                            }
                        }
                        statusStr = std::to_string(mode) + ":" + std::to_string(swipe) + ":" + std::to_string(objectId);
                    }
                }
                
                auto data = proto::serializeCursorUpdate(levelPos.x, levelPos.y, statusStr);
                P2PManager::get().send(std::move(data), ChannelType::Unreliable);
                
                auto& session = SessionManager::get();
                if (session.isInSession()) {
                    session.updatePlayerCursor(session.getLocalPlayerId(), levelPos.x, levelPos.y, statusStr);
                }
            }
        }
    }
};


namespace {
    void syncTransformedObjects(cocos2d::CCArray* objects,
                                std::function<void()> applyBase) {
        if (s_inTransformSync) {
            applyBase();
            return;
        }

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        struct ObjState {
            std::string uuid;
            GameObject* obj;
            cocos2d::CCPoint oldPos;
        };
        std::vector<ObjState> selected;

        if (session.isInSession() && !handler.isProcessingRemote() && objects) {
            for (auto* obj : CCArrayExt<GameObject*>(objects)) {
                if (!obj) continue;
                if (handler.isObjectPendingPlacement(obj)) {
                    handler.flushPendingPlacements();
                }
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    selected.push_back({uuid, obj, obj->getPosition()});
                }
            }
        }

        s_inTransformSync = true;
        applyBase();
        s_inTransformSync = false;

        if (selected.empty()) return;

        std::vector<ActionSerializer::TransformData> transforms;
        std::vector<ActionSerializer::MoveData> moves;

        for (auto& state : selected) {
            ActionSerializer::TransformData td;
            td.uuid = state.uuid;
            td.rotation = state.obj->getRotation();
            td.scaleX = state.obj->getScaleX();
            td.scaleY = state.obj->getScaleY();
            td.flipX = state.obj->isFlipX();
            td.flipY = state.obj->isFlipY();
            transforms.push_back(td);

            cocos2d::CCPoint newPos = state.obj->getPosition();
            float dx = newPos.x - state.oldPos.x;
            float dy = newPos.y - state.oldPos.y;
            if (dx != 0.f || dy != 0.f) {
                ActionSerializer::MoveData md;
                md.uuid = state.uuid;
                md.dx = dx;
                md.dy = dy;
                moves.push_back(md);
            }
        }

        for (auto const& t : transforms) {
            MessageBatcher::get().queueTransform(t.uuid, t);
        }
        for (auto const& m : moves) {
            MessageBatcher::get().queueMove(m.uuid, m.dx, m.dy);
        }

        auto& tracked = handler.getTrackedSelections();
        auto* editor = LevelEditorLayer::get();
        if (editor) {
            for (auto& state : selected) {
                auto tIt = tracked.find(state.obj);
                if (tIt != tracked.end()) {
                    tIt->second = state.obj->getSaveString(editor);
                }
            }
        }
    }

    void syncObjectProperties(cocos2d::CCArray* objects) {
        if (!objects || objects->count() == 0) return;
        auto& session = SessionManager::get();
        if (!session.isInSession()) return;
        
        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote()) return;
        
        auto* editor = LevelEditorLayer::get();
        if (!editor) return;
        
        auto& tracked = handler.getTrackedSelections();
        std::vector<ActionSerializer::ObjectData> updates;
        
        for (auto* obj : CCArrayExt<GameObject*>(objects)) {
            if (!obj) continue;
            auto uuid = handler.getUUIDForObject(obj);
            if (uuid.empty()) continue;
            
            auto tIt = tracked.find(obj);
            if (tIt != tracked.end()) {
                std::string currentSave = obj->getSaveString(editor);
                if (tIt->second != currentSave) {
                    updates.push_back(ActionSerializer::extractObjectData(obj, uuid));
                    tIt->second = currentSave;
                }
            }
        }
        
        if (!updates.empty()) {
            sendChunkedUpdateObjects(updates);
            log::info("EditorHooks: Broadcasted granular property updates for {} objects from popup", updates.size());
        }
    }
}

class $modify(MPEditorUI, EditorUI) {
    struct Fields {
        float m_lockRefreshTimer = 0.f;
    };

    void onSettings(cocos2d::CCObject* sender) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        EditorUI::onSettings(sender);
    }

    void undoLastAction(cocos2d::CCObject* sender) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        EditorUI::undoLastAction(sender);
    }

    void redoLastAction(cocos2d::CCObject* sender) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        EditorUI::redoLastAction(sender);
    }

    void onCreateObject(int id) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        EditorUI::onCreateObject(id);
        s_selectedObjectID = id;
    }

    void toggleMode(cocos2d::CCObject* btn) {
        if (SessionManager::get().isLocalPlayerViewOnly() && btn != this->m_editModeBtn) {
            EditorUI::toggleMode(this->m_editModeBtn);
            return;
        }
        EditorUI::toggleMode(btn);
    }

    bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        if (SessionManager::get().isLocalPlayerViewOnly()) {
            if (this->m_selectedMode != 2) {
                this->toggleMode(this->m_editModeBtn);
            }
            return EditorUI::ccTouchBegan(touch, event);
        }
        bool res = EditorUI::ccTouchBegan(touch, event);
        if (touch) {
            s_lastTouchPos = touch->getLocation();
            s_isTouching = true;
        }
        return res;
    }

    void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        EditorUI::ccTouchMoved(touch, event);
        if (touch) {
            s_lastTouchPos = touch->getLocation();
            s_isTouching = true;
        }
    }

    void keyDown(cocos2d::enumKeyCodes key, double timestamp) {
        if (key == cocos2d::enumKeyCodes::KEY_Slash) {
            auto& session = SessionManager::get();
            if (session.isInSession()) {
                QuickChatPopup::create()->show();
                return;
            }
        }
        EditorUI::keyDown(key, timestamp);
    }

    void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        EditorUI::ccTouchEnded(touch, event);
        s_isTouching = false;
        if (SessionManager::get().isInSession()) {
            MessageBatcher::get().flush();
        }
    }

    void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        EditorUI::ccTouchCancelled(touch, event);
        s_isTouching = false;
        if (SessionManager::get().isInSession()) {
            MessageBatcher::get().flush();
        }
    }

    void selectObject(GameObject* obj, bool filter) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    return;
                }
            }
        }

        EditorUI::selectObject(obj, filter);

        if (session.isInSession() && obj) {
            auto uuid = handler.getOrCreateUUID(obj);
            auto& tracked = handler.getTrackedSelections();
            if (tracked.find(obj) == tracked.end()) {
                if (auto* editor = LevelEditorLayer::get()) {
                    tracked[obj] = obj->getSaveString(editor);
                }
                if (!handler.isProcessingRemote()) {
                    sendChunkedLockObjects({uuid}, true);

                    if (handler.isObjectPendingPlacement(obj)) {
                        handler.flushPendingPlacements();
                    }
                }
            }
        }
    }

    void deselectObject(GameObject* obj) {
        EditorUI::deselectObject(obj);
        
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (session.isInSession() && obj) {
            auto& tracked = handler.getTrackedSelections();
            if (!handler.isProcessingRemote()) {
                if (handler.isObjectPendingPlacement(obj)) {
                    handler.flushPendingPlacements();
                }

                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    auto tIt = tracked.find(obj);
                    if (tIt != tracked.end()) {
                        if (auto* editor = LevelEditorLayer::get()) {
                            std::string currentSave = obj->getSaveString(editor);
                            if (ActionSerializer::hasDeepPropertyChanges(obj, tIt->second, currentSave)) {
                                auto objData = ActionSerializer::extractObjectData(obj, uuid);
                                sendChunkedUpdateObjects({objData});
                            }
                        }
                    }

                    ActionSerializer::ReconcileData rec;
                    rec.uuid = uuid;
                    rec.x = obj->getPositionX();
                    rec.y = obj->getPositionY();
                    rec.rotation = obj->getRotation();
                    rec.scaleX = obj->getScaleX();
                    rec.scaleY = obj->getScaleY();
                    rec.flipX = obj->isFlipX();
                    rec.flipY = obj->isFlipY();
                    
                    sendChunkedReconcileObjects({rec});
                    
                    MessageBatcher::get().removePending(uuid);

                    sendChunkedLockObjects({uuid}, false);
                }
            }
            tracked.erase(obj);
        }
    }

    void deselectAll() {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (session.isInSession()) {
            if (!handler.isProcessingRemote()) {
                auto* editor = LevelEditorLayer::get();
                std::vector<std::string> uuids;
                std::vector<ActionSerializer::ReconcileData> reconciles;
                std::vector<ActionSerializer::ObjectData> updates;
                
                auto& tracked = handler.getTrackedSelections();
                
                for (auto& [obj, savedString] : tracked) {
                    if (!editor || !editor->m_objects || !editor->m_objects->containsObject(obj)) {
                        continue;
                    }

                    if (handler.isObjectPendingPlacement(obj)) {
                        handler.flushPendingPlacements();
                    }

                    auto uuid = handler.getUUIDForObject(obj);
                    if (uuid.empty()) continue;
                    
                    uuids.push_back(uuid);
                    
                    std::string currentSave = obj->getSaveString(editor);
                    if (ActionSerializer::hasDeepPropertyChanges(obj, savedString, currentSave)) {
                        updates.push_back(ActionSerializer::extractObjectData(obj, uuid));
                    }

                    ActionSerializer::ReconcileData rec;
                    rec.uuid = uuid;
                    rec.x = obj->getPositionX();
                    rec.y = obj->getPositionY();
                    rec.rotation = obj->getRotation();
                    rec.scaleX = obj->getScaleX();
                    rec.scaleY = obj->getScaleY();
                    rec.flipX = obj->isFlipX();
                    rec.flipY = obj->isFlipY();
                    reconciles.push_back(rec);
                    
                    MessageBatcher::get().removePending(uuid);
                }
                
                if (!updates.empty()) {
                    sendChunkedUpdateObjects(updates);
                }
                if (!reconciles.empty()) {
                    sendChunkedReconcileObjects(reconciles);
                }
                if (!uuids.empty()) {
                    sendChunkedLockObjects(uuids, false);
                }
            }
            handler.getTrackedSelections().clear();
        }
        EditorUI::deselectAll();
    }

    void onDeleteSelected(cocos2d::CCObject* sender) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote()) {
            std::vector<std::string> uuids;
            
            if (m_selectedObjects && m_selectedObjects->count() > 0) {
                for (auto* obj : CCArrayExt<GameObject*>(m_selectedObjects)) {
                    auto uuid = handler.getUUIDForObject(obj);
                    if (!uuid.empty()) {
                        uuids.push_back(uuid);
                        handler.unregisterObject(uuid);
                    }
                }
            } else if (m_selectedObject) {
                auto uuid = handler.getUUIDForObject(m_selectedObject);
                if (!uuid.empty()) {
                    uuids.push_back(uuid);
                    handler.unregisterObject(uuid);
                }
            }

            if (!uuids.empty()) {
                sendChunkedDeleteObjects(uuids);
            }
        }

        EditorUI::onDeleteSelected(sender);
    }

    bool shouldDeleteObject(GameObject* obj) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    return false;
                }
            }
        }
        return EditorUI::shouldDeleteObject(obj);
    }

    void selectObjects(cocos2d::CCArray* objects, bool filter) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        cocos2d::CCArray* filteredObjects = objects;
        if (session.isInSession() && !handler.isProcessingRemote() && objects) {
            auto const& locks = handler.getObjectLocks();
            int localId = session.getLocalPlayerId();
            
            bool hasLocked = false;
            for (auto* obj : CCArrayExt<GameObject*>(objects)) {
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    auto it = locks.find(uuid);
                    if (it != locks.end() && it->second.playerId != localId) {
                        hasLocked = true;
                        break;
                    }
                }
            }

            if (hasLocked) {
                filteredObjects = cocos2d::CCArray::create();
                for (auto* obj : CCArrayExt<GameObject*>(objects)) {
                    auto uuid = handler.getUUIDForObject(obj);
                    bool isLockedByOther = false;
                    if (!uuid.empty()) {
                        auto it = locks.find(uuid);
                        if (it != locks.end() && it->second.playerId != localId) {
                            isLockedByOther = true;
                        }
                    }
                    if (!isLockedByOther) {
                        filteredObjects->addObject(obj);
                    }
                }
            }
        }

        EditorUI::selectObjects(filteredObjects, filter);

        if (session.isInSession() && filteredObjects) {
            std::vector<std::string> uuids;
            auto& tracked = handler.getTrackedSelections();
            auto* editor = LevelEditorLayer::get();
            for (auto* obj : CCArrayExt<GameObject*>(filteredObjects)) {
                auto uuid = handler.getOrCreateUUID(obj);
                if (tracked.find(obj) == tracked.end()) {
                    if (editor) {
                        tracked[obj] = obj->getSaveString(editor);
                    }
                    uuids.push_back(uuid);
                }
            }
            if (!uuids.empty() && !handler.isProcessingRemote()) {
                sendChunkedLockObjects(uuids, true);
            }
        }
    }

    bool init(LevelEditorLayer* editorLayer) {
        if (!EditorUI::init(editorLayer)) return false;

        auto* helper = UpdateHelperNode::create([this](float dt) {
            this->syncDeselections(dt);
        }, 0.1f);
        if (helper) {
            helper->setID("sync-deselect-helper"_spr);
            this->addChild(helper);
        }
        return true;
    }

    void syncDeselections(float dt) {
        auto* editor = LevelEditorLayer::get();
        if (!editor || !editor->m_objects || editor->m_playbackMode != PlaybackMode::Not) return;

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (!session.isInSession() || handler.isProcessingRemote()) return;

        auto& tracked = handler.getTrackedSelections();
        auto const& locks = handler.getObjectLocks();
        int localId = session.getLocalPlayerId();

        std::vector<GameObject*> currentSelection;
        if (m_selectedObject) {
            currentSelection.push_back(m_selectedObject);
        }
        if (m_selectedObjects) {
            for (auto* obj : CCArrayExt<GameObject*>(m_selectedObjects)) {
                if (obj) currentSelection.push_back(obj);
            }
        }

        std::vector<GameObject*> toDeselect;
        std::vector<std::string> toLockUuids;

        for (auto* obj : currentSelection) {
            auto uuid = handler.getUUIDForObject(obj);
            if (uuid.empty()) {
                uuid = RemoteActionHandler::generateUUID();
                handler.registerObject(uuid, obj);
            }

            auto it = locks.find(uuid);
            if (it != locks.end() && it->second.playerId != localId) {
                toDeselect.push_back(obj);
            } else {
                if (tracked.find(obj) == tracked.end()) {
                    tracked[obj] = obj->getSaveString(editor);
                    toLockUuids.push_back(uuid);
                }
            }
        }

        for (auto* obj : toDeselect) {
            this->deselectObject(obj);
            if (m_selectedObject == obj) {
                m_selectedObject = nullptr;
            }
            if (m_selectedObjects && m_selectedObjects->containsObject(obj)) {
                m_selectedObjects->removeObject(obj);
            }
        }

        if (!toLockUuids.empty()) {
            sendChunkedLockObjects(toLockUuids, true);
        }

        m_fields->m_lockRefreshTimer += dt;
        if (m_fields->m_lockRefreshTimer >= 1.0f) {
            m_fields->m_lockRefreshTimer = 0.f;
            std::vector<std::string> refreshUuids;
            for (auto const& [obj, _] : tracked) {
                if (editor->m_objects->containsObject(obj)) {
                    auto uuid = handler.getUUIDForObject(obj);
                    if (!uuid.empty()) {
                        refreshUuids.push_back(uuid);
                    }
                }
            }
            if (!refreshUuids.empty()) {
                sendChunkedLockObjects(refreshUuids, true);
            }
        }

        std::vector<std::string> unlockUuids;
        std::vector<ActionSerializer::ReconcileData> reconciles;
        std::vector<ActionSerializer::ObjectData> updates;

        for (auto it = tracked.begin(); it != tracked.end(); ) {
            GameObject* obj = it->first;

            if (!editor->m_objects->containsObject(obj)) {
                it = tracked.erase(it);
                continue;
            }

            bool isSelected = (std::find(currentSelection.begin(), currentSelection.end(), obj) != currentSelection.end()) &&
                              (std::find(toDeselect.begin(), toDeselect.end(), obj) == toDeselect.end());

            if (handler.isObjectPendingPlacement(obj)) {
                handler.flushPendingPlacements();
            }
            auto uuid = handler.getUUIDForObject(obj);
            if (uuid.empty()) {
                it = tracked.erase(it);
                continue;
            }

            if (!isSelected) {
                unlockUuids.push_back(uuid);

                ActionSerializer::ReconcileData rec;
                rec.uuid = uuid;
                rec.x = obj->getPositionX();
                rec.y = obj->getPositionY();
                rec.rotation = obj->getRotation();
                rec.scaleX = obj->getScaleX();
                rec.scaleY = obj->getScaleY();
                rec.flipX = obj->isFlipX();
                rec.flipY = obj->isFlipY();
                reconciles.push_back(rec);

                std::string currentSave = obj->getSaveString(editor);
                if (ActionSerializer::hasDeepPropertyChanges(obj, it->second, currentSave)) {
                    updates.push_back(ActionSerializer::extractObjectData(obj, uuid));
                }
                
                MessageBatcher::get().removePending(uuid);

                it = tracked.erase(it);
            } else {
                std::string currentSave = obj->getSaveString(editor);
                if (ActionSerializer::hasDeepPropertyChanges(obj, it->second, currentSave)) {
                    updates.push_back(ActionSerializer::extractObjectData(obj, uuid));
                    it->second = currentSave;
                } else if (it->second != currentSave) {
                    it->second = currentSave;
                    
                    MessageBatcher::get().removePending(uuid);
                    
                    ActionSerializer::ReconcileData rec;
                    rec.uuid = uuid;
                    rec.x = obj->getPositionX();
                    rec.y = obj->getPositionY();
                    rec.rotation = obj->getRotation();
                    rec.scaleX = obj->getScaleX();
                    rec.scaleY = obj->getScaleY();
                    rec.flipX = obj->isFlipX();
                    rec.flipY = obj->isFlipY();
                    reconciles.push_back(rec);
                }
                ++it;
            }
        }

        for (auto it = s_startPosObjects.begin(); it != s_startPosObjects.end(); ) {
            GameObject* obj = *it;
            if (!editor->m_objects->containsObject(obj)) {
                s_startPosSaveStrings.erase(obj);
                it = s_startPosObjects.erase(it);
                continue;
            }
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                std::string currentSave = obj->getSaveString(editor);
                if (s_startPosSaveStrings.count(obj)) {
                    if (ActionSerializer::hasDeepPropertyChanges(obj, s_startPosSaveStrings[obj], currentSave)) {
                        updates.push_back(ActionSerializer::extractObjectData(obj, uuid));
                    }
                }
                s_startPosSaveStrings[obj] = currentSave;
            }
            ++it;
        }

        if (!unlockUuids.empty()) {
            sendChunkedLockObjects(unlockUuids, false);
        }
        if (!reconciles.empty()) {
            sendChunkedReconcileObjects(reconciles);
        }
        if (!updates.empty()) {
            sendChunkedUpdateObjects(updates);
        }
    }

    void moveObject(GameObject* obj, cocos2d::CCPoint position) {
        if (SessionManager::get().isLocalPlayerViewOnly() && !RemoteActionHandler::get().isProcessingRemote()) return;
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    return;
                }
            }
        }

        CCPoint oldPos = obj->getPosition();

        EditorUI::moveObject(obj, position);

        if (session.isInSession() && !handler.isProcessingRemote()) {
            auto uuid = handler.getUUIDForObject(obj);
            if (handler.isObjectPendingPlacement(obj)) {
                return;
            }
            if (!uuid.empty()) {
                CCPoint newPos = obj->getPosition();
                ActionSerializer::MoveData move;
                move.uuid = uuid;
                move.dx = newPos.x - oldPos.x;
                move.dy = newPos.y - oldPos.y;

                if ((move.dx != 0.f || move.dy != 0.f) && !s_inTransformSync) {
                    MessageBatcher::get().queueMove(uuid, move.dx, move.dy);

                    auto& tracked = handler.getTrackedSelections();
                    auto tIt = tracked.find(obj);
                    if (tIt != tracked.end()) {
                        if (auto* editor = LevelEditorLayer::get()) {
                            tIt->second = obj->getSaveString(editor);
                        }
                    }
                }
            }
        }
    }

    void transformObjectCall(EditCommand command) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        syncTransformedObjects(m_selectedObjects, [&]() {
            EditorUI::transformObjectCall(command);
        });
    }

    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint pivotPoint) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        syncTransformedObjects(objects, [&]() {
            EditorUI::rotateObjects(objects, rotation, pivotPoint);
        });
    }

    void scaleObjects(cocos2d::CCArray* objects, float scaleX, float scaleY, cocos2d::CCPoint pivotPoint, ObjectScaleType type, bool lockMove) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        syncTransformedObjects(objects, [&]() {
            EditorUI::scaleObjects(objects, scaleX, scaleY, pivotPoint, type, lockMove);
        });
    }

    void flipObjectsX(cocos2d::CCArray* objects) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        syncTransformedObjects(objects, [&]() {
            EditorUI::flipObjectsX(objects);
        });
    }

    void flipObjectsY(cocos2d::CCArray* objects) {
        if (SessionManager::get().isLocalPlayerViewOnly()) return;
        syncTransformedObjects(objects, [&]() {
            EditorUI::flipObjectsY(objects);
        });
    }
};

class $modify(MPBaseGameLayer, GJBaseGameLayer) {
    void addToSection(GameObject* obj) {
        GJBaseGameLayer::addToSection(obj);

        if (obj && obj->m_objectID == 31) {
            auto* editor = LevelEditorLayer::get();
            if (editor && static_cast<GJBaseGameLayer*>(editor) == this) {
                s_startPosObjects.insert(obj);
                s_startPosSaveStrings[obj] = obj->getSaveString(editor);
            }
        }

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (!session.isInSession() || handler.isProcessingRemote() || !obj) {
            return;
        }

        if (!handler.isInitialSyncCompleted()) {
            return;
        }

        auto* editor = LevelEditorLayer::get();
        if (!editor || static_cast<GJBaseGameLayer*>(editor) != this) {
            return;
        }

        auto* mpEditor = modify_cast<MPLevelEditorLayer*>(editor);
        if (!mpEditor || !session.isInSession() || mpEditor->m_fields->m_inUndoRedo) {
            return;
        }

        if (!handler.getUUIDForObject(obj).empty()) {
            return;
        }

        if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
            if (tpPortal->m_isYellowPortal) {
                return;
            }
        }

        auto uuid = RemoteActionHandler::generateUUID();
        handler.registerObject(uuid, obj);
        handler.queueObjectForPlacement(uuid, obj);
    }
};

namespace {
    void forceSyncColorsToDict(GJEffectManager* effectMgr) {
        if (!effectMgr || !effectMgr->m_colorActionDict) return;
        for (size_t i = 0; i < effectMgr->m_colorActionVector.size(); i++) {
            auto* vecAction = effectMgr->m_colorActionVector[i];
            if (vecAction) {
                int channelID = vecAction->m_colorID;
                if (channelID == 0) channelID = static_cast<int>(i);
        auto* dictAction = static_cast<ColorAction*>(effectMgr->m_colorActionDict->objectForKey(channelID));
        if (!dictAction) {
            effectMgr->m_colorActionDict->setObject(vecAction, channelID);
        } else if (dictAction != vecAction) {
            dictAction->m_color = vecAction->m_color;
            dictAction->m_fromColor = vecAction->m_fromColor;
            dictAction->m_toColor = vecAction->m_toColor;
            dictAction->m_duration = vecAction->m_duration;
            dictAction->m_blending = vecAction->m_blending;
            dictAction->m_playerColor = vecAction->m_playerColor;
            dictAction->m_fromOpacity = vecAction->m_fromOpacity;
            dictAction->m_toOpacity = vecAction->m_toOpacity;
            dictAction->m_copyHSV = vecAction->m_copyHSV;
            dictAction->m_copyID = vecAction->m_copyID;
            dictAction->m_copyOpacity = vecAction->m_copyOpacity;
            dictAction->m_copyColorCalculated = vecAction->m_copyColorCalculated;
            dictAction->m_colorID = vecAction->m_colorID;
            dictAction->m_copyColorLoop = vecAction->m_copyColorLoop;
            dictAction->m_legacyHSV = vecAction->m_legacyHSV;
        }
    }
}
}
}

namespace mpedit {
ActionSerializer::ColorChannelData colorActionToData(ColorAction* action, int channelID) {
    ActionSerializer::ColorChannelData data;
    data.channelID = channelID;
    if (action) {
        data.color = action->m_color;
        data.fromColor = action->m_fromColor;
        data.toColor = action->m_toColor;
        data.duration = action->m_duration;
        data.blending = action->m_blending;
        data.playerColor = action->m_playerColor;
        data.fromOpacity = action->m_fromOpacity;
        data.toOpacity = action->m_toOpacity;
        data.copyHSV = action->m_copyHSV;
        data.copyID = action->m_copyID;
        data.copyOpacity = action->m_copyOpacity;
        data.copyColorCalculated = action->m_copyColorCalculated;
        data.colorID = action->m_colorID;
        data.copyColorLoop = action->m_copyColorLoop;
        data.legacyHSV = action->m_legacyHSV;
    }
    return data;
}
}


#include <Geode/modify/GJColorSetupLayer.hpp>
class $modify(MPGJColorSetupLayer, GJColorSetupLayer) {
    struct Fields {
        std::unordered_map<int, ActionSerializer::ColorChannelData> m_cachedColors;
    };

    bool init(LevelSettingsObject* p0) {
        if (!GJColorSetupLayer::init(p0)) return false;

        auto* effectMgr = m_settingsObject ? m_settingsObject->m_effectManager : nullptr;
        if (!effectMgr) {
            auto editor = LevelEditorLayer::get();
            if (editor && editor->m_levelSettings) {
                effectMgr = editor->m_levelSettings->m_effectManager;
            }
        }

        if (effectMgr) {
            for (size_t i = 0; i < effectMgr->m_colorActionVector.size(); i++) {
                if (auto* action = effectMgr->m_colorActionVector[i]) {
                    int channelID = action->m_colorID;
                    if (channelID == 0) channelID = static_cast<int>(i);
                    m_fields->m_cachedColors[channelID] = colorActionToData(action, channelID);
                }
            }
        }

        return true;
    }

    void syncColors() {
        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;

        auto& session = SessionManager::get();
        if (!session.isInSession()) return;
        
        auto editor = LevelEditorLayer::get();
        auto* effectMgr = m_settingsObject ? m_settingsObject->m_effectManager : nullptr;
        if (!effectMgr && editor && editor->m_levelSettings) {
            effectMgr = editor->m_levelSettings->m_effectManager;
        }

        if (effectMgr) {
            forceSyncColorsToDict(effectMgr);

            for (size_t i = 0; i < effectMgr->m_colorActionVector.size(); i++) {
                if (auto* action = effectMgr->m_colorActionVector[i]) {
                    int channelID = action->m_colorID;
                    if (channelID == 0) channelID = static_cast<int>(i);
                    auto currentData = colorActionToData(action, channelID);
                    
                    if (m_fields->m_cachedColors.find(channelID) == m_fields->m_cachedColors.end() || m_fields->m_cachedColors[channelID] != currentData) {
                        m_fields->m_cachedColors[channelID] = currentData;
                        auto packet = proto::serializeUpdateColorChannel(currentData);
                        P2PManager::get().send(std::move(packet), ChannelType::Reliable);
                        log::info("Broadcasting granular UpdateColorChannel for channel {}", channelID);
                    }
                }
            }
        }
    }

    void onClose(cocos2d::CCObject* sender) {
        GJColorSetupLayer::onClose(sender);
        syncColors();
    }

    void keyBackClicked() {
        GJColorSetupLayer::keyBackClicked();
        syncColors();
    }
};



#include <Geode/modify/LevelSettingsLayer.hpp>
class $modify(MPLevelSettingsLayer, LevelSettingsLayer) {
    struct Fields {
        std::map<int, ActionSerializer::ColorChannelData> m_cachedColors;
    };

    bool init(LevelSettingsObject* object, LevelEditorLayer* layer) {
        if (!LevelSettingsLayer::init(object, layer)) return false;

        auto editor = LevelEditorLayer::get();
        if (editor && editor->m_levelSettings && editor->m_levelSettings->m_effectManager) {
            auto effectMgr = editor->m_levelSettings->m_effectManager;
            for (size_t i = 0; i < effectMgr->m_colorActionVector.size(); i++) {
                if (auto* action = effectMgr->m_colorActionVector[i]) {
                    int channelID = action->m_colorID;
                    if (channelID == 0) channelID = static_cast<int>(i);
                    m_fields->m_cachedColors[channelID] = colorActionToData(action, channelID);
                }
            }
        }
        return true;
    }

    void syncColors() {
        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;
        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        auto editor = LevelEditorLayer::get();
        if (editor && editor->m_levelSettings && editor->m_levelSettings->m_effectManager) {
            auto effectMgr = editor->m_levelSettings->m_effectManager;
            forceSyncColorsToDict(effectMgr);

            for (size_t i = 0; i < effectMgr->m_colorActionVector.size(); i++) {
                if (auto* action = effectMgr->m_colorActionVector[i]) {
                    int channelID = action->m_colorID;
                    if (channelID == 0) channelID = static_cast<int>(i);
                    auto currentData = colorActionToData(action, channelID);
                    
                    if (m_fields->m_cachedColors.find(channelID) == m_fields->m_cachedColors.end() || m_fields->m_cachedColors[channelID] != currentData) {
                        m_fields->m_cachedColors[channelID] = currentData;
                        auto packet = proto::serializeUpdateColorChannel(currentData);
                        P2PManager::get().send(std::move(packet), ChannelType::Reliable);
                        log::info("Broadcasting UpdateColorChannel for channel {} from LevelSettingsLayer", channelID);
                    }
                }
            }
        }
    }


    void onClose(cocos2d::CCObject* sender) {
        LevelSettingsLayer::onClose(sender);

        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;

        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        auto editor = LevelEditorLayer::get();
        if (editor && editor->m_levelSettings) {
            syncColors();
            ActionSerializer::LevelSettingsData settings;
            settings.saveString = editor->m_levelSettings->getSaveString();
            settings.audioTrack = editor->m_level->m_audioTrack;
            settings.songID = editor->m_level->m_songID;
            settings.levelLength = editor->m_level->m_levelLength;
            
            auto packet = proto::serializeUpdateSettings(settings);
            P2PManager::get().send(std::move(packet), ChannelType::Reliable);
        }
    }

    void keyBackClicked() {
        LevelSettingsLayer::keyBackClicked();

        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;

        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        auto editor = LevelEditorLayer::get();
        if (editor && editor->m_levelSettings) {
            syncColors();
            ActionSerializer::LevelSettingsData settings;
            settings.saveString = editor->m_levelSettings->getSaveString();
            settings.audioTrack = editor->m_level->m_audioTrack;
            settings.songID = editor->m_level->m_songID;
            settings.levelLength = editor->m_level->m_levelLength;
            
            auto packet = proto::serializeUpdateSettings(settings);
            P2PManager::get().send(std::move(packet), ChannelType::Reliable);
        }
    }
};

#include <Geode/modify/CustomizeObjectLayer.hpp>
class $modify(MPCustomizeObjectLayer, CustomizeObjectLayer) {
    void syncSelected() {
        if (auto editor = LevelEditorLayer::get()) {
            if (auto ui = editor->m_editorUI) {
                syncObjectProperties(ui->m_selectedObjects);
            }
        }
    }

    void onClose(cocos2d::CCObject* sender) {
        CustomizeObjectLayer::onClose(sender);
        syncSelected();
    }
    void keyBackClicked() {
        CustomizeObjectLayer::keyBackClicked();
        syncSelected();
    }
};

#include <Geode/modify/SetGroupIDLayer.hpp>
class $modify(MPSetGroupIDLayer, SetGroupIDLayer) {
    void onClose(cocos2d::CCObject* sender) {
        SetGroupIDLayer::onClose(sender);
        if (auto editor = LevelEditorLayer::get()) {
            if (auto ui = editor->m_editorUI) {
                syncObjectProperties(ui->m_selectedObjects);
            }
        }
    }
    void keyBackClicked() {
        SetGroupIDLayer::keyBackClicked();
        if (auto editor = LevelEditorLayer::get()) {
            if (auto ui = editor->m_editorUI) {
                syncObjectProperties(ui->m_selectedObjects);
            }
        }
    }
};

#include <Geode/modify/SetupTriggerPopup.hpp>
class $modify(MPSetupTriggerPopup, SetupTriggerPopup) {
    void onClose(cocos2d::CCObject* sender) {
        SetupTriggerPopup::onClose(sender);
        if (auto editor = LevelEditorLayer::get()) {
            if (auto ui = editor->m_editorUI) {
                syncObjectProperties(ui->m_selectedObjects);
            }
        }
    }
    void keyBackClicked() {
        SetupTriggerPopup::keyBackClicked();
        if (auto editor = LevelEditorLayer::get()) {
            if (auto ui = editor->m_editorUI) {
                syncObjectProperties(ui->m_selectedObjects);
            }
        }
    }
};

#include <Geode/modify/ColorSelectPopup.hpp>
class $modify(MPColorSelectPopup, ColorSelectPopup) {
    void closeColorSelect(cocos2d::CCObject* sender) {
        ColorSelectPopup::closeColorSelect(sender);
        syncColor();
    }

    void keyBackClicked() {
        ColorSelectPopup::keyBackClicked();
        syncColor();
    }

    void syncColor() {
        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;

        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        if (m_colorAction) {
            int channelID = m_colorAction->m_colorID;
            auto data = colorActionToData(m_colorAction, channelID);
            auto packet = proto::serializeUpdateColorChannel(data);
            P2PManager::get().send(std::move(packet), ChannelType::Reliable);
            log::info("Broadcasting granular UpdateColorChannel for channel {} from ColorSelectPopup", channelID);
        }
    }
};

#include <Geode/modify/ColorSelectLiveOverlay.hpp>
class $modify(MPColorSelectLiveOverlay, ColorSelectLiveOverlay) {
    void closeColorSelect(cocos2d::CCObject* sender) {
        ColorSelectLiveOverlay::closeColorSelect(sender);
        syncColor();
    }

    void keyBackClicked() {
        ColorSelectLiveOverlay::keyBackClicked();
        syncColor();
    }

    void syncColor() {
        auto& handler = RemoteActionHandler::get();
        if (handler.isProcessingRemote() || !handler.isInitialSyncCompleted()) return;

        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        if (m_baseColorAction) {
            int channelID = m_baseColorAction->m_colorID;
            auto data = colorActionToData(m_baseColorAction, channelID);
            auto packet = proto::serializeUpdateColorChannel(data);
            P2PManager::get().send(std::move(packet), ChannelType::Reliable);
        }
        
        if (m_detailColorAction) {
            int channelID = m_detailColorAction->m_colorID;
            auto data = colorActionToData(m_detailColorAction, channelID);
            auto packet = proto::serializeUpdateColorChannel(data);
            P2PManager::get().send(std::move(packet), ChannelType::Reliable);
        }
    }
};

namespace mpedit {
    void RemoteActionHandler::sendSnapshotToServer(std::function<void()> onComplete) {
        if (auto* layer = LevelEditorLayer::get()) {
            ::sendChunkedSync(layer, 0, onComplete);
        } else if (onComplete) {
            onComplete();
        }
    }
}
