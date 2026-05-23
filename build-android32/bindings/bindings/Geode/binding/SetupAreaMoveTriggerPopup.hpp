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

class SetupAreaMoveTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaMoveTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaMoveTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x40aba0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaMoveTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x42fe9c
     * @note[short] MacOS (Intel): 0x4d1ab0
     * @note[short] Windows: 0x40b400
     * @note[short] iOS: 0x33ff0
     * @note[short] Android: Rebinded
     */
     ~SetupAreaMoveTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x430174
     * @note[short] MacOS (Intel): 0x4d1f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340b8
     * @note[short] Android
     */
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x432b14
     * @note[short] MacOS (Intel): 0x4d4e40
     * @note[short] Windows: 0x40e0b0
     * @note[short] iOS: 0x3635c
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x4326a8
     * @note[short] MacOS (Intel): 0x4d49d0
     * @note[short] Windows: 0x40d9a0
     * @note[short] iOS: 0x36004
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x432ae0
     * @note[short] MacOS (Intel): 0x4d4e10
     * @note[short] Windows: 0x40e080
     * @note[short] iOS: 0x36328
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4329bc
     * @note[short] MacOS (Intel): 0x4d4ce0
     * @note[short] Windows: 0x40df00
     * @note[short] iOS: 0x36218
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x432a58
     * @note[short] MacOS (Intel): 0x4d4da0
     * @note[short] Windows: 0x40e020
     * @note[short] iOS: 0x362a0
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x432aac
     * @note[short] MacOS (Intel): 0x4d4de0
     * @note[short] Windows: 0x40e050
     * @note[short] iOS: 0x362f4
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x431004
     * @note[short] MacOS (Intel): 0x4d3070
     * @note[short] Windows: 0x40c370
     * @note[short] iOS: 0x34d5c
     * @note[short] Android
     */
    void addAreaDefaultControls(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x432498
     * @note[short] MacOS (Intel): 0x4d47e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void getModeValues(int mode, int& direction, bool& inbound, bool& twoDirections);

    /**
     * @note[short] MacOS (ARM): 0x430300
     * @note[short] MacOS (Intel): 0x4d2140
     * @note[short] Windows: 0x40b4d0
     * @note[short] iOS: 0x34198
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4324ec
     * @note[short] MacOS (Intel): 0x4d4840
     * @note[short] Windows: 0x40dda0
     * @note[short] iOS: 0x35e70
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43232c
     * @note[short] MacOS (Intel): 0x4d4660
     * @note[short] Windows: 0x40d9f0
     * @note[short] iOS: 0x35d6c
     * @note[short] Android
     */
    void onNextFreeEffectID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4323c8
     * @note[short] MacOS (Intel): 0x4d4710
     * @note[short] Windows: 0x40daa0
     * @note[short] iOS: 0x35de0
     * @note[short] Android
     */
    void onSpecialTarget(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4326fc
     * @note[short] MacOS (Intel): 0x4d4a20
     * @note[short] Windows: 0x40db40
     * @note[short] iOS: 0x36058
     * @note[short] Android
     */
    void updateEnterTargetIDState();
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCArray* m_targetButtons;
};
