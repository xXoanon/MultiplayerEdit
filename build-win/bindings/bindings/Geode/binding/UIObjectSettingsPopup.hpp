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

class UIObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4c96f0
     * @note[short] MacOS (Intel): 0x57cc30
     * @note[short] Windows: 0x469880
     * @note[short] iOS: 0x40aa6c
     * @note[short] Android
     */
    static UIObjectSettingsPopup* create(UISettingsGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4ca2bc
     * @note[short] MacOS (Intel): 0x57da70
     * @note[short] Windows: 0x46a4d0
     * @note[short] iOS: 0x40b488
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c9878
     * @note[short] MacOS (Intel): 0x57ce60
     * @note[short] Windows: 0x469990
     * @note[short] iOS: 0x40ab44
     * @note[short] Android
     */
    bool init(UISettingsGameObject* object, cocos2d::CCArray* objects);
};
