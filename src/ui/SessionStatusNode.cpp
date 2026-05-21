#include "SessionStatusNode.hpp"
#include "../SessionManager.hpp"
#include "../NetworkManager.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;

namespace mpedit {

    SessionStatusNode* SessionStatusNode::create() {
        auto* ret = new SessionStatusNode();
        if (ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool SessionStatusNode::init() {
        if (!CCNode::init()) return false;

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        // Position in top-right corner
        this->setPosition({winSize.width - 10.f, winSize.height - 10.f});
        this->setAnchorPoint({1.f, 1.f});

        // Status text
        m_statusLabel = CCLabelBMFont::create("", "chatFont.fnt");
        m_statusLabel->setAnchorPoint({1.f, 0.5f});
        m_statusLabel->setScale(0.45f);
        m_statusLabel->setPosition({0.f, 0.f});
        m_statusLabel->setOpacity(180);
        this->addChild(m_statusLabel);

        this->scheduleUpdate();

        return true;
    }

    void SessionStatusNode::update(float dt) {
        auto& session = SessionManager::get();
        auto& net = NetworkManager::get();

        if (!session.isInSession()) {
            m_statusLabel->setString("");
            return;
        }

        auto state = net.getState();
        std::string statusText;
        ccColor3B color;

        switch (state) {
            case NetworkManager::State::Connected:
                statusText = fmt::format(
                    "MP: {} ({} players)",
                    session.getRoomCode(),
                    session.getPlayers().size()
                );
                color = {100, 255, 100}; // Green
                break;

            case NetworkManager::State::Connecting:
                statusText = "MP: Connecting...";
                color = {255, 255, 100}; // Yellow
                break;

            case NetworkManager::State::Disconnected:
                statusText = "MP: Disconnected";
                color = {255, 100, 100}; // Red
                break;

            case NetworkManager::State::Error:
                statusText = "MP: Error";
                color = {255, 100, 100}; // Red
                break;
        }

        m_statusLabel->setString(statusText.c_str());
        m_statusLabel->setColor(color);
    }

} // namespace mpedit
