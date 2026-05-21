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
#include "GJSpecialColorSelectDelegate.hpp"

class SetupPulsePopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPulsePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPulsePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x32df98
     * @note[short] MacOS (Intel): 0x3aa030
     * @note[short] Windows: 0x437520
     * @note[short] iOS: 0x3b32c4
     * @note[short] Android
     */
    static SetupPulsePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x333334
     * @note[short] MacOS (Intel): 0x3aff50
     * @note[short] Windows: 0x43c270
     * @note[short] iOS: 0x3b77bc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3322c4
     * @note[short] MacOS (Intel): 0x3aeb50
     * @note[short] Windows: 0x43b1c0
     * @note[short] iOS: 0x3b6b70
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x332ce4
     * @note[short] MacOS (Intel): 0x3af7b0
     * @note[short] Windows: 0x43bf80
     * @note[short] iOS: 0x3b73c4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x333390
     * @note[short] MacOS (Intel): 0x3affd0
     * @note[short] Windows: 0x43c420
     * @note[short] iOS: 0x3b7818
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x332e58
     * @note[short] MacOS (Intel): 0x3af990
     * @note[short] Windows: 0x43c160
     * @note[short] iOS: 0x3b74e4
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x333388
     * @note[short] MacOS (Intel): 0x3affb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b7810
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x332778
     * @note[short] MacOS (Intel): 0x3af100
     * @note[short] Windows: 0x43b9f0
     * @note[short] iOS: 0x3b6fc8
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x332b18
     * @note[short] MacOS (Intel): 0x3af530
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x32e17c
     * @note[short] MacOS (Intel): 0x3aa300
     * @note[short] Windows: 0x437700
     * @note[short] iOS: 0x3b3348
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x331be4
     * @note[short] MacOS (Intel): 0x3ae420
     * @note[short] Windows: 0x90e20
     * @note[short] iOS: 0x3b66ec
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x33192c
     * @note[short] MacOS (Intel): 0x3ae0a0
     * @note[short] Windows: 0x43b650
     * @note[short] iOS: 0x3b6554
     * @note[short] Android
     */
    void onExclusive(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3319a4
     * @note[short] MacOS (Intel): 0x3ae130
     * @note[short] Windows: 0x43b6e0
     * @note[short] iOS: 0x3b65cc
     * @note[short] Android
     */
    void onGroupMainOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331a88
     * @note[short] MacOS (Intel): 0x3ae260
     * @note[short] Windows: 0x43b7d0
     * @note[short] iOS: 0x3b6620
     * @note[short] Android
     */
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331b6c
     * @note[short] MacOS (Intel): 0x3ae390
     * @note[short] Windows: 0x43b830
     * @note[short] iOS: 0x3b6674
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331c18
     * @note[short] MacOS (Intel): 0x3ae460
     * @note[short] Windows: 0x90ea0
     * @note[short] iOS: 0x3b6720
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331748
     * @note[short] MacOS (Intel): 0x3ade80
     * @note[short] Windows: 0x43ad70
     * @note[short] iOS: 0x3b63a8
     * @note[short] Android
     */
    void onSelectPulseMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331d4c
     * @note[short] MacOS (Intel): 0x3ae5a0
     * @note[short] Windows: 0x43b950
     * @note[short] iOS: 0x3b67d8
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3316fc
     * @note[short] MacOS (Intel): 0x3ade40
     * @note[short] Windows: 0x43b9a0
     * @note[short] iOS: 0x3b635c
     * @note[short] Android
     */
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3313e4
     * @note[short] MacOS (Intel): 0x3adad0
     * @note[short] Windows: 0x43afa0
     * @note[short] iOS: 0x3b6108
     * @note[short] Android
     */
    void onSelectTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331c9c
     * @note[short] MacOS (Intel): 0x3ae4d0
     * @note[short] Windows: 0x43c3b0
     * @note[short] iOS: 0x3b676c
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331628
     * @note[short] MacOS (Intel): 0x3add50
     * @note[short] Windows: 0x43c320
     * @note[short] iOS: 0x3b62cc
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x331c64
     * @note[short] MacOS (Intel): 0x3ae4a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x330df0
     * @note[short] MacOS (Intel): 0x3ad4b0
     * @note[short] Windows: 0x43bb90
     * @note[short] iOS: 0x3b5d84
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332fb0
     * @note[short] MacOS (Intel): 0x3afb30
     * @note[short] Windows: 0x43cbc0
     * @note[short] iOS: 0x3b75dc
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x332f2c
     * @note[short] MacOS (Intel): 0x3afa90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b7558
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x332aa4
     * @note[short] MacOS (Intel): 0x3af490
     * @note[short] Windows: 0x43ce60
     * @note[short] iOS: 0x3b7198
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] MacOS (ARM): 0x331f98
     * @note[short] MacOS (Intel): 0x3ae7e0
     * @note[short] Windows: 0x43d010
     * @note[short] iOS: 0x3b6934
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x330fb8
     * @note[short] MacOS (Intel): 0x3ad6e0
     * @note[short] Windows: 0x43ab00
     * @note[short] iOS: 0x3b5e80
     * @note[short] Android
     */
    void updateFadeInLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x332b2c
     * @note[short] MacOS (Intel): 0x3af550
     * @note[short] Windows: 0x43bdd0
     * @note[short] iOS: 0x3b720c
     * @note[short] Android
     */
    void updateFadeInTime();

    /**
     * @note[short] MacOS (ARM): 0x331280
     * @note[short] MacOS (Intel): 0x3ad980
     * @note[short] Windows: 0x43aca0
     * @note[short] iOS: 0x3b6030
     * @note[short] Android
     */
    void updateFadeOutLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x332c04
     * @note[short] MacOS (Intel): 0x3af670
     * @note[short] Windows: 0x43bef0
     * @note[short] iOS: 0x3b72e4
     * @note[short] Android
     */
    void updateFadeOutTime();

    /**
     * @note[short] MacOS (ARM): 0x33270c
     * @note[short] MacOS (Intel): 0x3af080
     * @note[short] Windows: 0x43b740
     * @note[short] iOS: 0x3b6f5c
     * @note[short] Android
     */
    void updateGroupMainOnly();

    /**
     * @note[short] MacOS (ARM): 0x3326a0
     * @note[short] MacOS (Intel): 0x3af000
     * @note[short] Windows: 0x43b8c0
     * @note[short] iOS: 0x3b6ef0
     * @note[short] Android
     */
    void updateGroupSecondaryOnly();

    /**
     * @note[short] MacOS (ARM): 0x33111c
     * @note[short] MacOS (Intel): 0x3ad830
     * @note[short] Windows: 0x43abd0
     * @note[short] iOS: 0x3b5f58
     * @note[short] Android
     */
    void updateHoldLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x332b98
     * @note[short] MacOS (Intel): 0x3af5e0
     * @note[short] Windows: 0x43be60
     * @note[short] iOS: 0x3b7278
     * @note[short] Android
     */
    void updateHoldTime();

    /**
     * @note[short] MacOS (ARM): 0x332c70
     * @note[short] MacOS (Intel): 0x3af700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b7350
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] MacOS (ARM): 0x33217c
     * @note[short] MacOS (Intel): 0x3ae9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b6a28
     * @note[short] Android
     */
    void updatePulseMode();

    /**
     * @note[short] MacOS (ARM): 0x332258
     * @note[short] MacOS (Intel): 0x3aead0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b6b04
     * @note[short] Android
     */
    void updatePulseTargetType();

    /**
     * @note[short] MacOS (ARM): 0x3321e8
     * @note[short] MacOS (Intel): 0x3aea50
     * @note[short] Windows: 0x43cda0
     * @note[short] iOS: 0x3b6a94
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x331d98
     * @note[short] MacOS (Intel): 0x3ae5e0
     * @note[short] Windows: 0x43cef0
     * @note[short] iOS: 0x3b6824
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_hsvObjects;
    Slider* m_fadeInSlider;
    Slider* m_holdSlider;
    Slider* m_fadeOutSlider;
    CCMenuItemSpriteExtra* m_channelButton;
    CCMenuItemSpriteExtra* m_groupButton;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    CCMenuItemSpriteExtra* m_colorButton;
    CCMenuItemSpriteExtra* m_hsvButton;
    ConfigureHSVWidget* m_hsvWidget;
    CCMenuItemSpriteExtra* m_specialColorButton;
    CCTextInputNode* m_fadeInInput;
    CCTextInputNode* m_holdInput;
    CCTextInputNode* m_fadeOutInput;
    CCTextInputNode* m_idInput;
    CCTextInputNode* m_colorIDInput;
    CCMenuItemToggler* m_mainOnlyToggler;
    CCMenuItemToggler* m_secondaryOnlyToggler;
    CCMenuItemToggler* m_staticHSVToggler;
    cocos2d::CCLabelBMFont* m_mainOnlyLabel;
    cocos2d::CCLabelBMFont* m_secondaryOnlyLabel;
    cocos2d::CCLabelBMFont* m_staticHSVLabel;
    bool m_groupMainOnly;
    bool m_groupSecondaryOnly;
    bool m_staticHSV;
    int m_targetGroupID;
    int m_copyColorID;
    bool m_colorInitializing;
    float m_fadeInTime;
    float m_holdTime;
    float m_fadeOutTime;
    int m_pulseMode;
    int m_pulseTargetType;
    bool m_modesInitializing;
    bool m_pulseExclusive;
    cocos2d::ccHSVValue m_hsv;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
