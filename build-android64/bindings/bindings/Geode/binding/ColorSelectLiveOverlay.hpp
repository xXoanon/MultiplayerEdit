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

class ColorSelectLiveOverlay : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ColorSelectLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x4b6fac
     * @note[short] MacOS (Intel): 0x568780
     * @note[short] Windows: 0x8bd10
     * @note[short] iOS: 0xf5090
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* create(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4b7100
     * @note[short] MacOS (Intel): 0x568940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf511c
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithActions(ColorAction* baseAction, ColorAction* detailAction);

    /**
     * @note[short] MacOS (ARM): 0x4b6f9c
     * @note[short] MacOS (Intel): 0x568760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf5080
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithObject(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4b88f4
     * @note[short] MacOS (Intel): 0x56a450
     * @note[short] Windows: 0x8d270
     * @note[short] iOS: 0xf6558
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4b89ac
     * @note[short] MacOS (Intel): 0x56a500
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0xf656c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x4b80ec
     * @note[short] MacOS (Intel): 0x569bb0
     * @note[short] Windows: 0x8d0e0
     * @note[short] iOS: 0xf6088
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b88f0
     * @note[short] MacOS (Intel): 0x56a440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4b8658
     * @note[short] MacOS (Intel): 0x56a1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x4b7e30
     * @note[short] MacOS (Intel): 0x5697b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf5de0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4b89f8
     * @note[short] MacOS (Intel): 0x56a560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4b7108
     * @note[short] MacOS (Intel): 0x568950
     * @note[short] Windows: 0x8be60
     * @note[short] iOS: 0xf5124
     * @note[short] Android
     */
    bool init(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4b8310
     * @note[short] MacOS (Intel): 0x569e90
     * @note[short] Windows: 0x8d130
     * @note[short] iOS: 0xf62a4
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b814c
     * @note[short] MacOS (Intel): 0x569c00
     * @note[short] Windows: 0x8d2c0
     * @note[short] iOS: 0xf60e8
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4b7ea0
     * @note[short] MacOS (Intel): 0x569860
     * @note[short] Windows: 0x8cdf0
     * @note[short] iOS: 0xf5e50
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b8a00
     * @note[short] MacOS (Intel): 0x56a570
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4b8a04
     * @note[short] MacOS (Intel): 0x56a580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4b8a08
     * @note[short] MacOS (Intel): 0x56a590
     * @note[short] Windows: 0x8d700
     * @note[short] iOS: 0xf65b8
     * @note[short] Android
     */
    void toggleControls(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4b845c
     * @note[short] MacOS (Intel): 0x569fc0
     * @note[short] Windows: 0x8d540
     * @note[short] iOS: 0xf63f0
     * @note[short] Android
     */
    void updateColorLabel();

    /**
     * @note[short] MacOS (ARM): 0x4b8898
     * @note[short] MacOS (Intel): 0x56a3d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4b8858
     * @note[short] MacOS (Intel): 0x56a370
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateOpacity();
    EffectGameObject* m_effectGameObject;
    cocos2d::CCArray* m_barSprites;
    cocos2d::CCArray* m_12buttons;
    ColorAction* m_baseColorAction;
    ColorAction* m_detailColorAction;
    cocos2d::ccColor3B m_mainColor;
    cocos2d::ccColor3B m_detailColor;
    cocos2d::ccColor3B m_targetColor;
    float m_unk2ac;
    int m_unk2b0;
    int m_unk2b4;
    float m_opacity;
    ColorSelectDelegate* m_delegate;
    bool m_disableTextDelegate;
    bool m_unk2c9;
    bool m_updateColor;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_valueSlider;
    Slider* m_opacitySlider;
    cocos2d::CCSprite* m_colorSprite;
    cocos2d::CCSprite* m_oldColorSprite;
    cocos2d::CCSprite* m_saturationSprite;
    cocos2d::CCSprite* m_valueSprite;
    cocos2d::CCSprite* m_opacitySprite;
    double m_hue;
    double m_saturation;
    double m_value;
    cocos2d::CCLabelBMFont* m_colorLabel;
    bool m_detailColorSelected;
    bool m_closeButtonPressed;
};
