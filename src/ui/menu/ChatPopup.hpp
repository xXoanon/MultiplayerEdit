#pragma once

#include <Geode/Geode.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/binding/EmotePickerPopup.hpp>
#include <Geode/binding/EmoteDef.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
#include "../core/BasePopup.hpp"
#include <string>

namespace mpedit {

    class ChatPopup : public BasePopup, public EmotePickerDelegate {
    protected:
        geode::ScrollLayer* m_scrollLayer = nullptr;
        geode::TextInput* m_input = nullptr;
        EmotePickerPopup* m_emotePicker = nullptr;
        CCTextInputNode* m_dummyInput = nullptr;
        bool m_autoFocus = false;

        bool setup(bool autoFocus);
        void populateChat();
        void insertEmoteTag(std::string const& tag);
        void onToggleEmotePicker(cocos2d::CCObject* sender);
        void onSend(cocos2d::CCObject*);
        void onClose(cocos2d::CCObject* obj) override;

        void emotePickerClosed(EmotePickerPopup* picker) override;
        void emotePicked(EmotePickerPopup* picker, EmoteDef const* def) override;
        void emotePickerKeyDown(EmotePickerPopup* picker, cocos2d::enumKeyCodes key, double timestamp) override;
        void textChanged(CCTextInputNode* input) override;

    public:
        static ChatPopup* create(bool autoFocus = false);
    };

}
