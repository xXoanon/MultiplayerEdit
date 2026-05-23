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

class SetupGameplayOffsetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGameplayOffsetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGameplayOffsetPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupGameplayOffsetPopup();

    /**
     * @note[short] MacOS (ARM): 0x6a0314
     * @note[short] MacOS (Intel): 0x7985f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19efa4
     * @note[short] Android
     */
    static SetupGameplayOffsetPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6a0c8c
     * @note[short] MacOS (Intel): 0x799100
     * @note[short] Windows: 0x442940
     * @note[short] iOS: 0x19f790
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x6a0c74
     * @note[short] MacOS (Intel): 0x7990e0
     * @note[short] Windows: 0x442920
     * @note[short] iOS: 0x19f778
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x6a0c24
     * @note[short] MacOS (Intel): 0x799090
     * @note[short] Windows: 0x4428d0
     * @note[short] iOS: 0x19f728
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x6a0c5c
     * @note[short] MacOS (Intel): 0x7990c0
     * @note[short] Windows: 0x442900
     * @note[short] iOS: 0x19f760
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x6a0b90
     * @note[short] MacOS (Intel): 0x798ff0
     * @note[short] Windows: 0x442820
     * @note[short] iOS: 0x19f6a4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a049c
     * @note[short] MacOS (Intel): 0x798820
     * @note[short] Windows: 0x442040
     * @note[short] iOS: 0x19f07c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6a0b4c
     * @note[short] MacOS (Intel): 0x798fb0
     * @note[short] Windows: 0x442770
     * @note[short] iOS: 0x19f660
     * @note[short] Android
     */
    void onDefaultValues(cocos2d::CCObject* sender);
};
