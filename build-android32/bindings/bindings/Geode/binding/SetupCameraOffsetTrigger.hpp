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

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x580e3c
     * @note[short] MacOS (Intel): 0x661340
     * @note[short] Windows: 0x415350
     * @note[short] iOS: 0x18ec88
     * @note[short] Android
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x582bb4
     * @note[short] MacOS (Intel): 0x6632c0
     * @note[short] Windows: 0x4166b0
     * @note[short] iOS: 0x190534
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5835ec
     * @note[short] MacOS (Intel): 0x663e80
     * @note[short] Windows: 0x417950
     * @note[short] iOS: 0x190ddc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x583384
     * @note[short] MacOS (Intel): 0x663b50
     * @note[short] Windows: 0x4173c0
     * @note[short] iOS: 0x190bb4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x582fc8
     * @note[short] MacOS (Intel): 0x663720
     * @note[short] Windows: 0x416ac0
     * @note[short] iOS: 0x190884
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x580fc8
     * @note[short] MacOS (Intel): 0x661580
     * @note[short] Windows: 0x415470
     * @note[short] iOS: 0x18ed64
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5825d0
     * @note[short] MacOS (Intel): 0x662cd0
     * @note[short] Windows: 0x416e80
     * @note[short] iOS: 0x190104
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5822dc
     * @note[short] MacOS (Intel): 0x662a30
     * @note[short] Windows: 0x4169f0
     * @note[short] iOS: 0x18fec8
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x58278c
     * @note[short] MacOS (Intel): 0x662ea0
     * @note[short] Windows: 0x4172e0
     * @note[short] iOS: 0x190218
     * @note[short] Android
     */
    void onTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x582fa0
     * @note[short] MacOS (Intel): 0x6636f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int posFromSliderValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x5820e8
     * @note[short] MacOS (Intel): 0x662840
     * @note[short] Windows: 0x271d20
     * @note[short] iOS: 0x18fdb0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x582738
     * @note[short] MacOS (Intel): 0x662e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float sliderValueFromPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x582688
     * @note[short] MacOS (Intel): 0x662d90
     * @note[short] Windows: 0x4170e0
     * @note[short] iOS: 0x190168
     * @note[short] Android
     */
    void sliderXChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5826e0
     * @note[short] MacOS (Intel): 0x662de0
     * @note[short] Windows: 0x417130
     * @note[short] iOS: 0x1901c0
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x582530
     * @note[short] MacOS (Intel): 0x662c20
     * @note[short] Windows: 0x416d70
     * @note[short] iOS: 0x190064
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x583164
     * @note[short] MacOS (Intel): 0x6638f0
     * @note[short] Windows: 0x272a00
     * @note[short] iOS: 0x1909bc
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x582178
     * @note[short] MacOS (Intel): 0x6628e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x18fdf0
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x582ac4
     * @note[short] MacOS (Intel): 0x663200
     * @note[short] Windows: 0x416f40
     * @note[short] iOS: 0x190458
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x5823e0
     * @note[short] MacOS (Intel): 0x662af0
     * @note[short] Windows: 0x416b90
     * @note[short] iOS: 0x18ffa4
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x5830f4
     * @note[short] MacOS (Intel): 0x663870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x190954
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] MacOS (ARM): 0x58307c
     * @note[short] MacOS (Intel): 0x6637d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1908e4
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] MacOS (ARM): 0x5831d4
     * @note[short] MacOS (Intel): 0x663970
     * @note[short] Windows: 0x417770
     * @note[short] iOS: 0x190a24
     * @note[short] Android
     */
    void updateMoveCommandPosX();

    /**
     * @note[short] MacOS (ARM): 0x5832ac
     * @note[short] MacOS (Intel): 0x663a60
     * @note[short] Windows: 0x417860
     * @note[short] iOS: 0x190aec
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] MacOS (ARM): 0x582864
     * @note[short] MacOS (Intel): 0x662f80
     * @note[short] Windows: 0x417180
     * @note[short] iOS: 0x1902e8
     * @note[short] Android
     */
    void updateValueXLabel();

    /**
     * @note[short] MacOS (ARM): 0x582994
     * @note[short] MacOS (Intel): 0x6630c0
     * @note[short] Windows: 0x417230
     * @note[short] iOS: 0x1903a0
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_offsetXInput;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetXSlider;
    Slider* m_offsetYSlider;
    int m_offsetX;
    int m_offsetY;
    int m_targetMode;
    CCMenuItemToggler* m_xOnlyToggler;
    CCMenuItemToggler* m_yOnlyToggler;
};
