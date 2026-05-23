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

class SetupAreaRotateTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaRotateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaRotateTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaRotateTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x433a48
     * @note[short] MacOS (Intel): 0x4d6270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36bd0
     * @note[short] Android
     */
    static SetupAreaRotateTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x433bd4
     * @note[short] MacOS (Intel): 0x4d64b0
     * @note[short] Windows: 0x40e9a0
     * @note[short] iOS: 0x36cb0
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
