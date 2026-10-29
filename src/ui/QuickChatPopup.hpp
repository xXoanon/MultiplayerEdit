#pragma once
#include <Geode/Geode.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <algorithm>
#include "core/BasePopup.hpp"

namespace mpedit {

    class QuickChatPopup : public BasePopup, public TextInputDelegate {
    protected:
        bool m_isClosing = false;
        void onClose(cocos2d::CCObject*) override;
    protected:
        geode::TextInput* m_input = nullptr;
#ifdef GEODE_IS_MOBILE
        float m_originalY = 40.f;
        bool m_keyboardLifted = false;
#endif

        bool setup();
        void keyDown(cocos2d::enumKeyCodes key, double p1) override;
        void onSend(cocos2d::CCObject*);
        void focusInput();

#ifdef GEODE_IS_MOBILE
        // Mobile keyboard: lift popup + enter-to-send
        void textInputOpened(CCTextInputNode* input) override;
        void textInputClosed(CCTextInputNode* input) override;
        void textInputShouldOffset(CCTextInputNode* input, float yOffset) override;
        void textInputReturn(CCTextInputNode* input) override;
        void enterPressed(CCTextInputNode* input) override;
#endif

    public:
        static QuickChatPopup* create();
    };

}
