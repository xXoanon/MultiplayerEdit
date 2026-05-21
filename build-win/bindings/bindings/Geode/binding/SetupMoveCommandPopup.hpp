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

class SetupMoveCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMoveCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMoveCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x52dbb0
     * @note[short] MacOS (Intel): 0x607250
     * @note[short] Windows: 0x280820
     * @note[short] iOS: 0x273808
     * @note[short] Android
     */
    static SetupMoveCommandPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x52f1c8
     * @note[short] MacOS (Intel): 0x608ca0
     * @note[short] Windows: 0x281e00
     * @note[short] iOS: 0x274b38
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x52f1a0
     * @note[short] MacOS (Intel): 0x608c70
     * @note[short] Windows: 0x281dd0
     * @note[short] iOS: 0x274b10
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x52f1f8
     * @note[short] MacOS (Intel): 0x608cd0
     * @note[short] Windows: 0x281e30
     * @note[short] iOS: 0x274b68
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x52f0ec
     * @note[short] MacOS (Intel): 0x608b90
     * @note[short] Windows: 0x281d10
     * @note[short] iOS: 0x274a5c
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x52f130
     * @note[short] MacOS (Intel): 0x608be0
     * @note[short] Windows: 0x281d60
     * @note[short] iOS: 0x274aa0
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x52f3c0
     * @note[short] MacOS (Intel): 0x608ee0
     * @note[short] Windows: 0x2824a0
     * @note[short] iOS: 0x274d28
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x52dd3c
     * @note[short] MacOS (Intel): 0x607490
     * @note[short] Windows: 0x280940
     * @note[short] iOS: 0x2738e4
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x52ef40
     * @note[short] MacOS (Intel): 0x6089e0
     * @note[short] Windows: 0x2822e0
     * @note[short] iOS: 0x2748b0
     * @note[short] Android
     */
    void updateControlVisibility();
    bool m_smallStep;
};
