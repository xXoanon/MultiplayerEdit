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

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3438b4
     * @note[short] Android: Out of line
     */
     SetupGradientPopup();

    /**
     * @note[short] MacOS (ARM): 0x51ac40
     * @note[short] MacOS (Intel): 0x5f11c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x342454
     * @note[short] Android: Rebinded
     */
     ~SetupGradientPopup();

    /**
     * @note[short] MacOS (ARM): 0x51aed4
     * @note[short] MacOS (Intel): 0x5f15c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x342510
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x51c6c0
     * @note[short] MacOS (Intel): 0x5f30a0
     * @note[short] Windows: 0x421b80
     * @note[short] iOS: 0x343620
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x51c7f0
     * @note[short] MacOS (Intel): 0x5f31c0
     * @note[short] Windows: 0x421c90
     * @note[short] iOS: 0x343730
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51c8a4
     * @note[short] MacOS (Intel): 0x5f3280
     * @note[short] Windows: 0x421d50
     * @note[short] iOS: 0x3437bc
     * @note[short] Android
     */
    virtual void updateToggleItem(int value, bool toggled);

    /**
     * @note[short] MacOS (ARM): 0x51ca54
     * @note[short] MacOS (Intel): 0x5f3440
     * @note[short] Windows: 0x422160
     * @note[short] iOS: 0x343874
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x51b06c
     * @note[short] MacOS (Intel): 0x5f1820
     * @note[short] Windows: 0x420a20
     * @note[short] iOS: 0x342594
     * @note[short] Android
     */
    bool init(GradientTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x51c414
     * @note[short] MacOS (Intel): 0x5f2dd0
     * @note[short] Windows: 0x422010
     * @note[short] iOS: 0x3434b8
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51c544
     * @note[short] MacOS (Intel): 0x5f2ef0
     * @note[short] Windows: 0x421ef0
     * @note[short] iOS: 0x343514
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51c9b4
     * @note[short] MacOS (Intel): 0x5f33a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51c9e4
     * @note[short] MacOS (Intel): 0x5f33c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34380c
     * @note[short] Android
     */
    void updateBlending();

    /**
     * @note[short] MacOS (ARM): 0x51c360
     * @note[short] MacOS (Intel): 0x5f2d40
     * @note[short] Windows: 0x4220d0
     * @note[short] iOS: 0x343408
     * @note[short] Android
     */
    void updateBlendingLabel();

    /**
     * @note[short] MacOS (ARM): 0x51c260
     * @note[short] MacOS (Intel): 0x5f2c30
     * @note[short] Windows: 0x421de0
     * @note[short] iOS: 0x343310
     * @note[short] Android
     */
    void updateGradientLabels(bool vertex);

    /**
     * @note[short] MacOS (ARM): 0x51c630
     * @note[short] MacOS (Intel): 0x5f3000
     * @note[short] Windows: 0x421f80
     * @note[short] iOS: 0x343590
     * @note[short] Android
     */
    void updateZLayerButtons();
    cocos2d::CCLabelBMFont* m_blendingLabel;
    int m_blendingMode;
    cocos2d::CCArray* m_layerButtons;
    int m_blendingLayer;
    cocos2d::CCArray* m_gradientLabels;
};
