#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemSpriteExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemSpriteExtra, cocos2d::CCMenuItemSprite)

    /**
     * @note[short] MacOS (ARM): 0x49240
     * @note[short] MacOS (Intel): 0x54a70
     * @note[short] Windows: 0x44a60
     * @note[short] iOS: 0x16b5a4
     * @note[short] Android: Out of line
     */
     CCMenuItemSpriteExtra();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x21903c
     * @note[short] MacOS (Intel): 0x276b90
     * @note[short] Windows: 0x44bb0
     * @note[short] iOS: 0x21372c
     * @note[short] Android
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCNode* selectedSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x219280
     * @note[short] MacOS (Intel): 0x276da0
     * @note[short] Windows: 0x44db0
     * @note[short] iOS: 0x21395c
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x2193d4
     * @note[short] MacOS (Intel): 0x276f20
     * @note[short] Windows: 0x44ec0
     * @note[short] iOS: 0x213a3c
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x219620
     * @note[short] MacOS (Intel): 0x2771a0
     * @note[short] Windows: 0x450e0
     * @note[short] iOS: 0x213c1c
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] MacOS (ARM): 0x2190f4
     * @note[short] MacOS (Intel): 0x276c20
     * @note[short] Windows: 0x44c50
     * @note[short] iOS: 0x2137d0
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* sprite, cocos2d::CCNode* selectedSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x219278
     * @note[short] MacOS (Intel): 0x276d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x213954
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
Set a new image for this button

 Prefer using this over `setNormalImage` as the latter does not actually

 handle any of the special sizing operations `CCMenuItemSpriteExtra` has

 @param sprite The sprite to replace this button's sprite with

 @note Geode addit     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setSprite(cocos2d::CCSprite* sprite);

    /**
Update the sizing of this button's image

 If you for example have a `ButtonSprite` on this button and change the

 text, you need to call `updateSprite` afterwards to fix the button's

 content size

 @note Geode addit     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();

    /**
     * @note[short] MacOS (ARM): 0x219230
     * @note[short] MacOS (Intel): 0x276d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21390c
     * @note[short] Android
     */
    void useAnimationType(MenuAnimationType type);
    float m_scaleMultiplier;
    float m_baseScale;
    bool m_animationEnabled;
    bool m_colorEnabled;
    float m_volume;
    gd::string m_activateSound;
    gd::string m_selectSound;
    float m_colorDip;
    cocos2d::CCPoint m_offset;
    float m_duration;
    float m_unselectedDuration;
    MenuAnimationType m_animationType;
    cocos2d::CCPoint m_startPosition;
    IconType m_iconType;
};
