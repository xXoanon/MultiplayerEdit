#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>

class FMODSoundTween {
public:
    static constexpr auto CLASS_NAME = "FMODSoundTween";
    float m_interval;
    float m_duration;
    float m_start;
    float m_end;
    float m_value;
    bool m_finished;
};
