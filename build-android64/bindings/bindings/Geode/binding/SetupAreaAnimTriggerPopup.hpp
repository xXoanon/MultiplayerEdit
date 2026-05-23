#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaTintTriggerPopup.hpp"

class SetupAreaAnimTriggerPopup : public SetupAreaTintTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaAnimTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaAnimTriggerPopup, SetupAreaTintTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaAnimTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x436d74
     * @note[short] MacOS (Intel): 0x4da270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38c38
     * @note[short] Android
     */
    static SetupAreaAnimTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x43898c
     * @note[short] MacOS (Intel): 0x4dc240
     * @note[short] Windows: 0x4127c0
     * @note[short] iOS: 0x3a6d8
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x438b48
     * @note[short] MacOS (Intel): 0x4dc3e0
     * @note[short] Windows: 0x412990
     * @note[short] iOS: 0x3a844
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4386e0
     * @note[short] MacOS (Intel): 0x4dbfe0
     * @note[short] Windows: 0x4125d0
     * @note[short] iOS: 0x3a444
     * @note[short] Android: Rebinded
     */
    void createValueControlAdvancedAnim(int property, gd::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float min, float max, int page, int group, GJInputStyle inputStyle);

    /**
     * @note[short] MacOS (ARM): 0x436f18
     * @note[short] MacOS (Intel): 0x4da4d0
     * @note[short] Windows: 0x410e60
     * @note[short] iOS: 0x38d20
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4388e0
     * @note[short] MacOS (Intel): 0x4dc1c0
     * @note[short] Windows: 0x412920
     * @note[short] iOS: 0x3a640
     * @note[short] Android
     */
    void onDeactivateAnimValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x438ad4
     * @note[short] MacOS (Intel): 0x4dc370
     * @note[short] Windows: 0x4128a0
     * @note[short] iOS: 0x3a7d0
     * @note[short] Android
     */
    void updateTargetIDLabel();
};
