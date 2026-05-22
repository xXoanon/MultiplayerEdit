#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>
#include <Geode/modify/LevelBrowserLayer.hpp>

#include "SessionManager.hpp"
#include "NetworkManager.hpp"
#include "ActionSerializer.hpp"
#include "RemoteActionHandler.hpp"
#include "ui/MultiplayerPopup.hpp"
#include "ui/SessionStatusNode.hpp"
#include "ui/CursorNode.hpp"

using namespace geode::prelude;
using namespace mpedit;

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
                std::vector<ActionSerializer::ObjectData> objects;
                if (this->m_objects) {
                    for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                        auto uuid = handler.getUUIDForObject(obj);
                        if (!uuid.empty()) {
                            objects.push_back(ActionSerializer::extractObjectData(obj, uuid));
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
                for (auto const& player : session.getPlayers()) {
                    if (player.id != session.getLocalPlayerId()) {
                        auto msg = ActionSerializer::serializeSyncLevel(player.id, objects, settings);
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
                std::vector<ActionSerializer::ObjectData> objects;
                if (this->m_objects) {
                    auto& h = RemoteActionHandler::get();
                    for (auto* obj : CCArrayExt<GameObject*>(this->m_objects)) {
                        auto uuid = h.getUUIDForObject(obj);
                        if (uuid.empty()) {
                            uuid = RemoteActionHandler::generateUUID();
                            h.registerObject(uuid, obj);
                        }
                        objects.push_back(ActionSerializer::extractObjectData(obj, uuid));
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
                auto msg = ActionSerializer::serializeSyncLevel(info.id, objects, settings);
                NetworkManager::get().send(msg);
                log::info("EditorHooks: Sent sync_level to new player {}", info.id);
            }
        });

        // Apply any pending sync_level packet that arrived early
        if (handler.hasPendingSync()) {
            handler.applyPendingSync();
        }

        // Schedule update for network message dispatch and cursor updates
        this->schedule(schedule_selector(MPLevelEditorLayer::networkUpdate), 0.05f);

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
    }

    ~MPLevelEditorLayer() {
        auto& session = SessionManager::get();
        if (session.isInSession()) {
            session.leaveSession();
            log::info("EditorHooks: Left session automatically on editor destructor");
        }
    }

    // Intercept object creation to assign UUIDs and sync
    GameObject* createObject(int objectID, cocos2d::CCPoint position, bool undo) {
        auto* obj = LevelEditorLayer::createObject(objectID, position, undo);
        
        if (!obj) return obj;

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        // If we're processing a remote action, the UUID is already assigned
        if (handler.isProcessingRemote()) return obj;

        // If we're in a session, assign UUID and send to server
        if (session.isInSession()) {
            auto uuid = RemoteActionHandler::generateUUID();
            handler.registerObject(uuid, obj);

            // Send placement to server
            auto objData = ActionSerializer::extractObjectData(obj, uuid);
            auto msg = ActionSerializer::serializePlaceObjects({objData});
            NetworkManager::get().send(msg);

            log::debug("EditorHooks: Placed object {} (uuid={})", objectID, uuid);
        }

        return obj;
    }

    // Intercept object removal to sync deletion
    void removeObject(GameObject* obj, bool undo) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        // If we're in a session and this isn't a remote action
        if (session.isInSession() && !handler.isProcessingRemote()) {
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
            
            // Get current cursor position from EditorUI
            if (this->m_objectLayer) {
                auto mousePos = geode::cocos::getMousePos();
                auto levelPos = this->m_objectLayer->convertToNodeSpace(mousePos);
                auto msg = ActionSerializer::serializeCursorUpdate(levelPos.x, levelPos.y, "");
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
        std::unordered_map<GameObject*, std::string> m_preSelectSaveStrings;
    };

    void selectObject(GameObject* obj, bool filter) {
        EditorUI::selectObject(obj, filter);

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getOrCreateUUID(obj);
            if (m_fields->m_preSelectSaveStrings.find(obj) == m_fields->m_preSelectSaveStrings.end()) {
                m_fields->m_preSelectSaveStrings[obj] = obj->getSaveString(nullptr);
                auto msg = ActionSerializer::serializeLockObjects({uuid}, true);
                NetworkManager::get().send(msg);
            }
        }
    }

    void deselectObject(GameObject* obj) {
        EditorUI::deselectObject(obj);
        
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (session.isInSession() && !handler.isProcessingRemote() && obj) {
            auto uuid = handler.getUUIDForObject(obj);
            if (!uuid.empty()) {
                m_fields->m_preSelectSaveStrings.erase(obj);
                auto msg = ActionSerializer::serializeLockObjects({uuid}, false);
                NetworkManager::get().send(msg);
            }
        }
    }

    void deselectAll() {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (session.isInSession() && !handler.isProcessingRemote()) {
            std::vector<std::string> uuids;
            for (auto const& [obj, _] : m_fields->m_preSelectSaveStrings) {
                auto uuid = handler.getUUIDForObject(obj);
                if (!uuid.empty()) {
                    uuids.push_back(uuid);
                }
            }
            m_fields->m_preSelectSaveStrings.clear();
            if (!uuids.empty()) {
                auto msg = ActionSerializer::serializeLockObjects(uuids, false);
                NetworkManager::get().send(msg);
            }
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

    void selectObjects(cocos2d::CCArray* objects, bool filter) {
        EditorUI::selectObjects(objects, filter);

        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();

        if (session.isInSession() && !handler.isProcessingRemote() && objects) {
            std::vector<std::string> uuids;
            for (auto* obj : CCArrayExt<GameObject*>(objects)) {
                auto uuid = handler.getOrCreateUUID(obj);
                if (m_fields->m_preSelectSaveStrings.find(obj) == m_fields->m_preSelectSaveStrings.end()) {
                    m_fields->m_preSelectSaveStrings[obj] = obj->getSaveString(nullptr);
                    uuids.push_back(uuid);
                }
            }
            if (!uuids.empty()) {
                auto msg = ActionSerializer::serializeLockObjects(uuids, true);
                NetworkManager::get().send(msg);
            }
        }
    }

    bool init(LevelEditorLayer* editorLayer) {
        if (!EditorUI::init(editorLayer)) return false;

        this->schedule(schedule_selector(MPEditorUI::syncDeselections), 0.1f);
        return true;
    }

    void syncDeselections(float) {
        auto& handler = RemoteActionHandler::get();
        auto& session = SessionManager::get();
        if (!session.isInSession() || handler.isProcessingRemote()) return;

        std::vector<std::string> unlockUuids;
        std::vector<ActionSerializer::ObjectData> updates;

        for (auto it = m_fields->m_preSelectSaveStrings.begin(); it != m_fields->m_preSelectSaveStrings.end(); ) {
            GameObject* obj = it->first;
            
            // Check if object is still selected
            bool isSelected = false;
            if (m_selectedObjects && m_selectedObjects->containsObject(obj)) isSelected = true;
            if (m_selectedObject == obj) isSelected = true;

            auto uuid = handler.getUUIDForObject(obj);
            if (uuid.empty()) {
                it = m_fields->m_preSelectSaveStrings.erase(it);
                continue;
            }

            std::string oldSave = it->second;
            std::string newSave = obj->getSaveString(nullptr);

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
                it = m_fields->m_preSelectSaveStrings.erase(it);
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
