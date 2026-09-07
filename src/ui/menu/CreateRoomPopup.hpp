#pragma once
#include <Geode/Geode.hpp>
#include "../core/BasePopup.hpp"
#include <Geode/ui/TextInput.hpp>

namespace mpedit {

    class MultiplayerMenuPopup;

    class CreateRoomPopup : public BasePopup {
    protected:
        geode::TextInput* m_nameInput = nullptr;
        geode::TextInput* m_passInput = nullptr;
        geode::TextInput* m_limitInput = nullptr;
        CCMenuItemToggler* m_privateToggle = nullptr;
        CCMenuItemToggler* m_viewOnlyToggle = nullptr;
        
        MultiplayerMenuPopup* m_parentPopup = nullptr;
        
        bool init(MultiplayerMenuPopup* parent);

        void onCreate(cocos2d::CCObject*);

    public:
        static CreateRoomPopup* create(MultiplayerMenuPopup* parent);
    };

}
