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

    bool MultiplayerPopup::setup() {
        this->setTitle("Multiplayer Edit", "goldFont.fnt", 0.8f, 20.f);

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

        // Player name input
        auto* nameLabel = CCLabelBMFont::create("Player Name:", "bigFont.fnt");
        nameLabel->setScale(0.4f);
        nameLabel->setPosition({center.width, center.height + 70.f});
        nameLabel->setID("name-label"_spr);
        m_mainLayer->addChild(nameLabel);

        m_playerNameInput = TextInput::create(200.f, "Enter name...", "chatFont.fnt");
        m_playerNameInput->setPosition({center.width, center.height + 45.f});
        m_playerNameInput->setID("name-input"_spr);
        
        auto savedName = Mod::get()->getSettingValue<std::string>("player-name");
        m_playerNameInput->setString(savedName);
        m_mainLayer->addChild(m_playerNameInput);

        // Room code input
        auto* codeLabel = CCLabelBMFont::create("Room Code:", "bigFont.fnt");
        codeLabel->setScale(0.4f);
        codeLabel->setPosition({center.width, center.height + 10.f});
        codeLabel->setID("code-label"_spr);
        m_mainLayer->addChild(codeLabel);

        m_roomCodeInput = TextInput::create(200.f, "Enter room code...", "chatFont.fnt");
        m_roomCodeInput->setPosition({center.width, center.height - 15.f});
        m_roomCodeInput->setID("code-input"_spr);
        m_roomCodeInput->setCommonFilter(CommonFilter::Alphanumeric);
        m_mainLayer->addChild(m_roomCodeInput);

        // Buttons menu
        m_connectMenu = CCMenu::create();
        m_connectMenu->setPosition({0, 0});
        m_connectMenu->setID("connect-menu"_spr);

        // Host button
        auto* hostSprite = ButtonSprite::create(
            "Host", 100, true, "bigFont.fnt", "GJ_button_02.png", 30.f, 0.7f
        );
        auto* hostBtn = CCMenuItemSpriteExtra::create(
            hostSprite, this, menu_selector(MultiplayerPopup::onHost)
        );
        hostBtn->setPosition({center.width - 60.f, center.height - 60.f});
        hostBtn->setID("host-button"_spr);
        m_connectMenu->addChild(hostBtn);

        // Join button
        auto* joinSprite = ButtonSprite::create(
            "Join", 100, true, "bigFont.fnt", "GJ_button_01.png", 30.f, 0.7f
        );
        auto* joinBtn = CCMenuItemSpriteExtra::create(
            joinSprite, this, menu_selector(MultiplayerPopup::onJoin)
        );
        joinBtn->setPosition({center.width + 60.f, center.height - 60.f});
        joinBtn->setID("join-button"_spr);
        m_connectMenu->addChild(joinBtn);

        m_mainLayer->addChild(m_connectMenu);

        // Status label
        m_statusLabel = CCLabelBMFont::create("", "chatFont.fnt");
        m_statusLabel->setScale(0.6f);
        m_statusLabel->setPosition({center.width, center.height - 95.f});
        m_statusLabel->setID("status-label"_spr);
        m_statusLabel->setColor({200, 200, 200});
        m_mainLayer->addChild(m_statusLabel);
    }

    void MultiplayerPopup::createSessionView() {
        auto center = m_mainLayer->getContentSize() / 2.f;
        auto& session = SessionManager::get();

        // Room code display
        auto* codeTitle = CCLabelBMFont::create("Room Code:", "bigFont.fnt");
        codeTitle->setScale(0.45f);
        codeTitle->setPosition({center.width, center.height + 60.f});
        codeTitle->setID("code-title-label"_spr);
        m_mainLayer->addChild(codeTitle);

        auto codeStr = session.getRoomCode();
        m_roomCodeLabel = CCLabelBMFont::create(codeStr.c_str(), "goldFont.fnt");
        m_roomCodeLabel->setScale(0.8f);
        m_roomCodeLabel->setPosition({center.width, center.height + 35.f});
        m_roomCodeLabel->setID("room-code-display"_spr);
        m_mainLayer->addChild(m_roomCodeLabel);

        // Role display
        auto roleStr = session.getRole() == SessionManager::Role::Host ? "You are the Host" : "You are a Guest";
        auto* roleLabel = CCLabelBMFont::create(roleStr, "bigFont.fnt");
        roleLabel->setScale(0.35f);
        roleLabel->setPosition({center.width, center.height + 10.f});
        roleLabel->setColor({180, 255, 180});
        roleLabel->setID("role-label"_spr);
        m_mainLayer->addChild(roleLabel);

        // Player count
        auto playerCountStr = fmt::format("Players: {}", session.getPlayers().size());
        auto* playerCountLabel = CCLabelBMFont::create(playerCountStr.c_str(), "bigFont.fnt");
        playerCountLabel->setScale(0.35f);
        playerCountLabel->setPosition({center.width, center.height - 10.f});
        playerCountLabel->setID("player-count-label"_spr);
        m_mainLayer->addChild(playerCountLabel);

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
            m_mainLayer->addChild(label);
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

        m_mainLayer->addChild(m_sessionMenu);
    }

    void MultiplayerPopup::onHost(CCObject*) {
        std::string name = std::string(m_playerNameInput->getString());
        if (name.empty()) {
            m_statusLabel->setString("Please enter a name!");
            m_statusLabel->setColor({255, 100, 100});
            return;
        }

        Mod::get()->setSettingValue<std::string>("player-name", name);

        m_statusLabel->setString("Connecting...");
        m_statusLabel->setColor({255, 255, 100});

        auto& session = SessionManager::get();
        
        session.onSessionStarted([this]() {
            m_mainLayer->removeAllChildren();
            this->setTitle("Multiplayer Edit", "goldFont.fnt", 0.8f, 20.f);
            createSessionView();
            Notification::create("Session started!", NotificationIcon::Success)->show();
        });

        session.onError([this](std::string const& error) {
            m_statusLabel->setString(error.c_str());
            m_statusLabel->setColor({255, 100, 100});
        });

        session.hostSession(name);
    }

    void MultiplayerPopup::onJoin(CCObject*) {
        std::string name = std::string(m_playerNameInput->getString());
        std::string code = std::string(m_roomCodeInput->getString());

        if (name.empty()) {
            m_statusLabel->setString("Please enter a name!");
            m_statusLabel->setColor({255, 100, 100});
            return;
        }
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
            m_mainLayer->removeAllChildren();
            this->setTitle("Multiplayer Edit", "goldFont.fnt", 0.8f, 20.f);
            createSessionView();
            Notification::create("Joined session!", NotificationIcon::Success)->show();
        });

        session.onError([this](std::string const& error) {
            m_statusLabel->setString(error.c_str());
            m_statusLabel->setColor({255, 100, 100});
        });

        session.joinSession(code, name);
    }

    void MultiplayerPopup::onLeave(CCObject*) {
        SessionManager::get().leaveSession();
        
        m_mainLayer->removeAllChildren();
        this->setTitle("Multiplayer Edit", "goldFont.fnt", 0.8f, 20.f);
        createConnectView();

        Notification::create("Left session", NotificationIcon::Info)->show();
    }

    void MultiplayerPopup::onCopyCode(CCObject*) {
        auto code = SessionManager::get().getRoomCode();
        utils::clipboard::write(code);
        Notification::create("Room code copied!", NotificationIcon::Success)->show();
    }

} // namespace mpedit
