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

class SetupStopTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStopTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStopTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4d1b50
     * @note[short] MacOS (Intel): 0x585ff0
     * @note[short] Windows: 0x4724f0
     * @note[short] iOS: 0x4113b0
     * @note[short] Android
     */
    static SetupStopTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d22b4
     * @note[short] MacOS (Intel): 0x5868a0
     * @note[short] Windows: 0x472d90
     * @note[short] iOS: 0x411a44
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d223c
     * @note[short] MacOS (Intel): 0x586830
     * @note[short] Windows: 0x472ce0
     * @note[short] iOS: 0x4119cc
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d1cd8
     * @note[short] MacOS (Intel): 0x586220
     * @note[short] Windows: 0x472600
     * @note[short] iOS: 0x411488
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
