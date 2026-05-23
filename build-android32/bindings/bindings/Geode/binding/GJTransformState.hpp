#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJTransformState {
public:
    static constexpr auto CLASS_NAME = "GJTransformState";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJTransformState();
    float m_scaleX;
    float m_scaleY;
    float m_angleX;
    float m_angleY;
    float m_skewX;
    float m_skewY;
    float m_transformRotation;
    bool m_transformReset;
    float m_transformRotationX;
    float m_transformRotationY;
    cocos2d::CCPoint m_transformPosition;
    cocos2d::CCPoint m_transformSkewX;
    cocos2d::CCPoint m_transformSkewY;
    float m_transformScaleX;
    float m_transformScaleY;
};
