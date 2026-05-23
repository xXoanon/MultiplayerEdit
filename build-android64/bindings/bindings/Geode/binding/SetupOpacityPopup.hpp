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

class SetupOpacityPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOpacityPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOpacityPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4aa50
     * @note[short] MacOS (Intel): 0x56e30
     * @note[short] Windows: 0x42a4b0
     * @note[short] iOS: 0x22d44
     * @note[short] Android
     */
    static SetupOpacityPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4bcf4
     * @note[short] MacOS (Intel): 0x58250
     * @note[short] Windows: 0x42b3e0
     * @note[short] iOS: 0x23c60
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4c1c4
     * @note[short] MacOS (Intel): 0x58850
     * @note[short] Windows: 0x40a100
     * @note[short] iOS: 0x2406c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bfa8
     * @note[short] MacOS (Intel): 0x585b0
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x23eec
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4bfc4
     * @note[short] MacOS (Intel): 0x585f0
     * @note[short] Windows: 0x42b7d0
     * @note[short] iOS: 0x23f08
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4abe8
     * @note[short] MacOS (Intel): 0x57080
     * @note[short] Windows: 0x42a5e0
     * @note[short] iOS: 0x22e2c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4b7b8
     * @note[short] MacOS (Intel): 0x57cc0
     * @note[short] Windows: 0x42b570
     * @note[short] iOS: 0x23938
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b964
     * @note[short] MacOS (Intel): 0x57e90
     * @note[short] Windows: 0x42b5c0
     * @note[short] iOS: 0x23a1c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bf3c
     * @note[short] MacOS (Intel): 0x58520
     * @note[short] Windows: 0x42bbd0
     * @note[short] iOS: 0x23e80
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x4bb40
     * @note[short] MacOS (Intel): 0x580b0
     * @note[short] Windows: 0x42ba10
     * @note[short] iOS: 0x23b38
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x4bed0
     * @note[short] MacOS (Intel): 0x58490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23e14
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4bca4
     * @note[short] MacOS (Intel): 0x58200
     * @note[short] Windows: 0x42bae0
     * @note[short] iOS: 0x23c10
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] MacOS (ARM): 0x4be4c
     * @note[short] MacOS (Intel): 0x583f0
     * @note[short] Windows: 0x42bc60
     * @note[short] iOS: 0x23d90
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x4b860
     * @note[short] MacOS (Intel): 0x57d80
     * @note[short] Windows: 0x42bb50
     * @note[short] iOS: 0x2398c
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_fadeTimeInput;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    float m_opacity;
    float m_fadeTime;
    int m_groupID;
};
