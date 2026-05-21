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

class SetupZoomTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupZoomTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupZoomTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x2aee48
     * @note[short] MacOS (Intel): 0x3210e0
     * @note[short] Windows: 0x47e050
     * @note[short] iOS: 0x1b8358
     * @note[short] Android
     */
    static SetupZoomTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2af368
     * @note[short] MacOS (Intel): 0x321740
     * @note[short] Windows: 0x28f240
     * @note[short] iOS: 0x1b8744
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2af36c
     * @note[short] MacOS (Intel): 0x321750
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x1b8748
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2aefd0
     * @note[short] MacOS (Intel): 0x321310
     * @note[short] Windows: 0x47e160
     * @note[short] iOS: 0x1b8430
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
