#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameStatsManager* get();

    /**
     * @note[short] MacOS (ARM): 0x4d714
     * @note[short] MacOS (Intel): 0x59fb0
     * @note[short] Windows: 0x1d0ef0
     * @note[short] iOS: 0x32549c
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x4da58
     * @note[short] MacOS (Intel): 0x5a490
     * @note[short] Windows: 0x1d1110
     * @note[short] iOS: 0x325638
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2b8238
     * @note[short] MacOS (Intel): 0x32b630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x654a8
     * @note[short] Android
     */
    int accountIDForIcon(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x69588
     * @note[short] MacOS (Intel): 0x77e00
     * @note[short] Windows: 0x1ea0a0
     * @note[short] iOS: 0x336584
     * @note[short] Android: Rebinded
     */
    void addSimpleSpecialChestReward(gd::string key, UnlockType type, int id, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x6953c
     * @note[short] MacOS (Intel): 0x77dc0
     * @note[short] Windows: 0x1ea2b0
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void addSpecialRewardDescription(gd::string key, gd::string description);

    /**
     * @note[short] MacOS (ARM): 0x58624
     * @note[short] MacOS (Intel): 0x667b0
     * @note[short] Windows: 0x1d3fd0
     * @note[short] iOS: 0x32bcd4
     * @note[short] Android
     */
    void addStoreItem(int index, int id, int unlockType, int price, ShopType shopType);

    /**
     * @note[short] MacOS (ARM): 0x646f0
     * @note[short] MacOS (Intel): 0x72dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3339a8
     * @note[short] Android
     */
    bool areChallengesLoaded();

    /**
     * @note[short] MacOS (ARM): 0x63b9c
     * @note[short] MacOS (Intel): 0x722f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33339c
     * @note[short] Android
     */
    bool areRewardsLoaded();

    /**
     * @note[short] MacOS (ARM): 0x62914
     * @note[short] MacOS (Intel): 0x71090
     * @note[short] Windows: 0x1e0960
     * @note[short] iOS: 0x332810
     * @note[short] Android
     */
    void awardCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x630b0
     * @note[short] MacOS (Intel): 0x71810
     * @note[short] Windows: 0x1e1140
     * @note[short] iOS: 0x332cc4
     * @note[short] Android
     */
    void awardDiamondsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x67404
     * @note[short] MacOS (Intel): 0x75be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void awardOldSpecialStats();

    /**
     * @note[short] MacOS (ARM): 0x7e098
     * @note[short] MacOS (Intel): 0x8c5a0
     * @note[short] Windows: 0x1f19f0
     * @note[short] iOS: 0x33e2dc
     * @note[short] Android
     */
    bool awardSecretKey();

    /**
     * @note[short] MacOS (ARM): 0x68fe0
     * @note[short] MacOS (Intel): 0x77880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canItemBeUnlocked(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x59174
     * @note[short] MacOS (Intel): 0x673f0
     * @note[short] Windows: 0x1d5440
     * @note[short] iOS: 0x32c42c
     * @note[short] Android
     */
    void checkAchievement(char const* statKey);

    /**
     * @note[short] MacOS (ARM): 0x5e56c
     * @note[short] MacOS (Intel): 0x6cdf0
     * @note[short] Windows: 0x1dd800
     * @note[short] iOS: 0x330540
     * @note[short] Android
     */
    void checkCoinAchievement(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x6155c
     * @note[short] MacOS (Intel): 0x6fe40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x331e0c
     * @note[short] Android
     */
    void checkCoinsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x65694
     * @note[short] MacOS (Intel): 0x73c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x334198
     * @note[short] Android
     */
    bool claimListReward(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x63e6c
     * @note[short] MacOS (Intel): 0x72610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33353c
     * @note[short] Android
     */
    void collectReward(GJRewardType type, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x7e13c
     * @note[short] MacOS (Intel): 0x8c660
     * @note[short] Android
     */
    void collectVideoReward(int orbs);

    /**
     * @note[short] MacOS (ARM): 0x652e0
     * @note[short] MacOS (Intel): 0x738f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333f84
     * @note[short] Android
     */
    void completedChallenge(GJChallengeItem* item);

    /**
     * @note[short] MacOS (ARM): 0x65b18
     * @note[short] MacOS (Intel): 0x74130
     * @note[short] Windows: 0x1e2de0
     * @note[short] iOS: 0x334414
     * @note[short] Android
     */
    GJRewardItem* completedDailyLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5f57c
     * @note[short] MacOS (Intel): 0x6dcf0
     * @note[short] Windows: 0x1de500
     * @note[short] iOS: 0x330e90
     * @note[short] Android
     */
    void completedDemonLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5f420
     * @note[short] MacOS (Intel): 0x6dbb0
     * @note[short] Windows: 0x1de3b0
     * @note[short] iOS: 0x330d84
     * @note[short] Android
     */
    void completedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5ff64
     * @note[short] MacOS (Intel): 0x6e6c0
     * @note[short] Windows: 0x1dee00
     * @note[short] iOS: 0x331288
     * @note[short] Android
     */
    void completedMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x5f714
     * @note[short] MacOS (Intel): 0x6de90
     * @note[short] Windows: 0x1de770
     * @note[short] iOS: 0x330f5c
     * @note[short] Android
     */
    void completedStarLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x7df38
     * @note[short] MacOS (Intel): 0x8c440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33e254
     * @note[short] Android
     */
    int countSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x7df7c
     * @note[short] MacOS (Intel): 0x8c490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33e298
     * @note[short] Android
     */
    int countUnlockedSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x63574
     * @note[short] MacOS (Intel): 0x71cc0
     * @note[short] Windows: 0x1e15f0
     * @note[short] iOS: 0x332f8c
     * @note[short] Android: Rebinded
     */
    GJRewardItem* createReward(GJRewardType type, int id, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4fa3c
     * @note[short] MacOS (Intel): 0x5cbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x327644
     * @note[short] Android
     */
    void createSecretChestItems();

    /**
     * @note[short] MacOS (ARM): 0x6a574
     * @note[short] MacOS (Intel): 0x78dc0
     * @note[short] Windows: 0x1eaaf0
     * @note[short] iOS: 0x336d00
     * @note[short] Android
     */
    void createSecretChestRewards();

    /**
     * @note[short] MacOS (ARM): 0x4fb80
     * @note[short] MacOS (Intel): 0x5cd20
     * @note[short] Windows: 0x1e5c60
     * @note[short] iOS: 0x327780
     * @note[short] Android
     */
    void createSpecialChestItems();

    /**
     * @note[short] MacOS (ARM): 0x4db00
     * @note[short] MacOS (Intel): 0x5a540
     * @note[short] Windows: 0x1d1800
     * @note[short] iOS: 0x325708
     * @note[short] Android
     */
    void createStoreItems();

    /**
     * @note[short] MacOS (ARM): 0x7eda4
     * @note[short] MacOS (Intel): 0x8d470
     * @note[short] Windows: 0x1f24a0
     * @note[short] iOS: 0x33f07c
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7e8e0
     * @note[short] MacOS (Intel): 0x8cf50
     * @note[short] Windows: 0x1f21a0
     * @note[short] iOS: 0x33ecb0
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7e2b0
     * @note[short] MacOS (Intel): 0x8c7c0
     * @note[short] Windows: 0x1f1ab0
     * @note[short] iOS: 0x33e380
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x57a00
     * @note[short] MacOS (Intel): 0x65890
     * @note[short] Windows: 0x1d1310
     * @note[short] iOS: 0x32b7f8
     * @note[short] Android
     */
    void generateItemUnlockableData();

    /**
     * @note[short] MacOS (ARM): 0x62724
     * @note[short] MacOS (Intel): 0x70ec0
     * @note[short] Windows: 0x1e0720
     * @note[short] iOS: 0x3326c4
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x62eac
     * @note[short] MacOS (Intel): 0x71650
     * @note[short] Windows: 0x1e0f10
     * @note[short] iOS: 0x332b88
     * @note[short] Android
     */
    int getAwardedDiamondsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x62480
     * @note[short] MacOS (Intel): 0x70c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33253c
     * @note[short] Android
     */
    int getBaseCurrency(int stars, bool mainLevel, int levelID);

    /**
     * @note[short] MacOS (ARM): 0x624e0
     * @note[short] MacOS (Intel): 0x70ce0
     * @note[short] Windows: 0x1e0480
     * @note[short] iOS: 0x33259c
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x62e64
     * @note[short] MacOS (Intel): 0x715f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x332b40
     * @note[short] Android
     */
    int getBaseDiamonds(int stars);

    /**
     * @note[short] MacOS (ARM): 0x62e78
     * @note[short] MacOS (Intel): 0x71610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x332b54
     * @note[short] Android
     */
    int getBonusDiamonds(int stars);

    /**
     * @note[short] MacOS (ARM): 0x64d5c
     * @note[short] MacOS (Intel): 0x733d0
     * @note[short] Windows: 0x1e1e40
     * @note[short] iOS: 0x333ccc
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x6510c
     * @note[short] MacOS (Intel): 0x73730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333ecc
     * @note[short] Android
     */
    gd::string getChallengeKey(GJChallengeItem* chal);

    /**
     * @note[short] MacOS (ARM): 0x5ea30
     * @note[short] MacOS (Intel): 0x6d260
     * @note[short] Windows: 0x1ddba0
     * @note[short] iOS: 0x330758
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x60444
     * @note[short] MacOS (Intel): 0x6eb80
     * @note[short] Windows: 0x1df150
     * @note[short] iOS: 0x331550
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedMapPacks();

    /**
     * @note[short] MacOS (ARM): 0x623ac
     * @note[short] MacOS (Intel): 0x70bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3324e0
     * @note[short] Android
     */
    gd::string getCurrencyKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x65928
     * @note[short] MacOS (Intel): 0x73f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x334320
     * @note[short] Android
     */
    gd::string getDailyLevelKey(int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x5edc8
     * @note[short] MacOS (Intel): 0x6d660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3309bc
     * @note[short] Android
     */
    const char* getDemonLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x6a218
     * @note[short] MacOS (Intel): 0x789e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    gd::string getEventRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x69398
     * @note[short] MacOS (Intel): 0x77be0
     * @note[short] Windows: 0x1ea1d0
     * @note[short] iOS: 0x336488
     * @note[short] Android
     */
    gd::string getGauntletRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x58404
     * @note[short] MacOS (Intel): 0x66520
     * @note[short] Windows: 0x1e1980
     * @note[short] iOS: 0x32bbc8
     * @note[short] Android
     */
    gd::string getItemKey(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x68bf8
     * @note[short] MacOS (Intel): 0x77500
     * @note[short] Windows: 0x1e5b00
     * @note[short] iOS: 0x336144
     * @note[short] Android
     */
    int getItemUnlockState(int itemID, UnlockType unlockType);

    /**
     * @note[short] MacOS (ARM): 0x68cf4
     * @note[short] MacOS (Intel): 0x775c0
     * @note[short] Android
     */
    int getItemUnlockStateLite(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x5ebb0
     * @note[short] MacOS (Intel): 0x6d3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33083c
     * @note[short] Android
     */
    gd::string getLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5ebf4
     * @note[short] MacOS (Intel): 0x6d450
     * @note[short] Windows: 0x1ddd20
     * @note[short] iOS: 0x330880
     * @note[short] Android
     */
    gd::string getLevelKey(int levelID, bool isOnline, bool isDaily, bool isGauntlet, bool isEvent);

    /**
     * @note[short] MacOS (ARM): 0x654c8
     * @note[short] MacOS (Intel): 0x73ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3340e4
     * @note[short] Android
     */
    gd::string getListRewardKey(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x5ff3c
     * @note[short] MacOS (Intel): 0x6e6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMapPackKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x7da4c
     * @note[short] MacOS (Intel): 0x8beb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33dfac
     * @note[short] Android
     */
    int getNextGoldChestID();

    /**
     * @note[short] MacOS (ARM): 0x69948
     * @note[short] MacOS (Intel): 0x781a0
     * @note[short] Android
     */
    gd::string getNextVideoAdReward();

    /**
     * @note[short] MacOS (ARM): 0x5e158
     * @note[short] MacOS (Intel): 0x6c990
     * @note[short] Windows: 0x1ea6c0
     * @note[short] iOS: 0x330310
     * @note[short] Android
     */
    gd::string getPathRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x64e70
     * @note[short] MacOS (Intel): 0x734d0
     * @note[short] Windows: 0x1e1f10
     * @note[short] iOS: 0x333d50
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x7ddc8
     * @note[short] MacOS (Intel): 0x8c2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJRewardItem* getRewardForSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x69c38
     * @note[short] MacOS (Intel): 0x784a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33686c
     * @note[short] Android: Rebinded
     */
    GJRewardItem* getRewardForSpecialChest(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x63b90
     * @note[short] MacOS (Intel): 0x722d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333390
     * @note[short] Android
     */
    GJRewardItem* getRewardItem(GJRewardType type);

    /**
     * @note[short] MacOS (ARM): 0x63bc0
     * @note[short] MacOS (Intel): 0x72310
     * @note[short] Windows: 0x1e1980
     * @note[short] iOS: 0x3333c0
     * @note[short] Android
     */
    gd::string getRewardKey(GJRewardType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x64f84
     * @note[short] MacOS (Intel): 0x735d0
     * @note[short] Windows: 0x1e1fe0
     * @note[short] iOS: 0x333dd4
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x58300
     * @note[short] MacOS (Intel): 0x66440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32baec
     * @note[short] Android
     */
    int getSecretChestForItem(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x61c54
     * @note[short] MacOS (Intel): 0x70520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getSecretCoinKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6a3c4
     * @note[short] MacOS (Intel): 0x78bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x336c04
     * @note[short] Android
     */
    gd::string getSecretOnlineRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x58384
     * @note[short] MacOS (Intel): 0x664b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32bb5c
     * @note[short] Android
     */
    cocos2d::CCString* getSpecialChestKeyForItem(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x6979c
     * @note[short] MacOS (Intel): 0x78020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33671c
     * @note[short] Android: Rebinded
     */
    gd::string getSpecialRewardDescription(gd::string key, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x69804
     * @note[short] MacOS (Intel): 0x78080
     * @note[short] Windows: 0x1ea340
     * @note[short] iOS: 0x336788
     * @note[short] Android
     */
    gd::string getSpecialUnlockDescription(int id, UnlockType type, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x5ee54
     * @note[short] MacOS (Intel): 0x6d6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x330a30
     * @note[short] Android
     */
    char const* getStarLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x58b68
     * @note[short] MacOS (Intel): 0x66ce0
     * @note[short] Windows: 0x1d51b0
     * @note[short] iOS: 0x32c098
     * @note[short] Android
     */
    int getStat(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x5e0c4
     * @note[short] MacOS (Intel): 0x6c920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x330290
     * @note[short] Android
     */
    int getStatFromKey(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x58838
     * @note[short] MacOS (Intel): 0x669a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32be60
     * @note[short] Android
     */
    GJStoreItem* getStoreItem(int index);

    /**
     * @note[short] MacOS (ARM): 0x58280
     * @note[short] MacOS (Intel): 0x663d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32ba80
     * @note[short] Android
     */
    GJStoreItem* getStoreItem(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x662ec
     * @note[short] MacOS (Intel): 0x74900
     * @note[short] Windows: 0x1e3880
     * @note[short] iOS: 0x3349bc
     * @note[short] Android
     */
    int getTotalCollectedCurrency();

    /**
     * @note[short] MacOS (ARM): 0x66eec
     * @note[short] MacOS (Intel): 0x75660
     * @note[short] Windows: 0x1e4150
     * @note[short] iOS: 0x334f70
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();

    /**
     * @note[short] MacOS (ARM): 0x6558c
     * @note[short] MacOS (Intel): 0x73b90
     * @note[short] Windows: 0x1e2c00
     * @note[short] iOS: 0x334128
     * @note[short] Android
     */
    bool hasClaimedListReward(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x651d4
     * @note[short] MacOS (Intel): 0x737f0
     * @note[short] Windows: 0x1e2840
     * @note[short] iOS: 0x333f14
     * @note[short] Android
     */
    bool hasCompletedChallenge(GJChallengeItem* item);

    /**
     * @note[short] MacOS (ARM): 0x659e8
     * @note[short] MacOS (Intel): 0x74000
     * @note[short] Windows: 0x1e2ce0
     * @note[short] iOS: 0x334360
     * @note[short] Android
     */
    bool hasCompletedDailyLevel(int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x5f180
     * @note[short] MacOS (Intel): 0x6d950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x330c94
     * @note[short] Android
     */
    bool hasCompletedDemonLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5f0e4
     * @note[short] MacOS (Intel): 0x6d8d0
     * @note[short] Windows: 0x1de170
     * @note[short] iOS: 0x330c14
     * @note[short] Android
     */
    bool hasCompletedGauntletLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x5ef7c
     * @note[short] MacOS (Intel): 0x6d7a0
     * @note[short] Windows: 0x1ddf80
     * @note[short] iOS: 0x330b24
     * @note[short] Android
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5eee0
     * @note[short] MacOS (Intel): 0x6d720
     * @note[short] Windows: 0x1dde50
     * @note[short] iOS: 0x330aa4
     * @note[short] Android
     */
    bool hasCompletedMainLevel(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x60104
     * @note[short] MacOS (Intel): 0x6e860
     * @note[short] Windows: 0x1def90
     * @note[short] iOS: 0x3313a0
     * @note[short] Android
     */
    bool hasCompletedMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x5f048
     * @note[short] MacOS (Intel): 0x6d850
     * @note[short] Windows: 0x1de040
     * @note[short] iOS: 0x330b94
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x5f2d0
     * @note[short] MacOS (Intel): 0x6da80
     * @note[short] Windows: 0x1de2a0
     * @note[short] iOS: 0x330d0c
     * @note[short] Android
     */
    bool hasCompletedStarLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x6186c
     * @note[short] MacOS (Intel): 0x70180
     * @note[short] Windows: 0x1dfe60
     * @note[short] iOS: 0x331f10
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x63de0
     * @note[short] MacOS (Intel): 0x725a0
     * @note[short] Windows: 0x1e1a70
     * @note[short] iOS: 0x3334cc
     * @note[short] Android
     */
    bool hasRewardBeenCollected(GJRewardType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x5eaac
     * @note[short] MacOS (Intel): 0x6d2e0
     * @note[short] Windows: 0x1dff20
     * @note[short] iOS: 0x3307b4
     * @note[short] Android
     */
    bool hasSecretCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x61960
     * @note[short] MacOS (Intel): 0x70260
     * @note[short] Windows: 0x1dfce0
     * @note[short] iOS: 0x331f80
     * @note[short] Android
     */
    bool hasUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x5cee0
     * @note[short] MacOS (Intel): 0x6b900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32fba0
     * @note[short] Android
     */
    void incrementActivePath(int amount);

    /**
     * @note[short] MacOS (ARM): 0x5c8f0
     * @note[short] MacOS (Intel): 0x6b6b0
     * @note[short] Windows: 0x1e20c0
     * @note[short] iOS: 0x32f988
     * @note[short] Android
     */
    void incrementChallenge(GJChallengeType type, int amount);

    /**
     * @note[short] MacOS (ARM): 0x58ea0
     * @note[short] MacOS (Intel): 0x67020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32c2ac
     * @note[short] Android
     */
    void incrementStat(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x58ea8
     * @note[short] MacOS (Intel): 0x67030
     * @note[short] Windows: 0x1d44d0
     * @note[short] iOS: 0x32c2b4
     * @note[short] Android
     */
    void incrementStat(char const* key, int amount);

    /**
     * @note[short] MacOS (ARM): 0x688f0
     * @note[short] MacOS (Intel): 0x77230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x335f84
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x69f10
     * @note[short] MacOS (Intel): 0x78730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3369a8
     * @note[short] Android
     */
    bool isGauntletUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x68fe8
     * @note[short] MacOS (Intel): 0x77890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33621c
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x5cfb4
     * @note[short] MacOS (Intel): 0x6b9a0
     * @note[short] Windows: 0x1e5820
     * @note[short] iOS: 0x32fc38
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x6a010
     * @note[short] MacOS (Intel): 0x78820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x336a8c
     * @note[short] Android
     */
    bool isPathChestUnlocked(int path);

    /**
     * @note[short] MacOS (ARM): 0x5cf8c
     * @note[short] MacOS (Intel): 0x6b980
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x689f4
     * @note[short] MacOS (Intel): 0x77310
     * @note[short] Windows: 0x1ea860
     * @note[short] iOS: 0x336040
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x61d8c
     * @note[short] MacOS (Intel): 0x70650
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool isSecretCoin(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x61dbc
     * @note[short] MacOS (Intel): 0x70680
     * @note[short] Windows: 0x1e00c0
     * @note[short] iOS: 0x33214c
     * @note[short] Android: Rebinded
     */
    bool isSecretCoinValid(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x68fbc
     * @note[short] MacOS (Intel): 0x77860
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool isSpecialChestLiteUnlockable(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x68af8
     * @note[short] MacOS (Intel): 0x77410
     * @note[short] Windows: 0x1ea4f0
     * @note[short] iOS: 0x3360c8
     * @note[short] Android: Rebinded
     */
    bool isSpecialChestUnlocked(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x58844
     * @note[short] MacOS (Intel): 0x669c0
     * @note[short] Windows: 0x1d41e0
     * @note[short] iOS: 0x32be6c
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int index);

    /**
     * @note[short] MacOS (ARM): 0x68600
     * @note[short] MacOS (Intel): 0x76f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x335d48
     * @note[short] Android
     */
    int keyCostForSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x69684
     * @note[short] MacOS (Intel): 0x77ef0
     * @note[short] Windows: 0x1e9f90
     * @note[short] iOS: 0x33660c
     * @note[short] Android: Rebinded
     */
    void linkSpecialChestUnlocks(GJRewardItem* item, gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x8032c
     * @note[short] MacOS (Intel): 0x8ec50
     * @note[short] Android
     */
    void logCoins();

    /**
     * @note[short] MacOS (ARM): 0x5f8f0
     * @note[short] MacOS (Intel): 0x6e070
     * @note[short] Windows: 0x1de910
     * @note[short] iOS: 0x33106c
     * @note[short] Android
     */
    void markLevelAsCompletedAndClaimed(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x7ff1c
     * @note[short] MacOS (Intel): 0x8e7f0
     * @note[short] Windows: 0x1f3930
     * @note[short] iOS: 0x33fb3c
     * @note[short] Android
     */
    void postLoadGameStats();

    /**
     * @note[short] MacOS (ARM): 0x64014
     * @note[short] MacOS (Intel): 0x727a0
     * @note[short] Windows: 0x1e1ad0
     * @note[short] iOS: 0x333694
     * @note[short] Android
     */
    void preProcessReward(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x7eb74
     * @note[short] MacOS (Intel): 0x8d220
     * @note[short] Windows: 0x1f3b00
     * @note[short] iOS: 0x33ef44
     * @note[short] Android
     */
    void preSaveGameStats();

    /**
     * @note[short] MacOS (ARM): 0x65430
     * @note[short] MacOS (Intel): 0x73a50
     * @note[short] Windows: 0x1e2920
     * @note[short] iOS: 0x33404c
     * @note[short] Android
     */
    void processChallengeQueue(int position);

    /**
     * @note[short] MacOS (ARM): 0x8016c
     * @note[short] MacOS (Intel): 0x8ea70
     * @note[short] Windows: 0x1f35f0
     * @note[short] iOS: 0x33fc58
     * @note[short] Android
     */
    void processOnlineChests();

    /**
     * @note[short] MacOS (ARM): 0x58948
     * @note[short] MacOS (Intel): 0x66ac0
     * @note[short] Windows: 0x1d42b0
     * @note[short] iOS: 0x32bef4
     * @note[short] Android
     */
    bool purchaseItem(int index);

    /**
     * @note[short] MacOS (ARM): 0x674fc
     * @note[short] MacOS (Intel): 0x75d00
     * @note[short] Windows: 0x1e4450
     * @note[short] iOS: 0x33516c
     * @note[short] Android
     */
    void recountSpecialStats();

    /**
     * @note[short] MacOS (ARM): 0x60b54
     * @note[short] MacOS (Intel): 0x6f240
     * @note[short] Windows: 0x1df3c0
     * @note[short] iOS: 0x3318f0
     * @note[short] Android
     */
    void recountUserCoins(bool force);

    /**
     * @note[short] MacOS (ARM): 0x63f54
     * @note[short] MacOS (Intel): 0x726e0
     * @note[short] Windows: 0x1f1500
     * @note[short] iOS: 0x3335dc
     * @note[short] Android
     */
    void registerRewardsFromItem(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x64814
     * @note[short] MacOS (Intel): 0x72ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333a40
     * @note[short] Android
     */
    void removeChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x68410
     * @note[short] MacOS (Intel): 0x76d30
     * @note[short] Windows: 0x1f37e0
     * @note[short] iOS: 0x335bf8
     * @note[short] Android
     */
    void removeErrorFromSpecialChests();

    /**
     * @note[short] MacOS (ARM): 0x64a30
     * @note[short] MacOS (Intel): 0x730e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333b44
     * @note[short] Android
     */
    void removeQueuedChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x64c50
     * @note[short] MacOS (Intel): 0x732e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333c4c
     * @note[short] Android
     */
    void removeQueuedSecondaryChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x646e8
     * @note[short] MacOS (Intel): 0x72db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3339a0
     * @note[short] Android
     */
    void resetChallengeTimer();

    /**
     * @note[short] MacOS (ARM): 0x80324
     * @note[short] MacOS (Intel): 0x8ec30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetPreSync();

    /**
     * @note[short] MacOS (ARM): 0x5e304
     * @note[short] MacOS (Intel): 0x6cb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void resetSpecialChest(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x68654
     * @note[short] MacOS (Intel): 0x76f90
     * @note[short] Windows: 0x1e52b0
     * @note[short] iOS: 0x335d9c
     * @note[short] Android
     */
    void resetSpecialStatAchievements();

    /**
     * @note[short] MacOS (ARM): 0x60b1c
     * @note[short] MacOS (Intel): 0x6f200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetUserCoins();

    /**
     * @note[short] MacOS (ARM): 0x80328
     * @note[short] MacOS (Intel): 0x8ec40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restorePostSync();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAwardedBonusKeys(int keys);

    /**
     * @note[short] MacOS (ARM): 0x60208
     * @note[short] MacOS (Intel): 0x6e960
     * @note[short] Windows: 0x1df060
     * @note[short] iOS: 0x331428
     * @note[short] Android
     */
    void setStarsForMapPack(int id, int stars);

    /**
     * @note[short] MacOS (ARM): 0x58ce0
     * @note[short] MacOS (Intel): 0x66e40
     * @note[short] Windows: 0x1d52d0
     * @note[short] iOS: 0x32c180
     * @note[short] Android
     */
    void setStat(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x5e518
     * @note[short] MacOS (Intel): 0x6cdb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setStatIfHigher(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x2b832c
     * @note[short] MacOS (Intel): 0x32b730
     * @note[short] Windows: 0x1c4110
     * @note[short] iOS: 0x65570
     * @note[short] Android
     */
    void setupIconCredits();

    /**
     * @note[short] MacOS (ARM): 0x58e7c
     * @note[short] MacOS (Intel): 0x66ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ShopType shopTypeForItemID(int index);

    /**
     * @note[short] MacOS (ARM): 0x7e044
     * @note[short] MacOS (Intel): 0x8c550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldAwardSecretKey();

    /**
     * @note[short] MacOS (ARM): 0x6032c
     * @note[short] MacOS (Intel): 0x6ea80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3314c8
     * @note[short] Android
     */
    int starsForMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x64700
     * @note[short] MacOS (Intel): 0x72df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3339b8
     * @note[short] Android
     */
    void storeChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x64684
     * @note[short] MacOS (Intel): 0x72d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333940
     * @note[short] Android
     */
    void storeChallengeTime(int remaining);

    /**
     * @note[short] MacOS (ARM): 0x65814
     * @note[short] MacOS (Intel): 0x73e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x334298
     * @note[short] Android
     */
    void storeEventChest(int eventID, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x66190
     * @note[short] MacOS (Intel): 0x747c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x334874
     * @note[short] Android: Rebinded
     */
    void storeOnlineChest(gd::string key, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x61b54
     * @note[short] MacOS (Intel): 0x70430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33205c
     * @note[short] Android
     */
    void storePendingUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6491c
     * @note[short] MacOS (Intel): 0x72fe0
     * @note[short] Windows: 0x1e1d60
     * @note[short] iOS: 0x333abc
     * @note[short] Android
     */
    void storeQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x6399c
     * @note[short] MacOS (Intel): 0x720f0
     * @note[short] Windows: 0x1e18e0
     * @note[short] iOS: 0x3331a4
     * @note[short] Android: Rebinded
     */
    void storeRewardState(GJRewardType type, int id, int remaining, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x64b38
     * @note[short] MacOS (Intel): 0x731d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333bc0
     * @note[short] Android
     */
    void storeSecondaryQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x61c7c
     * @note[short] MacOS (Intel): 0x70540
     * @note[short] Windows: 0x1dfff0
     * @note[short] iOS: 0x3320c8
     * @note[short] Android
     */
    void storeSecretCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x61a54
     * @note[short] MacOS (Intel): 0x70340
     * @note[short] Windows: 0x1dfda0
     * @note[short] iOS: 0x331ff0
     * @note[short] Android
     */
    void storeUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x623a8
     * @note[short] MacOS (Intel): 0x70bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tempClear();

    /**
     * @note[short] MacOS (ARM): 0x69090
     * @note[short] MacOS (Intel): 0x77920
     * @note[short] Windows: 0x1e5bd0
     * @note[short] iOS: 0x3362b4
     * @note[short] Android
     */
    void toggleEnableItem(UnlockType type, int id, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x5d7e0
     * @note[short] MacOS (Intel): 0x6c060
     * @note[short] Windows: 0x1d47e0
     * @note[short] iOS: 0x32fe98
     * @note[short] Android
     */
    void tryFixPathBug();

    /**
     * @note[short] MacOS (ARM): 0x5d230
     * @note[short] MacOS (Intel): 0x6bbd0
     * @note[short] Windows: 0x1d4660
     * @note[short] iOS: 0x32fd54
     * @note[short] Android
     */
    void trySelectActivePath();

    /**
     * @note[short] MacOS (ARM): 0x5fc24
     * @note[short] MacOS (Intel): 0x6e3a0
     * @note[short] Windows: 0x1deb90
     * @note[short] iOS: 0x331184
     * @note[short] Android
     */
    void uncompleteLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x69d90
     * @note[short] MacOS (Intel): 0x785e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockGauntlet(int id);

    /**
     * @note[short] MacOS (ARM): 0x69f18
     * @note[short] MacOS (Intel): 0x78740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3369b0
     * @note[short] Android
     */
    GJRewardItem* unlockGauntletChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x7ddd4
     * @note[short] MacOS (Intel): 0x8c2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33e15c
     * @note[short] Android
     */
    GJRewardItem* unlockGoldChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x661ac
     * @note[short] MacOS (Intel): 0x747f0
     * @note[short] Windows: 0x1ea7a0
     * @note[short] iOS: 0x334890
     * @note[short] Android: Rebinded
     */
    GJRewardItem* unlockOnlineChest(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x6a114
     * @note[short] MacOS (Intel): 0x78900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x336b48
     * @note[short] Android
     */
    GJRewardItem* unlockPathChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x7dbfc
     * @note[short] MacOS (Intel): 0x8c0e0
     * @note[short] Windows: 0x1ea930
     * @note[short] iOS: 0x33dffc
     * @note[short] Android
     */
    GJRewardItem* unlockSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x69c40
     * @note[short] MacOS (Intel): 0x784c0
     * @note[short] Windows: 0x1ea5e0
     * @note[short] iOS: 0x336874
     * @note[short] Android: Rebinded
     */
    GJRewardItem* unlockSpecialChest(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x5d21c
     * @note[short] MacOS (Intel): 0x6bbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32fd40
     * @note[short] Android
     */
    void updateActivePath(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x2b82bc
     * @note[short] MacOS (Intel): 0x32b6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x654fc
     * @note[short] Android
     */
    gd::string usernameForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x5e30c
     * @note[short] MacOS (Intel): 0x6cba0
     * @note[short] Windows: 0x1d4f50
     * @note[short] iOS: 0x33040c
     * @note[short] Android
     */
    void verifyPathAchievements();

    /**
     * @note[short] MacOS (ARM): 0x61094
     * @note[short] MacOS (Intel): 0x6f8e0
     * @note[short] Windows: 0x1dfc00
     * @note[short] iOS: 0x331d2c
     * @note[short] Android
     */
    void verifyUserCoins();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    gd::unordered_map<gd::string, gd::string> m_specialRewardDescriptions;
    gd::unordered_map<gd::string, gd::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    gd::unordered_map<int, int> m_playerStatsRandMap;
    gd::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_eventChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueRSV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    cocos2d::CCDictionary* m_wraithChests;
    bool m_skipIncrementChallenge;
    cocos2d::CCDictionary* m_unlockedGauntlets;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    gd::map<std::pair<int, UnlockType>, int> m_accountIDForIcon;
    gd::map<int, gd::string> m_usernameForAccountID;
    gd::set<std::pair<UnlockType, int>> m_wraithIcons;
    bool m_pathBugFixed;
    bool m_tryFixPathBug;
    int m_activePath;
};
