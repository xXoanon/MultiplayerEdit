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

class SetupResetTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupResetTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupResetTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4ca390
     * @note[short] MacOS (Intel): 0x57db40
     * @note[short] Windows: 0x46a640
     * @note[short] iOS: 0x40b55c
     * @note[short] Android
     */
    static SetupResetTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4ca51c
     * @note[short] MacOS (Intel): 0x57dd70
     * @note[short] Windows: 0x46a750
     * @note[short] iOS: 0x40b638
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
