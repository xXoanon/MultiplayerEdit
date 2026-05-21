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

class FMODQueuedEffect {
public:
    static constexpr auto CLASS_NAME = "FMODQueuedEffect";
    gd::string m_filePath;
    float m_speed;
    float m_unk024;
    float m_volume;
    float m_pitch;
    bool m_fastFourierTransform;
    bool m_reverb;
    int m_start;
    int m_end;
    int m_fadeIn;
    int m_fadeOut;
    bool m_loop;
    int m_effectID;
    bool m_override;
    bool m_unk04d;
    int m_channelID;
    FMOD::Sound* m_sound;
    int m_uniqueID;
    int m_minInterval;
    int m_group;
};
