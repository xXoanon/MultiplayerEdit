#pragma once

#include <cocos2d.h>

namespace mpedit {

    /**
     * Small status indicator shown in the editor when a session is active.
     * Displays connection status and player count.
     */
    class SessionStatusNode : public cocos2d::CCNode {
    protected:
        cocos2d::CCLabelBMFont* m_statusLabel = nullptr;
        cocos2d::CCSprite* m_connectionDot = nullptr;

        bool init() override;
        void update(float dt) override;

    public:
        static SessionStatusNode* create();
    };

} // namespace mpedit
