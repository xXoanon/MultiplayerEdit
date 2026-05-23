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
#include "GJAccountSettingsDelegate.hpp"

class UpdateAccountSettingsPopup : public FLAlertLayer, public GJAccountSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "UpdateAccountSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UpdateAccountSettingsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UpdateAccountSettingsPopup();

    /**
     * @note[short] MacOS (ARM): 0x242078
     * @note[short] MacOS (Intel): 0x2a2f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d796c
     * @note[short] Android: Rebinded
     */
     ~UpdateAccountSettingsPopup();

    /**
     * @note[short] MacOS (ARM): 0x241420
     * @note[short] MacOS (Intel): 0x2a21a0
     * @note[short] Windows: 0x294570
     * @note[short] iOS: 0x2d716c
     * @note[short] Android: Rebinded
     */
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* settingsLayer, int messageStatus, int friendStatus, int commentStatus, gd::string youtubeURL, gd::string twitterURL, gd::string twitchURL, gd::string instagramURL, gd::string tiktokURL, gd::string discordUsername, gd::string customString);

    /**
     * @note[short] MacOS (ARM): 0x242d3c
     * @note[short] MacOS (Intel): 0x2a3e00
     * @note[short] Windows: 0x295170
     * @note[short] iOS: 0x2d82d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x242b38
     * @note[short] MacOS (Intel): 0x2a3bf0
     * @note[short] Windows: 0x294f30
     * @note[short] iOS: 0x2d8128
     * @note[short] Android
     */
    virtual void updateSettingsFinished();

    /**
     * @note[short] MacOS (ARM): 0x242c50
     * @note[short] MacOS (Intel): 0x2a3d10
     * @note[short] Windows: 0x295030
     * @note[short] iOS: 0x2d820c
     * @note[short] Android
     */
    virtual void updateSettingsFailed();

    /**
     * @note[short] MacOS (ARM): 0x242374
     * @note[short] MacOS (Intel): 0x2a3310
     * @note[short] Windows: 0x294860
     * @note[short] iOS: 0x2d7a28
     * @note[short] Android: Rebinded
     */
    bool init(GJAccountSettingsLayer* settingsLayer, int messageStatus, int friendStatus, int commentStatus, gd::string youtubeURL, gd::string twitterURL, gd::string twitchURL, gd::string instagramURL, gd::string tiktokURL, gd::string discordUsername, gd::string customString);

    /**
     * @note[short] MacOS (ARM): 0x242aa0
     * @note[short] MacOS (Intel): 0x2a3b60
     * @note[short] Windows: 0x2950f0
     * @note[short] iOS: 0x2d8090
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    bool m_updateSuccess;
    GJAccountSettingsLayer* m_settingsLayer;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
};
