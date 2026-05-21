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
#include "GJAccountDelegate.hpp"
#include "GJAccountBackupDelegate.hpp"
#include "GJAccountSyncDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0xb3128
     * @note[short] MacOS (Intel): 0xcb9b0
     * @note[short] Windows: 0x7d5b0
     * @note[short] iOS: 0x165538
     * @note[short] Android
     */
    static AccountLayer* create();

    /**
     * @note[short] MacOS (ARM): 0xb33b8
     * @note[short] MacOS (Intel): 0xcbd70
     * @note[short] Windows: 0x7d710
     * @note[short] iOS: 0x1656b8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0xb5318
     * @note[short] MacOS (Intel): 0xcdda0
     * @note[short] Windows: 0x7f4a0
     * @note[short] iOS: 0x166da0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0xb48d4
     * @note[short] MacOS (Intel): 0xcd2e0
     * @note[short] Windows: 0x7eb80
     * @note[short] iOS: 0x1666c0
     * @note[short] Android
     */
    virtual void backupAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0xb4a98
     * @note[short] MacOS (Intel): 0xcd4a0
     * @note[short] Windows: 0x7ed30
     * @note[short] iOS: 0x1667f4
     * @note[short] Android
     */
    virtual void backupAccountFailed(BackupAccountError errorType, int response);

    /**
     * @note[short] MacOS (ARM): 0xb4e04
     * @note[short] MacOS (Intel): 0xcd860
     * @note[short] Windows: 0x7f040
     * @note[short] iOS: 0x166a58
     * @note[short] Android
     */
    virtual void syncAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0xb4f70
     * @note[short] MacOS (Intel): 0xcd9e0
     * @note[short] Windows: 0x7f200
     * @note[short] iOS: 0x166b8c
     * @note[short] Android
     */
    virtual void syncAccountFailed(BackupAccountError errorType, int response);

    /**
     * @note[short] MacOS (ARM): 0xb48c0
     * @note[short] MacOS (Intel): 0xcd2b0
     * @note[short] Windows: 0x7e7a0
     * @note[short] iOS: 0x1666ac
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0xb51e8
     * @note[short] MacOS (Intel): 0xcdc80
     * @note[short] Windows: 0x7f390
     * @note[short] iOS: 0x166d04
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0xb44e0
     * @note[short] MacOS (Intel): 0xccf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xb4754
     * @note[short] MacOS (Intel): 0xcd150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16659c
     * @note[short] Android
     */
    void doBackup();

    /**
     * @note[short] MacOS (ARM): 0xb4830
     * @note[short] MacOS (Intel): 0xcd220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x166624
     * @note[short] Android
     */
    void doSync();

    /**
     * @note[short] MacOS (ARM): 0xb48b8
     * @note[short] MacOS (Intel): 0xcd2a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0xb4a3c
     * @note[short] MacOS (Intel): 0xcd430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0xb3ac0
     * @note[short] MacOS (Intel): 0xcc4d0
     * @note[short] Windows: 0x7e020
     * @note[short] iOS: 0x165db0
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb3fb0
     * @note[short] MacOS (Intel): 0xcc9e0
     * @note[short] Windows: 0x7e630
     * @note[short] iOS: 0x1660e4
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb3a08
     * @note[short] MacOS (Intel): 0xcc420
     * @note[short] Windows: 0x7de60
     * @note[short] iOS: 0x165cfc
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb4088
     * @note[short] MacOS (Intel): 0xccaa0
     * @note[short] Windows: 0x7e750
     * @note[short] iOS: 0x166198
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb3aa4
     * @note[short] MacOS (Intel): 0xcc4b0
     * @note[short] Windows: 0x7dea0
     * @note[short] iOS: 0x165d94
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb3db8
     * @note[short] MacOS (Intel): 0xcc800
     * @note[short] Windows: 0x7e3b0
     * @note[short] iOS: 0x165f98
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb47dc
     * @note[short] MacOS (Intel): 0xcd1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0xb51a8
     * @note[short] MacOS (Intel): 0xcdc40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] MacOS (ARM): 0xb4098
     * @note[short] MacOS (Intel): 0xccac0
     * @note[short] Windows: 0x7e7b0
     * @note[short] iOS: 0x1661a8
     * @note[short] Android
     */
    void updatePage(bool changed);
    cocos2d::CCLabelBMFont* m_linkedAccountTitle;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_loginButton;
    CCMenuItemSpriteExtra* m_registerButton;
    CCMenuItemSpriteExtra* m_backupButton;
    CCMenuItemSpriteExtra* m_syncButton;
    CCMenuItemSpriteExtra* m_helpButton;
    CCMenuItemSpriteExtra* m_moreButton;
    LoadingCircle* m_loadingCircle;
    int m_accountHelpRelated;
    bool m_isLoggedIn;
};
