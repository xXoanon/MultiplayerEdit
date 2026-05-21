#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eeb2c
     * @note[short] Android: Out of line
     */
     SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x552ad8
     * @note[short] MacOS (Intel): 0x62fc00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e7e58
     * @note[short] Android: Rebinded
     */
     ~SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x552d34
     * @note[short] MacOS (Intel): 0x62ff70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e7f44
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x552ce8
     * @note[short] MacOS (Intel): 0x62ff30
     * @note[short] Windows: 0x3d2510
     * @note[short] iOS: 0x2e7ef8
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x55beb4
     * @note[short] MacOS (Intel): 0x63a430
     * @note[short] Windows: 0x3d7e10
     * @note[short] iOS: 0x2eeafc
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x55bde8
     * @note[short] MacOS (Intel): 0x63a360
     * @note[short] Windows: 0x3d7e00
     * @note[short] iOS: 0x2eeae8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x55bbd8
     * @note[short] MacOS (Intel): 0x63a170
     * @note[short] Windows: 0x3d68e0
     * @note[short] iOS: 0x2ee954
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x5556b4
     * @note[short] MacOS (Intel): 0x632a30
     * @note[short] Windows: 0x3d4d80
     * @note[short] iOS: 0x2ea1b0
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x5562a4
     * @note[short] MacOS (Intel): 0x633620
     * @note[short] Windows: 0x3d52e0
     * @note[short] iOS: 0x2ea964
     * @note[short] Android
     */
    void createSecondaryLayer(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x55bd3c
     * @note[short] MacOS (Intel): 0x63a2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eea48
     * @note[short] Android
     */
    void fadeInMusic();

    /**
     * @note[short] MacOS (ARM): 0x55bdbc
     * @note[short] MacOS (Intel): 0x63a330
     * @note[short] Windows: 0x3d7a30
     * @note[short] iOS: 0x2eeac0
     * @note[short] Android
     */
    void fadeInOutMusic();

    /**
     * @note[short] MacOS (ARM): 0x5566d8
     * @note[short] MacOS (Intel): 0x633aa0
     * @note[short] Windows: 0x3d5730
     * @note[short] iOS: 0x2ead0c
     * @note[short] Android
     */
    cocos2d::CCArray* generateChestItems(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x55587c
     * @note[short] MacOS (Intel): 0x632c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getPageColor(int page);

    /**
     * @note[short] MacOS (ARM): 0x555660
     * @note[short] MacOS (Intel): 0x6329f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ea15c
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x552e20
     * @note[short] MacOS (Intel): 0x6300a0
     * @note[short] Windows: 0x3d2670
     * @note[short] iOS: 0x2e7fb8
     * @note[short] Android
     */
    bool init(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x556184
     * @note[short] MacOS (Intel): 0x6334d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ea844
     * @note[short] Android
     */
    void moveToMainLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x555cac
     * @note[short] MacOS (Intel): 0x633050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ea628
     * @note[short] Android
     */
    void moveToSecondaryLayer(int page);

    /**
     * @note[short] MacOS (ARM): 0x554ce8
     * @note[short] MacOS (Intel): 0x6320f0
     * @note[short] Windows: 0x3d7c20
     * @note[short] iOS: 0x2e99ac
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x554d48
     * @note[short] MacOS (Intel): 0x632150
     * @note[short] Windows: 0x3d5050
     * @note[short] iOS: 0x2e9a18
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5550a8
     * @note[short] MacOS (Intel): 0x632490
     * @note[short] Windows: 0x3d7390
     * @note[short] iOS: 0x2e9cf8
     * @note[short] Android
     */
    void onGoldChest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5571f4
     * @note[short] MacOS (Intel): 0x634820
     * @note[short] Windows: 0x3d6140
     * @note[short] iOS: 0x2eb434
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55548c
     * @note[short] MacOS (Intel): 0x632830
     * @note[short] Windows: 0x3d66d0
     * @note[short] iOS: 0x2ea008
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5558bc
     * @note[short] MacOS (Intel): 0x632c50
     * @note[short] Windows: 0x3d6ad0
     * @note[short] iOS: 0x2ea378
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5555d4
     * @note[short] MacOS (Intel): 0x632980
     * @note[short] Windows: 0x3d4cc0
     * @note[short] iOS: 0x2ea104
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x557590
     * @note[short] MacOS (Intel): 0x634b80
     * @note[short] Windows: 0x3d7e50
     * @note[short] iOS: 0x2eb6ec
     * @note[short] Android
     */
    void showDialog01();

    /**
     * @note[short] MacOS (ARM): 0x558d6c
     * @note[short] MacOS (Intel): 0x636890
     * @note[short] Windows: 0x3d9790
     * @note[short] iOS: 0x2ec7fc
     * @note[short] Android
     */
    void showDialog03();

    /**
     * @note[short] MacOS (ARM): 0x55b074
     * @note[short] MacOS (Intel): 0x6393d0
     * @note[short] Windows: 0x3dbcf0
     * @note[short] iOS: 0x2ee138
     * @note[short] Android
     */
    void showDialogDiamond();

    /**
     * @note[short] MacOS (ARM): 0x559f08
     * @note[short] MacOS (Intel): 0x637e30
     * @note[short] Windows: 0x3daa60
     * @note[short] iOS: 0x2ed4e4
     * @note[short] Android
     */
    void showDialogMechanic();

    /**
     * @note[short] MacOS (ARM): 0x555da8
     * @note[short] MacOS (Intel): 0x633160
     * @note[short] Android
     */
    void showLockedChest();

    /**
     * @note[short] MacOS (ARM): 0x55bb68
     * @note[short] MacOS (Intel): 0x63a100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ee8e4
     * @note[short] Android
     */
    void showShop(int shop);

    /**
     * @note[short] MacOS (ARM): 0x554d9c
     * @note[short] MacOS (Intel): 0x632190
     * @note[short] Windows: 0x3d6ef0
     * @note[short] iOS: 0x2e9a6c
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* button);

    /**
     * @note[short] MacOS (ARM): 0x556058
     * @note[short] MacOS (Intel): 0x6333a0
     * @note[short] Windows: 0x3d51a0
     * @note[short] iOS: 0x2ea724
     * @note[short] Android
     */
    void updateBackButton();

    /**
     * @note[short] MacOS (ARM): 0x5553b4
     * @note[short] MacOS (Intel): 0x632770
     * @note[short] Windows: 0x3d7aa0
     * @note[short] iOS: 0x2e9f44
     * @note[short] Android
     */
    void updateUnlockedGoldLabel();

    /**
     * @note[short] MacOS (ARM): 0x554e7c
     * @note[short] MacOS (Intel): 0x632250
     * @note[short] Windows: 0x3d6fd0
     * @note[short] iOS: 0x2e9b4c
     * @note[short] Android
     */
    void updateUnlockedLabel();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLayer* m_secondaryLayer;
    cocos2d::CCLabelBMFont* m_chestLabel;
    cocos2d::CCLabelBMFont* m_chestCounter;
    cocos2d::CCSprite* m_goldPriceSprite;
    cocos2d::CCDictionary* m_chestCounters;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_goldKeysLabel;
    cocos2d::CCSprite* m_keySprite;
    cocos2d::CCSprite* m_goldKeySprite;
    void* m_unknown;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    cocos2d::CCSprite* m_backSprite;
    int m_unkSize4_1;
    int m_unkSize4_2;
    BoomScrollLayer* m_mainScrollLayer;
    BoomScrollLayer* m_secondaryScrollLayer;
    cocos2d::CCSprite* m_backgroundSprite;
    int m_scratchDialogIndex;
    int m_potborDialogIndex;
    int m_diamondDialogIndex;
    int m_mechanicDialogIndex;
    bool m_inMainLayer;
    GJRewardType m_rewardType;
    int m_lockedDialogIndex;
};
