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

class SetupRandTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x50fb14
     * @note[short] MacOS (Intel): 0x5e5130
     * @note[short] Windows: 0x43f9f0
     * @note[short] iOS: 0x1c9b98
     * @note[short] Android
     */
    static SetupRandTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x510eb8
     * @note[short] MacOS (Intel): 0x5e6660
     * @note[short] Windows: 0x4408b0
     * @note[short] iOS: 0x1cab34
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5113b4
     * @note[short] MacOS (Intel): 0x5e6c40
     * @note[short] Windows: 0x441390
     * @note[short] iOS: 0x1caf30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x511140
     * @note[short] MacOS (Intel): 0x5e6950
     * @note[short] Windows: 0x440bb0
     * @note[short] iOS: 0x1cadac
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x50fcb0
     * @note[short] MacOS (Intel): 0x5e5380
     * @note[short] Windows: 0x43fb30
     * @note[short] iOS: 0x1c9c88
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5108e4
     * @note[short] MacOS (Intel): 0x5e6090
     * @note[short] Windows: 0x440b60
     * @note[short] iOS: 0x1ca800
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51083c
     * @note[short] MacOS (Intel): 0x5e5fd0
     * @note[short] Windows: 0x440b10
     * @note[short] iOS: 0x1ca7ac
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x510cbc
     * @note[short] MacOS (Intel): 0x5e6450
     * @note[short] Windows: 0x440a00
     * @note[short] iOS: 0x1caa14
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x510fc8
     * @note[short] MacOS (Intel): 0x5e6790
     * @note[short] Windows: 0x272a00
     * @note[short] iOS: 0x1cac3c
     * @note[short] Android
     */
    void updateChance();

    /**
     * @note[short] MacOS (ARM): 0x510d54
     * @note[short] MacOS (Intel): 0x5e6510
     * @note[short] Windows: 0x440a40
     * @note[short] iOS: 0x1caa5c
     * @note[short] Android
     */
    void updateChanceLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x511038
     * @note[short] MacOS (Intel): 0x5e6810
     * @note[short] Windows: 0x4411f0
     * @note[short] iOS: 0x1caca4
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x5110bc
     * @note[short] MacOS (Intel): 0x5e68b0
     * @note[short] Windows: 0x4412c0
     * @note[short] iOS: 0x1cad28
     * @note[short] Android
     */
    void updateTargetID2();

    /**
     * @note[short] MacOS (ARM): 0x51098c
     * @note[short] MacOS (Intel): 0x5e6150
     * @note[short] Windows: 0x440e90
     * @note[short] iOS: 0x1ca854
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x510b24
     * @note[short] MacOS (Intel): 0x5e62d0
     * @note[short] Windows: 0x441040
     * @note[short] iOS: 0x1ca934
     * @note[short] Android
     */
    void updateTextInputLabel2();
    CCTextInputNode* m_chanceInput;
    Slider* m_chanceSlider;
    float m_chancePercent;
    CCTextInputNode* m_groupID1Input;
    CCTextInputNode* m_groupID2Input;
    int m_groupID1;
    int m_groupID2;
};
