#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CAState {
public:
    static constexpr auto CLASS_NAME = "CAState";
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    cocos2d::ccColor3B m_color;
    bool m_paused;
    bool m_blending;
    bool m_copyOpacity;
    bool m_legacyHSV;
    int m_playerColor;
    int m_colorID;
    int m_copyID;
    int m_uniqueID;
    float m_duration;
    float m_fromOpacity;
    float m_toOpacity;
    float m_deltaTime;
    float m_currentOpacity;
    cocos2d::ccHSVValue m_copyHSV;
};
