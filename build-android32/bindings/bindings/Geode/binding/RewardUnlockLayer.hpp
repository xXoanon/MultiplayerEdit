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
#include "CurrencyRewardDelegate.hpp"

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1c6590
     * @note[short] MacOS (Intel): 0x21b3e0
     * @note[short] Windows: 0x3cdcc0
     * @note[short] iOS: 0x1c49bc
     * @note[short] Android
     */
    static RewardUnlockLayer* create(int type, RewardsPage* page);

    /**
     * @note[short] MacOS (ARM): 0x1ca598
     * @note[short] MacOS (Intel): 0x21f7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c80f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ca570
     * @note[short] MacOS (Intel): 0x21f7b0
     * @note[short] Windows: 0x3d1580
     * @note[short] iOS: 0x1c80cc
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1c7e78
     * @note[short] MacOS (Intel): 0x21cee0
     * @note[short] Windows: 0x3cebc0
     * @note[short] iOS: 0x1c5d44
     * @note[short] Android
     */
    void connectionTimeout();

    /**
     * @note[short] MacOS (ARM): 0x1c6eec
     * @note[short] MacOS (Intel): 0x21bec0
     * @note[short] Windows: 0x3cddf0
     * @note[short] iOS: 0x1c4fac
     * @note[short] Android
     */
    bool init(int type, RewardsPage* page);

    /**
     * @note[short] MacOS (ARM): 0x1ca56c
     * @note[short] MacOS (Intel): 0x21f7a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c80c8
     * @note[short] Android
     */
    void labelEnterFinishedO(cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1c7e20
     * @note[short] MacOS (Intel): 0x21ce80
     * @note[short] Windows: 0x3d1590
     * @note[short] iOS: 0x1c5cec
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c7cc4
     * @note[short] MacOS (Intel): 0x21cd40
     * @note[short] Windows: 0x3cec20
     * @note[short] iOS: 0x1c5bbc
     * @note[short] Android
     */
    void playDropSound();

    /**
     * @note[short] MacOS (ARM): 0x1c9e28
     * @note[short] MacOS (Intel): 0x21f050
     * @note[short] Windows: 0x3d04f0
     * @note[short] iOS: 0x1c79a8
     * @note[short] Android
     */
    void playLabelEffect(int count, int type, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float delay);

    /**
     * @note[short] MacOS (ARM): 0x1c7edc
     * @note[short] MacOS (Intel): 0x21cf40
     * @note[short] Windows: 0x3cede0
     * @note[short] iOS: 0x1c5da4
     * @note[short] Android
     */
    void playRewardEffect();

    /**
     * @note[short] MacOS (ARM): 0x1c683c
     * @note[short] MacOS (Intel): 0x21b6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool readyToCollect(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1ca4f4
     * @note[short] MacOS (Intel): 0x21f720
     * @note[short] Windows: 0x3d0480
     * @note[short] iOS: 0x1c8050
     * @note[short] Android
     */
    void showCloseButton();

    /**
     * @note[short] MacOS (ARM): 0x1c685c
     * @note[short] MacOS (Intel): 0x21b710
     * @note[short] Windows: 0x3ceb00
     * @note[short] iOS: 0x1c4b9c
     * @note[short] Android
     */
    bool showCollectReward(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1c7d50
     * @note[short] MacOS (Intel): 0x21cdb0
     * @note[short] Windows: 0x3cecc0
     * @note[short] iOS: 0x1c5c2c
     * @note[short] Android
     */
    void step2();

    /**
     * @note[short] MacOS (ARM): 0x1c9e0c
     * @note[short] MacOS (Intel): 0x21f030
     * @note[short] Windows: 0x3cedc0
     * @note[short] iOS: 0x1c798c
     * @note[short] Android
     */
    void step3();
    cocos2d::CCArray* m_backgroundObjects;
    RewardsPage* m_rewardsPage;
    GJChestSprite* m_chestSprite;
    int m_chestType;
    bool m_rewardCollected;
    bool m_animationPlayed;
    GJRewardItem* m_rewardItem;
    cocos2d::CCLabelBMFont* m_wrongLabel;
    CCMenuItemSpriteExtra* m_closeBtn;
    CCMenuItemSpriteExtra* m_rewardBtn;
    float m_unkFloat;
};
