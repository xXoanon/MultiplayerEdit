#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJValueTween {
public:
    static constexpr auto CLASS_NAME = "GJValueTween";

    /**
     * @note[short] MacOS (ARM): 0xe9dc4
     * @note[short] MacOS (Intel): 0x10dfa0
     * @note[short] Windows: 0x205310
     * @note[short] iOS: 0x1d9bd4
     * @note[short] Android
     */
    void step(float delta);
    float m_fromValue;
    float m_toValue;
    float m_duration;
    float m_deltaTime;
    float m_currentValue;
    int m_easingType;
    float m_easingRate;
    bool m_finished;
    bool m_disabled;
    int m_uniqueID;
    int m_controlID;
};
