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
#include "GJDailyLevelDelegate.hpp"
#include "LevelDownloadDelegate.hpp"

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1d968c
     * @note[short] MacOS (Intel): 0x2300b0
     * @note[short] Windows: 0xce400
     * @note[short] iOS: 0x1b8f18
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1dbd7c
     * @note[short] MacOS (Intel): 0x232350
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1baa94
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1dbce0
     * @note[short] MacOS (Intel): 0x2322c0
     * @note[short] Windows: 0x869d0
     * @note[short] iOS: 0x1baa88
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1dbb50
     * @note[short] MacOS (Intel): 0x232120
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x1ba908
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1dbcd8
     * @note[short] MacOS (Intel): 0x2322a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1baa80
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1db1cc
     * @note[short] MacOS (Intel): 0x231790
     * @note[short] Windows: 0xcf990
     * @note[short] iOS: 0x1ba190
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1db5d8
     * @note[short] MacOS (Intel): 0x231be0
     * @note[short] Windows: 0xcfc90
     * @note[short] iOS: 0x1ba4e0
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType type, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x1db844
     * @note[short] MacOS (Intel): 0x231e30
     * @note[short] Windows: 0xcffc0
     * @note[short] iOS: 0x1ba6bc
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1db92c
     * @note[short] MacOS (Intel): 0x231ef0
     * @note[short] Windows: 0xd0020
     * @note[short] iOS: 0x1ba734
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x1dbdb4
     * @note[short] MacOS (Intel): 0x232390
     * @note[short] Windows: 0xd1ae0
     * @note[short] iOS: 0x1baacc
     * @note[short] Android
     */
    void claimLevelReward(DailyLevelNode* node, GJGameLevel* level, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1dafe8
     * @note[short] MacOS (Intel): 0x2315a0
     * @note[short] Windows: 0xd0270
     * @note[short] iOS: 0x1b9ff0
     * @note[short] Android
     */
    void createDailyNode(GJGameLevel* level, bool instant, float delay, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1db96c
     * @note[short] MacOS (Intel): 0x231f40
     * @note[short] Windows: 0xd0180
     * @note[short] iOS: 0x1ba774
     * @note[short] Android
     */
    void createNodeIfLoaded();

    /**
     * @note[short] MacOS (ARM): 0x1db4f0
     * @note[short] MacOS (Intel): 0x231ae0
     * @note[short] Windows: 0xd00d0
     * @note[short] iOS: 0x1ba3f8
     * @note[short] Android
     */
    void downloadAndCreateNode();

    /**
     * @note[short] MacOS (ARM): 0x1db438
     * @note[short] MacOS (Intel): 0x231a20
     * @note[short] Windows: 0xd0560
     * @note[short] iOS: 0x1ba344
     * @note[short] Android
     */
    void exitDailyNode(DailyLevelNode* node, float delay);

    /**
     * @note[short] MacOS (ARM): 0x1dbad8
     * @note[short] MacOS (Intel): 0x2320b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ba894
     * @note[short] Android
     */
    int getDailyTime();

    /**
     * @note[short] MacOS (ARM): 0x1da76c
     * @note[short] MacOS (Intel): 0x230f10
     * @note[short] Windows: 0xd0630
     * @note[short] iOS: 0x1b9b60
     * @note[short] Android
     */
    gd::string getDailyTimeString(int timeLeft);

    /**
     * @note[short] MacOS (ARM): 0x1d97bc
     * @note[short] MacOS (Intel): 0x230240
     * @note[short] Windows: 0xce540
     * @note[short] iOS: 0x1b8f8c
     * @note[short] Android
     */
    bool init(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1da6b4
     * @note[short] MacOS (Intel): 0x230e60
     * @note[short] Windows: 0x86990
     * @note[short] iOS: 0x1b9aa8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1da700
     * @note[short] MacOS (Intel): 0x230ea0
     * @note[short] Windows: 0xd1fe0
     * @note[short] iOS: 0x1b9af4
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dc060
     * @note[short] MacOS (Intel): 0x232610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bad14
     * @note[short] Android
     */
    void refreshDailyPage();

    /**
     * @note[short] MacOS (ARM): 0x1dbf6c
     * @note[short] MacOS (Intel): 0x232510
     * @note[short] Windows: 0xd1db0
     * @note[short] iOS: 0x1bac20
     * @note[short] Android
     */
    void skipDailyLevel(DailyLevelNode* node, GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1db7d4
     * @note[short] MacOS (Intel): 0x231db0
     * @note[short] Windows: 0xd0040
     * @note[short] iOS: 0x1ba64c
     * @note[short] Android
     */
    void tryGetDailyStatus();

    /**
     * @note[short] MacOS (ARM): 0x1dad8c
     * @note[short] MacOS (Intel): 0x231360
     * @note[short] Windows: 0xd1790
     * @note[short] iOS: 0x1b9e58
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
