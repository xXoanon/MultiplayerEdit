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

class SetupTimerControlTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerControlTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerControlTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x326af8
     * @note[short] MacOS (Intel): 0x3a1d50
     * @note[short] Windows: 0x462d00
     * @note[short] iOS: 0x2df34
     * @note[short] Android
     */
    static SetupTimerControlTriggerPopup* create(TimerTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x32705c
     * @note[short] MacOS (Intel): 0x3a23c0
     * @note[short] Windows: 0x4631f0
     * @note[short] iOS: 0x2e36c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x326c80
     * @note[short] MacOS (Intel): 0x3a1f80
     * @note[short] Windows: 0x462e10
     * @note[short] iOS: 0x2e00c
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* object, cocos2d::CCArray* objects);
};
