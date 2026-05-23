#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SFXTriggerInstance {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerInstance";
    int m_groupID1;
    int m_groupID2;
    int m_controlID;
    SFXTriggerGameObject* m_sfxTriggerGameObject;
};
