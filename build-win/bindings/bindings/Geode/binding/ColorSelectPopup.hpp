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

class ColorSelectPopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "ColorSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x420aec
     * @note[short] Android: Out of line
     */
     ColorSelectPopup();

    /**
     * @note[short] MacOS (ARM): 0x637194
     * @note[short] MacOS (Intel): 0x7249b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41c2ec
     * @note[short] Android: Rebinded
     */
     ~ColorSelectPopup();

    /**
     * @note[short] MacOS (ARM): 0x63b7ac
     * @note[short] MacOS (Intel): 0x729930
     * @note[short] Windows: 0x92790
     * @note[short] iOS: 0x41fd40
     * @note[short] Android
     */
    static gd::string colorToHex(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x637478
     * @note[short] MacOS (Intel): 0x724e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41c464
     * @note[short] Android
     */
    static ColorSelectPopup* create(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x637488
     * @note[short] MacOS (Intel): 0x724e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41c474
     * @note[short] Android
     */
    static ColorSelectPopup* create(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x637278
     * @note[short] MacOS (Intel): 0x724b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41c3d0
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* effect, cocos2d::CCArray* array);

    /**
     * @note[short] MacOS (ARM): 0x637280
     * @note[short] MacOS (Intel): 0x724b50
     * @note[short] Windows: 0x8daf0
     * @note[short] iOS: 0x41c3d8
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* effect, cocos2d::CCArray* array, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x63bc04
     * @note[short] MacOS (Intel): 0x729e80
     * @note[short] Windows: 0x91b20
     * @note[short] iOS: 0x41fe90
     * @note[short] Android: Rebinded
     */
    static cocos2d::ccColor3B hexToColor(gd::string hex);

    /**
     * @note[short] MacOS (ARM): 0x63cd30
     * @note[short] MacOS (Intel): 0x72ad50
     * @note[short] Windows: 0x92c60
     * @note[short] iOS: 0x42043c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x63abd4
     * @note[short] MacOS (Intel): 0x728aa0
     * @note[short] Windows: 0x90450
     * @note[short] iOS: 0x41f438
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x63cdfc
     * @note[short] MacOS (Intel): 0x72ae40
     * @note[short] Windows: 0x92d90
     * @note[short] iOS: 0x420508
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x63b28c
     * @note[short] MacOS (Intel): 0x729310
     * @note[short] Windows: 0x91810
     * @note[short] iOS: 0x41fa4c
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x63d2e0
     * @note[short] MacOS (Intel): 0x72b3e0
     * @note[short] Windows: 0x93750
     * @note[short] iOS: 0x420914
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x63b280
     * @note[short] MacOS (Intel): 0x7292e0
     * @note[short] Windows: 0x91800
     * @note[short] iOS: 0x41fa40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x639898
     * @note[short] MacOS (Intel): 0x727570
     * @note[short] Windows: 0x91560
     * @note[short] iOS: 0x41e660
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63b0e8
     * @note[short] MacOS (Intel): 0x7290b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x6374c4
     * @note[short] MacOS (Intel): 0x724e80
     * @note[short] Windows: 0x8dce0
     * @note[short] iOS: 0x41c4b0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x639df4
     * @note[short] MacOS (Intel): 0x727b80
     * @note[short] Windows: 0x90e20
     * @note[short] iOS: 0x41e9d4
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a454
     * @note[short] MacOS (Intel): 0x7282c0
     * @note[short] Windows: 0x90bc0
     * @note[short] iOS: 0x41eeec
     * @note[short] Android
     */
    void onCopyOpacity(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x639e74
     * @note[short] MacOS (Intel): 0x727c00
     * @note[short] Windows: 0x90f20
     * @note[short] iOS: 0x41ea54
     * @note[short] Android
     */
    void onDefault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a4e4
     * @note[short] MacOS (Intel): 0x728360
     * @note[short] Windows: 0x90b30
     * @note[short] iOS: 0x41ef74
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x639e28
     * @note[short] MacOS (Intel): 0x727bc0
     * @note[short] Windows: 0x90ea0
     * @note[short] iOS: 0x41ea08
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a18c
     * @note[short] MacOS (Intel): 0x727fc0
     * @note[short] Windows: 0x90c60
     * @note[short] iOS: 0x41ec3c
     * @note[short] Android
     */
    void onPlayerColor1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a240
     * @note[short] MacOS (Intel): 0x728080
     * @note[short] Windows: 0x90d40
     * @note[short] iOS: 0x41ece8
     * @note[short] Android
     */
    void onPlayerColor2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a55c
     * @note[short] MacOS (Intel): 0x7283f0
     * @note[short] Windows: 0x93550
     * @note[short] iOS: 0x41efec
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a2f8
     * @note[short] MacOS (Intel): 0x728140
     * @note[short] Windows: 0x909e0
     * @note[short] iOS: 0x41ed98
     * @note[short] Android
     */
    void onTintGround(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a418
     * @note[short] MacOS (Intel): 0x728280
     * @note[short] Windows: 0x935c0
     * @note[short] iOS: 0x41eeb0
     * @note[short] Android
     */
    void onToggleHSVMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a370
     * @note[short] MacOS (Intel): 0x7281d0
     * @note[short] Windows: 0x90a70
     * @note[short] iOS: 0x41ee10
     * @note[short] Android
     */
    void onToggleTintMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a5c0
     * @note[short] MacOS (Intel): 0x728440
     * @note[short] Windows: 0x934e0
     * @note[short] iOS: 0x41f050
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63a864
     * @note[short] MacOS (Intel): 0x728710
     * @note[short] Windows: 0x92d10
     * @note[short] iOS: 0x41f1b8
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x639d58
     * @note[short] MacOS (Intel): 0x727af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x639a30
     * @note[short] MacOS (Intel): 0x727780
     * @note[short] Windows: 0x911f0
     * @note[short] iOS: 0x41e79c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63b428
     * @note[short] MacOS (Intel): 0x729510
     * @note[short] Windows: 0x91940
     * @note[short] iOS: 0x41fb60
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x63b388
     * @note[short] MacOS (Intel): 0x729440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41fac0
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x63d218
     * @note[short] MacOS (Intel): 0x72b2e0
     * @note[short] Windows: 0x938f0
     * @note[short] iOS: 0x420858
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] MacOS (ARM): 0x63a9f0
     * @note[short] MacOS (Intel): 0x7288b0
     * @note[short] Windows: 0x93b60
     * @note[short] iOS: 0x41f344
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x63cd84
     * @note[short] MacOS (Intel): 0x72adb0
     * @note[short] Windows: 0x93330
     * @note[short] iOS: 0x420490
     * @note[short] Android
     */
    void updateCustomColorIdx();

    /**
     * @note[short] MacOS (ARM): 0x63b184
     * @note[short] MacOS (Intel): 0x729180
     * @note[short] Windows: 0x912e0
     * @note[short] iOS: 0x41f94c
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x639c08
     * @note[short] MacOS (Intel): 0x7279a0
     * @note[short] Windows: 0x91420
     * @note[short] iOS: 0x41e89c
     * @note[short] Android
     */
    void updateDurLabel();

    /**
     * @note[short] MacOS (ARM): 0x63a8d0
     * @note[short] MacOS (Intel): 0x728780
     * @note[short] Windows: 0x93600
     * @note[short] iOS: 0x41f224
     * @note[short] Android
     */
    void updateHSVMode();

    /**
     * @note[short] MacOS (ARM): 0x63b1f0
     * @note[short] MacOS (Intel): 0x729210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41f9b8
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] MacOS (ARM): 0x63b0fc
     * @note[short] MacOS (Intel): 0x7290d0
     * @note[short] Windows: 0x91370
     * @note[short] iOS: 0x41f8cc
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] MacOS (ARM): 0x639d90
     * @note[short] MacOS (Intel): 0x727b20
     * @note[short] Windows: 0x914f0
     * @note[short] iOS: 0x41e970
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] MacOS (ARM): 0x63a680
     * @note[short] MacOS (Intel): 0x728520
     * @note[short] Windows: 0x933d0
     * @note[short] iOS: 0x41f0c4
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    CCMenuItemToggler* m_playerColor1Toggle;
    CCMenuItemToggler* m_playerColor2Toggle;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    ColorSelectDelegate* m_delegate;
    float m_fadeTime;
    int m_playerColor;
    int m_blending;
    float m_opacity;
    ColorAction* m_colorAction;
    CCTextInputNode* m_colorInput;
    bool m_backgroundTrigger;
    bool m_tintGround;
    bool m_legacyHSV;
    bool m_colorTrigger;
    bool m_noChannel;
    bool m_newColorTrigger;
    int m_colorID;
    bool m_initializing;
    int m_copyColorID;
    bool m_copyOpacity;
    ConfigureHSVWidget* m_hsvWidget;
    cocos2d::ccHSVValue m_hsv;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_copyObjects;
    CCTextInputNode* m_copyColorInput;
    CCTextInputNode* m_fadeTimeInput;
    void* m_unk488;
    void* m_unk490;
    bool m_showCopyObjects;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
