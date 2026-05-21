#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightStrip, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCLightStrip();

    /**
     * @note[short] MacOS (ARM): 0x45baa8
     * @note[short] MacOS (Intel): 0x504040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31118
     * @note[short] Android
     */
    static CCLightStrip* create(float width, float toWidth, float toHeight, float duration, float delay);

    /**
     * @note[short] MacOS (ARM): 0x45c044
     * @note[short] MacOS (Intel): 0x504650
     * @note[short] Windows: 0x43d20
     * @note[short] iOS: 0x3165c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x45c19c
     * @note[short] MacOS (Intel): 0x5047e0
     * @note[short] Windows: 0x43ee0
     * @note[short] iOS: 0x317b4
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* keyword);

    /**
     * @note[short] MacOS (ARM): 0x45bf2c
     * @note[short] MacOS (Intel): 0x504510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31544
     * @note[short] Android
     */
    bool init(float width, float toWidth, float toHeight, float duration, float delay);
    float m_objectWidth;
    float m_toWidth;
    float m_toHeight;
    float m_duration;
    cocos2d::ccColor4B m_color;
    float m_opacity;
    float m_width;
    float m_height;
};
