#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCMenuItemToggler();

    /**
     * @note[short] MacOS (ARM): 0x4cea8
     * @note[short] MacOS (Intel): 0x597a0
     * @note[short] Windows: 0x45250
     * @note[short] iOS: 0x190eb0
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): 0x4d5d0
     * @note[short] MacOS (Intel): 0x59e80
     * @note[short] Windows: 0x45500
     * @note[short] iOS: 0x1912d0
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x4d590
     * @note[short] MacOS (Intel): 0x59e50
     * @note[short] Windows: 0x454b0
     * @note[short] iOS: 0x191290
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x4d610
     * @note[short] MacOS (Intel): 0x59eb0
     * @note[short] Windows: 0x45550
     * @note[short] iOS: 0x191310
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] MacOS (ARM): 0x4d650
     * @note[short] MacOS (Intel): 0x59ee0
     * @note[short] Windows: 0x455a0
     * @note[short] iOS: 0x191350
     * @note[short] Android
     */
    virtual void setEnabled(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x4d574
     * @note[short] MacOS (Intel): 0x59e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x191274
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* activeItem();

    /**
     * @note[short] MacOS (ARM): 0x4cf8c
     * @note[short] MacOS (Intel): 0x59870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x190f80
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isOn();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isToggled();

    /**
     * @note[short] MacOS (ARM): 0x4d1e4
     * @note[short] MacOS (Intel): 0x59ab0
     * @note[short] Windows: 0x455f0
     * @note[short] iOS: 0x191130
     * @note[short] Android
     */
    void normalTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d2c8
     * @note[short] MacOS (Intel): 0x59b90
     * @note[short] Windows: 0x45610
     * @note[short] iOS: 0x191144
     * @note[short] Android
     */
    void selectedTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClickable(bool on);

    /**
     * @note[short] MacOS (ARM): 0x4d480
     * @note[short] MacOS (Intel): 0x59d40
     * @note[short] Windows: 0x45480
     * @note[short] iOS: 0x191230
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
     * @note[short] MacOS (ARM): 0x4d3a8
     * @note[short] MacOS (Intel): 0x59c70
     * @note[short] Windows: 0x45630
     * @note[short] iOS: 0x191158
     * @note[short] Android
     */
    void toggle(bool on);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void toggleWithCallback(bool on);

    /**
Update the sizing of this toggle's image

 If you for example have a `ButtonSprite` on this toggle and change the

 text, you need to call `updateSprite` afterwards to fix the toggle's

 content size

 @note Geode addit     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};
