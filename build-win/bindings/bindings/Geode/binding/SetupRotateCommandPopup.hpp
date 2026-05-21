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

class SetupRotateCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4aec
     * @note[short] MacOS (Intel): 0x50a0
     * @note[short] Windows: 0x2a7c80
     * @note[short] iOS: 0x405d94
     * @note[short] Android
     */
    static SetupRotateCommandPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d68
     * @note[short] MacOS (Intel): 0x67a0
     * @note[short] Windows: 0x2a8f60
     * @note[short] iOS: 0x406cd4
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5d6c
     * @note[short] MacOS (Intel): 0x67b0
     * @note[short] Windows: 0x2a8f70
     * @note[short] iOS: 0x406cd8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5d40
     * @note[short] MacOS (Intel): 0x6750
     * @note[short] Windows: 0x2a8f20
     * @note[short] iOS: 0x406cac
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5d64
     * @note[short] MacOS (Intel): 0x6790
     * @note[short] Windows: 0x2a8f50
     * @note[short] iOS: 0x406cd0
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5ffc
     * @note[short] MacOS (Intel): 0x6af0
     * @note[short] Windows: 0xc3e30
     * @note[short] iOS: 0x406dec
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c74
     * @note[short] MacOS (Intel): 0x52d0
     * @note[short] Windows: 0x2a7d90
     * @note[short] iOS: 0x405e6c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5c64
     * @note[short] MacOS (Intel): 0x6650
     * @note[short] Windows: 0x2a92d0
     * @note[short] iOS: 0x406bd0
     * @note[short] Android
     */
    void onInfiniteDuration(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5c70
     * @note[short] MacOS (Intel): 0x6670
     * @note[short] Windows: 0x2a91f0
     * @note[short] iOS: 0x406bdc
     * @note[short] Android
     */
    void updateControlVisibility();
};
