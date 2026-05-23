#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "tk_spline.hpp"

class KeyframeObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeObject";

    /**
     * @note[short] MacOS (ARM): 0xe9684
     * @note[short] MacOS (Intel): 0x10d6c0
     * @note[short] Windows: 0x2c0e00
     * @note[short] iOS: 0x213f7c
     * @note[short] Android: Rebinded
     */
    void setupSpline(gd::vector<KeyframeObject*>& objects);
    double m_unk000;
    int m_unk008;
    float m_unk00c;
    bool m_unk010;
    int m_unk014;
    float m_unk018;
    bool m_unk01c;
    bool m_unk01d;
    bool m_unk01e;
    tk_spline m_spline1;
    tk_spline m_spline2;
    double m_unk170;
    double m_unk178;
    int m_unk180;
    int m_unk184;
    cocos2d::CCPoint m_unk188;
    cocos2d::CCPoint m_unk190;
    double m_unk198;
    double m_unk1a0;
    double m_unk1a8;
    double m_unk1b0;
    float m_unk1b8;
};
