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

class FMODMusic {
public:
    static constexpr auto CLASS_NAME = "FMODMusic";
    int m_channelID;
    FMOD::Sound* m_sound;
    gd::string m_filePath;
    bool m_ogg;
    bool m_dontReset;
};
