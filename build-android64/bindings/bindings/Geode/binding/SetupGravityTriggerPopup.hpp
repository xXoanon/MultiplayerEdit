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

class SetupGravityTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGravityTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4244d0
     * @note[short] MacOS (Intel): 0x4c4f00
     * @note[short] Windows: 0x429140
     * @note[short] iOS: 0x4217a8
     * @note[short] Android
     */
    static SetupGravityTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x424ab8
     * @note[short] MacOS (Intel): 0x4c55d0
     * @note[short] Windows: 0x4296d0
     * @note[short] iOS: 0x421c4c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x424658
     * @note[short] MacOS (Intel): 0x4c5130
     * @note[short] Windows: 0x429250
     * @note[short] iOS: 0x421880
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
