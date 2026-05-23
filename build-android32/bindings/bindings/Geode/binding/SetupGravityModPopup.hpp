#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class SetupGravityModPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupGravityModPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityModPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3575bc
     * @note[short] MacOS (Intel): 0x3d8130
     * @note[short] Android
     */
    static SetupGravityModPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger);

    /**
     * @note[short] MacOS (ARM): 0x358910
     * @note[short] MacOS (Intel): 0x3d9670
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3588c4
     * @note[short] MacOS (Intel): 0x3d9610
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3587d8
     * @note[short] MacOS (Intel): 0x3d94d0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3587f4
     * @note[short] MacOS (Intel): 0x3d9510
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x358280
     * @note[short] MacOS (Intel): 0x3d8ec0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x3576f8
     * @note[short] MacOS (Intel): 0x3d82b0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger);

    /**
     * @note[short] MacOS (ARM): 0x358380
     * @note[short] MacOS (Intel): 0x3d8fe0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x358548
     * @note[short] MacOS (Intel): 0x3d91d0
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3583dc
     * @note[short] MacOS (Intel): 0x3d9040
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x358758
     * @note[short] MacOS (Intel): 0x3d9430
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x3585e8
     * @note[short] MacOS (Intel): 0x3d9290
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x3586ec
     * @note[short] MacOS (Intel): 0x3d93a0
     * @note[short] Android
     */
    void updateValue();

    /**
     * @note[short] MacOS (ARM): 0x3584d8
     * @note[short] MacOS (Intel): 0x3d9170
     * @note[short] Android
     */
    void updateValueLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCLabelBMFont* m_gravityModLabel;
    Slider* m_gravityModSlider;
    float m_gravityMod;
    bool m_gravityTrigger;
    float m_minValue;
    float m_maxValue;
    CCTextInputNode* m_itemIDInput;
    int m_itemID;
    bool m_disableDelegate;
};
