#pragma once

#include <cocos2d.h>
#include "../NetworkManager.hpp"

namespace mpedit {

    /**
     * Small status indicator shown in the editor when a session is active.
     * Displays connection status and player count.
     */
    class SessionStatusNode : public cocos2d::CCNode {
    protected:
        cocos2d::CCLabelBMFont* m_statusLabel = nullptr;
        cocos2d::CCSprite* m_connectionDot = nullptr;

        // Cache for optimization
        NetworkManager::State m_cachedState = NetworkManager::State::Disconnected;
        size_t m_cachedPlayerCount = 0;
        std::string m_cachedRoomCode;
        std::string m_cachedError;
        bool m_cachedInSession = false;

        bool init() override;
        void update(float dt) override;

    public:
        static SessionStatusNode* create();
    };

} // namespace mpedit
