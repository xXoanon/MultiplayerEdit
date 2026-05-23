#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"

class SetupSFXEditPopup : public SetupAudioTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSFXEditPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXEditPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x41b1cc
     * @note[short] MacOS (Intel): 0x4bacc0
     * @note[short] Windows: 0x449410
     * @note[short] iOS: 0x181130
     * @note[short] Android
     */
    static SetupSFXEditPopup* create(SFXTriggerGameObject* object, cocos2d::CCArray* objects, bool songTrigger);

    /**
     * @note[short] MacOS (ARM): 0x41b360
     * @note[short] MacOS (Intel): 0x4baf00
     * @note[short] Windows: 0x449530
     * @note[short] iOS: 0x181214
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* object, cocos2d::CCArray* objects, bool songTrigger);
};
