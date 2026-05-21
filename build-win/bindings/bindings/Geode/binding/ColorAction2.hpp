#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorAction2 {
public:
    static constexpr auto CLASS_NAME = "ColorAction2";

    /**
     * @note[short] MacOS (ARM): 0x447864
     * @note[short] MacOS (Intel): 0x4ed610
     * @note[short] Android: Rebinded
     */
     ColorAction2(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x447a1c
     * @note[short] MacOS (Intel): 0x4ed810
     * @note[short] Android
     */
    void resetAction();

    /**
     * @note[short] MacOS (ARM): 0x44791c
     * @note[short] MacOS (Intel): 0x4ed710
     * @note[short] Android
     */
    void step(float dt);

    /**
     * @note[short] MacOS (ARM): 0x447a28
     * @note[short] MacOS (Intel): 0x4ed830
     * @note[short] Android
     */
    void updateCustomColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);
    bool m_stepFinished;
    bool m_paused;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_copyColorCalculated;
    bool m_copyOpacity;
    bool m_copyColorLoop;
    int m_uniqueID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    float m_actionDelay;
    float m_stepInterval;
};
