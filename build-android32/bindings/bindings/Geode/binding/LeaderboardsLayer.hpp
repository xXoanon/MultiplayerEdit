#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LeaderboardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x4689d4
     * @note[short] MacOS (Intel): 0x511f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b0388
     * @note[short] Android: Rebinded
     */
     ~LeaderboardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x468ba0
     * @note[short] MacOS (Intel): 0x512210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b04ac
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x468aa8
     * @note[short] MacOS (Intel): 0x5120d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b0450
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46ab90
     * @note[short] MacOS (Intel): 0x5141e0
     * @note[short] Windows: 0x2c4150
     * @note[short] iOS: 0x3b20d4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x46ab38
     * @note[short] MacOS (Intel): 0x514180
     * @note[short] Windows: 0x2c40a0
     * @note[short] iOS: 0x3b207c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x46a4f0
     * @note[short] MacOS (Intel): 0x513bf0
     * @note[short] Windows: 0x2c3830
     * @note[short] iOS: 0x3b1cf8
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x46a530
     * @note[short] MacOS (Intel): 0x513c50
     * @note[short] Windows: 0x2c3860
     * @note[short] iOS: 0x3b1d38
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x46a5d8
     * @note[short] MacOS (Intel): 0x513cf0
     * @note[short] Windows: 0x2c3870
     * @note[short] iOS: 0x3b1d94
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x46a880
     * @note[short] MacOS (Intel): 0x513f40
     * @note[short] Windows: 0x2c3930
     * @note[short] iOS: 0x3b1f2c
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x468c84
     * @note[short] MacOS (Intel): 0x512320
     * @note[short] Windows: 0x2c13c0
     * @note[short] iOS: 0x3b0580
     * @note[short] Android
     */
    bool init(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46a7bc
     * @note[short] MacOS (Intel): 0x513e50
     * @note[short] Windows: 0x2c3a50
     * @note[short] iOS: 0x3b1e68
     * @note[short] Android: Rebinded
     */
    bool isCorrect(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x469f98
     * @note[short] MacOS (Intel): 0x513680
     * @note[short] Windows: 0x2c40d0
     * @note[short] iOS: 0x3b17a0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a038
     * @note[short] MacOS (Intel): 0x513730
     * @note[short] Windows: 0x2c3240
     * @note[short] iOS: 0x3b1840
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a01c
     * @note[short] MacOS (Intel): 0x513710
     * @note[short] Windows: 0x2c3220
     * @note[short] iOS: 0x3b1824
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46958c
     * @note[short] MacOS (Intel): 0x512c70
     * @note[short] Windows: 0x2c3ba0
     * @note[short] iOS: 0x3b0e5c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a054
     * @note[short] MacOS (Intel): 0x513750
     * @note[short] Windows: 0x2c31b0
     * @note[short] iOS: 0x3b185c
     * @note[short] Android
     */
    void onStat(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469fe4
     * @note[short] MacOS (Intel): 0x5136d0
     * @note[short] Windows: 0x2c31e0
     * @note[short] iOS: 0x3b17ec
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a000
     * @note[short] MacOS (Intel): 0x5136f0
     * @note[short] Windows: 0x2c3200
     * @note[short] iOS: 0x3b1808
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a1c4
     * @note[short] MacOS (Intel): 0x5138c0
     * @note[short] Windows: 0x2c3100
     * @note[short] iOS: 0x3b19cc
     * @note[short] Android
     */
    void refreshTabs();

    /**
     * @note[short] MacOS (ARM): 0x469dec
     * @note[short] MacOS (Intel): 0x5134e0
     * @note[short] Windows: 0x2c3260
     * @note[short] iOS: 0x3b1608
     * @note[short] Android
     */
    void selectLeaderboard(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46a08c
     * @note[short] MacOS (Intel): 0x513780
     * @note[short] Windows: 0x2c2fa0
     * @note[short] iOS: 0x3b1894
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* scores);

    /**
     * @note[short] MacOS (ARM): 0x469810
     * @note[short] MacOS (Intel): 0x512eb0
     * @note[short] Windows: 0x2c2660
     * @note[short] iOS: 0x3b1030
     * @note[short] Android
     */
    void setupTabs();

    /**
     * @note[short] MacOS (ARM): 0x46a268
     * @note[short] MacOS (Intel): 0x513960
     * @note[short] Windows: 0x2c35a0
     * @note[short] iOS: 0x3b1a70
     * @note[short] Android
     */
    void toggleTabButtons();
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardType m_type;
    LeaderboardStat m_stat;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
    cocos2d::CCArray* m_modeButtons;
};
