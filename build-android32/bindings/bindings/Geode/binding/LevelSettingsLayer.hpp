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
#include "ColorSelectDelegate.hpp"
#include "SelectArtDelegate.hpp"
#include "SelectSettingDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "TextInputDelegate.hpp"

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x20e964
     * @note[short] MacOS (Intel): 0x26b540
     * @note[short] Windows: 0x31e830
     * @note[short] iOS: 0x179224
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* object, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x211c74
     * @note[short] MacOS (Intel): 0x26ecc0
     * @note[short] Windows: 0x3212e0
     * @note[short] iOS: 0x17bde0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x212498
     * @note[short] MacOS (Intel): 0x26f5f0
     * @note[short] Windows: 0x322180
     * @note[short] iOS: 0x17c31c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2120bc
     * @note[short] MacOS (Intel): 0x26f150
     * @note[short] Windows: 0xc3e30
     * @note[short] iOS: 0x17c004
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x212004
     * @note[short] MacOS (Intel): 0x26f070
     * @note[short] Windows: 0x321a10
     * @note[short] iOS: 0x17bf4c
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x212298
     * @note[short] MacOS (Intel): 0x26f380
     * @note[short] Windows: 0x321e30
     * @note[short] iOS: 0x17c11c
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x211ac0
     * @note[short] MacOS (Intel): 0x26eaf0
     * @note[short] Windows: 0x321160
     * @note[short] iOS: 0x17bc54
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x211cc8
     * @note[short] MacOS (Intel): 0x26ed10
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x17be34
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x211ce4
     * @note[short] MacOS (Intel): 0x26ed50
     * @note[short] Windows: 0x321610
     * @note[short] iOS: 0x17be50
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x21148c
     * @note[short] MacOS (Intel): 0x26e3d0
     * @note[short] Windows: 0x321360
     * @note[short] iOS: 0x17b760
     * @note[short] Android: Rebinded
     */
    void createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x20eacc
     * @note[short] MacOS (Intel): 0x26b740
     * @note[short] Windows: 0x31ea20
     * @note[short] iOS: 0x1792a8
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x211230
     * @note[short] MacOS (Intel): 0x26e130
     * @note[short] Windows: 0x321bf0
     * @note[short] iOS: 0x17b568
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211390
     * @note[short] MacOS (Intel): 0x26e2c0
     * @note[short] Windows: 0x3217e0
     * @note[short] iOS: 0x17b664
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210d38
     * @note[short] MacOS (Intel): 0x26dbe0
     * @note[short] Windows: 0x3219e0
     * @note[short] iOS: 0x17b3b8
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2116e4
     * @note[short] MacOS (Intel): 0x26e5e0
     * @note[short] Windows: 0x3215b0
     * @note[short] iOS: 0x17b9a4
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211334
     * @note[short] MacOS (Intel): 0x26e260
     * @note[short] Windows: 0x321cc0
     * @note[short] iOS: 0x17b608
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2110b0
     * @note[short] MacOS (Intel): 0x26dfb0
     * @note[short] Windows: 0x320f30
     * @note[short] iOS: 0x17b478
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21126c
     * @note[short] MacOS (Intel): 0x26e170
     * @note[short] Windows: 0x321c40
     * @note[short] iOS: 0x17b5a4
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21106c
     * @note[short] MacOS (Intel): 0x26df70
     * @note[short] Windows: 0x321920
     * @note[short] iOS: 0x17b434
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2117a0
     * @note[short] MacOS (Intel): 0x26e6b0
     * @note[short] Windows: 0x321100
     * @note[short] iOS: 0x17ba60
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2116f8
     * @note[short] MacOS (Intel): 0x26e600
     * @note[short] Windows: 0x3215d0
     * @note[short] iOS: 0x17b9b8
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211370
     * @note[short] MacOS (Intel): 0x26e2a0
     * @note[short] Windows: 0x321d10
     * @note[short] iOS: 0x17b644
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211de0
     * @note[short] MacOS (Intel): 0x26ee50
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211ea0
     * @note[short] MacOS (Intel): 0x26ef10
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2117dc
     * @note[short] MacOS (Intel): 0x26e700
     * @note[short] Windows: 0x321040
     * @note[short] iOS: 0x17ba9c
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210ce4
     * @note[short] MacOS (Intel): 0x26db80
     * @note[short] Windows: 0x321970
     * @note[short] iOS: 0x17b364
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211764
     * @note[short] MacOS (Intel): 0x26e670
     * @note[short] Windows: 0x3210b0
     * @note[short] iOS: 0x17ba24
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211fd0
     * @note[short] MacOS (Intel): 0x26f030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showPicker(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x212010
     * @note[short] MacOS (Intel): 0x26f0a0
     * @note[short] Windows: 0x321a90
     * @note[short] iOS: 0x17bf58
     * @note[short] Android
     */
    void updateColorSprite(ColorChannelSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x210d58
     * @note[short] MacOS (Intel): 0x26dc00
     * @note[short] Windows: 0x321a20
     * @note[short] iOS: 0x17b3d8
     * @note[short] Android
     */
    void updateColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x211180
     * @note[short] MacOS (Intel): 0x26e080
     * @note[short] Windows: 0x320f70
     * @note[short] iOS: 0x17b4b8
     * @note[short] Android
     */
    void updateGameplayModeButtons();
    SongSelectNode* m_songSelectNode;
    Speed m_speed;
    ColorChannelSprite* m_bgColorSprite;
    ColorChannelSprite* m_gColorSprite;
    ColorChannelSprite* m_g2ColorSprite;
    ColorChannelSprite* m_lineColorSprite;
    ColorChannelSprite* m_mgColorSprite;
    ColorChannelSprite* m_mg2ColorSprite;
    cocos2d::CCSprite* m_moreColorsSprite;
    cocos2d::CCSprite* m_backgroundSprite;
    cocos2d::CCSprite* m_groundSprite;
    cocos2d::CCSprite* m_middlegroundSprite;
    cocos2d::CCSprite* m_speedSprite;
    cocos2d::CCSprite* m_modeSprite;
    LevelSettingsObject* m_settingsObject;
    void* m_unkPtr;
    cocos2d::CCArray* m_modeToggles;
    cocos2d::CCArray* m_speedButtons;
    LevelSettingsDelegate* m_delegate;
    LevelEditorLayer* m_editorLayer;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    CCMenuItemSpriteExtra* m_classicButton;
    CCMenuItemSpriteExtra* m_platformerButton;
    bool m_disableInput;
};
