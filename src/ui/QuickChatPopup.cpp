#include "QuickChatPopup.hpp"
#include "../SessionManager.hpp"

using namespace geode::prelude;

namespace mpedit {

    bool QuickChatPopup::setup() {
        m_noElasticity = true;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto size = CCSize(340.f, 50.f);
        this->setTitle("");
        m_mainLayer->setContentSize(size);
#ifdef GEODE_IS_MOBILE
        // Mobile only: lift chat frame up so the virtual keyboard doesn't cover it.
        m_originalY = winSize.height * 0.65f;
        m_mainLayer->setPosition({winSize.width / 2, m_originalY});
#else
        m_mainLayer->setPosition({winSize.width / 2, 40.f});
#endif
        
        m_input = TextInput::create(260.f, "Type message...");
        m_input->setPosition({140.f, 25.f});
        m_input->setMaxCharCount(100);
        m_input->setFilter("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~");
        m_input->getInputNode()->setLabelPlaceholderColor({200, 200, 200});
        m_mainLayer->addChild(m_input);

#ifdef GEODE_IS_MOBILE
        // Receive mobile keyboard return-key events for enter-to-send.
        m_input->setDelegate(this);
        // Auto-focus so the keyboard opens immediately (deferred until shown).
        this->runAction(CCSequence::create(
            CCDelayTime::create(0.05f),
            CCCallFunc::create(this, callfunc_selector(QuickChatPopup::focusInput)),
            nullptr
        ));
#endif
        
        auto sendSpr = ButtonSprite::create("Send");
        sendSpr->setScale(0.6f);
        auto sendBtn = CCMenuItemSpriteExtra::create(sendSpr, this, menu_selector(QuickChatPopup::onSend));
        sendBtn->setPosition({300.f, 25.f});
        auto menu = CCMenu::create();
        menu->setPosition({0, 0});
        menu->addChild(sendBtn);
        m_mainLayer->addChild(menu);
        
        m_input->getInputNode()->onClickTrackNode(true);
        this->syncTouchPriority();

        return true;
    }

    void QuickChatPopup::focusInput() {
        if (m_input && !m_isClosing) {
            m_input->focus();
        }
    }

#ifdef GEODE_IS_MOBILE
    void QuickChatPopup::textInputOpened(CCTextInputNode*) {
        if (m_isClosing || m_keyboardLifted) return;
        m_keyboardLifted = true;
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        float liftedY = winSize.height * 0.65f;
        // Clamp so the popup never goes off-screen on small devices.
        liftedY = std::min(liftedY, winSize.height - 40.f);
        m_mainLayer->setPosition({winSize.width / 2, liftedY});
    }

    void QuickChatPopup::textInputClosed(CCTextInputNode*) {
        if (m_isClosing) return;
        m_keyboardLifted = false;
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        m_mainLayer->setPosition({winSize.width / 2, m_originalY});
    }

    void QuickChatPopup::textInputShouldOffset(CCTextInputNode*, float yOffset) {
        if (m_isClosing) return;
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        float targetY = m_originalY + yOffset;
        // Keep some margin and stay on-screen.
        targetY = std::max(targetY, winSize.height * 0.6f);
        targetY = std::min(targetY, winSize.height - 40.f);
        m_mainLayer->setPosition({winSize.width / 2, targetY});
        m_keyboardLifted = true;
    }

    void QuickChatPopup::textInputReturn(CCTextInputNode*) {
        if (m_isClosing) return;
        onSend(nullptr);
    }

    void QuickChatPopup::enterPressed(CCTextInputNode*) {
        if (m_isClosing) return;
        onSend(nullptr);
    }
#endif

    void QuickChatPopup::onClose(cocos2d::CCObject* sender) {
        if (m_isClosing) return;
        m_isClosing = true;
#ifdef GEODE_IS_MOBILE
        if (m_input) {
            m_input->defocus();
            if (m_input->getInputNode()) {
                m_input->getInputNode()->m_delegate = nullptr;
            }
        }
#else
        (void)sender;
#endif
        BasePopup::onClose(sender);
    }

    void QuickChatPopup::keyDown(cocos2d::enumKeyCodes key, double p1) {
        if (key == cocos2d::KEY_Enter) {
            onSend(nullptr);
            return;
        }
        BasePopup::keyDown(key, p1);
    }

    void QuickChatPopup::onSend(CCObject*) {
        if (m_isClosing) return;
        if (!m_input) {
            this->onClose(nullptr);
            return;
        }
        auto text = m_input->getString();
        if (!text.empty()) {
            SessionManager::get().sendChatMessage(std::string(text.c_str()));
        }
        this->onClose(nullptr);
    }

    QuickChatPopup* QuickChatPopup::create() {
        auto ret = new QuickChatPopup();
        if (ret && ret->init(340.f, 50.f, "GJ_square01.png") && ret->setup()) {
            ret->autorelease();
            return ret;
        }
        CC_SAFE_DELETE(ret);
        return nullptr;
    }
}
