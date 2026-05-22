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

        bool inSession = session.isInSession();
        auto state = net.getState();
        size_t playerCount = session.getPlayers().size();
        std::string roomCode = session.getRoomCode();
        std::string errStr = net.getError();

        // Check if anything has changed
        if (inSession == m_cachedInSession &&
            state == m_cachedState &&
            playerCount == m_cachedPlayerCount &&
            roomCode == m_cachedRoomCode &&
            errStr == m_cachedError) {
            return;
        }

        // Update cache
        m_cachedInSession = inSession;
        m_cachedState = state;
        m_cachedPlayerCount = playerCount;
        m_cachedRoomCode = roomCode;
        m_cachedError = errStr;

        if (!inSession) {
            m_statusLabel->setString("");
            return;
        }

        std::string statusText;
        ccColor3B color;

        switch (state) {
            case NetworkManager::State::Connected:
                statusText = fmt::format(
                    "MP: {} ({} players)",
                    roomCode,
                    playerCount
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
                statusText = fmt::format("MP: Error - {}", errStr);
                color = {255, 100, 100}; // Red
                break;
        }

        m_statusLabel->setString(statusText.c_str());
        m_statusLabel->setColor(color);
    }

} // namespace mpedit
