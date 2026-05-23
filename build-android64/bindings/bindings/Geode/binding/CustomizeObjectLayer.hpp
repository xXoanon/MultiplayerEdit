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
#include "HSVWidgetDelegate.hpp"
#include "ColorSelectDelegate.hpp"
#include "ColorSetupDelegate.hpp"

class CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1a2d74
     * @note[short] MacOS (Intel): 0x1f4f00
     * @note[short] Windows: 0xa5270
     * @note[short] iOS: 0x4d4c4
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1a704c
     * @note[short] MacOS (Intel): 0x1f9690
     * @note[short] Windows: 0xaa0f0
     * @note[short] iOS: 0x50c90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a6ca0
     * @note[short] MacOS (Intel): 0x1f92e0
     * @note[short] Windows: 0xa9680
     * @note[short] iOS: 0x509ac
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1a6dc4
     * @note[short] MacOS (Intel): 0x1f93f0
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x50b04
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1a6de0
     * @note[short] MacOS (Intel): 0x1f9430
     * @note[short] Windows: 0xa9810
     * @note[short] iOS: 0x50b20
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1a6aa0
     * @note[short] MacOS (Intel): 0x1f9090
     * @note[short] Windows: 0xa8db0
     * @note[short] iOS: 0x507b4
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x1a6864
     * @note[short] MacOS (Intel): 0x1f8e30
     * @note[short] Windows: 0xa8740
     * @note[short] iOS: 0x507a8
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x1a6454
     * @note[short] MacOS (Intel): 0x1f89c0
     * @note[short] Windows: 0xa83a0
     * @note[short] iOS: 0x50484
     * @note[short] Android
     */
    virtual void colorSetupClosed(int id);

    /**
     * @note[short] MacOS (ARM): 0x1a6870
     * @note[short] MacOS (Intel): 0x1f8e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1a4ef8
     * @note[short] MacOS (Intel): 0x1f7370
     * @note[short] Windows: 0xa8750
     * @note[short] iOS: 0x4f43c
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x1a5ebc
     * @note[short] MacOS (Intel): 0x1f8360
     * @note[short] Windows: 0xa93c0
     * @note[short] iOS: 0x50080
     * @note[short] Android
     */
    int getActiveMode(bool ignoreDefault);

    /**
     * @note[short] MacOS (ARM): 0x1a67cc
     * @note[short] MacOS (Intel): 0x1f8d90
     * @note[short] Windows: 0xa9c30
     * @note[short] iOS: 0x50728
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x1a6a8c
     * @note[short] MacOS (Intel): 0x1f9060
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccHSVValue getHSV();

    /**
     * @note[short] MacOS (ARM): 0x1a66b0
     * @note[short] MacOS (Intel): 0x1f8c60
     * @note[short] Windows: 0xa9ee0
     * @note[short] iOS: 0x5060c
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x1a2ee0
     * @note[short] MacOS (Intel): 0x1f50f0
     * @note[short] Windows: 0xa5410
     * @note[short] iOS: 0x4d548
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1a5b20
     * @note[short] MacOS (Intel): 0x1f7f90
     * @note[short] Windows: 0xa9b20
     * @note[short] iOS: 0x4fe20
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5e78
     * @note[short] MacOS (Intel): 0x1f8310
     * @note[short] Windows: 0xa8310
     * @note[short] iOS: 0x5003c
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5bd0
     * @note[short] MacOS (Intel): 0x1f8060
     * @note[short] Windows: 0xa9a90
     * @note[short] iOS: 0x4fe58
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a4e64
     * @note[short] MacOS (Intel): 0x1f72d0
     * @note[short] Windows: 0xaa010
     * @note[short] iOS: 0x4f3a8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5dac
     * @note[short] MacOS (Intel): 0x1f8240
     * @note[short] Windows: 0xa8010
     * @note[short] iOS: 0x4ffb8
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5858
     * @note[short] MacOS (Intel): 0x1f7ca0
     * @note[short] Windows: 0xa8480
     * @note[short] iOS: 0x4fbf8
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5230
     * @note[short] MacOS (Intel): 0x1f76d0
     * @note[short] Windows: 0xa8b80
     * @note[short] iOS: 0x4f714
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a58ac
     * @note[short] MacOS (Intel): 0x1f7d00
     * @note[short] Windows: 0xa7f10
     * @note[short] iOS: 0x4fc4c
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5c84
     * @note[short] MacOS (Intel): 0x1f8110
     * @note[short] Windows: 0xa8ee0
     * @note[short] iOS: 0x4ff24
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5dd4
     * @note[short] MacOS (Intel): 0x1f8270
     * @note[short] Windows: 0xa8070
     * @note[short] iOS: 0x4ffe0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a559c
     * @note[short] MacOS (Intel): 0x1f7a10
     * @note[short] Windows: 0xa9cb0
     * @note[short] iOS: 0x4fa5c
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5004
     * @note[short] MacOS (Intel): 0x1f74a0
     * @note[short] Windows: 0xa8ff0
     * @note[short] iOS: 0x4f530
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5208
     * @note[short] MacOS (Intel): 0x1f76a0
     * @note[short] Windows: 0xa81c0
     * @note[short] iOS: 0x4f6ec
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a5664
     * @note[short] MacOS (Intel): 0x1f7ac0
     * @note[short] Windows: 0xa95b0
     * @note[short] iOS: 0x4fadc
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a6340
     * @note[short] MacOS (Intel): 0x1f8890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x503e4
     * @note[short] Android
     */
    void recreateLayer();

    /**
     * @note[short] MacOS (ARM): 0x1a5960
     * @note[short] MacOS (Intel): 0x1f7dd0
     * @note[short] Windows: 0xa7ec0
     * @note[short] iOS: 0x4fc8c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a6b60
     * @note[short] MacOS (Intel): 0x1f9180
     * @note[short] Windows: 0xa9200
     * @note[short] iOS: 0x5086c
     * @note[short] Android
     */
    void toggleVisible();

    /**
     * @note[short] MacOS (ARM): 0x1a6138
     * @note[short] MacOS (Intel): 0x1f85e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5028c
     * @note[short] Android
     */
    void updateChannelLabel(int channel);

    /**
     * @note[short] MacOS (ARM): 0x1a6068
     * @note[short] MacOS (Intel): 0x1f8510
     * @note[short] Windows: 0xa8530
     * @note[short] iOS: 0x501bc
     * @note[short] Android
     */
    void updateColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x1a5fa0
     * @note[short] MacOS (Intel): 0x1f8450
     * @note[short] Windows: 0xa9550
     * @note[short] iOS: 0x5015c
     * @note[short] Android
     */
    void updateCurrentSelection();

    /**
     * @note[short] MacOS (ARM): 0x1a5738
     * @note[short] MacOS (Intel): 0x1f7b90
     * @note[short] Windows: 0xa9ba0
     * @note[short] iOS: 0x4fb64
     * @note[short] Android
     */
    void updateCustomColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x1a5408
     * @note[short] MacOS (Intel): 0x1f7870
     * @note[short] Windows: 0xa8980
     * @note[short] iOS: 0x4f8c8
     * @note[short] Android
     */
    void updateHSVButtons();

    /**
     * @note[short] MacOS (ARM): 0x1a59ac
     * @note[short] MacOS (Intel): 0x1f7e40
     * @note[short] Windows: 0xa7d10
     * @note[short] iOS: 0x4fcd8
     * @note[short] Android
     */
    void updateKerningLabel();

    /**
     * @note[short] MacOS (ARM): 0x1a6568
     * @note[short] MacOS (Intel): 0x1f8ad0
     * @note[short] Windows: 0xa9d70
     * @note[short] iOS: 0x504f8
     * @note[short] Android
     */
    void updateSelected(int id);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_hasBaseColor;
    bool m_hasDetailColor;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
    bool m_disableTextDelegate;
};
