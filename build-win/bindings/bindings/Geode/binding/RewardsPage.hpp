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
#include "FLAlertLayerProtocol.hpp"
#include "GJRewardDelegate.hpp"

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RewardsPage();

    /**
     * @note[short] MacOS (ARM): 0x1c5020
     * @note[short] MacOS (Intel): 0x219c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c3904
     * @note[short] Android: Rebinded
     */
     ~RewardsPage();

    /**
     * @note[short] MacOS (ARM): 0x1c533c
     * @note[short] MacOS (Intel): 0x21a0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c39c8
     * @note[short] Android
     */
    static RewardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x1c60e8
     * @note[short] MacOS (Intel): 0x21afc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static char const* getRewardFrame(int type, int state);

    /**
     * @note[short] MacOS (ARM): 0x1c5450
     * @note[short] MacOS (Intel): 0x21a220
     * @note[short] Windows: 0x3cc490
     * @note[short] iOS: 0x1c3a94
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1c6c0c
     * @note[short] MacOS (Intel): 0x21baa0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1c4ebc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1c6b90
     * @note[short] MacOS (Intel): 0x21ba30
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x1c4e40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c6a34
     * @note[short] MacOS (Intel): 0x21b8d0
     * @note[short] Windows: 0x3c53b0
     * @note[short] iOS: 0x1c4cfc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1c6b88
     * @note[short] MacOS (Intel): 0x21ba10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c4e38
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c66c0
     * @note[short] MacOS (Intel): 0x21b550
     * @note[short] Windows: 0x3cd490
     * @note[short] iOS: 0x1c4aa0
     * @note[short] Android
     */
    virtual void rewardsStatusFinished(int type);

    /**
     * @note[short] MacOS (ARM): 0x1c6930
     * @note[short] MacOS (Intel): 0x21b7e0
     * @note[short] Windows: 0x3cd6e0
     * @note[short] iOS: 0x1c4c68
     * @note[short] Android
     */
    virtual void rewardsStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x1c6080
     * @note[short] MacOS (Intel): 0x21af60
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x1c451c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c60bc
     * @note[short] MacOS (Intel): 0x21af90
     * @note[short] Windows: 0x3cdc90
     * @note[short] iOS: 0x1c4558
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c6110
     * @note[short] MacOS (Intel): 0x21afe0
     * @note[short] Windows: 0x3cd350
     * @note[short] iOS: 0x1c4584
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c69a4
     * @note[short] MacOS (Intel): 0x21b840
     * @note[short] Windows: 0x3cd790
     * @note[short] iOS: 0x1c4cdc
     * @note[short] Android
     */
    void tryGetRewards();

    /**
     * @note[short] MacOS (ARM): 0x1c6c44
     * @note[short] MacOS (Intel): 0x21bae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockLayerClosed(RewardUnlockLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1c6230
     * @note[short] MacOS (Intel): 0x21b0d0
     * @note[short] Windows: 0x3cd7e0
     * @note[short] iOS: 0x1c4690
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    RewardUnlockLayer* m_openLayer;
};
