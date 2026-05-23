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

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x45fed8
     * @note[short] MacOS (Intel): 0x508410
     * @note[short] Windows: 0x427160
     * @note[short] iOS: 0x2f1910
     * @note[short] Android
     */
    static SetupMGTrigger* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x461744
     * @note[short] MacOS (Intel): 0x509dc0
     * @note[short] Windows: 0x428250
     * @note[short] iOS: 0x2f2d74
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x461ebc
     * @note[short] MacOS (Intel): 0x50a690
     * @note[short] Windows: 0x428940
     * @note[short] iOS: 0x2f33e4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x461cbc
     * @note[short] MacOS (Intel): 0x50a430
     * @note[short] Windows: 0x4285b0
     * @note[short] iOS: 0x2f3224
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4619d8
     * @note[short] MacOS (Intel): 0x50a0f0
     * @note[short] Windows: 0x416ac0
     * @note[short] iOS: 0x2f2fbc
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x460064
     * @note[short] MacOS (Intel): 0x508650
     * @note[short] Windows: 0x427280
     * @note[short] iOS: 0x2f19ec
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4613c0
     * @note[short] MacOS (Intel): 0x509a40
     * @note[short] Windows: 0x416e80
     * @note[short] iOS: 0x2f2b24
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4610cc
     * @note[short] MacOS (Intel): 0x5097a0
     * @note[short] Windows: 0x4169f0
     * @note[short] iOS: 0x2f28e8
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4619b0
     * @note[short] MacOS (Intel): 0x50a0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int posFromSliderValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x460ed8
     * @note[short] MacOS (Intel): 0x5095b0
     * @note[short] Windows: 0x271d20
     * @note[short] iOS: 0x2f27d0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4614d0
     * @note[short] MacOS (Intel): 0x509b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float sliderValueFromPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x461478
     * @note[short] MacOS (Intel): 0x509b00
     * @note[short] Windows: 0x4284b0
     * @note[short] iOS: 0x2f2b88
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x461320
     * @note[short] MacOS (Intel): 0x509990
     * @note[short] Windows: 0x416d70
     * @note[short] iOS: 0x2f2a84
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x461b74
     * @note[short] MacOS (Intel): 0x50a2c0
     * @note[short] Windows: 0x272a00
     * @note[short] iOS: 0x2f30f4
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x460f68
     * @note[short] MacOS (Intel): 0x509650
     * @note[short] Windows: 0x271de0
     * @note[short] iOS: 0x2f2810
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x461654
     * @note[short] MacOS (Intel): 0x509d00
     * @note[short] Windows: 0x416f40
     * @note[short] iOS: 0x2f2c98
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x4611d0
     * @note[short] MacOS (Intel): 0x509860
     * @note[short] Windows: 0x416b90
     * @note[short] iOS: 0x2f29c4
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x461b04
     * @note[short] MacOS (Intel): 0x50a240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f308c
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] MacOS (ARM): 0x461a8c
     * @note[short] MacOS (Intel): 0x50a1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f301c
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] MacOS (ARM): 0x461be4
     * @note[short] MacOS (Intel): 0x50a340
     * @note[short] Windows: 0x428850
     * @note[short] iOS: 0x2f315c
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] MacOS (ARM): 0x461524
     * @note[short] MacOS (Intel): 0x509bc0
     * @note[short] Windows: 0x428500
     * @note[short] iOS: 0x2f2be0
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_mgEasingLabel;
    EasingType m_mgEasingType;
    float m_mgEasingRate;
    CCMenuItemSpriteExtra* m_mgEasingRateButton;
    cocos2d::CCLabelBMFont* m_mgEasingRateLabel;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetYSlider;
    int m_offsetY;
};
