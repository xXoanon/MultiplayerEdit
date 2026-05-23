#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPurchaseDelegate.hpp"
#include "DialogDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJShopLayer();

    /**
     * @note[short] MacOS (ARM): 0x2b06f0
     * @note[short] MacOS (Intel): 0x322c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14a45c
     * @note[short] Android: Rebinded
     */
     ~GJShopLayer();

    /**
     * @note[short] MacOS (ARM): 0x2b08fc
     * @note[short] MacOS (Intel): 0x322f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14a594
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b07f8
     * @note[short] MacOS (Intel): 0x322df0
     * @note[short] Windows: 0x2a95b0
     * @note[short] iOS: 0x14a548
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b25b0
     * @note[short] MacOS (Intel): 0x324ca0
     * @note[short] Windows: 0x2ab820
     * @note[short] iOS: 0x14be1c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2b4714
     * @note[short] MacOS (Intel): 0x327270
     * @note[short] Windows: 0x2ae950
     * @note[short] iOS: 0x14d77c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2b4ac4
     * @note[short] MacOS (Intel): 0x327600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14da74
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2b4acc
     * @note[short] MacOS (Intel): 0x327620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14da7c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2b4ad4
     * @note[short] MacOS (Intel): 0x327640
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x14da84
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2b4af0
     * @note[short] MacOS (Intel): 0x327680
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x14daa0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2b3468
     * @note[short] MacOS (Intel): 0x325c90
     * @note[short] Windows: 0x2acf90
     * @note[short] iOS: 0x14c940
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2b2dfc
     * @note[short] MacOS (Intel): 0x325590
     * @note[short] Windows: 0x2ac590
     * @note[short] iOS: 0x14c440
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2b2888
     * @note[short] MacOS (Intel): 0x324fb0
     * @note[short] Windows: 0x2abbe0
     * @note[short] iOS: 0x14bfb8
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2b4530
     * @note[short] MacOS (Intel): 0x3270b0
     * @note[short] Windows: 0x2ae620
     * @note[short] iOS: 0x14d5bc
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2b27c0
     * @note[short] MacOS (Intel): 0x324ee0
     * @note[short] Android
     */
    void exitVideoAdItems();

    /**
     * @note[short] MacOS (ARM): 0x2b09e0
     * @note[short] MacOS (Intel): 0x323040
     * @note[short] Windows: 0x2a9730
     * @note[short] iOS: 0x14a66c
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b22c8
     * @note[short] MacOS (Intel): 0x3249d0
     * @note[short] Windows: 0x2acd70
     * @note[short] iOS: 0x14bb84
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b2250
     * @note[short] MacOS (Intel): 0x324950
     * @note[short] Windows: 0x2abaa0
     * @note[short] iOS: 0x14bb58
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b224c
     * @note[short] MacOS (Intel): 0x324940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14bb54
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b247c
     * @note[short] MacOS (Intel): 0x324b90
     * @note[short] Windows: 0x2abcb0
     * @note[short] iOS: 0x14bd0c
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b227c
     * @note[short] MacOS (Intel): 0x324980
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b2974
     * @note[short] MacOS (Intel): 0x3250a0
     * @note[short] Windows: 0x2abec0
     * @note[short] iOS: 0x14c050
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2b3474
     * @note[short] MacOS (Intel): 0x325cc0
     * @note[short] Windows: 0x2acfa0
     * @note[short] iOS: 0x14c94c
     * @note[short] Android
     */
    void showReactMessage();

    /**
     * @note[short] MacOS (ARM): 0x2b28e4
     * @note[short] MacOS (Intel): 0x325000
     * @note[short] Windows: 0x2abc40
     * @note[short] iOS: 0x14c014
     * @note[short] Android
     */
    void updateCurrencyCounter();
    bool m_closing;
    CCCounterLabel* m_currencyLabel;
    cocos2d::CCDictionary* m_shopItems;
    ShopType m_type;
    gd::string m_sheetName;
    cocos2d::CCNode* m_unkNode1;
    cocos2d::CCNode* m_unkNode2;
    bool m_videoPlaying;
    bool m_unkBool;
    AnimatedShopKeeper* m_shopKeeper;
    int m_zolgurothDialogIndex;
    int m_affordDialogIndex;
};
