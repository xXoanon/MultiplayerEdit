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
#include "FLAlertLayerProtocol.hpp"

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AccountHelpLayer();

    /**
     * @note[short] MacOS (ARM): 0xb54d4
     * @note[short] MacOS (Intel): 0xcdfc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x166ed0
     * @note[short] Android: Rebinded
     */
     ~AccountHelpLayer();

    /**
     * @note[short] MacOS (ARM): 0xb5384
     * @note[short] MacOS (Intel): 0xcde00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x166e0c
     * @note[short] Android
     */
    static AccountHelpLayer* create();

    /**
     * @note[short] MacOS (ARM): 0xb57f0
     * @note[short] MacOS (Intel): 0xce3e0
     * @note[short] Windows: 0x7f610
     * @note[short] iOS: 0x166f94
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0xb6450
     * @note[short] MacOS (Intel): 0xcf080
     * @note[short] Windows: 0x80370
     * @note[short] iOS: 0x167a10
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0xb6304
     * @note[short] MacOS (Intel): 0xcef40
     * @note[short] Windows: 0x7fd10
     * @note[short] iOS: 0x16795c
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0xb6310
     * @note[short] MacOS (Intel): 0xcef70
     * @note[short] Windows: 0x7fff0
     * @note[short] iOS: 0x167968
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0xb62d0
     * @note[short] MacOS (Intel): 0xcef00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doUnlink();

    /**
     * @note[short] MacOS (ARM): 0xb62fc
     * @note[short] MacOS (Intel): 0xcef30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0xb5c10
     * @note[short] MacOS (Intel): 0xce820
     * @note[short] Windows: 0x7fa60
     * @note[short] iOS: 0x1673b0
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb5b9c
     * @note[short] MacOS (Intel): 0xce7c0
     * @note[short] Windows: 0x7fa20
     * @note[short] iOS: 0x167338
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb5ce4
     * @note[short] MacOS (Intel): 0xce8f0
     * @note[short] Windows: 0x7fb70
     * @note[short] iOS: 0x167464
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb5e98
     * @note[short] MacOS (Intel): 0xceaa0
     * @note[short] Windows: 0x7fd20
     * @note[short] iOS: 0x1675a4
     * @note[short] Android
     */
    void updatePage();

    /**
     * @note[short] MacOS (ARM): 0xb61d8
     * @note[short] MacOS (Intel): 0xcedf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x167898
     * @note[short] Android
     */
    void verifyUnlink();
    cocos2d::CCLabelBMFont* m_loginStatusLabel;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_refreshLoginButton;
    CCMenuItemSpriteExtra* m_unlinkAccountButton;
    bool m_unk290;
};
