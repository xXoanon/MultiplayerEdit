#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGroundLayer.hpp"
#include "GameToolbox.hpp"

class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b9ac
     * @note[short] Android: Out of line
     */
     MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x45270c
     * @note[short] MacOS (Intel): 0x4f98f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39a508
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x4537c8
     * @note[short] MacOS (Intel): 0x4fabd0
     * @note[short] Windows: 0x332240
     * @note[short] iOS: 0x39b3a4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4527f4
     * @note[short] MacOS (Intel): 0x4f9a00
     * @note[short] Windows: 0x331420
     * @note[short] iOS: 0x39a57c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x453cb8
     * @note[short] MacOS (Intel): 0x4fb140
     * @note[short] Windows: 0x333600
     * @note[short] iOS: 0x39b830
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x453dd0
     * @note[short] MacOS (Intel): 0x4fb260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b948
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x453dd8
     * @note[short] MacOS (Intel): 0x4fb280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b950
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x453de0
     * @note[short] MacOS (Intel): 0x4fb2a0
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x39b958
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x453dfc
     * @note[short] MacOS (Intel): 0x4fb2e0
     * @note[short] Windows: 0x3337b0
     * @note[short] iOS: 0x39b974
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x453abc
     * @note[short] MacOS (Intel): 0x4faf40
     * @note[short] Windows: 0x333340
     * @note[short] iOS: 0x39b640
     * @note[short] Android
     */
    void destroyPlayer();

    /**
     * @note[short] MacOS (ARM): 0x452bf0
     * @note[short] MacOS (Intel): 0x4f9e60
     * @note[short] Windows: 0x331ca0
     * @note[short] iOS: 0x39a97c
     * @note[short] Android
     */
    cocos2d::ccColor3B getBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x453188
     * @note[short] MacOS (Intel): 0x4fa380
     * @note[short] Windows: 0x332710
     * @note[short] iOS: 0x39adc4
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (ARM): 0x452d2c
     * @note[short] MacOS (Intel): 0x4f9f00
     * @note[short] Windows: 0x331f70
     * @note[short] iOS: 0x39aa58
     * @note[short] Android
     */
    void tryJump(float dt);

    /**
     * @note[short] MacOS (ARM): 0x452fa4
     * @note[short] MacOS (Intel): 0x4fa180
     * @note[short] Windows: 0x331b50
     * @note[short] iOS: 0x39acac
     * @note[short] Android
     */
    void updateColor(float dt);

    /**
     * @note[short] MacOS (ARM): 0x453750
     * @note[short] MacOS (Intel): 0x4fab60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b32c
     * @note[short] Android
     */
    void updateColors();
    bool m_videoOptionsOpen;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint m_realBackgroundPosition;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundWrapPosition;
};
