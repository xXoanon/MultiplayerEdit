#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

#include <Geode/binding/CCTextInputNode.hpp>
#include <Geode/binding/CCScrollLayerExt.hpp>
#include <Geode/ui/TextInput.hpp>

namespace mpedit {

class BasePopup : public geode::Popup {
public:
    ~BasePopup() override = default;

    void onExit() override {
        geode::Popup::onExit();
    }

    bool m_isClosing = false;

    void onClose(cocos2d::CCObject* sender = nullptr) override {
        if (m_isClosing) return;
        m_isClosing = true;
        geode::Popup::CloseEvent(this).send();
        this->setKeypadEnabled(false);
        this->setTouchEnabled(false);
        if (this->m_forcePrioRegistered) {
            cocos2d::CCDirector::sharedDirector()->getTouchDispatcher()->unregisterForcePrio(this);
            this->m_forcePrioRegistered = false;
        }
        this->setVisible(false);
        geode::Loader::get()->queueInMainThread([self = geode::Ref(this)]() {
            if (self->getParent()) {
                self->removeFromParent();
            }
        });
    }

    void registerWithTouchDispatcher() override {
        auto dispatcher = cocos2d::CCDirector::sharedDirector()->getTouchDispatcher();
        int targetPrio = dispatcher->getTargetPrio();
        dispatcher->addTargetedDelegate(this, targetPrio, true);
        if (this->m_forcePrioRegistered) {
            dispatcher->registerForcePrio(this, 2);
        }
        syncTouchPriority(this);
    }

    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) override {
        if (!this->isRunning() || !this->isVisible()) return false;
        return true;
    }

    void syncTouchPriority(cocos2d::CCNode* root = nullptr) {
        auto dispatcher = cocos2d::CCDirector::sharedDirector()->getTouchDispatcher();
        int prio = dispatcher->getTargetPrio() - 1;
        applyTouchPriority(root ? root : this, prio, this);
    }

    static void applyTouchPriority(cocos2d::CCNode* node, int priority, cocos2d::CCNode* ignore = nullptr) {
        if (!node) return;
        if (node != ignore) {
            if (auto layer = geode::cast::typeinfo_cast<cocos2d::CCLayer*>(node)) {
                layer->setTouchPriority(priority);
            } else if (auto textInput = geode::cast::typeinfo_cast<geode::TextInput*>(node)) {
                if (textInput->getInputNode()) {
                    textInput->getInputNode()->setTouchPriority(priority);
                }
            }
        }
        auto children = node->getChildren();
        if (children) {
            for (unsigned int i = 0; i < children->count(); ++i) {
                applyTouchPriority(static_cast<cocos2d::CCNode*>(children->objectAtIndex(i)), priority, ignore);
            }
        }
    }

protected:
    bool init(float width, float height, char const* bg = "GJ_square01.png") {
        if (!geode::Popup::init(width, height, bg)) return false;
        this->m_forcePrioRegistered = true;
        fixPopup();
        return true;
    }

    cocos2d::CCMenu* m_uiMenu = nullptr;

    void fixPopup() {
        if (m_bgSprite) {
            m_bgSprite->setPosition(this->m_size.width / 2, this->m_size.height / 2);
        }
        if (m_buttonMenu) {
            m_buttonMenu->setPosition(this->m_size.width / 2, this->m_size.height / 2);
        }
        
        if (!m_uiMenu) {
            m_uiMenu = cocos2d::CCMenu::create();
            m_uiMenu->setContentSize(this->m_size);
            m_uiMenu->setPosition(0.f, 0.f);
            m_uiMenu->setZOrder(10);
            this->m_mainLayer->addChild(m_uiMenu);
        }

        auto dispatcher = cocos2d::CCDirector::sharedDirector()->getTouchDispatcher();
        int prio = dispatcher->getTargetPrio() - 1;
        if (m_buttonMenu) m_buttonMenu->setTouchPriority(prio);
        if (m_uiMenu) m_uiMenu->setTouchPriority(prio);
    }

    float left() { return 0.f; }
    float right() { return this->m_mainLayer->getContentSize().width; }
    float top() { return this->m_mainLayer->getContentSize().height; }
    float bottom() { return 0.f; }
    float centerX() { return this->right() / 2.f; }
    float centerY() { return this->top() / 2.f; }
    
    cocos2d::CCPoint center() { return { this->centerX(), this->centerY() }; }
    cocos2d::CCPoint centerLeft() { return { this->left(), this->centerY() }; }
    cocos2d::CCPoint centerRight() { return { this->right(), this->centerY() }; }
    cocos2d::CCPoint centerTop() { return { this->centerX(), this->top() }; }
    cocos2d::CCPoint centerBottom() { return { this->centerX(), this->bottom() }; }
    cocos2d::CCPoint bottomLeft() { return { this->left(), this->bottom() }; }
    cocos2d::CCPoint bottomRight() { return { this->right(), this->bottom() }; }
    cocos2d::CCPoint topLeft() { return { this->left(), this->top() }; }
    cocos2d::CCPoint topRight() { return { this->right(), this->top() }; }

    cocos2d::CCPoint fromTop(float y) { return fromTop(cocos2d::CCSize{0.f, y}); }
    cocos2d::CCPoint fromTop(cocos2d::CCSize off) {
        return this->centerTop() + cocos2d::CCPoint{off.width, -off.height};
    }
    
    cocos2d::CCPoint fromBottom(float y) { return fromBottom(cocos2d::CCSize{0.f, y}); }
    cocos2d::CCPoint fromBottom(cocos2d::CCSize off) {
        return this->centerBottom() + off;
    }
    
    cocos2d::CCPoint fromLeft(float x) { return fromLeft(cocos2d::CCSize{x, 0.f}); }
    cocos2d::CCPoint fromLeft(cocos2d::CCSize off) {
        return this->centerLeft() + off;
    }
    
    cocos2d::CCPoint fromRight(float x) { return fromRight(cocos2d::CCSize{x, 0.f}); }
    cocos2d::CCPoint fromRight(cocos2d::CCSize off) {
        return this->centerRight() + cocos2d::CCPoint{-off.width, off.height};
    }
    
    cocos2d::CCPoint fromCenter(float x, float y) { return fromCenter({x, y}); }
    cocos2d::CCPoint fromCenter(cocos2d::CCSize off) {
        return this->center() + off;
    }
    
    cocos2d::CCPoint fromBottomRight(float x, float y) { return fromBottomRight({x, y}); }
    cocos2d::CCPoint fromBottomRight(cocos2d::CCSize off) {
        return this->bottomRight() + cocos2d::CCPoint{-off.width, off.height};
    }
    
    cocos2d::CCPoint fromTopRight(float x, float y) { return fromTopRight({x, y}); }
    cocos2d::CCPoint fromTopRight(cocos2d::CCSize off) {
        return this->topRight() - off;
    }
    
    cocos2d::CCPoint fromBottomLeft(float x, float y) { return fromBottomLeft({x, y}); }
    cocos2d::CCPoint fromBottomLeft(cocos2d::CCSize off) {
        return this->bottomLeft() + off;
    }
    
    cocos2d::CCPoint fromTopLeft(float x, float y) { return fromTopLeft({x, y}); }
    cocos2d::CCPoint fromTopLeft(cocos2d::CCSize off) {
        return this->topLeft() + cocos2d::CCPoint{off.width, -off.height};
    }
};

}
