#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x221a8c
     * @note[short] MacOS (Intel): 0x27fcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x274e28
     * @note[short] Android: Rebinded
     */
     ~ShareLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x221cf4
     * @note[short] MacOS (Intel): 0x280040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x274ed8
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x22379c
     * @note[short] MacOS (Intel): 0x2818d0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x2763d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x223350
     * @note[short] MacOS (Intel): 0x281410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276014
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x221df8
     * @note[short] MacOS (Intel): 0x280190
     * @note[short] Windows: 0x48eec0
     * @note[short] iOS: 0x274f94
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2230dc
     * @note[short] MacOS (Intel): 0x2811f0
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x275e24
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223310
     * @note[short] MacOS (Intel): 0x2813d0
     * @note[short] Windows: 0x490120
     * @note[short] iOS: 0x275fd4
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223118
     * @note[short] MacOS (Intel): 0x281220
     * @note[short] Windows: 0x490270
     * @note[short] iOS: 0x275e60
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223418
     * @note[short] MacOS (Intel): 0x2814e0
     * @note[short] Windows: 0x48ff90
     * @note[short] iOS: 0x2760dc
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2229d8
     * @note[short] MacOS (Intel): 0x280e70
     * @note[short] Windows: 0x48fb80
     * @note[short] iOS: 0x275b48
     * @note[short] Android
     */
    void setupStars();
    GJGameLevel* m_level;
    int m_starsRequested;
    cocos2d::CCArray* m_starButtons;
    cocos2d::CCSprite* m_difficultySprite;
};
