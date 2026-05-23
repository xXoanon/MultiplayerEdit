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
#include "HSVWidgetDelegate.hpp"

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x401728
     * @note[short] Android: Out of line
     */
     SetupEnterEffectPopup();

    /**
     * @note[short] MacOS (ARM): 0x36a020
     * @note[short] MacOS (Intel): 0x3f0800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ff3c0
     * @note[short] Android
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x36c5a0
     * @note[short] MacOS (Intel): 0x3f3510
     * @note[short] Windows: 0x420250
     * @note[short] iOS: 0x40133c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x36c974
     * @note[short] MacOS (Intel): 0x3f3940
     * @note[short] Windows: 0x420870
     * @note[short] iOS: 0x401590
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36caf4
     * @note[short] MacOS (Intel): 0x3f3ae0
     * @note[short] Windows: 0x40e0b0
     * @note[short] iOS: 0x4016ec
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x36cac0
     * @note[short] MacOS (Intel): 0x3f3ab0
     * @note[short] Windows: 0x40e080
     * @note[short] iOS: 0x4016b8
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x36c710
     * @note[short] MacOS (Intel): 0x3f3700
     * @note[short] Windows: 0x420420
     * @note[short] iOS: 0x4014a8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x36ca38
     * @note[short] MacOS (Intel): 0x3f3a40
     * @note[short] Windows: 0x40e020
     * @note[short] iOS: 0x401630
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x36ca8c
     * @note[short] MacOS (Intel): 0x3f3a80
     * @note[short] Windows: 0x40e050
     * @note[short] iOS: 0x401684
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x36c7c8
     * @note[short] MacOS (Intel): 0x3f37c0
     * @note[short] Windows: 0x420780
     * @note[short] iOS: 0x401564
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x36a1cc
     * @note[short] MacOS (Intel): 0x3f0a70
     * @note[short] Windows: 0x41e240
     * @note[short] iOS: 0x3ff44c
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x36c4cc
     * @note[short] MacOS (Intel): 0x3f3440
     * @note[short] Windows: 0x420620
     * @note[short] iOS: 0x401270
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36c22c
     * @note[short] MacOS (Intel): 0x3f31a0
     * @note[short] Windows: 0x420700
     * @note[short] iOS: 0x401028
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36c394
     * @note[short] MacOS (Intel): 0x3f32e0
     * @note[short] Windows: 0x420570
     * @note[short] iOS: 0x401188
     * @note[short] Android
     */
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36c430
     * @note[short] MacOS (Intel): 0x3f3390
     * @note[short] Windows: 0x40d9f0
     * @note[short] iOS: 0x4011fc
     * @note[short] Android
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36c2cc
     * @note[short] MacOS (Intel): 0x3f3220
     * @note[short] Windows: 0x4207a0
     * @note[short] iOS: 0x4010c0
     * @note[short] Android
     */
    void updateHSVButton();
    int m_objectID;
    CCMenuItemToggler* m_enterOnlyToggler;
    CCMenuItemToggler* m_exitOnlyToggler;
    int m_enterType;
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
