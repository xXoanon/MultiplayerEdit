#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>

#include "SessionManager.hpp"
#include "NetworkManager.hpp"
#include "ActionSerializer.hpp"
#include "RemoteActionHandler.hpp"
#include "ui/MultiplayerPopup.hpp"
#include "ui/SessionStatusNode.hpp"

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
            "Multiplayer", 120, true, "bigFont.fnt", "GJ_button_01.png", 30.f, 0.6f
        );
        auto* btn = CCMenuItemSpriteExtra::create(
            btnSprite,
            this,
            menu_selector(MPEditorPauseLayer::onMultiplayer)
        );
        btn->setID("multiplayer-button"_spr);

        // Find the actions menu and add our button
        if (auto* menu = this->getChildByID("actions-menu")) {
            menu->addChild(btn);
            menu->updateLayout();
        } else {
            // Fallback: create our own menu
            auto* fallbackMenu = CCMenu::create();
            fallbackMenu->setID("multiplayer-menu"_spr);
            fallbackMenu->setPosition({0, 0});
            
            auto winSize = CCDirector::sharedDirector()->getWinSize();
            btn->setPosition({winSize.width - 80.f, winSize.height - 40.f});
            fallbackMenu->addChild(btn);
            this->addChild(fallbackMenu, 10);
        }

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

    bool init(GJGameLevel* level, bool unk) {
        if (!LevelEditorLayer::init(level, unk)) return false;

        // Set up the remote action handler for this editor session
        auto& handler = RemoteActionHandler::get();
        handler.clearMappings();
        handler.setupHandlers();

        // Schedule update for network message dispatch and cursor updates
        this->schedule(schedule_selector(MPLevelEditorLayer::networkUpdate), 0.05f);

        // Add session status indicator
        auto* status = SessionStatusNode::create();
        status->setID("session-status"_spr);
        this->addChild(status, 1000);

        return true;
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

        // Send cursor position periodically
        m_fields->m_cursorSendTimer += dt;
        if (m_fields->m_cursorSendTimer >= 0.1f) {  // 10 Hz cursor updates
            m_fields->m_cursorSendTimer = 0.f;
            
            // Get current cursor position from EditorUI
            if (auto* editorUI = this->m_editorUI) {
                // Use the editor's camera position as cursor approximation
                auto pos = editorUI->getPosition();
                auto msg = ActionSerializer::serializeCursorUpdate(pos.x, pos.y);
                NetworkManager::get().send(msg);
            }
        }
    }
};

// ============================================================
// EditorUI — Hook object movement/transform to sync
// ============================================================

class $modify(MPEditorUI, EditorUI) {
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
};
