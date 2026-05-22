#include "MultiplayerPopup.hpp"
#include "../SessionManager.hpp"
#include "../NetworkManager.hpp"
#include <Geode/Geode.hpp>
#include <Geode/ui/Notification.hpp>

using namespace geode::prelude;

namespace mpedit {

    MultiplayerPopup* MultiplayerPopup::create() {
        auto* ret = new MultiplayerPopup();
        if (ret->init(340.f, 260.f) && ret->setup()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    MultiplayerPopup::~MultiplayerPopup() {
        this->unschedule(schedule_selector(MultiplayerPopup::pollNetwork));
        SessionManager::get().clearCallbacks();
        if (s_instance == this) s_instance = nullptr;
    }

    bool MultiplayerPopup::setup() {
        s_instance = this;
        this->setTitle("Multiplayer Edit", "goldFont.fnt", 0.8f, 20.f);

        m_contentNode = cocos2d::CCNode::create();
        m_mainLayer->addChild(m_contentNode);

        this->schedule(schedule_selector(MultiplayerPopup::pollNetwork), 0.05f);

        auto& session = SessionManager::get();
        
        if (session.isInSession()) {
            createSessionView();
        } else {
            createConnectView();
        }

        return true;
    }

    void MultiplayerPopup::createConnectView() {
        auto center = m_mainLayer->getContentSize() / 2.f;
        bool inEditor = LevelEditorLayer::get() != nullptr;

        // Player name is fetched automatically from account
        std::string accountName = GJAccountManager::sharedState()->m_username;
        if (accountName.empty()) {
            accountName = "Player";
        }
        Mod::get()->setSettingValue<std::string>("player-name", accountName);

        m_connectMenu = CCMenu::create();
        m_connectMenu->setPosition({0, 0});
        m_connectMenu->setID("connect-menu"_spr);

        if (!inEditor) {
            // Room code input
            auto* codeLabel = CCLabelBMFont::create("Room Code:", "bigFont.fnt");
            codeLabel->setScale(0.4f);
            codeLabel->setPosition({center.width, center.height + 10.f});
            codeLabel->setID("code-label"_spr);
            m_contentNode->addChild(codeLabel);

            auto* inputBg = cocos2d::extension::CCScale9Sprite::create("square02_small.png");
            inputBg->setContentSize({200.f, 30.f});
            inputBg->setPosition({center.width, center.height - 15.f});
            inputBg->setOpacity(100);
            m_contentNode->addChild(inputBg);

            m_roomCodeInput = TextInput::create(200.f, "Enter room code...", "chatFont.fnt");
            m_roomCodeInput->setPosition({center.width, center.height - 15.f});
            m_roomCodeInput->setID("code-input"_spr);
            m_roomCodeInput->setCommonFilter(CommonFilter::Alphanumeric);
            m_contentNode->addChild(m_roomCodeInput);

            // Join button
            auto* joinSprite = ButtonSprite::create(
                "Join", 100, true, "bigFont.fnt", "GJ_button_01.png", 30.f, 0.7f
            );
            auto* joinBtn = CCMenuItemSpriteExtra::create(
                joinSprite, this, menu_selector(MultiplayerPopup::onJoin)
            );
            joinBtn->setPosition({center.width, center.height - 60.f});
            joinBtn->setID("join-button"_spr);
            m_connectMenu->addChild(joinBtn);
        } else {
            // Host button
            auto* hostSprite = ButtonSprite::create(
                "Host", 100, true, "bigFont.fnt", "GJ_button_02.png", 30.f, 0.7f
            );
            auto* hostBtn = CCMenuItemSpriteExtra::create(
                hostSprite, this, menu_selector(MultiplayerPopup::onHost)
            );
            hostBtn->setPosition({center.width, center.height - 15.f});
            hostBtn->setID("host-button"_spr);
            m_connectMenu->addChild(hostBtn);
        }

        m_contentNode->addChild(m_connectMenu);

        // Status label
        m_statusLabel = CCLabelBMFont::create("", "chatFont.fnt");
        m_statusLabel->setScale(0.6f);
        m_statusLabel->setPosition({center.width, center.height - 95.f});
        m_statusLabel->setID("status-label"_spr);
        m_statusLabel->setColor({200, 200, 200});
        m_contentNode->addChild(m_statusLabel);
    }

    void MultiplayerPopup::createSessionView() {
        auto center = m_mainLayer->getContentSize() / 2.f;
        auto& session = SessionManager::get();

        auto* bg = cocos2d::extension::CCScale9Sprite::create("square02b_001.png");
        bg->setContentSize({300.f, 150.f});
        bg->setPosition({center.width, center.height - 10.f});
        bg->setColor({0, 0, 0});
        bg->setOpacity(100);
        m_contentNode->addChild(bg);

        // Room code display
        auto* codeTitle = CCLabelBMFont::create("Room Code:", "bigFont.fnt");
        codeTitle->setScale(0.45f);
        codeTitle->setPosition({center.width, center.height + 60.f});
        codeTitle->setID("code-title-label"_spr);
        m_contentNode->addChild(codeTitle);

        auto codeStr = session.getRoomCode();
        m_roomCodeLabel = CCLabelBMFont::create(codeStr.c_str(), "goldFont.fnt");
        m_roomCodeLabel->setScale(0.8f);
        m_roomCodeLabel->setPosition({center.width, center.height + 35.f});
        m_roomCodeLabel->setID("room-code-display"_spr);
        m_contentNode->addChild(m_roomCodeLabel);

        // Role display
        auto roleStr = session.getRole() == SessionManager::Role::Host ? "You are the Host" : "You are a Guest";
        auto* roleLabel = CCLabelBMFont::create(roleStr, "bigFont.fnt");
        roleLabel->setScale(0.35f);
        roleLabel->setPosition({center.width, center.height + 10.f});
        roleLabel->setColor({180, 255, 180});
        roleLabel->setID("role-label"_spr);
        m_contentNode->addChild(roleLabel);

        // Player count
        auto playerCountStr = fmt::format("Players: {}", session.getPlayers().size());
        auto* playerCountLabel = CCLabelBMFont::create(playerCountStr.c_str(), "bigFont.fnt");
        playerCountLabel->setScale(0.35f);
        playerCountLabel->setPosition({center.width, center.height - 10.f});
        playerCountLabel->setID("player-count-label"_spr);
        m_contentNode->addChild(playerCountLabel);

        // Player list
        static const std::array<ccColor3B, 6> colors = {
            ccColor3B{100, 200, 255},
            ccColor3B{255, 120, 100},
            ccColor3B{100, 255, 150},
            ccColor3B{255, 200, 100},
            ccColor3B{200, 150, 255},
            ccColor3B{255, 150, 200},
        };

        float yOffset = center.height - 30.f;
        for (auto& player : session.getPlayers()) {
            auto* label = CCLabelBMFont::create(player.name.c_str(), "chatFont.fnt");
            label->setScale(0.5f);
            label->setPosition({center.width, yOffset});
            label->setColor(colors[player.colorIndex % colors.size()]);
            m_contentNode->addChild(label);
            yOffset -= 18.f;
        }

        // Session menu
        m_sessionMenu = CCMenu::create();
        m_sessionMenu->setPosition({0, 0});
        m_sessionMenu->setID("session-menu"_spr);

        // Copy code button
        auto* copySprite = ButtonSprite::create(
            "Copy Code", 100, true, "bigFont.fnt", "GJ_button_04.png", 30.f, 0.6f
        );
        auto* copyBtn = CCMenuItemSpriteExtra::create(
            copySprite, this, menu_selector(MultiplayerPopup::onCopyCode)
        );
        copyBtn->setPosition({center.width - 60.f, 40.f});
        copyBtn->setID("copy-button"_spr);
        m_sessionMenu->addChild(copyBtn);

        // Leave button
        auto* leaveSprite = ButtonSprite::create(
            "Leave", 100, true, "bigFont.fnt", "GJ_button_06.png", 30.f, 0.6f
        );
        auto* leaveBtn = CCMenuItemSpriteExtra::create(
            leaveSprite, this, menu_selector(MultiplayerPopup::onLeave)
        );
        leaveBtn->setPosition({center.width + 60.f, 40.f});
        leaveBtn->setID("leave-button"_spr);
        m_sessionMenu->addChild(leaveBtn);

        m_contentNode->addChild(m_sessionMenu);
    }

    void MultiplayerPopup::onHost(CCObject*) {
        std::string name = GJAccountManager::sharedState()->m_username;
        if (name.empty()) name = "Player";
        Mod::get()->setSettingValue<std::string>("player-name", name);

        m_statusLabel->setString("Connecting...");
        m_statusLabel->setColor({255, 255, 100});

        auto& session = SessionManager::get();
        
        session.onSessionStarted([this]() {
            auto& session = SessionManager::get();
            if (session.getRole() == SessionManager::Role::Client) {
                this->onClose(nullptr);
                
                auto* level = GJGameLevel::create();
                level->m_levelName = "Multiplayer Edit";
                level->m_levelType = GJLevelType::Editor;
                
                auto* scene = LevelEditorLayer::scene(level, false);
                CCDirector::sharedDirector()->pushScene(scene);
                
                Notification::create("Joined session!", NotificationIcon::Success)->show();
            } else {
                m_contentNode->removeAllChildren();
                createSessionView();
                Notification::create("Session started!", NotificationIcon::Success)->show();
            }
        });

        session.onError([this](std::string const& error) {
            m_statusLabel->setString(error.c_str());
            m_statusLabel->setColor({255, 100, 100});
        });

        session.hostSession(name);
    }

    void MultiplayerPopup::onJoin(CCObject*) {
        if (!m_roomCodeInput) return;
        std::string name = GJAccountManager::sharedState()->m_username;
        if (name.empty()) name = "Player";
        std::string code = std::string(m_roomCodeInput->getString());

        if (code.empty()) {
            m_statusLabel->setString("Please enter a room code!");
            m_statusLabel->setColor({255, 100, 100});
            return;
        }

        Mod::get()->setSettingValue<std::string>("player-name", name);

        m_statusLabel->setString("Joining...");
        m_statusLabel->setColor({255, 255, 100});

        auto& session = SessionManager::get();

        session.onSessionStarted([this]() {
            this->onClose(nullptr);
            
            auto* level = GJGameLevel::create();
            level->m_levelName = "Multiplayer Edit";
            level->m_levelType = GJLevelType::Editor;
            
            auto* scene = LevelEditorLayer::scene(level, false);
            CCDirector::sharedDirector()->pushScene(scene);
            
            Notification::create("Joined session!", NotificationIcon::Success)->show();
        });

        session.onError([this](std::string const& error) {
            m_statusLabel->setString(error.c_str());
            m_statusLabel->setColor({255, 100, 100});
        });

        session.joinSession(code, name);
    }

    void MultiplayerPopup::onLeave(CCObject*) {
        auto& session = SessionManager::get();
        auto role = session.getRole();
        session.leaveSession();
        session.clearCallbacks();
        
        m_contentNode->removeAllChildren();
        createConnectView();

        Notification::create("Left session", NotificationIcon::Info)->show();

        // If client/guest left the lobby while inside the editor, close the level and exit
        if (role == SessionManager::Role::Client) {
            auto* director = cocos2d::CCDirector::sharedDirector();
            if (auto* runningScene = director->getRunningScene()) {
                std::function<EditorPauseLayer*(cocos2d::CCNode*)> findPauseLayer = [&](cocos2d::CCNode* parent) -> EditorPauseLayer* {
                    if (!parent) return nullptr;
                    if (auto* pause = typeinfo_cast<EditorPauseLayer*>(parent)) {
                        return pause;
                    }
                    if (parent->getChildren()) {
                        for (auto* child : CCArrayExt<CCNode*>(parent->getChildren())) {
                            if (auto* p = findPauseLayer(child)) return p;
                        }
                    }
                    return nullptr;
                };

                auto* pauseLayer = findPauseLayer(runningScene);
                if (pauseLayer) {
                    pauseLayer->onExitEditor(nullptr);
                } else {
                    director->popScene();
                }
            }
        }
    }

    void MultiplayerPopup::onCopyCode(CCObject*) {
        auto code = SessionManager::get().getRoomCode();
        utils::clipboard::write(code);
        Notification::create("Room code copied!", NotificationIcon::Success)->show();
    }

    void MultiplayerPopup::pollNetwork(float dt) {
        NetworkManager::get().dispatchMessages();
    }

} // namespace mpedit
