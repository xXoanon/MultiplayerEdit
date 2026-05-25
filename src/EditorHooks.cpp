#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>
#include <Geode/modify/LevelBrowserLayer.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

#include "SessionManager.hpp"
#include "NetworkManager.hpp"
#include "ActionSerializer.hpp"
#include "RemoteActionHandler.hpp"
#include "ui/MultiplayerPopup.hpp"
#include "ui/SessionStatusNode.hpp"
#include "ui/CursorNode.hpp"

using namespace geode::prelude;
using namespace mpedit;

namespace {
    int s_selectedObjectID = 1;
    cocos2d::CCPoint s_lastTouchPos = {0.f, 0.f};
    bool s_isTouching = false;

    class UpdateHelperNode : public cocos2d::CCNode {
    public:
        using UpdateCallback = std::function<void(float)>;

        static UpdateHelperNode* create(UpdateCallback callback, float interval) {
            auto* ret = new UpdateHelperNode();
            if (ret && ret->init(std::move(callback), interval)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }

        bool init(UpdateCallback callback, float interval) {
            m_callback = std::move(callback);
            this->schedule(schedule_selector(UpdateHelperNode::onUpdate), interval);
            return true;
        }

        void onUpdate(float dt) {
            if (m_callback) {
                m_callback(dt);
            }
        }

    private:
        UpdateCallback m_callback;
    };
}

// ============================================================
// EditorPauseLayer — Add "Multiplayer" button to pause menu
// ============================================================

class $modify(MPEditorPauseLayer, EditorPauseLayer) {
    bool init(LevelEditorLayer* editor) {
        if (!EditorPauseLayer::init(editor)) return false;

        // Create the multiplayer button
        auto* btnSprite = ButtonSprite::create(
            "Multiplayer Edit", 90, true, "bigFont.fnt", "GJ_button_01.png", 30.f, 0.45f
        );
        auto* btn = CCMenuItemSpriteExtra::create(
            btnSprite,
            this,
            menu_selector(MPEditorPauseLayer::onMultiplayer)
        );
        btn->setID("multiplayer-button"_spr);

        // Find the center button menu
        CCMenu* targetMenu = typeinfo_cast<CCMenu*>(this->getChildByID("center-button-menu"));
        
        if (!targetMenu) {
            // Fallback: look through all menus to find one with the most buttons (likely the center one)
            for (CCNode* child : this->getChildrenExt()) {
                if (auto* menu = typeinfo_cast<CCMenu*>(child)) {
                    if (menu->getChildrenCount() >= 4) {
                        targetMenu = menu;
                        break;
                    }
                }
            }
        }

        if (targetMenu) {
            targetMenu->addChild(btn);
            targetMenu->updateLayout();
        } else {
            // Fallback: create our own menu
            auto* fallbackMenu = CCMenu::create();
            fallbackMenu->setID("multiplayer-menu"_spr);
            fallbackMenu->setPosition({0, 0});
            
            auto winSize = CCDirector::sharedDirector()->getWinSize();
            btn->setPosition({winSize.width / 2.f, 40.f}); // Bottom center
            fallbackMenu->addChild(btn);
            this->addChild(fallbackMenu, 10);
        }

        auto& session = SessionManager::get();
        if (session.isInSession()) {
            auto disableBtn = [this](const char* id) {
                if (auto* btn = typeinfo_cast<CCMenuItemSpriteExtra*>(this->getChildByIDRecursive(id))) {
                    btn->setEnabled(false);
                    if (auto* sprite = typeinfo_cast<cocos2d::CCSprite*>(btn->getNormalImage())) {
                        sprite->setColor({100, 100, 100});
                    }
                }
            };

            auto disableBtnByText = [this](bool isSavePlay, bool isSaveExit) {
                std::function<CCMenuItemSpriteExtra*(CCNode*)> findBtn = [&](CCNode* node) -> CCMenuItemSpriteExtra* {
                    if (!node) return nullptr;
                    if (auto* item = typeinfo_cast<CCMenuItemSpriteExtra*>(node)) {
                        if (auto* normal = item->getNormalImage()) {
                            std::function<CCLabelBMFont*(CCNode*)> findLabel = [&](CCNode* n) -> CCLabelBMFont* {
                                if (auto* lbl = typeinfo_cast<CCLabelBMFont*>(n)) return lbl;
                                if (n->getChildren()) {
                                    for (auto* c : CCArrayExt<CCNode*>(n->getChildren())) {
                                        if (auto* l = findLabel(c)) return l;
                                    }
                                }
                                return nullptr;
                            };
                            if (auto* label = findLabel(normal)) {
                                std::string s = label->getString();
                                bool hasSave = s.find("Save") != std::string::npos;
                                bool hasPlay = s.find("Play") != std::string::npos;
                                bool hasExit = s.find("Exit") != std::string::npos;
                                
                                if (isSavePlay && hasSave && hasPlay) return item;
                                if (isSaveExit && hasSave && hasExit) return item;
                                if (!isSavePlay && !isSaveExit && hasSave && !hasPlay && !hasExit) return item;
                            }
                        }
                    }
                    if (node->getChildren()) {
                        for (auto* c : CCArrayExt<CCNode*>(node->getChildren())) {
                            if (auto* b = findBtn(c)) return b;
                        }
                    }
                    return nullptr;
                };

                if (auto* btn = findBtn(this)) {
                    btn->setEnabled(false);
                    std::function<void(CCNode*)> grayOut = [&](CCNode* n) {
                        if (auto* rgba = typeinfo_cast<cocos2d::CCNodeRGBA*>(n)) {
                            rgba->setColor({100, 100, 100});
                        }
                        if (n->getChildren()) {
                            for (auto* c : CCArrayExt<CCNode*>(n->getChildren())) {
                                grayOut(c);
                            }
                        }
                    };
                    grayOut(btn->getNormalImage());
                }
            };

            if (session.getRole() == SessionManager::Role::Host) {
                disableBtn("save-and-play-button");
                disableBtnByText(true, false);
            } else if (session.getRole() == SessionManager::Role::Client) {
                disableBtn("save-button");
                disableBtn("save-and-play-button");
                disableBtn("save-and-exit-button");
                
                disableBtnByText(false, false);
                disableBtnByText(true, false);
                disableBtnByText(false, true);
            }
        }

        return true;
    }

    void onMultiplayer(CCObject*) {
        MultiplayerPopup::create()->show();
    }

    void onSave(CCObject* sender) {
        if (SessionManager::get().isInSession() && SessionManager::get().getRole() == SessionManager::Role::Client) {
            Notification::create("Guests cannot save levels", NotificationIcon::Warning)->show();
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
                Notification::create("Guests cannot save levels", NotificationIcon::Warning)->show();
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

// ============================================================
// LevelBrowserLayer — Add "Multiplayer" button to My Levels page
// ============================================================

class $modify(MPLevelBrowserLayer, LevelBrowserLayer) {
    bool init(GJSearchObject* object) {
        if (!LevelBrowserLayer::init(object)) return false;

        if (object->m_searchType != SearchType::MyLevels) return true;

        auto* btnSprite = ButtonSprite::create(
            "Multiplayer Edit", 90, true, "bigFont.fnt", "GJ_button_01.png", 30.f, 0.45f
        );
        auto* btn = CCMenuItemSpriteExtra::create(
            btnSprite,
            this,
            menu_selector(MPLevelBrowserLayer::onMultiplayer)
        );
        btn->setID("multiplayer-button"_spr);

        // Create a menu at the bottom center, underneath the level list
        auto* centerMenu = CCMenu::create();
        centerMenu->setID("multiplayer-menu"_spr);
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        // Place it horizontally centered and near the bottom edge
        centerMenu->setPosition({winSize.width / 2.f, 35.f});
        
        btn->setPosition({0, 0});
        centerMenu->addChild(btn);
        
        this->addChild(centerMenu, 10);

        return true;
    }

    void onMultiplayer(CCObject*) {
        MultiplayerPopup::create()->show();
    }
};

// ============================================================
// LevelEditorLayer — Hook editor lifecycle for session management
// ============================================================

class $modify(MPLevelEditorLayer, LevelEditorLayer) {
    struct Fields {
        float m_cursorSendTimer = 0.f;
        bool m_sessionActive = false;
        bool m_inUndoRedo = false;
        cocos2d::CCPoint m_lastSentLevelPos = {0.f, 0.f};

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
            auto msg = ActionSerializer::serializeUpdateSettings(settings);
            NetworkManager::get().send(msg);
            log::info("EditorHooks: Broadcasted update_settings");
        }
    }

    bool init(GJGameLevel* level, bool unk) {
        if (!LevelEditorLayer::init(level, unk)) return false;

        // Force construction of Fields immediately so its destructor runs reliably
        m_fields->m_sessionActive = SessionManager::get().isInSession();

        // Set up the remote action handler for this editor session
        auto& handler = RemoteActionHandler::get();
        handler.clearMappings();

        auto& session = SessionManager::get();
        if (session.isInSession()) {
            auto const& expected = handler.getExpectedUuids();
            if (!expected.empty() && this->m_objects) {
                int index = 0;
                for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                    if (index < expected.size()) {
                        handler.registerObject(expected[index], obj);
                        index++;
                    } else {
                        auto uuid = RemoteActionHandler::generateUUID();
                        handler.registerObject(uuid, obj);
                    }
                }
                handler.clearExpectedUuids();
                handler.setInitialSyncCompleted(true);
            } else {
                if (this->m_objects) {
                    for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                        if (handler.getUUIDForObject(obj).empty()) {
                            auto uuid = RemoteActionHandler::generateUUID();
                            handler.registerObject(uuid, obj);
                        }
                    }
                }
            }

            // Immediately broadcast level sync to already connected players if we are the host
            if (session.getRole() == SessionManager::Role::Host) {
                std::string objectsString;
                std::vector<std::string> uuids;
                if (this->m_objects) {
                    bool first = true;
                    for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                        auto uuid = handler.getUUIDForObject(obj);
                        if (uuid.empty()) {
                            uuid = RemoteActionHandler::generateUUID();
                            handler.registerObject(uuid, obj);
                        }
                        auto saveStr = obj->getSaveString(this);
                        if (!saveStr.empty()) {
                            if (!first) {
                                objectsString += ";";
                            }
                            objectsString += saveStr;
                            uuids.push_back(uuid);
                            first = false;
                        }
                    }
                }
                ActionSerializer::LevelSettingsData settings;
                if (this->m_levelSettings) {
                    settings.saveString = this->m_levelSettings->getSaveString();
                }
                if (this->m_level) {
                    settings.audioTrack = this->m_level->m_audioTrack;
                    settings.songID = this->m_level->m_songID;
                    settings.levelLength = this->m_level->m_levelLength;
                }
                std::vector<ActionSerializer::LockData> locks;
                for (auto const& [uuid, lockInfo] : RemoteActionHandler::get().getObjectLocks()) {
                    locks.push_back({uuid, lockInfo.playerId, lockInfo.timeLeft});
                }
                for (auto const& player : session.getPlayers()) {
                    if (player.id != session.getLocalPlayerId()) {
                        auto msg = ActionSerializer::serializeSyncLevel(player.id, objectsString, uuids, settings, locks);
                        NetworkManager::get().send(msg);
                        log::info("EditorHooks: Sent sync_level to existing player {}", player.id);
                    }
                }
            }
        }

        // Broadcast level sync to new players if we are the host
        SessionManager::get().onPlayerJoined([this](PlayerInfo const& info) {
            auto& session = SessionManager::get();
            if (session.getRole() == SessionManager::Role::Host) {
                std::string objectsString;
                std::vector<std::string> uuids;
                if (this->m_objects) {
                    auto& h = RemoteActionHandler::get();
                    bool first = true;
                    for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                        auto uuid = h.getUUIDForObject(obj);
                        if (uuid.empty()) {
                            uuid = RemoteActionHandler::generateUUID();
                            h.registerObject(uuid, obj);
                        }
                        auto saveStr = obj->getSaveString(this);
                        if (!saveStr.empty()) {
                            if (!first) {
                                objectsString += ";";
                            }
                            objectsString += saveStr;
                            uuids.push_back(uuid);
                            first = false;
                        }
                    }
                }
                ActionSerializer::LevelSettingsData settings;
                if (this->m_levelSettings) {
                    settings.saveString = this->m_levelSettings->getSaveString();
                }
                if (this->m_level) {
                    settings.audioTrack = this->m_level->m_audioTrack;
                    settings.songID = this->m_level->m_songID;
                    settings.levelLength = this->m_level->m_levelLength;
                }
                std::vector<ActionSerializer::LockData> locks;
                for (auto const& [uuid, lockInfo] : RemoteActionHandler::get().getObjectLocks()) {
                    locks.push_back({uuid, lockInfo.playerId, lockInfo.timeLeft});
                }
                auto msg = ActionSerializer::serializeSyncLevel(info.id, objectsString, uuids, settings, locks);
                NetworkManager::get().send(msg);
                log::info("EditorHooks: Sent sync_level to new player {}", info.id);
            }
        });

        // Apply any pending sync_level packet that arrived early
        if (handler.hasPendingSync()) {
            handler.applyPendingSync();
        }

        // Add a helper node to handle network updates safely without member function pointer layout mismatch
        auto* helper = UpdateHelperNode::create([this](float dt) {
            this->networkUpdate(dt);
        }, 0.05f);
        if (helper) {
            helper->setID("network-update-helper"_spr);
            this->addChild(helper);
        }

        // Add session status indicator
        auto* status = SessionStatusNode::create();
        status->setID("session-status"_spr);
        this->addChild(status, 1000);

        // Add cursor node to the object layer so it scales/pans correctly
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
        session.clearCallbacks();
    }


    // Intercept object creation to assign UUIDs and sync
    GameObject* createObject(int objectID, cocos2d::CCPoint position, bool noUndo) {
        auto* obj = LevelEditorLayer::createObject(objectID, position, noUndo);
        
        if (!obj) return obj;

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        // If we're processing a remote action or it's a noUndo creation, we do not sync it
        if (handler.isProcessingRemote() || noUndo) return obj;

        // If we're in a session, assign UUID and sync deferred
        if (session.isInSession()) {
            auto uuid = RemoteActionHandler::generateUUID();
            handler.registerObject(uuid, obj);

            // Capture as a Ref to automatically manage retaining and releasing next frame
            geode::queueInMainThread([this, obj = geode::Ref<GameObject>(obj), uuid]() {
                if (LevelEditorLayer::get() != this) return;
                auto& handler = RemoteActionHandler::get();
                auto& session = SessionManager::get();
                if (session.isInSession() && !handler.isProcessingRemote()) {
                    if (this->m_objects && this->m_objects->containsObject(obj)) {
                        auto objData = ActionSerializer::extractObjectData(obj, uuid);
                        auto msg = ActionSerializer::serializePlaceObjects({objData});
                        NetworkManager::get().send(msg);
                        
                        log::debug("EditorHooks: Deferred placement sync complete for uuid={}", uuid);
                    }
                }
            });

            log::debug("EditorHooks: Scheduled deferred placement for object {} (uuid={})", objectID, uuid);
        }

        return obj;
    }

    // Intercept object removal to sync deletion
    void removeObject(GameObject* obj, bool undo) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    // Locked by another player! Do not delete.
                    log::info("EditorHooks: Blocked removal of locked object (uuid={})", uuid);
                    return;
                }
            }
        }

        // If we're in a session and this isn't a remote action
        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto msg = ActionSerializer::serializeDeleteObjects({uuid});
                NetworkManager::get().send(msg);
                handler.unregisterObject(uuid);
                
                log::debug("EditorHooks: Deleted object (uuid={})", uuid);
            }
        }

        LevelEditorLayer::removeObject(obj, undo);
    }

    // Hook handleAction to block locked undo/redo actions and synchronize local history updates
    void handleAction(bool undo, cocos2d::CCArray* undoObjects) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (!session.isInSession() || handler.isProcessingRemote() || !undoObjects) {
            m_fields->m_inUndoRedo = true;
            LevelEditorLayer::handleAction(undo, undoObjects);
            m_fields->m_inUndoRedo = false;
            return;
        }

        // 1. Verify that no objects in the undoObjects are locked by other players
        for (auto* itemObj : CCArrayExt<cocos2d::CCObject*>(undoObjects)) {
            auto* item = typeinfo_cast<UndoObject*>(itemObj);
            if (!item) continue;
            
            auto checkLocked = [&](GameObject* gObj) -> bool {
                if (!gObj) return false;
                auto uuid = handler.getUUIDForObject(gObj);
                if (!uuid.empty()) {
                    auto const& locks = handler.getObjectLocks();
                    auto it = locks.find(uuid);
                    if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                        return true; // Locked by someone else!
                    }
                }
                return false;
            };
            
            if (item->m_objects) {
                for (auto* gObj : CCArrayExt<GameObject*>(item->m_objects)) {
                    if (checkLocked(gObj)) {
                        log::info("EditorHooks: Blocked undo/redo of locked object");
                        return;
                    }
                }
            }
            if (item->m_objectCopy) {
                auto* copy = typeinfo_cast<GameObjectCopy*>(item->m_objectCopy);
                if (copy && copy->m_object) {
                    if (checkLocked(copy->m_object)) {
                        log::info("EditorHooks: Blocked undo/redo of locked object");
                        return;
                    }
                }
            }
        }

        // 2. Gather affected object states before running handleAction
        struct ObjectState {
            GameObject* obj;
            std::string uuid;
            bool existedBefore;
            cocos2d::CCPoint pos;
            float rot;
            float scaleX;
            float scaleY;
            bool flipX;
            bool flipY;
            std::string saveString;
        };
        
        std::vector<ObjectState> affectedStates;
        
        auto recordObjectState = [&](GameObject* obj) {
            if (!obj) return;
            for (auto const& state : affectedStates) {
                if (state.obj == obj) return;
            }
            
            ObjectState state;
            state.obj = obj;
            state.uuid = handler.getUUIDForObject(obj);
            state.existedBefore = (this->m_objects->containsObject(obj));
            state.pos = obj->getPosition();
            state.rot = obj->getRotation();
            state.scaleX = obj->getScaleX();
            state.scaleY = obj->getScaleY();
            state.flipX = obj->isFlipX();
            state.flipY = obj->isFlipY();
            state.saveString = obj->getSaveString(this);
            
            affectedStates.push_back(state);
        };

        for (auto* itemObj : CCArrayExt<cocos2d::CCObject*>(undoObjects)) {
            auto* item = typeinfo_cast<UndoObject*>(itemObj);
            if (!item) continue;
            if (item->m_objects) {
                for (auto* gObj : CCArrayExt<GameObject*>(item->m_objects)) {
                    recordObjectState(gObj);
                }
            }
            if (item->m_objectCopy) {
                auto* copy = typeinfo_cast<GameObjectCopy*>(item->m_objectCopy);
                if (copy && copy->m_object) {
                    recordObjectState(copy->m_object);
                }
            }
        }

        // 3. Execute base handleAction
        m_fields->m_inUndoRedo = true;
        LevelEditorLayer::handleAction(undo, undoObjects);
        m_fields->m_inUndoRedo = false;

        // 4. Compare states and send sync messages
        std::vector<ActionSerializer::ObjectData> placedObjects;
        std::vector<std::string> deletedUuids;
        std::vector<ActionSerializer::MoveData> movedObjects;
        std::vector<ActionSerializer::ObjectData> updatedObjects;

        for (auto& state : affectedStates) {
            GameObject* obj = state.obj;
            bool existedAfter = (this->m_objects->containsObject(obj));

            if (state.existedBefore && !existedAfter) {
                if (!state.uuid.empty()) {
                    deletedUuids.push_back(state.uuid);
                    handler.unregisterObject(state.uuid);
                }
            } else if (!state.existedBefore && existedAfter) {
                std::string uuid = state.uuid;
                if (uuid.empty()) {
                    uuid = RemoteActionHandler::generateUUID();
                    handler.registerObject(uuid, obj);
                }
                placedObjects.push_back(ActionSerializer::extractObjectData(obj, uuid));
            } else if (state.existedBefore && existedAfter) {
                std::string uuid = state.uuid;
                if (uuid.empty()) {
                    uuid = RemoteActionHandler::generateUUID();
                    handler.registerObject(uuid, obj);
                }

                std::string newSave = obj->getSaveString(this);
                if (state.saveString != newSave) {
                    if (!typeinfo_cast<StartPosObject*>(obj)) {
                        updatedObjects.push_back(ActionSerializer::extractObjectData(obj, uuid));
                    }
                } else if (state.pos.x != obj->getPositionX() || state.pos.y != obj->getPositionY()) {
                    ActionSerializer::MoveData md;
                    md.uuid = uuid;
                    md.dx = obj->getPositionX() - state.pos.x;
                    md.dy = obj->getPositionY() - state.pos.y;
                    movedObjects.push_back(md);
                }
            }
        }

        if (!placedObjects.empty()) {
            auto msg = ActionSerializer::serializePlaceObjects(placedObjects);
            NetworkManager::get().send(msg);
        }
        if (!deletedUuids.empty()) {
            auto msg = ActionSerializer::serializeDeleteObjects(deletedUuids);
            NetworkManager::get().send(msg);
        }
        if (!movedObjects.empty()) {
            auto msg = ActionSerializer::serializeMoveObjects(movedObjects);
            NetworkManager::get().send(msg);
        }
        if (!updatedObjects.empty()) {
            auto msg = ActionSerializer::serializeUpdateObjects(updatedObjects);
            NetworkManager::get().send(msg);
        }
    }

    void networkUpdate(float dt) {
        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        // Dispatch queued network messages
        NetworkManager::get().dispatchMessages();
        
        RemoteActionHandler::get().updateLocks(dt);

        // Send cursor position periodically
        m_fields->m_cursorSendTimer += dt;
        if (m_fields->m_cursorSendTimer >= 0.1f) {  // 10 Hz cursor updates
            m_fields->m_cursorSendTimer = 0.f;
            
            if (this->m_objectLayer) {
                cocos2d::CCPoint levelPos;
                std::string statusStr = "";

                if (this->m_playbackMode != PlaybackMode::Not && this->m_player1) {
                    levelPos = this->m_player1->getPosition();
                    
                    auto* gm = GameManager::get();
                    int iconType = 0; // Cube
                    if (this->m_player1->m_isShip) {
                        iconType = this->m_player1->m_isPlatformer ? 8 : 1; // 8 = Jetpack, 1 = Ship
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
                       << static_cast<int>(colGlow.r) << ":" << static_cast<int>(colGlow.g) << ":" << static_cast<int>(colGlow.b);
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
                        if (mode == 2) { // Build mode
                            objectId = s_selectedObjectID;
                        } else if (mode == 3) { // Edit mode
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
                
                auto msg = ActionSerializer::serializeCursorUpdate(levelPos.x, levelPos.y, statusStr);
                NetworkManager::get().send(msg);
            }
        }
    }
};

// ============================================================
// EditorUI — Hook object movement/transform to sync
// ============================================================

class $modify(MPEditorUI, EditorUI) {
    struct Fields {
        float m_lockRefreshTimer = 0.f;
    };

    void onCreateObject(int id) {
        EditorUI::onCreateObject(id);
        s_selectedObjectID = id;
    }

    bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
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

    void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        EditorUI::ccTouchEnded(touch, event);
        s_isTouching = false;
    }

    void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        EditorUI::ccTouchCancelled(touch, event);
        s_isTouching = false;
    }

    void selectObject(GameObject* obj, bool filter) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    // Locked by another player! Do not select.
                    return;
                }
            }
        }

        EditorUI::selectObject(obj, filter);

        if (session.isInSession() && obj) {
            auto uuid = handler.getOrCreateUUID(obj);
            auto& tracked = handler.getTrackedSelections();
            if (tracked.find(obj) == tracked.end()) {
                tracked[obj] = obj->getSaveString(LevelEditorLayer::get());
                if (!handler.isProcessingRemote()) {
                    auto msg = ActionSerializer::serializeLockObjects({uuid}, true);
                    NetworkManager::get().send(msg);
                }
            }
        }
    }

    void deselectObject(GameObject* obj) {
        EditorUI::deselectObject(obj);
        
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (session.isInSession() && obj) {
            handler.getTrackedSelections().erase(obj);
            if (!handler.isProcessingRemote()) {
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    auto msg = ActionSerializer::serializeLockObjects({uuid}, false);
                    NetworkManager::get().send(msg);
                }
            }
        }
    }

    void deselectAll() {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (session.isInSession()) {
            if (!handler.isProcessingRemote()) {
                auto* editor = LevelEditorLayer::get();
                std::vector<std::string> uuids;
                auto& tracked = handler.getTrackedSelections();
                for (auto const& [obj, _] : tracked) {
                    if (editor && editor->m_objects && editor->m_objects->containsObject(obj)) {
                        auto uuid = handler.getUUIDForObject(obj);
                        if (!uuid.empty()) {
                            uuids.push_back(uuid);
                        }
                    }
                }
                if (!uuids.empty()) {
                    auto msg = ActionSerializer::serializeLockObjects(uuids, false);
                    NetworkManager::get().send(msg);
                }
            }
            handler.getTrackedSelections().clear();
        }
        EditorUI::deselectAll();
    }

    void onDeleteSelected(cocos2d::CCObject* sender) {
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
                auto msg = ActionSerializer::serializeDeleteObjects(uuids);
                NetworkManager::get().send(msg);
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
                    // Locked by another player! Do not delete.
                    return false;
                }
            }
        }
        return EditorUI::shouldDeleteObject(obj);
    }

    void selectObjects(cocos2d::CCArray* objects, bool filter) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        cocos2d::CCArray* filteredObjects = objects;
        if (session.isInSession() && !handler.isProcessingRemote() && objects) {
            filteredObjects = cocos2d::CCArray::create();
            auto const& locks = handler.getObjectLocks();
            int localId = session.getLocalPlayerId();
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

        EditorUI::selectObjects(filteredObjects, filter);

        if (session.isInSession() && filteredObjects) {
            std::vector<std::string> uuids;
            auto& tracked = handler.getTrackedSelections();
            for (auto* obj : CCArrayExt<GameObject*>(filteredObjects)) {
                auto uuid = handler.getOrCreateUUID(obj);
                if (tracked.find(obj) == tracked.end()) {
                    tracked[obj] = obj->getSaveString(LevelEditorLayer::get());
                    uuids.push_back(uuid);
                }
            }
            if (!uuids.empty() && !handler.isProcessingRemote()) {
                auto msg = ActionSerializer::serializeLockObjects(uuids, true);
                NetworkManager::get().send(msg);
            }
        }
    }

    bool init(LevelEditorLayer* editorLayer) {
        if (!EditorUI::init(editorLayer)) return false;

        // Add a helper node to handle syncDeselections updates safely without member function pointer layout mismatch
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
        if (!editor || !editor->m_objects) return;

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (!session.isInSession() || handler.isProcessingRemote()) return;

        // selection lock refresh timer
        m_fields->m_lockRefreshTimer += dt;
        auto& tracked = handler.getTrackedSelections();
        if (m_fields->m_lockRefreshTimer >= 1.0f) {
            m_fields->m_lockRefreshTimer = 0.f;
            std::vector<std::string> selectedUuids;
            for (auto const& [obj, _] : tracked) {
                if (editor->m_objects->containsObject(obj)) {
                    auto uuid = handler.getUUIDForObject(obj);
                    if (!uuid.empty()) {
                        selectedUuids.push_back(uuid);
                    }
                }
            }
            if (!selectedUuids.empty()) {
                auto msg = ActionSerializer::serializeLockObjects(selectedUuids, true);
                NetworkManager::get().send(msg);
            }
        }

        std::vector<std::string> unlockUuids;
        std::vector<ActionSerializer::ObjectData> updates;

        for (auto it = tracked.begin(); it != tracked.end(); ) {
            GameObject* obj = it->first;
            
            // Check if object still exists in the editor to avoid dangling pointers
            if (!editor->m_objects->containsObject(obj)) {
                it = tracked.erase(it);
                continue;
            }
            
            // Check if object is still selected
            bool isSelected = false;
            if (m_selectedObjects && m_selectedObjects->containsObject(obj)) isSelected = true;
            if (m_selectedObject == obj) isSelected = true;

            auto uuid = handler.getUUIDForObject(obj);
            if (uuid.empty()) {
                it = tracked.erase(it);
                continue;
            }

            std::string oldSave = it->second;
            std::string newSave = obj->getSaveString(editor);

            // If it changed, queue an update and reset the baseline
            if (oldSave != newSave) {
                // Ignore property updates for start positions so each user controls them independently
                if (!typeinfo_cast<StartPosObject*>(obj)) {
                    updates.push_back(ActionSerializer::extractObjectData(obj, uuid));
                }
                it->second = newSave; // Update the baseline string
            }

            if (!isSelected) {
                unlockUuids.push_back(uuid);
                it = tracked.erase(it);
            } else {
                ++it;
            }
        }

        if (!updates.empty()) {
            auto msg = ActionSerializer::serializeUpdateObjects(updates);
            NetworkManager::get().send(msg);
        }
        if (!unlockUuids.empty()) {
            auto msg = ActionSerializer::serializeLockObjects(unlockUuids, false);
            NetworkManager::get().send(msg);
        }
    }

    // Hook moveObject to detect object movement by the user
    void moveObject(GameObject* obj, CCPoint position) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                auto const& locks = handler.getObjectLocks();
                auto it = locks.find(uuid);
                if (it != locks.end() && it->second.playerId != session.getLocalPlayerId()) {
                    // Locked by another player! Do not move.
                    return;
                }
            }
        }

        CCPoint oldPos = obj->getPosition();

        EditorUI::moveObject(obj, position);

        if (session.isInSession() && !handler.isProcessingRemote()) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                CCPoint newPos = obj->getPosition();
                ActionSerializer::MoveData move;
                move.uuid = uuid;
                move.dx = newPos.x - oldPos.x;
                move.dy = newPos.y - oldPos.y;

                if (move.dx != 0.f || move.dy != 0.f) {
                    auto msg = ActionSerializer::serializeMoveObjects({move});
                    NetworkManager::get().send(msg);
                }
            }
        }
    }

    void transformObjectCall(EditCommand command) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        struct ObjState {
            std::string uuid;
            GameObject* obj;
            cocos2d::CCPoint oldPos;
        };
        std::vector<ObjState> selected;

        if (session.isInSession() && !handler.isProcessingRemote() && m_selectedObjects) {
            for (auto* obj : CCArrayExt<GameObject*>(m_selectedObjects)) {
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    selected.push_back({uuid, obj, obj->getPosition()});
                }
            }
        }

        EditorUI::transformObjectCall(command);

        if (!selected.empty()) {
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
            
            auto msg = ActionSerializer::serializeTransformObjects(transforms);
            NetworkManager::get().send(msg);
            
            if (!moves.empty()) {
                auto moveMsg = ActionSerializer::serializeMoveObjects(moves);
                NetworkManager::get().send(moveMsg);
            }
        }
    }

    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint pivotPoint) {
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
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    selected.push_back({uuid, obj, obj->getPosition()});
                }
            }
        }

        EditorUI::rotateObjects(objects, rotation, pivotPoint);

        if (!selected.empty()) {
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
            
            auto msg = ActionSerializer::serializeTransformObjects(transforms);
            NetworkManager::get().send(msg);
            
            if (!moves.empty()) {
                auto moveMsg = ActionSerializer::serializeMoveObjects(moves);
                NetworkManager::get().send(moveMsg);
            }
        }
    }

    void scaleObjects(cocos2d::CCArray* objects, float scaleX, float scaleY, cocos2d::CCPoint pivotPoint, ObjectScaleType type, bool lockMove) {
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
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    selected.push_back({uuid, obj, obj->getPosition()});
                }
            }
        }

        EditorUI::scaleObjects(objects, scaleX, scaleY, pivotPoint, type, lockMove);

        if (!selected.empty()) {
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
            
            auto msg = ActionSerializer::serializeTransformObjects(transforms);
            NetworkManager::get().send(msg);
            
            if (!moves.empty()) {
                auto moveMsg = ActionSerializer::serializeMoveObjects(moves);
                NetworkManager::get().send(moveMsg);
            }
        }
    }
};

class $modify(MPBaseGameLayer, GJBaseGameLayer) {
    void addToSection(GameObject* obj) {
        GJBaseGameLayer::addToSection(obj);

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (!session.isInSession() || handler.isProcessingRemote() || !obj) {
            return;
        }

        auto* editor = LevelEditorLayer::get();
        if (!editor || static_cast<GJBaseGameLayer*>(editor) != this) {
            return;
        }

        auto* mpEditor = modify_cast<MPLevelEditorLayer*>(editor);
        if (!mpEditor || !mpEditor->m_fields->m_sessionActive || mpEditor->m_fields->m_inUndoRedo) {
            return;
        }

        // If the object already has a UUID, it's already registered (e.g., via createObject)
        if (!handler.getUUIDForObject(obj).empty()) {
            return;
        }

        // Assign a new UUID and sync it (duplicates, copy-paste)
        auto uuid = RemoteActionHandler::generateUUID();
        handler.registerObject(uuid, obj);

        geode::queueInMainThread([editor, obj = geode::Ref<GameObject>(obj), uuid]() {
            if (LevelEditorLayer::get() != editor) return;
            auto& handler = RemoteActionHandler::get();
            auto& session = SessionManager::get();
            if (session.isInSession() && !handler.isProcessingRemote()) {
                if (editor->m_objects && editor->m_objects->containsObject(obj)) {
                    auto objData = ActionSerializer::extractObjectData(obj, uuid);
                    auto msg = ActionSerializer::serializePlaceObjects({objData});
                    NetworkManager::get().send(msg);

                    log::debug("EditorHooks: Sync pasted/duplicated object uuid={}", uuid);
                }
            }
        });
    }
};
