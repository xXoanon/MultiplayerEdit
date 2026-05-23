#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EnterEffectAnimValue {
public:
    static constexpr auto CLASS_NAME = "EnterEffectAnimValue";
    int m_key;
    float m_value;
    float m_distance;
    float m_duration;
    float m_elapsed;
    EasingType m_easingType;
    float m_easingRate;
    int m_easingBuffer;
};
