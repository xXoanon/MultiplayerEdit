#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UIButtonConfig {
public:
    static constexpr auto CLASS_NAME = "UIButtonConfig";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x17a9f0
     * @note[short] iOS: 0x31b24c
     * @note[short] Android: Out of line
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x17aa60
     * @note[short] iOS: 0x31b2c4
     * @note[short] Android: Out of line
     */
    void resetOneBtn();
    int m_width;
    int m_height;
    float m_deadzone;
    float m_scale;
    int m_opacity;
    float m_radius;
    bool m_modeB;
    bool m_snap;
    cocos2d::CCPoint m_position;
    bool m_oneButton;
    bool m_player2;
    bool m_split;
};
