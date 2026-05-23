#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EventTriggerInstance {
public:
    static constexpr auto CLASS_NAME = "EventTriggerInstance";
    int m_targetID;
    int m_uniqueID;
    int m_controlID;
    bool m_inactive;
    gd::vector<int> m_remapKeys;
};
