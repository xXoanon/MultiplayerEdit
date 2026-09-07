#pragma once
#include <Geode/Geode.hpp>
#include "../../P2PManager.hpp"
#include "../../SessionManager.hpp"
#include "../core/BasePopup.hpp"

namespace mpedit {

    class MultiplayerMenuPopup : public BasePopup {
    protected:
        ~MultiplayerMenuPopup() override;
        
        cocos2d::CCMenu* m_leftMenu = nullptr;
        cocos2d::CCMenu* m_rightMenu = nullptr;
        
        cocos2d::CCNode* m_centerNode = nullptr;
        cocos2d::CCNode* m_sessionUiNode = nullptr;
        cocos2d::CCLabelBMFont* m_statusLabel = nullptr;
        geode::ScrollLayer* m_scrollLayer = nullptr;
        
        CCMenuItemSpriteExtra* m_hostBtn = nullptr;
        geode::TextInput* m_codeInput = nullptr;
        cocos2d::CCNode* m_browserUiNode = nullptr;
        std::string m_lastJoinCode;
        std::string m_lastServerUrl;
        bool m_isConnecting = false;
        geode::async::TaskHolder<geode::utils::web::WebResponse> m_updateTask;


        bool init() override;

        void setupMenus();
        void setupRoomBrowser();
        void createLoadingView(std::string const& statusText);
        void clearCenter();

        void onRefresh(cocos2d::CCObject*);
        void onHostForm(cocos2d::CCObject*);
        void onLeave(cocos2d::CCObject*);
        void onChat(cocos2d::CCObject*);
        void onDiscord(cocos2d::CCObject*);
        void onPatreon(cocos2d::CCObject*);
        void onCopyCode(cocos2d::CCObject*);
        void onJoinByCode(cocos2d::CCObject*);
        void onDedicatedServers(cocos2d::CCObject*);

        void fetchRooms();
        void populateRooms(std::vector<P2PManager::RoomInfo> const& rooms);

    public:
        static inline MultiplayerMenuPopup* s_instance = nullptr;
        static MultiplayerMenuPopup* create();

        void setupActiveSession();

        void onJoinRoom(P2PManager::RoomInfo const& room);
        void promptPassword(P2PManager::RoomInfo const& room);
        void onConnecting();
        void updateStatus(std::string const& status);
        void update(float dt) override;
        void forceClose() { this->onClose(nullptr); }
    };

}
