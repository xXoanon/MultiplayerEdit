#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bbca4
     * @note[short] Android: Out of line
     */
     DailyLevelNode();

    /**
     * @note[short] MacOS (ARM): 0x1dc0dc
     * @note[short] MacOS (Intel): 0x2326a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bad90
     * @note[short] Android: Rebinded
     */
     ~DailyLevelNode();

    /**
     * @note[short] MacOS (ARM): 0x1dba00
     * @note[short] MacOS (Intel): 0x231fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ba808
     * @note[short] Android
     */
    static DailyLevelNode* create(GJGameLevel* level, DailyLevelPage* page, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1dd0d8
     * @note[short] MacOS (Intel): 0x233620
     * @note[short] Windows: 0xd3160
     * @note[short] iOS: 0x1bbbdc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1dc1f4
     * @note[short] MacOS (Intel): 0x2327f0
     * @note[short] Windows: 0xd20c0
     * @note[short] iOS: 0x1bae04
     * @note[short] Android
     */
    bool init(GJGameLevel* level, DailyLevelPage* page, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1dcdec
     * @note[short] MacOS (Intel): 0x233360
     * @note[short] Windows: 0xd2e20
     * @note[short] iOS: 0x1bb9b4
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dcef0
     * @note[short] MacOS (Intel): 0x233460
     * @note[short] Windows: 0xd2f40
     * @note[short] iOS: 0x1bbaac
     * @note[short] Android
     */
    void onSkipLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1db564
     * @note[short] MacOS (Intel): 0x231b50
     * @note[short] Windows: 0xd2dc0
     * @note[short] iOS: 0x1ba46c
     * @note[short] Android
     */
    void showSkipButton();

    /**
     * @note[short] MacOS (ARM): 0x1db408
     * @note[short] MacOS (Intel): 0x2319e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void updateTimeLabel(gd::string text);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    cocos2d::CCPoint m_unkPoint;
    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};
