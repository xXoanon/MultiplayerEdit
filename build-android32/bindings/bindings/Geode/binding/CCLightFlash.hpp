#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightFlash : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightFlash";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightFlash, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCLightFlash();

    /**
     * @note[short] MacOS (ARM): 0x45be74
     * @note[short] MacOS (Intel): 0x504440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x314f0
     * @note[short] Android: Rebinded
     */
     ~CCLightFlash();

    /**
     * @note[short] MacOS (ARM): 0x45b6ac
     * @note[short] MacOS (Intel): 0x503b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30da8
     * @note[short] Android
     */
    static CCLightFlash* create();

    /**
     * @note[short] MacOS (ARM): 0x45b710
     * @note[short] MacOS (Intel): 0x503b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e0c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x45be34
     * @note[short] MacOS (Intel): 0x504400
     * @note[short] Windows: 0x43cf0
     * @note[short] iOS: 0x314b0
     * @note[short] Android
     */
    void cleanupFlash();

    /**
     * @note[short] MacOS (ARM): 0x45bc70
     * @note[short] MacOS (Intel): 0x504220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312f4
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS (ARM): 0x45b718
     * @note[short] MacOS (Intel): 0x503ba0
     * @note[short] Windows: 0x43410
     * @note[short] iOS: 0x30e14
     * @note[short] Android
     */
    void playEffect(cocos2d::CCPoint pos, cocos2d::ccColor3B col, float startWidth, float startWidthVariation, float endWidth, float endWidthVariation, float endHeight, float stripDuration, float stripDurationVariance, float stripInterval, float stripStartDelay, float stripStartDelayVariation, float stripRotation, float stripRotationVariation, float stripOpacity, float stripOpacityVariation, int stripCount, bool circleRotation, bool fadeIn, float delay);

    /**
     * @note[short] MacOS (ARM): 0x45bdd8
     * @note[short] MacOS (Intel): 0x5043a0
     * @note[short] Windows: 0x43c90
     * @note[short] iOS: 0x31454
     * @note[short] Android
     */
    void removeLights();

    /**
     * @note[short] MacOS (ARM): 0x45bb5c
     * @note[short] MacOS (Intel): 0x5040f0
     * @note[short] Windows: 0x43950
     * @note[short] iOS: 0x311cc
     * @note[short] Android
     */
    void showFlash();
    cocos2d::CCArray* m_lightStripArray;
    cocos2d::CCLayerColor* m_layerColor;
    bool m_dontFadeOut;
    cocos2d::CCNode* m_mainLayer;
    int m_layerColorZOrder;
};
