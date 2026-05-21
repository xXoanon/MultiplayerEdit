#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"

class SetupAreaTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x43640c
     * @note[short] MacOS (Intel): 0x4d9640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x386a4
     * @note[short] Android
     */
    static SetupAreaTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x436598
     * @note[short] MacOS (Intel): 0x4d9880
     * @note[short] Windows: 0x4108c0
     * @note[short] iOS: 0x38784
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
