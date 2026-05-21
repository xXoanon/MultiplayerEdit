#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"
#include "HSVWidgetDelegate.hpp"

class SetupAreaTintTriggerPopup : public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTintTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTintTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x40af10
     * @note[short] iOS: 0x3a8c0
     * @note[short] Android: Out of line
     */
     SetupAreaTintTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x435000
     * @note[short] MacOS (Intel): 0x4d7e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37970
     * @note[short] Android
     */
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x435db0
     * @note[short] MacOS (Intel): 0x4d8df0
     * @note[short] Windows: 0x410500
     * @note[short] iOS: 0x3846c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4360a0
     * @note[short] MacOS (Intel): 0x4d9120
     * @note[short] Windows: 0x410810
     * @note[short] iOS: 0x385d8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x435cd0
     * @note[short] MacOS (Intel): 0x4d8d10
     * @note[short] Windows: 0x410340
     * @note[short] iOS: 0x383a4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x435ef4
     * @note[short] MacOS (Intel): 0x4d8fa0
     * @note[short] Windows: 0x410720
     * @note[short] iOS: 0x385ac
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x43519c
     * @note[short] MacOS (Intel): 0x4d80a0
     * @note[short] Windows: 0x40f900
     * @note[short] iOS: 0x379f4
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x435b68
     * @note[short] MacOS (Intel): 0x4d8bd0
     * @note[short] Windows: 0x4106a0
     * @note[short] iOS: 0x38244
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x435c08
     * @note[short] MacOS (Intel): 0x4d8c50
     * @note[short] Windows: 0x410740
     * @note[short] iOS: 0x382dc
     * @note[short] Android
     */
    void updateHSVButton();
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
