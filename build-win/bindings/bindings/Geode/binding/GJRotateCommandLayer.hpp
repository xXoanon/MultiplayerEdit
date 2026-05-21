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

class GJRotateCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJRotateCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRotateCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x1504
     * @note[short] MacOS (Intel): 0x14c0
     * @note[short] Android
     */
    static GJRotateCommandLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3d60
     * @note[short] MacOS (Intel): 0x3f70
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4a10
     * @note[short] MacOS (Intel): 0x4f60
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45cc
     * @note[short] MacOS (Intel): 0x49c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x41e0
     * @note[short] MacOS (Intel): 0x4530
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x16a0
     * @note[short] MacOS (Intel): 0x1720
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3334
     * @note[short] MacOS (Intel): 0x3520
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3040
     * @note[short] MacOS (Intel): 0x3280
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35a0
     * @note[short] MacOS (Intel): 0x37d0
     * @note[short] Android
     */
    void onFollowRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3528
     * @note[short] MacOS (Intel): 0x3740
     * @note[short] Android
     */
    void onLockRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x366c
     * @note[short] MacOS (Intel): 0x38c0
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3728
     * @note[short] MacOS (Intel): 0x3980
     * @note[short] Android
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4c
     * @note[short] MacOS (Intel): 0x3090
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x33ec
     * @note[short] MacOS (Intel): 0x35e0
     * @note[short] Android
     */
    void sliderDegreesChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x348c
     * @note[short] MacOS (Intel): 0x3690
     * @note[short] Android
     */
    void sliderTimesChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3294
     * @note[short] MacOS (Intel): 0x3470
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x445c
     * @note[short] MacOS (Intel): 0x4800
     * @note[short] Android
     */
    void updateCommandDegrees();

    /**
     * @note[short] MacOS (ARM): 0x43ec
     * @note[short] MacOS (Intel): 0x4780
     * @note[short] Android
     */
    void updateCommandTimes();

    /**
     * @note[short] MacOS (ARM): 0x3a10
     * @note[short] MacOS (Intel): 0x3c70
     * @note[short] Android
     */
    void updateDegreesLabel();

    /**
     * @note[short] MacOS (ARM): 0x437c
     * @note[short] MacOS (Intel): 0x4700
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x2edc
     * @note[short] MacOS (Intel): 0x3130
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x3c70
     * @note[short] MacOS (Intel): 0x3eb0
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x3144
     * @note[short] MacOS (Intel): 0x3340
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x430c
     * @note[short] MacOS (Intel): 0x4680
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] MacOS (ARM): 0x4294
     * @note[short] MacOS (Intel): 0x45e0
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] MacOS (ARM): 0x44cc
     * @note[short] MacOS (Intel): 0x4880
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] MacOS (ARM): 0x454c
     * @note[short] MacOS (Intel): 0x4920
     * @note[short] Android
     */
    void updateTargetGroupID2();

    /**
     * @note[short] MacOS (ARM): 0x37d0
     * @note[short] MacOS (Intel): 0x3a30
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x38f0
     * @note[short] MacOS (Intel): 0x3b50
     * @note[short] Android
     */
    void updateTextInputLabel2();

    /**
     * @note[short] MacOS (ARM): 0x3b50
     * @note[short] MacOS (Intel): 0x3d90
     * @note[short] Android
     */
    void updateTimesLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_rotateEasingLabel;
    EasingType m_rotateEasingType;
    float m_rotateEasingRate;
    CCMenuItemSpriteExtra* m_rotateEasingRateButton;
    cocos2d::CCLabelBMFont* m_rotateEasingRateLabel;
    CCTextInputNode* m_degreesInput;
    CCTextInputNode* m_timesInput;
    Slider* m_degreesSlider;
    Slider* m_timesSlider;
    float m_degrees;
    int m_times360;
    CCTextInputNode* m_targetIDInput;
    bool m_disableTextChanged;
    int m_targetGroupID;
    CCTextInputNode* m_centerIDInput;
    int m_centerGroupID;
    bool m_lockObjectRotation;
    bool m_followP1;
    bool m_followP2;
    CCMenuItemToggler* m_followP1Toggler;
    CCMenuItemToggler* m_followP2Toggler;
};
