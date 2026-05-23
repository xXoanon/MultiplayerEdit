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

class FMODQueuedMusic {
public:
    static constexpr auto CLASS_NAME = "FMODQueuedMusic";
    gd::string m_filePath;
    float m_pitch;
    float m_unkFloat2;
    float m_volume;
    int m_start;
    int m_end;
    int m_fadeIn;
    int m_fadeOut;
    bool m_loop;
    int m_musicID;
    bool m_stopMusic;
    int m_channelID;
    bool m_noPrepare;
    int m_queuedStatus;
    FMOD::Sound* m_sound;
    bool m_dontReset;
};
