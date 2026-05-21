#pragma once

#include <Geode/ui/Popup.hpp>
#include <Geode/ui/TextInput.hpp>

namespace mpedit {

    /**
     * Main multiplayer session popup.
     * Allows players to host or join a session.
     */
    class MultiplayerPopup : public geode::Popup {
    protected:
        geode::TextInput* m_roomCodeInput = nullptr;
        geode::TextInput* m_playerNameInput = nullptr;
        cocos2d::CCLabelBMFont* m_statusLabel = nullptr;
        cocos2d::CCLabelBMFont* m_roomCodeLabel = nullptr;
        cocos2d::CCMenu* m_connectMenu = nullptr;
        cocos2d::CCMenu* m_sessionMenu = nullptr;

        bool setup();

        // Connect view
        void createConnectView();
        // Session view (shown when connected)
        void createSessionView();

        void onHost(cocos2d::CCObject*);
        void onJoin(cocos2d::CCObject*);
        void onLeave(cocos2d::CCObject*);
        void onCopyCode(cocos2d::CCObject*);

    public:
        static MultiplayerPopup* create();
    };

} // namespace mpedit
