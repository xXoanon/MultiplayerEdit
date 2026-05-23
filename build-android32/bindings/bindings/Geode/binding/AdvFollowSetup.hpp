#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AdvFollowSetup {
public:
    static constexpr auto CLASS_NAME = "AdvFollowSetup";
    gd::unordered_set<int> m_centerIDs;
    gd::unordered_set<int> m_groupIDs;
    gd::unordered_set<int> m_controlIDs;
    int m_delay;
};
