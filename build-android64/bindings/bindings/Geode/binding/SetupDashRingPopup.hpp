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

class SetupDashRingPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupDashRingPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupDashRingPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupDashRingPopup();

    /**
     * @note[short] MacOS (ARM): 0x4d2760
     * @note[short] MacOS (Intel): 0x586e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x411de8
     * @note[short] Android
     */
    static SetupDashRingPopup* create(DashRingObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d28ec
     * @note[short] MacOS (Intel): 0x587060
     * @note[short] Windows: 0x4731f0
     * @note[short] iOS: 0x411ec4
     * @note[short] Android
     */
    bool init(DashRingObject* object, cocos2d::CCArray* objects);
};
