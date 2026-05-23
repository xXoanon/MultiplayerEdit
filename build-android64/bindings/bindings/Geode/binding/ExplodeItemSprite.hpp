#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExplodeItemSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ExplodeItemSprite();

    /**
     * @note[short] MacOS (ARM): 0x1bfdf4
     * @note[short] MacOS (Intel): 0x2145f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5d310
     * @note[short] Android
     */
    static ExplodeItemSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x1c0188
     * @note[short] MacOS (Intel): 0x214a10
     * @note[short] Windows: 0x385330
     * @note[short] iOS: 0x5d674
     * @note[short] Android
     */
    virtual bool init();
    float m_xVelocity;
    float m_yVelocity;
    float m_timeRemaining;
    float m_fadeOutTime;
    float m_rotVelocity;
    cocos2d::CCParticleSystemQuad* m_particles;
};
