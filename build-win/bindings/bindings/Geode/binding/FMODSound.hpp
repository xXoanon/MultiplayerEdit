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

class FMODSound {
public:
    static constexpr auto CLASS_NAME = "FMODSound";
    FMOD::Sound* m_sound;
    gd::string m_filePath;
    int m_length;
    int m_playCount;
    int m_playIndex;
    bool m_preloaded;
};
