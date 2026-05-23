#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     OptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a1a08
     * @note[short] MacOS (Intel): 0x799f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xec6fc
     * @note[short] Android
     */
    static OptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6a1ba0
     * @note[short] MacOS (Intel): 0x79a1d0
     * @note[short] Windows: 0x371d10
     * @note[short] iOS: 0xec804
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x6a2f08
     * @note[short] MacOS (Intel): 0x79b5e0
     * @note[short] Windows: 0x373560
     * @note[short] iOS: 0xed568
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x6a2f94
     * @note[short] MacOS (Intel): 0x79b650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xed5f4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x6a25f8
     * @note[short] MacOS (Intel): 0x79acb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x6a2bd0
     * @note[short] MacOS (Intel): 0x79b210
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a2ae8
     * @note[short] MacOS (Intel): 0x79b120
     * @note[short] Windows: 0x372990
     * @note[short] iOS: 0xed358
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2560
     * @note[short] MacOS (Intel): 0x79abd0
     * @note[short] Windows: 0x373480
     * @note[short] iOS: 0xed10c
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2570
     * @note[short] MacOS (Intel): 0x79abf0
     * @note[short] Windows: 0x373540
     * @note[short] iOS: 0xed11c
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2b98
     * @note[short] MacOS (Intel): 0x79b1d0
     * @note[short] Windows: 0x372880
     * @note[short] iOS: 0xed400
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a258c
     * @note[short] MacOS (Intel): 0x79ac10
     * @note[short] Windows: 0x372b70
     * @note[short] iOS: 0xed138
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2e08
     * @note[short] MacOS (Intel): 0x79b4f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a25c4
     * @note[short] MacOS (Intel): 0x79ac50
     * @note[short] Windows: 0x3734d0
     * @note[short] iOS: 0xed154
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2870
     * @note[short] MacOS (Intel): 0x79aed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a28a0
     * @note[short] MacOS (Intel): 0x79af00
     * @note[short] Windows: 0x372cd0
     * @note[short] iOS: 0xed188
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a25d8
     * @note[short] MacOS (Intel): 0x79ac70
     * @note[short] Windows: 0x372b20
     * @note[short] iOS: 0xed168
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a25e8
     * @note[short] MacOS (Intel): 0x79ac90
     * @note[short] Windows: 0x373430
     * @note[short] iOS: 0xed178
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a25a8
     * @note[short] MacOS (Intel): 0x79ac30
     * @note[short] Windows: 0x373410
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2b58
     * @note[short] MacOS (Intel): 0x79b190
     * @note[short] Windows: 0x372a90
     * @note[short] iOS: 0xed3c4
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a2e38
     * @note[short] MacOS (Intel): 0x79b520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryEnableRecord();
    cocos2d::CCMenu* m_optionsMenu;
    void* m_unknown;
    int m_layerChoice;
    bool m_recordReplays;
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    int m_lastVaultDialog;
};
