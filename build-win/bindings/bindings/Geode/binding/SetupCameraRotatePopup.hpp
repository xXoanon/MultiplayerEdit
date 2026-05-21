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

class SetupCameraRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x41ca20
     * @note[short] MacOS (Intel): 0x4bc7a0
     * @note[short] Android
     */
    static SetupCameraRotatePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41e278
     * @note[short] MacOS (Intel): 0x4be0b0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x41e960
     * @note[short] MacOS (Intel): 0x4be8e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41e758
     * @note[short] MacOS (Intel): 0x4be670
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x41e4dc
     * @note[short] MacOS (Intel): 0x4be3a0
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x41cbac
     * @note[short] MacOS (Intel): 0x4bc9e0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41def4
     * @note[short] MacOS (Intel): 0x4bdd50
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41dc00
     * @note[short] MacOS (Intel): 0x4bdab0
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41da0c
     * @note[short] MacOS (Intel): 0x4bd8c0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41dfac
     * @note[short] MacOS (Intel): 0x4bde10
     * @note[short] Android
     */
    void sliderDegreesChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41de54
     * @note[short] MacOS (Intel): 0x4bdca0
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x41e678
     * @note[short] MacOS (Intel): 0x4be570
     * @note[short] Android
     */
    void updateCommandDegrees();

    /**
     * @note[short] MacOS (ARM): 0x41e04c
     * @note[short] MacOS (Intel): 0x4bdec0
     * @note[short] Android
     */
    void updateDegreesLabel();

    /**
     * @note[short] MacOS (ARM): 0x41e6e8
     * @note[short] MacOS (Intel): 0x4be5f0
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x41da9c
     * @note[short] MacOS (Intel): 0x4bd960
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x41e188
     * @note[short] MacOS (Intel): 0x4bdff0
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x41dd04
     * @note[short] MacOS (Intel): 0x4bdb70
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x41e608
     * @note[short] MacOS (Intel): 0x4be4f0
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] MacOS (ARM): 0x41e590
     * @note[short] MacOS (Intel): 0x4be450
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_degreesInput;
    Slider* m_degreesSlider;
    float m_degrees;
};
