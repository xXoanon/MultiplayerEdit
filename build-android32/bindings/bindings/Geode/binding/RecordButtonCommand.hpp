#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class RecordButtonCommand {
public:
    static constexpr auto CLASS_NAME = "RecordButtonCommand";
    PlayerButton m_button;
    bool m_isPush;
    bool m_isPlayer2;
    int m_step;
    int m_unk00c;
};
