#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SoundStateContainer {
public:
    static constexpr auto CLASS_NAME = "SoundStateContainer";
    int m_fadePointCount;
    std::array<float, 4> m_fadePointVolumes;
    std::array<uint64_t, 4> m_fadePointOffsets;
    uint64_t m_currentOffset;
    int m_loopStartMs;
    int m_loopEndMs;
    int m_currentMs;
    uint64_t m_playStartOffset;
    uint64_t m_playEndOffset;
    int m_usePlayOffsets;
};
