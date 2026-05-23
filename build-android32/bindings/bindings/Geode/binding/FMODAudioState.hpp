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
#include "FMODSoundTween.hpp"
#include "FMODQueuedMusic.hpp"
#include "FMODSoundState.hpp"

class FMODAudioState {
public:
    static constexpr auto CLASS_NAME = "FMODAudioState";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x52e70
     * @note[short] iOS: 0x127b08
     * @note[short] Android: Out of line
     */
     FMODAudioState();
    float m_interval;
    float m_elapsed;
    gd::map<std::pair<int,int>,FMODSoundTween> m_tweensForEffectChannels;
    gd::map<std::pair<int,int>,FMODSoundTween> m_tweensForEffectGroups;
    gd::map<std::pair<int,int>,FMODSoundTween> m_tweensForMusicChannels;
    gd::unordered_map<int,float> m_volumeForEffectChannels;
    gd::unordered_map<int,float> m_volumeModForEffectChannels;
    gd::unordered_map<int,float> m_pitchForEffectChannels;
    gd::unordered_map<int,float> m_volumeForEffectGroups;
    gd::unordered_map<int,float> m_volumeModForEffectGroups;
    gd::unordered_map<int,float> m_pitchForEffectGroups;
    gd::unordered_map<int,float> m_volumeForMusicChannels;
    gd::unordered_map<int,float> m_volumeModForMusicChannels;
    gd::unordered_map<int,float> m_pitchForMusicChannels;
    gd::unordered_map<int,float> m_intervalForEffects;
    gd::unordered_map<int,FMODQueuedMusic> m_queuedMusicForChannels1;
    gd::unordered_map<int,FMODQueuedMusic> m_queuedMusicForChannels2;
    gd::unordered_map<int,FMODSoundState> m_soundStateForChannels;
    uint64_t m_unkUint64_1;
};
