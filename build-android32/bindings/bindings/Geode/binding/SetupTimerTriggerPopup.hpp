#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupTimerTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x325b74
     * @note[short] MacOS (Intel): 0x3a0a80
     * @note[short] Windows: 0x461d20
     * @note[short] iOS: 0x2d2d4
     * @note[short] Android
     */
    static SetupTimerTriggerPopup* create(TimerTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x325d00
     * @note[short] MacOS (Intel): 0x3a0cb0
     * @note[short] Windows: 0x461e30
     * @note[short] iOS: 0x2d3b0
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* object, cocos2d::CCArray* objects);
};
