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
#include "ConfigureValuePopupDelegate.hpp"
#include "SliderDelegate.hpp"

class SetupTriggerPopup : public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x8d780
     * @note[short] iOS: 0xc3b0
     * @note[short] Android: Out of line
     */
     SetupTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x1de5a0
     * @note[short] MacOS (Intel): 0x2349a0
     * @note[short] Windows: 0x473a80
     * @note[short] iOS: 0x12e144
     * @note[short] Android: Rebinded
     */
     ~SetupTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x1deb8c
     * @note[short] MacOS (Intel): 0x2351d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SetupTriggerPopup* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1de748
     * @note[short] MacOS (Intel): 0x234c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SetupTriggerPopup* create(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background);

    /**
     * @note[short] MacOS (ARM): 0x1e78c0
     * @note[short] MacOS (Intel): 0x23fec0
     * @note[short] Windows: 0x47df60
     * @note[short] iOS: 0x135028
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1e1710
     * @note[short] MacOS (Intel): 0x239220
     * @note[short] Windows: 0x2f6ec0
     * @note[short] iOS: 0x13099c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1e158c
     * @note[short] MacOS (Intel): 0x239060
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0x1308c0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x1df31c
     * @note[short] MacOS (Intel): 0x2359b0
     * @note[short] Windows: 0x4746b0
     * @note[short] iOS: 0x12ec98
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1e036c
     * @note[short] MacOS (Intel): 0x236ba0
     * @note[short] Windows: 0x475400
     * @note[short] iOS: 0x12f9dc
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x1e15d8
     * @note[short] MacOS (Intel): 0x2390c0
     * @note[short] Windows: 0x475a40
     * @note[short] iOS: 0x13090c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e066c
     * @note[short] MacOS (Intel): 0x236f20
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x12fbe8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1e0688
     * @note[short] MacOS (Intel): 0x236f60
     * @note[short] Windows: 0x475880
     * @note[short] iOS: 0x12fc04
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1e1734
     * @note[short] MacOS (Intel): 0x239260
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x1309c0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x1e1804
     * @note[short] MacOS (Intel): 0x239320
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x130a2c
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x1e18bc
     * @note[short] MacOS (Intel): 0x2393d0
     * @note[short] Windows: 0x475b80
     * @note[short] iOS: 0x130a8c
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x1e198c
     * @note[short] MacOS (Intel): 0x2394b0
     * @note[short] Windows: 0x475c50
     * @note[short] iOS: 0x130b50
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e3eb8
     * @note[short] MacOS (Intel): 0x23ba00
     * @note[short] Windows: 0x477830
     * @note[short] iOS: 0x132784
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x1e555c
     * @note[short] MacOS (Intel): 0x23dd00
     * @note[short] Windows: 0x477d20
     * @note[short] iOS: 0x133390
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1e5798
     * @note[short] MacOS (Intel): 0x23def0
     * @note[short] Windows: 0x4780c0
     * @note[short] iOS: 0x13356c
     * @note[short] Android
     */
    virtual void updateToggleItem(int value, bool toggled);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1e5850
     * @note[short] MacOS (Intel): 0x23dfb0
     * @note[short] Windows: 0x478130
     * @note[short] iOS: 0x1335dc
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x1e5bfc
     * @note[short] MacOS (Intel): 0x23e340
     * @note[short] Windows: 0x47c120
     * @note[short] iOS: 0x1337dc
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1e5c88
     * @note[short] MacOS (Intel): 0x23e3c0
     * @note[short] Windows: 0x47c1b0
     * @note[short] iOS: 0x133848
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e68c8
     * @note[short] MacOS (Intel): 0x23efd0
     * @note[short] Windows: 0x47d0d0
     * @note[short] iOS: 0x134324
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x1df7bc
     * @note[short] MacOS (Intel): 0x235eb0
     * @note[short] Windows: 0x474930
     * @note[short] iOS: 0x12ef14
     * @note[short] Android: Rebinded
     */
    void addCloseButton(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x1e3d1c
     * @note[short] MacOS (Intel): 0x23b870
     * @note[short] Windows: 0x477730
     * @note[short] iOS: 0x132658
     * @note[short] Android
     */
    void addCustomButton(int tag, ButtonSprite* sprite, cocos2d::CCPoint position, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1df83c
     * @note[short] MacOS (Intel): 0x235f30
     * @note[short] Windows: 0x474a40
     * @note[short] iOS: 0x12ef90
     * @note[short] Android: Rebinded
     */
    void addHelpButton(gd::string title, gd::string desc, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1e36e8
     * @note[short] MacOS (Intel): 0x23b220
     * @note[short] Windows: 0x477230
     * @note[short] iOS: 0x132170
     * @note[short] Android: Rebinded
     */
    void addInfoLabel(gd::string text, float scale, cocos2d::CCPoint position, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1df610
     * @note[short] MacOS (Intel): 0x235ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12ee24
     * @note[short] Android
     */
    void addObjectsToGroup(cocos2d::CCArray* objects, int group);

    /**
     * @note[short] MacOS (ARM): 0x1df4bc
     * @note[short] MacOS (Intel): 0x235b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12eda8
     * @note[short] Android
     */
    void addObjectsToPage(cocos2d::CCArray* objects, int page);

    /**
     * @note[short] MacOS (ARM): 0x1df5a0
     * @note[short] MacOS (Intel): 0x235c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12edfc
     * @note[short] Android
     */
    void addObjectToGroup(cocos2d::CCObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0x1df44c
     * @note[short] MacOS (Intel): 0x235ae0
     * @note[short] Windows: 0x4747a0
     * @note[short] iOS: 0x12ed80
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x1df6f4
     * @note[short] MacOS (Intel): 0x235de0
     * @note[short] Windows: 0x474830
     * @note[short] iOS: 0x12ee4c
     * @note[short] Android: Rebinded
     */
    void addTitle(gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x1e16c4
     * @note[short] MacOS (Intel): 0x2391d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeInputNodes();

    /**
     * @note[short] MacOS (ARM): 0x1e39e4
     * @note[short] MacOS (Intel): 0x23b520
     * @note[short] Windows: 0x4774b0
     * @note[short] iOS: 0x132398
     * @note[short] Android: Rebinded
     */
    void createCustomButton(int tag, gd::string text, gd::string frame, cocos2d::CCPoint position, float buttonScale, float labelScale, bool vertical, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1e6abc
     * @note[short] MacOS (Intel): 0x23f1d0
     * @note[short] Windows: 0x47d190
     * @note[short] iOS: 0x1344a0
     * @note[short] Android: Rebinded
     */
    void createCustomEasingControls(gd::string text, cocos2d::CCPoint position, float scale, int typeProperty, int rateProperty, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1e33f0
     * @note[short] MacOS (Intel): 0x23af40
     * @note[short] Windows: 0x476fb0
     * @note[short] iOS: 0x131f6c
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createCustomToggleValueControl(int property, bool toggled, bool notClickable, gd::string text, cocos2d::CCPoint position, bool vertical, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1e5d38
     * @note[short] MacOS (Intel): 0x23e470
     * @note[short] Windows: 0x47c260
     * @note[short] iOS: 0x1338e0
     * @note[short] Android
     */
    void createEasingControls(cocos2d::CCPoint position, float scale, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1dfbfc
     * @note[short] MacOS (Intel): 0x236310
     * @note[short] Windows: 0x4750f0
     * @note[short] iOS: 0x12f31c
     * @note[short] Android
     */
    void createMultiTriggerItems(cocos2d::CCPoint touchPos, cocos2d::CCPoint spawnPos, cocos2d::CCPoint multiPos);

    /**
     * @note[short] MacOS (ARM): 0x1dff1c
     * @note[short] MacOS (Intel): 0x2366a0
     * @note[short] Windows: 0x474de0
     * @note[short] iOS: 0x12f59c
     * @note[short] Android
     */
    void createMultiTriggerItemsCorner();

    /**
     * @note[short] MacOS (ARM): 0x1dfb1c
     * @note[short] MacOS (Intel): 0x236200
     * @note[short] Windows: 0x474cd0
     * @note[short] iOS: 0x12f23c
     * @note[short] Android
     */
    void createMultiTriggerItemsDefault();

    /**
     * @note[short] MacOS (ARM): 0x1e00bc
     * @note[short] MacOS (Intel): 0x2368a0
     * @note[short] Windows: 0x474fe0
     * @note[short] iOS: 0x12f73c
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultHorizontal();

    /**
     * @note[short] MacOS (ARM): 0x1dffec
     * @note[short] MacOS (Intel): 0x2367a0
     * @note[short] Windows: 0x474ee0
     * @note[short] iOS: 0x12f66c
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultVertical();

    /**
     * @note[short] MacOS (ARM): 0x1debe8
     * @note[short] MacOS (Intel): 0x235240
     * @note[short] Windows: 0x474020
     * @note[short] iOS: 0x12e5d0
     * @note[short] Android
     */
    void createPageButtons(float offset, int arrow);

    /**
     * @note[short] MacOS (ARM): 0x1e3828
     * @note[short] MacOS (Intel): 0x23b370
     * @note[short] Windows: 0x477310
     * @note[short] iOS: 0x132248
     * @note[short] Android: Rebinded
     */
    CCMenuItemSpriteExtra* createPlusButton(int tag, cocos2d::CCPoint position, float scale, gd::string frame, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1df9e8
     * @note[short] MacOS (Intel): 0x2360d0
     * @note[short] Windows: 0x474ba0
     * @note[short] iOS: 0x12f114
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1e2ffc
     * @note[short] MacOS (Intel): 0x23ab70
     * @note[short] Windows: 0x476ca0
     * @note[short] iOS: 0x131bfc
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createToggleValueControl(int property, gd::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1e3150
     * @note[short] MacOS (Intel): 0x23aca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x131d3c
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createToggleValueControlAdvanced(int property, gd::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float buttonScale, float labelScale, float labelWidth, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x1e1e6c
     * @note[short] MacOS (Intel): 0x2399b0
     * @note[short] Windows: 0x475ee0
     * @note[short] iOS: 0x130ea8
     * @note[short] Android: Rebinded
     */
    void createValueControl(int property, gd::string label, cocos2d::CCPoint position, float scale, float sliderMin, float sliderMax);

    /**
     * @note[short] MacOS (ARM): 0x1e1f58
     * @note[short] MacOS (Intel): 0x239aa0
     * @note[short] Windows: 0x475fd0
     * @note[short] iOS: 0x130f94
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createValueControlAdvanced(int property, gd::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float sliderMin, float sliderMax, int page, int group, GJInputStyle inputStyle, int decimalPlaces, bool allowDisable);

    /**
     * @note[short] MacOS (ARM): 0x1e2b0c
     * @note[short] MacOS (Intel): 0x23a6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void createValueControlWArrows(int property, gd::string label, cocos2d::CCPoint position, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1df2b8
     * @note[short] MacOS (Intel): 0x235950
     * @note[short] Windows: 0x474640
     * @note[short] iOS: 0x12ec3c
     * @note[short] Android
     */
    cocos2d::CCArray* getGroupContainer(int group);

    /**
     * @note[short] MacOS (ARM): 0x1e5bcc
     * @note[short] MacOS (Intel): 0x23e310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMaxSliderValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1e5b9c
     * @note[short] MacOS (Intel): 0x23e2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMinSliderValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1e0320
     * @note[short] MacOS (Intel): 0x236b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12f99c
     * @note[short] Android
     */
    cocos2d::CCArray* getObjects();

    /**
     * @note[short] MacOS (ARM): 0x1df138
     * @note[short] MacOS (Intel): 0x2357a0
     * @note[short] Windows: 0x474340
     * @note[short] iOS: 0x12eaf8
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int page);

    /**
     * @note[short] MacOS (ARM): 0x1e423c
     * @note[short] MacOS (Intel): 0x23be10
     * @note[short] Windows: 0x47a5b0
     * @note[short] iOS: 0x132a58
     * @note[short] Android
     */
    float getTriggerValue(int property, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e0824
     * @note[short] MacOS (Intel): 0x237120
     * @note[short] Windows: 0x477c10
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getTruncatedValue(float value, int decimals);

    /**
     * @note[short] MacOS (ARM): 0x1e1b40
     * @note[short] MacOS (Intel): 0x239690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x130cb8
     * @note[short] Android
     */
    float getTruncatedValueByTag(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1def88
     * @note[short] MacOS (Intel): 0x2355c0
     * @note[short] Windows: 0x4743b0
     * @note[short] iOS: 0x12e954
     * @note[short] Android
     */
    void goToPage(int page, bool hideAll);

    /**
     * @note[short] MacOS (ARM): 0x1df19c
     * @note[short] MacOS (Intel): 0x235800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12eb54
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x1de8f4
     * @note[short] MacOS (Intel): 0x234e90
     * @note[short] Windows: 0x473ca0
     * @note[short] iOS: 0x12e2ec
     * @note[short] Android
     */
    bool init(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background);

    /**
     * @note[short] MacOS (ARM): 0x1e781c
     * @note[short] MacOS (Intel): 0x23fe20
     * @note[short] Windows: 0x47da70
     * @note[short] iOS: 0x134f84
     * @note[short] Android
     */
    void onCustomEaseArrow(int property, bool up);

    /**
     * @note[short] MacOS (ARM): 0x1e74ec
     * @note[short] MacOS (Intel): 0x23fb60
     * @note[short] Windows: 0x47da40
     * @note[short] iOS: 0x134d04
     * @note[short] Android
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e7438
     * @note[short] MacOS (Intel): 0x23fac0
     * @note[short] Windows: 0x47da10
     * @note[short] iOS: 0x134ccc
     * @note[short] Android
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e72f8
     * @note[short] MacOS (Intel): 0x23f9d0
     * @note[short] Windows: 0x47d8f0
     * @note[short] iOS: 0x134ba4
     * @note[short] Android
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e2d00
     * @note[short] MacOS (Intel): 0x23a8d0
     * @note[short] Windows: 0x476b90
     * @note[short] iOS: 0x1319f0
     * @note[short] Android
     */
    void onDisableValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e6570
     * @note[short] MacOS (Intel): 0x23ecb0
     * @note[short] Windows: 0x47cf80
     * @note[short] iOS: 0x134070
     * @note[short] Android
     */
    void onEase(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e6468
     * @note[short] MacOS (Intel): 0x23ebf0
     * @note[short] Windows: 0x47cff0
     * @note[short] iOS: 0x133f80
     * @note[short] Android
     */
    void onEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e0230
     * @note[short] MacOS (Intel): 0x236a50
     * @note[short] Windows: 0x4757f0
     * @note[short] iOS: 0x12f8b0
     * @note[short] Android
     */
    void onMultiTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dee9c
     * @note[short] MacOS (Intel): 0x2354e0
     * @note[short] Windows: 0x4742d0
     * @note[short] iOS: 0x12e868
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e01e8
     * @note[short] MacOS (Intel): 0x236a00
     * @note[short] Windows: 0x475670
     * @note[short] iOS: 0x12f868
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e3374
     * @note[short] MacOS (Intel): 0x23aed0
     * @note[short] Windows: 0x477b80
     * @note[short] iOS: 0x131ef0
     * @note[short] Android
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e01a0
     * @note[short] MacOS (Intel): 0x2369b0
     * @note[short] Windows: 0x475580
     * @note[short] iOS: 0x12f820
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e3e8c
     * @note[short] MacOS (Intel): 0x23b9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x132758
     * @note[short] Android
     */
    void postSetup();

    /**
     * @note[short] MacOS (ARM): 0x1e3e78
     * @note[short] MacOS (Intel): 0x23b9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x132744
     * @note[short] Android
     */
    void preSetup();

    /**
     * @note[short] MacOS (ARM): 0x1df1a8
     * @note[short] MacOS (Intel): 0x235820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12eb60
     * @note[short] Android
     */
    void refreshGroupVisibility();

    /**
     * @note[short] MacOS (ARM): 0x1df680
     * @note[short] MacOS (Intel): 0x235d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeObjectFromGroup(cocos2d::CCObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0x1df52c
     * @note[short] MacOS (Intel): 0x235be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12edd0
     * @note[short] Android
     */
    void removeObjectFromPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x1e2e00
     * @note[short] MacOS (Intel): 0x23a9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x131aa4
     * @note[short] Android
     */
    void resetDisabledValues();

    /**
     * @note[short] MacOS (ARM): 0x1e2c80
     * @note[short] MacOS (Intel): 0x23a850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1319c0
     * @note[short] Android
     */
    void setMaxSliderValue(float value, int property);

    /**
     * @note[short] MacOS (ARM): 0x1e2c00
     * @note[short] MacOS (Intel): 0x23a7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setMinSliderValue(float value, int property);

    /**
     * @note[short] MacOS (ARM): 0x1e595c
     * @note[short] MacOS (Intel): 0x23e0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldLimitValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1deb9c
     * @note[short] MacOS (Intel): 0x2351f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12e584
     * @note[short] Android
     */
    void toggleBG(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1e76e0
     * @note[short] MacOS (Intel): 0x23fd00
     * @note[short] Windows: 0x47ddf0
     * @note[short] iOS: 0x134e6c
     * @note[short] Android
     */
    void toggleCustomEaseRateVisibility(int property, int tag);

    /**
     * @note[short] MacOS (ARM): 0x1e2ee4
     * @note[short] MacOS (Intel): 0x23aa70
     * @note[short] Windows: 0x476bc0
     * @note[short] iOS: 0x131b40
     * @note[short] Android
     */
    void toggleDisableButtons(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1e6828
     * @note[short] MacOS (Intel): 0x23ef20
     * @note[short] Windows: 0x47ce70
     * @note[short] iOS: 0x134284
     * @note[short] Android
     */
    void toggleEaseRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x1e5ad8
     * @note[short] MacOS (Intel): 0x23e220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13378c
     * @note[short] Android
     */
    void toggleLimitValue(int property, bool limit);

    /**
     * @note[short] MacOS (ARM): 0x1def10
     * @note[short] MacOS (Intel): 0x235550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12e8dc
     * @note[short] Android
     */
    void togglePageArrows(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1e1c4c
     * @note[short] MacOS (Intel): 0x2397b0
     * @note[short] Windows: 0x475e40
     * @note[short] iOS: 0x130d58
     * @note[short] Android
     */
    void triggerArrowChanged(int property, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0x1e1bb4
     * @note[short] MacOS (Intel): 0x239720
     * @note[short] Windows: 0x475de0
     * @note[short] iOS: 0x130d20
     * @note[short] Android
     */
    void triggerArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e1ce0
     * @note[short] MacOS (Intel): 0x239830
     * @note[short] Windows: 0x475e10
     * @note[short] iOS: 0x130dec
     * @note[short] Android
     */
    void triggerArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e1a5c
     * @note[short] MacOS (Intel): 0x239590
     * @note[short] Windows: 0x475d20
     * @note[short] iOS: 0x130c14
     * @note[short] Android
     */
    void triggerSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e75a0
     * @note[short] MacOS (Intel): 0x23fc00
     * @note[short] Windows: 0x47db10
     * @note[short] iOS: 0x134d3c
     * @note[short] Android
     */
    void updateCustomEaseLabel(int property, int easingType);

    /**
     * @note[short] MacOS (ARM): 0x1e698c
     * @note[short] MacOS (Intel): 0x23f080
     * @note[short] Windows: 0x47dce0
     * @note[short] iOS: 0x1343e4
     * @note[short] Android
     */
    void updateCustomEaseRateLabel(int property, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x1e3644
     * @note[short] MacOS (Intel): 0x23b190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x132134
     * @note[short] Android
     */
    void updateCustomToggleTrigger(int tag, bool toggled);

    /**
     * @note[short] MacOS (ARM): 0x1e65dc
     * @note[short] MacOS (Intel): 0x23ed20
     * @note[short] Windows: 0x47cae0
     * @note[short] iOS: 0x1340dc
     * @note[short] Android
     */
    void updateEaseLabel();

    /**
     * @note[short] MacOS (ARM): 0x1e66d8
     * @note[short] MacOS (Intel): 0x23edf0
     * @note[short] Windows: 0x47cc90
     * @note[short] iOS: 0x1341c4
     * @note[short] Android
     */
    void updateEaseRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x1e0464
     * @note[short] MacOS (Intel): 0x236cc0
     * @note[short] Windows: 0x475500
     * @note[short] iOS: 0x12fa90
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x1e5a1c
     * @note[short] MacOS (Intel): 0x23e180
     * @note[short] Windows: 0x47c0a0
     * @note[short] iOS: 0x1336dc
     * @note[short] Android: Rebinded
     */
    void updateInputNodeLabel(int property, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x1e3680
     * @note[short] MacOS (Intel): 0x23b1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void updateLabel(int property, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x1e02a8
     * @note[short] MacOS (Intel): 0x236ae0
     * @note[short] Windows: 0x475760
     * @note[short] iOS: 0x12f928
     * @note[short] Android
     */
    void updateMultiTriggerBtn();

    /**
     * @note[short] MacOS (ARM): 0x1e5728
     * @note[short] MacOS (Intel): 0x23de90
     * @note[short] Windows: 0x478050
     * @note[short] iOS: 0x133524
     * @note[short] Android
     */
    void updateSlider(int property);

    /**
     * @note[short] MacOS (ARM): 0x1e1548
     * @note[short] MacOS (Intel): 0x239000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13087c
     * @note[short] Android
     */
    void updateSlider(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1e04dc
     * @note[short] MacOS (Intel): 0x236d40
     * @note[short] Windows: 0x4756c0
     * @note[short] iOS: 0x12fb08
     * @note[short] Android
     */
    void updateSpawnedByTrigger();

    /**
     * @note[short] MacOS (ARM): 0x1e05a4
     * @note[short] MacOS (Intel): 0x236e30
     * @note[short] Windows: 0x4755d0
     * @note[short] iOS: 0x12fb78
     * @note[short] Android
     */
    void updateTouchTriggered();

    /**
     * @note[short] MacOS (ARM): 0x1e2d88
     * @note[short] MacOS (Intel): 0x23a940
     * @note[short] Windows: 0x47c010
     * @note[short] iOS: 0x131a2c
     * @note[short] Android
     */
    void updateValue(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1e1d78
     * @note[short] MacOS (Intel): 0x2398c0
     * @note[short] Windows: 0x477c80
     * @note[short] iOS: 0x130e24
     * @note[short] Android
     */
    void updateValueControls(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1e0880
     * @note[short] MacOS (Intel): 0x237190
     * @note[short] Windows: 0x478250
     * @note[short] iOS: 0x12fd3c
     * @note[short] Android
     */
    void valueChanged(int property, float value);
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_touchTriggered;
    bool m_spawnTriggered;
    CCMenuItemToggler* m_touchToggle;
    CCMenuItemToggler* m_spawnToggle;
    cocos2d::CCArray* m_multiTriggerContainer;
    bool m_multiTriggered;
    float m_width;
    float m_height;
    bool m_disableTextDelegate;
    cocos2d::CCDictionary* m_valueToggles;
    cocos2d::CCDictionary* m_inputNodes;
    cocos2d::CCDictionary* m_valueControls;
    cocos2d::CCDictionary* m_customValueToggles;
    cocos2d::CCDictionary* m_disableButtons;
    cocos2d::CCLabelBMFont* m_easingLabel;
    cocos2d::CCLabelBMFont* m_easingRateLabel;
    CCMenuItemSpriteExtra* m_easingRateButton;
    EasingType m_easingType;
    float m_easingRate;
    cocos2d::CCDictionary* m_inputLabels;
    cocos2d::CCDictionary* m_triggerValues;
    cocos2d::CCDictionary* m_minSliderValues;
    cocos2d::CCDictionary* m_maxSliderValues;
    gd::map<int, bool> m_shouldLimitValues;
    bool m_disableSliderDelegate;
    bool m_effectObjects;
    cocos2d::CCArray* m_pageContainers;
    int m_page;
    float m_easingControlScale;
    cocos2d::CCArray* m_groupContainers;
    cocos2d::CCDictionary* m_customEasingTags;
    cocos2d::CCDictionary* m_customEasingLabels;
    cocos2d::CCDictionary* m_customEasingButtons;
    cocos2d::CCDictionary* m_customEasingScales;
    cocos2d::CCDictionary* m_disabledEasingButtons;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_hideAll;
};
