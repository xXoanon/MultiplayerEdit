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

class SetupCameraRotatePopup2 : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraRotatePopup2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraRotatePopup2, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x41e9b8
     * @note[short] MacOS (Intel): 0x4be940
     * @note[short] Windows: 0x4179f0
     * @note[short] iOS: 0x4c220
     * @note[short] Android
     */
    static SetupCameraRotatePopup2* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41eb44
     * @note[short] MacOS (Intel): 0x4beb70
     * @note[short] Windows: 0x417b00
     * @note[short] iOS: 0x4c2fc
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
