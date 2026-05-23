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

class SetupPickupTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPickupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPickupTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4c284
     * @note[short] MacOS (Intel): 0x58920
     * @note[short] Windows: 0x436a10
     * @note[short] iOS: 0x43264
     * @note[short] Android
     */
    static SetupPickupTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4cb3c
     * @note[short] MacOS (Intel): 0x59370
     * @note[short] Windows: 0x437240
     * @note[short] iOS: 0x43914
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4cbd8
     * @note[short] MacOS (Intel): 0x59420
     * @note[short] Windows: 0x437360
     * @note[short] iOS: 0x43988
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c40c
     * @note[short] MacOS (Intel): 0x58b50
     * @note[short] Windows: 0x436b20
     * @note[short] iOS: 0x4333c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4cadc
     * @note[short] MacOS (Intel): 0x59300
     * @note[short] Windows: 0x4372f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateState();
};
