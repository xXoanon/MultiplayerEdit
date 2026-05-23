#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameLevelManager* get();

    /**
     * @note[short] MacOS (ARM): 0x484834
     * @note[short] MacOS (Intel): 0x531090
     * @note[short] Windows: 0x16ab90
     * @note[short] iOS: 0x94ec4
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCDictionary* responseToDict(gd::string response, bool colon);

    /**
     * @note[short] MacOS (ARM): 0x4710f8
     * @note[short] MacOS (Intel): 0x51aa10
     * @note[short] Windows: 0x142d10
     * @note[short] iOS: 0x87b8c
     * @note[short] Android
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x480154
     * @note[short] MacOS (Intel): 0x52bd80
     * @note[short] Windows: 0x144290
     * @note[short] iOS: 0x920dc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4a4f04
     * @note[short] MacOS (Intel): 0x554ea0
     * @note[short] Windows: 0x161170
     * @note[short] iOS: 0xa8ce4
     * @note[short] Android
     */
    bool acceptFriendRequest(int accountID, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x482980
     * @note[short] MacOS (Intel): 0x52ea50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x938e4
     * @note[short] Android
     */
    int accountIDForUserID(int userID);

    /**
     * @note[short] MacOS (ARM): 0x48b79c
     * @note[short] MacOS (Intel): 0x5389d0
     * @note[short] Windows: 0x149b20
     * @note[short] iOS: 0x9970c
     * @note[short] Android
     */
    void addDLToActive(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x49587c
     * @note[short] MacOS (Intel): 0x543c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9f7c4
     * @note[short] Android
     */
    bool areGauntletsLoaded();

    /**
     * @note[short] MacOS (ARM): 0x498838
     * @note[short] MacOS (Intel): 0x547290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa1574
     * @note[short] Android
     */
    void banUser(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4a5e30
     * @note[short] MacOS (Intel): 0x555e50
     * @note[short] Windows: 0x161f00
     * @note[short] iOS: 0xa94e8
     * @note[short] Android
     */
    bool blockUser(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x48c940
     * @note[short] MacOS (Intel): 0x539cb0
     * @note[short] Windows: 0x14a6e0
     * @note[short] iOS: 0x9a168
     * @note[short] Android
     */
    void cleanupDailyLevels();

    /**
     * @note[short] MacOS (ARM): 0x4a061c
     * @note[short] MacOS (Intel): 0x550210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa6474
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetAccountComments(gd::string str, int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4a06d0
     * @note[short] MacOS (Intel): 0x5502a0
     * @note[short] Windows: 0x15cfe0
     * @note[short] iOS: 0xa6510
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetCommentsFull(gd::string str, int parentID, bool account);

    /**
     * @note[short] MacOS (ARM): 0x4a0210
     * @note[short] MacOS (Intel): 0x54fe10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa61d4
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetLevelComments(gd::string str, int levelID);

    /**
     * @note[short] MacOS (ARM): 0x484d2c
     * @note[short] MacOS (Intel): 0x531650
     * @note[short] Windows: 0x146c30
     * @note[short] iOS: 0x9521c
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetLevelLists(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x482bd8
     * @note[short] MacOS (Intel): 0x52ed20
     * @note[short] Windows: 0x1466f0
     * @note[short] iOS: 0x93aac
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetLevels(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x48578c
     * @note[short] MacOS (Intel): 0x5320c0
     * @note[short] Windows: 0x146ed0
     * @note[short] iOS: 0x95878
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetMapPacks(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4862a0
     * @note[short] MacOS (Intel): 0x532d10
     * @note[short] Windows: 0x147170
     * @note[short] iOS: 0x95fa8
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createAndGetScores(gd::string str, GJScoreType type);

    /**
     * @note[short] MacOS (ARM): 0x4807f0
     * @note[short] MacOS (Intel): 0x52c590
     * @note[short] Windows: 0x144870
     * @note[short] iOS: 0x92550
     * @note[short] Android
     */
    GJGameLevel* createNewLevel();

    /**
     * @note[short] MacOS (ARM): 0x481448
     * @note[short] MacOS (Intel): 0x52d2a0
     * @note[short] Windows: 0x145320
     * @note[short] iOS: 0x92d50
     * @note[short] Android
     */
    GJLevelList* createNewLevelList();

    /**
     * @note[short] MacOS (ARM): 0x48b5d8
     * @note[short] MacOS (Intel): 0x538830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9964c
     * @note[short] Android
     */
    gd::string createPageInfo(int total, int start, int count);

    /**
     * @note[short] MacOS (ARM): 0x48d6b8
     * @note[short] MacOS (Intel): 0x53aab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a7ac
     * @note[short] Android
     */
    GJSmartTemplate* createSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x48df34
     * @note[short] MacOS (Intel): 0x53b450
     * @note[short] Windows: 0x14b410
     * @note[short] iOS: 0x9b128
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4a39f4
     * @note[short] MacOS (Intel): 0x5537f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa804c
     * @note[short] Android
     */
    void deleteAccountComment(int id, int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4a3318
     * @note[short] MacOS (Intel): 0x553000
     * @note[short] Windows: 0x15f070
     * @note[short] iOS: 0xa7ca4
     * @note[short] Android
     */
    void deleteComment(int id, CommentType type, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4a460c
     * @note[short] MacOS (Intel): 0x554510
     * @note[short] Windows: 0x160b70
     * @note[short] iOS: 0xa8770
     * @note[short] Android
     */
    bool deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x481134
     * @note[short] MacOS (Intel): 0x52cf90
     * @note[short] Windows: 0x145050
     * @note[short] iOS: 0x92b24
     * @note[short] Android
     */
    void deleteLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4a3308
     * @note[short] MacOS (Intel): 0x552ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa7c94
     * @note[short] Android
     */
    void deleteLevelComment(int id, int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4818e4
     * @note[short] MacOS (Intel): 0x52d7e0
     * @note[short] Windows: 0x145900
     * @note[short] iOS: 0x93094
     * @note[short] Android
     */
    void deleteLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4a4600
     * @note[short] MacOS (Intel): 0x5544f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa8764
     * @note[short] Android
     */
    bool deleteSentFriendRequest(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4982bc
     * @note[short] MacOS (Intel): 0x546c60
     * @note[short] Windows: 0x1544e0
     * @note[short] iOS: 0xa12bc
     * @note[short] Android
     */
    void deleteServerLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x493e58
     * @note[short] MacOS (Intel): 0x541f50
     * @note[short] Windows: 0x150420
     * @note[short] iOS: 0x9e980
     * @note[short] Android
     */
    void deleteServerLevelList(int id);

    /**
     * @note[short] MacOS (ARM): 0x48d6fc
     * @note[short] MacOS (Intel): 0x53aaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a7f0
     * @note[short] Android
     */
    void deleteSmartTemplate(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x49f330
     * @note[short] MacOS (Intel): 0x54eec0
     * @note[short] Windows: 0x15b4b0
     * @note[short] iOS: 0xa57e4
     * @note[short] Android
     */
    bool deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] MacOS (ARM): 0x4958d0
     * @note[short] MacOS (Intel): 0x543cb0
     * @note[short] Windows: 0x151e00
     * @note[short] iOS: 0x9f7ec
     * @note[short] Android
     */
    void downloadLevel(int id, bool gauntletLevel, int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x49e9e8
     * @note[short] MacOS (Intel): 0x54e510
     * @note[short] Windows: 0x15aa80
     * @note[short] iOS: 0xa52b8
     * @note[short] Android
     */
    void downloadUserMessage(int id, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x48da88
     * @note[short] MacOS (Intel): 0x53af30
     * @note[short] Windows: 0x14af00
     * @note[short] iOS: 0x9add0
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x48d75c
     * @note[short] MacOS (Intel): 0x53ab70
     * @note[short] Windows: 0x14ab40
     * @note[short] iOS: 0x9a850
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x48cd88
     * @note[short] MacOS (Intel): 0x53a170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a450
     * @note[short] Android
     */
    void followUser(int id);

    /**
     * @note[short] MacOS (ARM): 0x49db60
     * @note[short] MacOS (Intel): 0x54d550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa49cc
     * @note[short] Android
     */
    GJFriendRequest* friendRequestFromAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a4d34
     * @note[short] MacOS (Intel): 0x554cc0
     * @note[short] Windows: 0x1633a0
     * @note[short] iOS: 0xa8b78
     * @note[short] Android
     */
    void friendRequestWasRemoved(int accountID, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x4a05f4
     * @note[short] MacOS (Intel): 0x5501f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa644c
     * @note[short] Android
     */
    const char* getAccountCommentKey(int accountID, int page);

    /**
     * @note[short] MacOS (ARM): 0x4a02c4
     * @note[short] MacOS (Intel): 0x54fea0
     * @note[short] Windows: 0x15c870
     * @note[short] iOS: 0xa6270
     * @note[short] Android
     */
    void getAccountComments(int accountID, int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x4a9bf8
     * @note[short] MacOS (Intel): 0x559e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaba54
     * @note[short] Android
     */
    int getActiveDailyID(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x48d5d8
     * @note[short] MacOS (Intel): 0x53a9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a6e8
     * @note[short] Android
     */
    GJSmartTemplate* getActiveSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x48d72c
     * @note[short] MacOS (Intel): 0x53ab40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a820
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSmartTemplates();

    /**
     * @note[short] MacOS (ARM): 0x4aad7c
     * @note[short] MacOS (Intel): 0x55af80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac22c
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllUsedSongIDs();

    /**
     * @note[short] MacOS (ARM): 0x48f878
     * @note[short] MacOS (Intel): 0x53d1c0
     * @note[short] Windows: 0x14c5b0
     * @note[short] iOS: 0x9c0c8
     * @note[short] Android
     */
    gd::string getBasePostString();

    /**
     * @note[short] MacOS (ARM): 0x4aac74
     * @note[short] MacOS (Intel): 0x55ae90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac158
     * @note[short] Android
     */
    bool getBoolForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a0024
     * @note[short] MacOS (Intel): 0x54fc50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa60fc
     * @note[short] Android
     */
    gd::string getCommentKey(int ID, int page, int mode, CommentKeyType keytype);

    /**
     * @note[short] MacOS (ARM): 0x489d84
     * @note[short] MacOS (Intel): 0x536e90
     * @note[short] Windows: 0x148700
     * @note[short] iOS: 0x9862c
     * @note[short] Android
     */
    int getCompletedDailyLevels();

    /**
     * @note[short] MacOS (ARM): 0x489f50
     * @note[short] MacOS (Intel): 0x537090
     * @note[short] Windows: 0x148900
     * @note[short] iOS: 0x98794
     * @note[short] Android
     */
    int getCompletedEventLevels(int minStars, int maxStars);

    /**
     * @note[short] MacOS (ARM): 0x48a130
     * @note[short] MacOS (Intel): 0x5372a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x98908
     * @note[short] Android
     */
    int getCompletedGauntletDemons();

    /**
     * @note[short] MacOS (ARM): 0x48a208
     * @note[short] MacOS (Intel): 0x537360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x989c0
     * @note[short] Android
     */
    int getCompletedGauntletLevels();

    /**
     * @note[short] MacOS (ARM): 0x488350
     * @note[short] MacOS (Intel): 0x5350b0
     * @note[short] Windows: 0x1478a0
     * @note[short] iOS: 0x9776c
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedLevels(bool useOrbCompletion);

    /**
     * @note[short] MacOS (ARM): 0x489bb0
     * @note[short] MacOS (Intel): 0x536c90
     * @note[short] Windows: 0x1484f0
     * @note[short] iOS: 0x984bc
     * @note[short] Android
     */
    int getCompletedWeeklyLevels();

    /**
     * @note[short] MacOS (ARM): 0x4a9bc4
     * @note[short] MacOS (Intel): 0x559e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaba20
     * @note[short] Android
     */
    int getDailyID(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4a9c2c
     * @note[short] MacOS (Intel): 0x559ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaba88
     * @note[short] Android
     */
    int getDailyTimer(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4a1630
     * @note[short] MacOS (Intel): 0x5513c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDeleteCommentKey(int parentID, int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x49f824
     * @note[short] MacOS (Intel): 0x54f3c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDeleteMessageKey(int id, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x4885f4
     * @note[short] MacOS (Intel): 0x535280
     * @note[short] Windows: 0x147a30
     * @note[short] iOS: 0x97890
     * @note[short] Android
     */
    gd::string getDemonLevelsString();

    /**
     * @note[short] MacOS (ARM): 0x4a15e0
     * @note[short] MacOS (Intel): 0x551380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDescKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x490d24
     * @note[short] MacOS (Intel): 0x53e890
     * @note[short] Windows: 0x14d4b0
     * @note[short] iOS: 0x9ce68
     * @note[short] Android
     */
    gd::string getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto);

    /**
     * @note[short] MacOS (ARM): 0x4aa484
     * @note[short] MacOS (Intel): 0x55a720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDiffKey(int diff);

    /**
     * @note[short] MacOS (ARM): 0x4aa4ac
     * @note[short] MacOS (Intel): 0x55a740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xabd80
     * @note[short] Android
     */
    bool getDiffVal(int diff);

    /**
     * @note[short] MacOS (ARM): 0x48d31c
     * @note[short] MacOS (Intel): 0x53a6f0
     * @note[short] Windows: 0x14aa10
     * @note[short] iOS: 0x9a5a0
     * @note[short] Android
     */
    gd::string getFolderName(int id, bool local);

    /**
     * @note[short] MacOS (ARM): 0x4a15b8
     * @note[short] MacOS (Intel): 0x551360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa6ee0
     * @note[short] Android
     */
    const char* getFriendRequestKey(bool sent, int page);

    /**
     * @note[short] MacOS (ARM): 0x4a3db4
     * @note[short] MacOS (Intel): 0x553c00
     * @note[short] Windows: 0x15fcc0
     * @note[short] iOS: 0xa82a0
     * @note[short] Android
     */
    void getFriendRequests(bool sent, int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x495740
     * @note[short] MacOS (Intel): 0x543b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getGauntletKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4952e4
     * @note[short] MacOS (Intel): 0x543630
     * @note[short] Windows: 0x151ab0
     * @note[short] iOS: 0x9f4b8
     * @note[short] Android
     */
    void getGauntletLevels(int id);

    /**
     * @note[short] MacOS (ARM): 0x494f18
     * @note[short] MacOS (Intel): 0x543270
     * @note[short] Windows: 0x151200
     * @note[short] iOS: 0x9f288
     * @note[short] Android
     */
    void getGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x494e58
     * @note[short] MacOS (Intel): 0x5431b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9f248
     * @note[short] Android
     */
    gd::string getGauntletSearchKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a909c
     * @note[short] MacOS (Intel): 0x559270
     * @note[short] Windows: 0x167510
     * @note[short] iOS: 0xab23c
     * @note[short] Android
     */
    bool getGJChallenges();

    /**
     * @note[short] MacOS (ARM): 0x4a94fc
     * @note[short] MacOS (Intel): 0x559720
     * @note[short] Windows: 0x168910
     * @note[short] iOS: 0xab524
     * @note[short] Android
     */
    bool getGJDailyLevelState(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4a8954
     * @note[short] MacOS (Intel): 0x558a60
     * @note[short] Windows: 0x166020
     * @note[short] iOS: 0xaad70
     * @note[short] Android
     */
    bool getGJRewards(int type);

    /**
     * @note[short] MacOS (ARM): 0x4a84d0
     * @note[short] MacOS (Intel): 0x558580
     * @note[short] Windows: 0x164ef0
     * @note[short] iOS: 0xaaa7c
     * @note[short] Android: Rebinded
     */
    bool getGJSecretReward(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x49d32c
     * @note[short] MacOS (Intel): 0x54ccb0
     * @note[short] Windows: 0x159e10
     * @note[short] iOS: 0xa44d8
     * @note[short] Android
     */
    void getGJUserInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x4880f0
     * @note[short] MacOS (Intel): 0x534e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x975a8
     * @note[short] Android
     */
    int getHighestLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x4aaa5c
     * @note[short] MacOS (Intel): 0x55aca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac05c
     * @note[short] Android
     */
    int getIntForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x49883c
     * @note[short] MacOS (Intel): 0x5472a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa1578
     * @note[short] Android
     */
    gd::string getLeaderboardKey(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x49b354
     * @note[short] MacOS (Intel): 0x54a990
     * @note[short] Windows: 0x157980
     * @note[short] iOS: 0xa2ed8
     * @note[short] Android
     */
    void getLeaderboardScores(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x4912b0
     * @note[short] MacOS (Intel): 0x53ee70
     * @note[short] Windows: 0x14d760
     * @note[short] iOS: 0x9d098
     * @note[short] Android
     */
    gd::string getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat);

    /**
     * @note[short] MacOS (ARM): 0x4aa6e8
     * @note[short] MacOS (Intel): 0x55a960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLenKey(int len);

    /**
     * @note[short] MacOS (ARM): 0x4aa710
     * @note[short] MacOS (Intel): 0x55a980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xabea8
     * @note[short] Android
     */
    bool getLenVal(int len);

    /**
     * @note[short] MacOS (ARM): 0x49fb94
     * @note[short] MacOS (Intel): 0x54f770
     * @note[short] Windows: 0x15be00
     * @note[short] iOS: 0xa5d94
     * @note[short] Android
     */
    void getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype);

    /**
     * @note[short] MacOS (ARM): 0x4958a4
     * @note[short] MacOS (Intel): 0x543c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelDownloadKey(int levelID, bool isGauntlet, int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x480644
     * @note[short] MacOS (Intel): 0x52c3c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x49bce8
     * @note[short] MacOS (Intel): 0x54b2f0
     * @note[short] Windows: 0x158040
     * @note[short] iOS: 0xa3434
     * @note[short] Android
     */
    void getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x49caf0
     * @note[short] MacOS (Intel): 0x54c450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa3f98
     * @note[short] Android
     */
    const char* getLevelLeaderboardKey(int levelID, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x481a28
     * @note[short] MacOS (Intel): 0x52d910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelListKey(int listID);

    /**
     * @note[short] MacOS (ARM): 0x494364
     * @note[short] MacOS (Intel): 0x542500
     * @note[short] Windows: 0x150760
     * @note[short] iOS: 0x9ec0c
     * @note[short] Android
     */
    void getLevelLists(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4a3a04
     * @note[short] MacOS (Intel): 0x553810
     * @note[short] Windows: 0x15f860
     * @note[short] iOS: 0xa805c
     * @note[short] Android
     */
    void getLevelRateInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x492ae0
     * @note[short] MacOS (Intel): 0x540b10
     * @note[short] Windows: 0x14edc0
     * @note[short] iOS: 0x9de4c
     * @note[short] Android
     */
    void getLevelSaveData();

    /**
     * @note[short] MacOS (ARM): 0x4a816c
     * @note[short] MacOS (Intel): 0x558260
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLikeAccountItemKey(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4a7a8c
     * @note[short] MacOS (Intel): 0x557c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLikeItemKey(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x480770
     * @note[short] MacOS (Intel): 0x52c520
     * @note[short] Windows: 0x144800
     * @note[short] iOS: 0x924e4
     * @note[short] Android
     */
    GJGameLevel* getLocalLevel(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x48066c
     * @note[short] MacOS (Intel): 0x52c3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    GJGameLevel* getLocalLevelByName(gd::string name);

    /**
     * @note[short] MacOS (ARM): 0x4813c8
     * @note[short] MacOS (Intel): 0x52d230
     * @note[short] Windows: 0x1452b0
     * @note[short] iOS: 0x92ce4
     * @note[short] Android
     */
    GJLevelList* getLocalLevelList(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x48812c
     * @note[short] MacOS (Intel): 0x534e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x975e4
     * @note[short] Android
     */
    int getLowestLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x480270
     * @note[short] MacOS (Intel): 0x52bf20
     * @note[short] Windows: 0x144450
     * @note[short] iOS: 0x921f8
     * @note[short] Android
     */
    GJGameLevel* getMainLevel(int levelID, bool dontGetLevelString);

    /**
     * @note[short] MacOS (ARM): 0x4930ac
     * @note[short] MacOS (Intel): 0x5410e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMapPackKey(int pack);

    /**
     * @note[short] MacOS (ARM): 0x492d90
     * @note[short] MacOS (Intel): 0x540da0
     * @note[short] Windows: 0x14f4f0
     * @note[short] iOS: 0x9dfec
     * @note[short] Android
     */
    void getMapPacks(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x49ed24
     * @note[short] MacOS (Intel): 0x54e860
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMessageKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x49def8
     * @note[short] MacOS (Intel): 0x54d960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa4bf8
     * @note[short] Android
     */
    const char* getMessagesKey(bool sent, int page);

    /**
     * @note[short] MacOS (ARM): 0x49fb80
     * @note[short] MacOS (Intel): 0x54f750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void getNews();

    /**
     * @note[short] MacOS (ARM): 0x48d5e8
     * @note[short] MacOS (Intel): 0x53a9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a6f0
     * @note[short] Android
     */
    int getNextFreeTemplateID();

    /**
     * @note[short] MacOS (ARM): 0x480b40
     * @note[short] MacOS (Intel): 0x52c8f0
     * @note[short] Windows: 0x144b30
     * @note[short] iOS: 0x92754
     * @note[short] Android: Rebinded
     */
    gd::string getNextLevelName(gd::string name);

    /**
     * @note[short] MacOS (ARM): 0x491dac
     * @note[short] MacOS (Intel): 0x53fa90
     * @note[short] Windows: 0x14dc70
     * @note[short] iOS: 0x9d540
     * @note[short] Android
     */
    void getOnlineLevels(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x48b4c0
     * @note[short] MacOS (Intel): 0x538740
     * @note[short] Windows: 0x149970
     * @note[short] iOS: 0x995c8
     * @note[short] Android
     */
    const char* getPageInfo(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a1608
     * @note[short] MacOS (Intel): 0x5513a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa6f08
     * @note[short] Android
     */
    const char* getPostCommentKey(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x49803c
     * @note[short] MacOS (Intel): 0x5469e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getRateStarsKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4aa45c
     * @note[short] MacOS (Intel): 0x55a700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getReportKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x48a2e0
     * @note[short] MacOS (Intel): 0x537420
     * @note[short] Windows: 0x148be0
     * @note[short] iOS: 0x98a78
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevel(int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x48a61c
     * @note[short] MacOS (Intel): 0x537720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x98c04
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int id);

    /**
     * @note[short] MacOS (ARM): 0x495768
     * @note[short] MacOS (Intel): 0x543b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9f740
     * @note[short] Android
     */
    GJMapPack* getSavedGauntlet(int id);

    /**
     * @note[short] MacOS (ARM): 0x48a3f4
     * @note[short] MacOS (Intel): 0x537520
     * @note[short] Windows: 0x148cb0
     * @note[short] iOS: 0x98afc
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntletLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x484ce4
     * @note[short] MacOS (Intel): 0x531600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x951d4
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x48a508
     * @note[short] MacOS (Intel): 0x537620
     * @note[short] Windows: 0x148b10
     * @note[short] iOS: 0x98b80
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4948ec
     * @note[short] MacOS (Intel): 0x542be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9ef60
     * @note[short] Android
     */
    GJLevelList* getSavedLevelList(int listID);

    /**
     * @note[short] MacOS (ARM): 0x488028
     * @note[short] MacOS (Intel): 0x534d50
     * @note[short] Windows: 0x147610
     * @note[short] iOS: 0x97514
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevelLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x487e54
     * @note[short] MacOS (Intel): 0x534b60
     * @note[short] Windows: 0x147450
     * @note[short] iOS: 0x973cc
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevels(bool favorite, int folder);

    /**
     * @note[short] MacOS (ARM): 0x4930d4
     * @note[short] MacOS (Intel): 0x541100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9e1a4
     * @note[short] Android
     */
    GJMapPack* getSavedMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x48bce4
     * @note[short] MacOS (Intel): 0x538ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x999a4
     * @note[short] Android
     */
    cocos2d::CCScene* getSearchScene(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x498db8
     * @note[short] MacOS (Intel): 0x547840
     * @note[short] Windows: 0x15d5a0
     * @note[short] iOS: 0xa180c
     * @note[short] Android
     */
    int getSplitIntFromKey(char const* key, int index);

    /**
     * @note[short] MacOS (ARM): 0x4888d4
     * @note[short] MacOS (Intel): 0x535620
     * @note[short] Windows: 0x147c30
     * @note[short] iOS: 0x97a64
     * @note[short] Android
     */
    gd::string getStarLevelsString();

    /**
     * @note[short] MacOS (ARM): 0x4a19d4
     * @note[short] MacOS (Intel): 0x5516e0
     * @note[short] Windows: 0x15d9b0
     * @note[short] iOS: 0xa70ec
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredLevelComments(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x48b260
     * @note[short] MacOS (Intel): 0x538500
     * @note[short] Windows: 0x149880
     * @note[short] iOS: 0x9946c
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a5d38
     * @note[short] MacOS (Intel): 0x555da0
     * @note[short] Windows: 0x1630a0
     * @note[short] iOS: 0xa9438
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x49db80
     * @note[short] MacOS (Intel): 0x54d590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa49d8
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessage(int id);

    /**
     * @note[short] MacOS (ARM): 0x49dba8
     * @note[short] MacOS (Intel): 0x54d5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa4a00
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessageReply(int id);

    /**
     * @note[short] MacOS (ARM): 0x48b998
     * @note[short] MacOS (Intel): 0x538ba0
     * @note[short] Windows: 0x149ed0
     * @note[short] iOS: 0x997f0
     * @note[short] Android
     */
    int getTimeLeft(char const* key, float length);

    /**
     * @note[short] MacOS (ARM): 0x49cbb8
     * @note[short] MacOS (Intel): 0x54c4e0
     * @note[short] Windows: 0x158fb0
     * @note[short] iOS: 0xa4048
     * @note[short] Android
     */
    void getTopArtists(int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x49cf60
     * @note[short] MacOS (Intel): 0x54c8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa4284
     * @note[short] Android
     */
    const char* getTopArtistsKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x49ed4c
     * @note[short] MacOS (Intel): 0x54e880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getUploadMessageKey(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x49d304
     * @note[short] MacOS (Intel): 0x54cc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getUserInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a67d0
     * @note[short] MacOS (Intel): 0x556890
     * @note[short] Windows: 0x162990
     * @note[short] iOS: 0xa9a14
     * @note[short] Android
     */
    void getUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x49dbb4
     * @note[short] MacOS (Intel): 0x54d600
     * @note[short] Windows: 0x15a1c0
     * @note[short] iOS: 0xa4a0c
     * @note[short] Android
     */
    void getUserMessages(bool sent, int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x49cf88
     * @note[short] MacOS (Intel): 0x54c8d0
     * @note[short] Windows: 0x159750
     * @note[short] iOS: 0xa42ac
     * @note[short] Android
     */
    void getUsers(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x48acf4
     * @note[short] MacOS (Intel): 0x537fd0
     * @note[short] Windows: 0x1494c0
     * @note[short] iOS: 0x99164
     * @note[short] Android
     */
    void gotoLevelPage(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4716bc
     * @note[short] MacOS (Intel): 0x51b0e0
     * @note[short] Windows: 0x142ff0
     * @note[short] iOS: 0x88064
     * @note[short] Android: Rebinded
     */
    void handleIt(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x473a20
     * @note[short] MacOS (Intel): 0x51df80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void handleItDelayed(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x473d34
     * @note[short] MacOS (Intel): 0x51e270
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] MacOS (ARM): 0x4a9b78
     * @note[short] MacOS (Intel): 0x559e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xab9e4
     * @note[short] Android
     */
    bool hasDailyStateBeenLoaded(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x49600c
     * @note[short] MacOS (Intel): 0x544510
     * @note[short] Windows: 0x1537b0
     * @note[short] iOS: 0x9fcc4
     * @note[short] Android
     */
    bool hasDownloadedLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x492ad8
     * @note[short] MacOS (Intel): 0x540b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool hasDownloadedList(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a82a0
     * @note[short] MacOS (Intel): 0x558380
     * @note[short] Windows: 0x164e10
     * @note[short] iOS: 0xaa9f0
     * @note[short] Android
     */
    bool hasLikedAccountItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4a8198
     * @note[short] MacOS (Intel): 0x558280
     * @note[short] Windows: 0x164e10
     * @note[short] iOS: 0xaa964
     * @note[short] Android
     */
    bool hasLikedItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4a78e0
     * @note[short] MacOS (Intel): 0x557a90
     * @note[short] Windows: 0x164d80
     * @note[short] iOS: 0xaa3f4
     * @note[short] Android
     */
    bool hasLikedItemFullCheck(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4981b8
     * @note[short] MacOS (Intel): 0x546b60
     * @note[short] Windows: 0x154410
     * @note[short] iOS: 0xa1234
     * @note[short] Android
     */
    bool hasRatedDemon(int id);

    /**
     * @note[short] MacOS (ARM): 0x497de4
     * @note[short] MacOS (Intel): 0x546780
     * @note[short] Windows: 0x154340
     * @note[short] iOS: 0xa100c
     * @note[short] Android
     */
    bool hasRatedLevelStars(int id);

    /**
     * @note[short] MacOS (ARM): 0x4aa204
     * @note[short] MacOS (Intel): 0x55a4a0
     * @note[short] Windows: 0x16a6b0
     * @note[short] iOS: 0xabc28
     * @note[short] Android
     */
    bool hasReportedLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x49f84c
     * @note[short] MacOS (Intel): 0x54f3e0
     * @note[short] Windows: 0x15bcb0
     * @note[short] iOS: 0xa5b3c
     * @note[short] Android
     */
    void invalidateMessages(bool sent, bool reload);

    /**
     * @note[short] MacOS (ARM): 0x4a4bd0
     * @note[short] MacOS (Intel): 0x554b30
     * @note[short] Windows: 0x163560
     * @note[short] iOS: 0xa8a8c
     * @note[short] Android
     */
    void invalidateRequests(bool sent, bool reload);

    /**
     * @note[short] MacOS (ARM): 0x4a6aa8
     * @note[short] MacOS (Intel): 0x556b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa9bd0
     * @note[short] Android
     */
    void invalidateUserList(UserListType type, bool reload);

    /**
     * @note[short] MacOS (ARM): 0x48b6a8
     * @note[short] MacOS (Intel): 0x5388f0
     * @note[short] Windows: 0x149a60
     * @note[short] iOS: 0x9969c
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x48cc84
     * @note[short] MacOS (Intel): 0x53a070
     * @note[short] Windows: 0x14a940
     * @note[short] iOS: 0x9a3c8
     * @note[short] Android
     */
    bool isFollowingUser(int id);

    /**
     * @note[short] MacOS (ARM): 0x48b37c
     * @note[short] MacOS (Intel): 0x538600
     * @note[short] Windows: 0x149d90
     * @note[short] iOS: 0x994fc
     * @note[short] Android
     */
    bool isTimeValid(char const* key, float length);

    /**
     * @note[short] MacOS (ARM): 0x497314
     * @note[short] MacOS (Intel): 0x545b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa0908
     * @note[short] Android
     */
    bool isUpdateValid(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a7be0
     * @note[short] MacOS (Intel): 0x557d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaa624
     * @note[short] Android
     */
    int itemIDFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x48baf0
     * @note[short] MacOS (Intel): 0x538d00
     * @note[short] Windows: 0x14a020
     * @note[short] iOS: 0x998d0
     * @note[short] Android
     */
    bool keyHasTimer(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a00e8
     * @note[short] MacOS (Intel): 0x54fd10
     * @note[short] Windows: 0x15d6a0
     * @note[short] iOS: 0xa6140
     * @note[short] Android
     */
    int levelIDFromCommentKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a165c
     * @note[short] MacOS (Intel): 0x5513e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa6f30
     * @note[short] Android
     */
    int levelIDFromPostCommentKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a7d08
     * @note[short] MacOS (Intel): 0x557e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaa6b8
     * @note[short] Android
     */
    int likeFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a70b8
     * @note[short] MacOS (Intel): 0x557100
     * @note[short] Windows: 0x163c60
     * @note[short] iOS: 0xa9ed0
     * @note[short] Android
     */
    void likeItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x48c480
     * @note[short] MacOS (Intel): 0x539770
     * @note[short] Windows: 0x14a190
     * @note[short] iOS: 0x99e30
     * @note[short] Android
     */
    void limitSavedLevels();

    /**
     * @note[short] MacOS (ARM): 0x48b120
     * @note[short] MacOS (Intel): 0x5383d0
     * @note[short] Windows: 0x149c90
     * @note[short] iOS: 0x993b4
     * @note[short] Android
     */
    void makeTimeStamp(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a798c
     * @note[short] MacOS (Intel): 0x557b20
     * @note[short] Windows: 0x164c10
     * @note[short] iOS: 0xaa4a8
     * @note[short] Android
     */
    void markItemAsLiked(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4971b8
     * @note[short] MacOS (Intel): 0x5459b0
     * @note[short] Windows: 0x153690
     * @note[short] iOS: 0xa0830
     * @note[short] Android
     */
    void markLevelAsDownloaded(int id);

    /**
     * @note[short] MacOS (ARM): 0x498064
     * @note[short] MacOS (Intel): 0x546a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa1164
     * @note[short] Android
     */
    void markLevelAsRatedDemon(int id);

    /**
     * @note[short] MacOS (ARM): 0x497ee8
     * @note[short] MacOS (Intel): 0x546880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa1094
     * @note[short] Android
     */
    void markLevelAsRatedStars(int id);

    /**
     * @note[short] MacOS (ARM): 0x4aa308
     * @note[short] MacOS (Intel): 0x55a5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xabcb0
     * @note[short] Android
     */
    void markLevelAsReported(int id);

    /**
     * @note[short] MacOS (ARM): 0x49730c
     * @note[short] MacOS (Intel): 0x545b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa0900
     * @note[short] Android
     */
    void markListAsDownloaded(int id);

    /**
     * @note[short] MacOS (ARM): 0x49f9b0
     * @note[short] MacOS (Intel): 0x54f570
     * @note[short] Windows: 0x15baf0
     * @note[short] iOS: 0xa5c28
     * @note[short] Android
     */
    void messageWasRemoved(int id, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x4784f0
     * @note[short] MacOS (Intel): 0x5233c0
     * @note[short] Windows: 0x161490
     * @note[short] iOS: 0x8d0b8
     * @note[short] Android: Rebinded
     */
    void onAcceptFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47af68
     * @note[short] MacOS (Intel): 0x526070
     * @note[short] Windows: 0x154a50
     * @note[short] iOS: 0x8e9cc
     * @note[short] Android: Rebinded
     */
    void onBanUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x478a94
     * @note[short] MacOS (Intel): 0x523950
     * @note[short] Windows: 0x162210
     * @note[short] iOS: 0x8d440
     * @note[short] Android: Rebinded
     */
    void onBlockUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4775e4
     * @note[short] MacOS (Intel): 0x522560
     * @note[short] Windows: 0x15f550
     * @note[short] iOS: 0x8c61c
     * @note[short] Android: Rebinded
     */
    void onDeleteCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4782f0
     * @note[short] MacOS (Intel): 0x5231b0
     * @note[short] Windows: 0x160f70
     * @note[short] iOS: 0x8cf3c
     * @note[short] Android: Rebinded
     */
    void onDeleteFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4758c4
     * @note[short] MacOS (Intel): 0x520180
     * @note[short] Windows: 0x1548d0
     * @note[short] iOS: 0x8b4f4
     * @note[short] Android: Rebinded
     */
    void onDeleteServerLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47f44c
     * @note[short] MacOS (Intel): 0x52ade0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x91778
     * @note[short] Android: Rebinded
     */
    void onDeleteServerLevelListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47a498
     * @note[short] MacOS (Intel): 0x5254a0
     * @note[short] Windows: 0x15b920
     * @note[short] iOS: 0x8e340
     * @note[short] Android: Rebinded
     */
    void onDeleteUserMessagesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475500
     * @note[short] MacOS (Intel): 0x51fe30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8b23c
     * @note[short] Android: Rebinded
     */
    void onDownloadLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47a66c
     * @note[short] MacOS (Intel): 0x525660
     * @note[short] Windows: 0x15acc0
     * @note[short] iOS: 0x8e488
     * @note[short] Android: Rebinded
     */
    void onDownloadUserMessageCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4765f0
     * @note[short] MacOS (Intel): 0x520fc0
     * @note[short] Windows: 0x15caa0
     * @note[short] iOS: 0x8be00
     * @note[short] Android: Rebinded
     */
    void onGetAccountCommentsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x479580
     * @note[short] MacOS (Intel): 0x524450
     * @note[short] Windows: 0x15ff00
     * @note[short] iOS: 0x8da2c
     * @note[short] Android: Rebinded
     */
    void onGetFriendRequestsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47df80
     * @note[short] MacOS (Intel): 0x529700
     * @note[short] Windows: 0x1514f0
     * @note[short] iOS: 0x90a74
     * @note[short] Android: Rebinded
     */
    void onGetGauntletsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47c3c8
     * @note[short] MacOS (Intel): 0x5276f0
     * @note[short] Windows: 0x167970
     * @note[short] iOS: 0x8f7d4
     * @note[short] Android: Rebinded
     */
    void onGetGJChallengesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47d0b0
     * @note[short] MacOS (Intel): 0x5285f0
     * @note[short] Windows: 0x168df0
     * @note[short] iOS: 0x8ffec
     * @note[short] Android: Rebinded
     */
    void onGetGJDailyLevelStateCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47b93c
     * @note[short] MacOS (Intel): 0x526a90
     * @note[short] Windows: 0x166790
     * @note[short] iOS: 0x8f08c
     * @note[short] Android: Rebinded
     */
    void onGetGJRewardsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47f52c
     * @note[short] MacOS (Intel): 0x52af40
     * @note[short] Windows: 0x1653a0
     * @note[short] iOS: 0x9182c
     * @note[short] Android: Rebinded
     */
    void onGetGJSecretRewardCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x477f44
     * @note[short] MacOS (Intel): 0x522e20
     * @note[short] Windows: 0x15a030
     * @note[short] iOS: 0x8cc6c
     * @note[short] Android: Rebinded
     */
    void onGetGJUserInfoCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475e04
     * @note[short] MacOS (Intel): 0x5207a0
     * @note[short] Windows: 0x157d70
     * @note[short] iOS: 0x8b85c
     * @note[short] Android: Rebinded
     */
    void onGetLeaderboardScoresCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4760f0
     * @note[short] MacOS (Intel): 0x520a90
     * @note[short] Windows: 0x15c330
     * @note[short] iOS: 0x8bb20
     * @note[short] Android: Rebinded
     */
    void onGetLevelCommentsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47dd38
     * @note[short] MacOS (Intel): 0x5294e0
     * @note[short] Windows: 0x158d20
     * @note[short] iOS: 0x90868
     * @note[short] Android: Rebinded
     */
    void onGetLevelLeaderboardCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47ebf0
     * @note[short] MacOS (Intel): 0x52a470
     * @note[short] Windows: 0x1509f0
     * @note[short] iOS: 0x91298
     * @note[short] Android: Rebinded
     */
    void onGetLevelListsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47fe28
     * @note[short] MacOS (Intel): 0x52b9d0
     * @note[short] Windows: 0x15fb90
     * @note[short] iOS: 0x91e18
     * @note[short] Android: Rebinded
     */
    void onGetLevelRateInfoCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47b470
     * @note[short] MacOS (Intel): 0x5265a0
     * @note[short] Windows: 0x14f0a0
     * @note[short] iOS: 0x8ecfc
     * @note[short] Android: Rebinded
     */
    void onGetLevelSaveDataCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x474bb0
     * @note[short] MacOS (Intel): 0x51f320
     * @note[short] Windows: 0x14f700
     * @note[short] iOS: 0x8ac7c
     * @note[short] Android: Rebinded
     */
    void onGetMapPacksCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47f528
     * @note[short] MacOS (Intel): 0x52af30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void onGetNewsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4740c0
     * @note[short] MacOS (Intel): 0x51e630
     * @note[short] Windows: 0x14e4d0
     * @note[short] iOS: 0x8a560
     * @note[short] Android: Rebinded
     */
    void onGetOnlineLevelsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47e570
     * @note[short] MacOS (Intel): 0x529db0
     * @note[short] Windows: 0x1592d0
     * @note[short] iOS: 0x90ef4
     * @note[short] Android: Rebinded
     */
    void onGetTopArtistsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x478fd0
     * @note[short] MacOS (Intel): 0x523e60
     * @note[short] Windows: 0x162ba0
     * @note[short] iOS: 0x8d6d8
     * @note[short] Android: Rebinded
     */
    void onGetUserListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x479d30
     * @note[short] MacOS (Intel): 0x524cb0
     * @note[short] Windows: 0x15a400
     * @note[short] iOS: 0x8dedc
     * @note[short] Android: Rebinded
     */
    void onGetUserMessagesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47aab4
     * @note[short] MacOS (Intel): 0x525bc0
     * @note[short] Windows: 0x1599b0
     * @note[short] iOS: 0x8e700
     * @note[short] Android: Rebinded
     */
    void onGetUsersCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x477790
     * @note[short] MacOS (Intel): 0x522700
     * @note[short] Windows: 0x164270
     * @note[short] iOS: 0x8c738
     * @note[short] Android: Rebinded
     */
    void onLikeItemCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x471368
     * @note[short] MacOS (Intel): 0x51ad60
     * @note[short] Windows: 0x142f00
     * @note[short] iOS: 0x87de8
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x47da90
     * @note[short] MacOS (Intel): 0x5291f0
     * @note[short] Windows: 0x155780
     * @note[short] iOS: 0x906a0
     * @note[short] Android: Rebinded
     */
    void onRateDemonCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47ffa8
     * @note[short] MacOS (Intel): 0x52bb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void onRateLevelAdminCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475730
     * @note[short] MacOS (Intel): 0x520000
     * @note[short] Windows: 0x154150
     * @note[short] iOS: 0x8b404
     * @note[short] Android: Rebinded
     */
    void onRateStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x478718
     * @note[short] MacOS (Intel): 0x5235f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8d220
     * @note[short] Android: Rebinded
     */
    void onReadFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47881c
     * @note[short] MacOS (Intel): 0x5236e0
     * @note[short] Windows: 0x161cb0
     * @note[short] iOS: 0x8d294
     * @note[short] Android: Rebinded
     */
    void onRemoveFriendCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x477b8c
     * @note[short] MacOS (Intel): 0x522a80
     * @note[short] Windows: 0x16a520
     * @note[short] iOS: 0x8ca40
     * @note[short] Android: Rebinded
     */
    void onReportLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47b2d4
     * @note[short] MacOS (Intel): 0x526420
     * @note[short] Windows: 0x1649a0
     * @note[short] iOS: 0x8eba0
     * @note[short] Android: Rebinded
     */
    void onRequestUserAccessCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x477978
     * @note[short] MacOS (Intel): 0x5228b0
     * @note[short] Windows: 0x169b40
     * @note[short] iOS: 0x8c878
     * @note[short] Android: Rebinded
     */
    void onRestoreItemsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475bc4
     * @note[short] MacOS (Intel): 0x520470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8b6dc
     * @note[short] Android: Rebinded
     */
    void onSetLevelFeaturedCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475a40
     * @note[short] MacOS (Intel): 0x5202f0
     * @note[short] Windows: 0x155ad0
     * @note[short] iOS: 0x8b5e4
     * @note[short] Android: Rebinded
     */
    void onSetLevelStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x477b88
     * @note[short] MacOS (Intel): 0x522a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8ca08
     * @note[short] Android: Rebinded
     */
    void onSubmitUserInfoCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47b74c
     * @note[short] MacOS (Intel): 0x526890
     * @note[short] Windows: 0x1550b0
     * @note[short] iOS: 0x8ef24
     * @note[short] Android: Rebinded
     */
    void onSuggestLevelStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x478d78
     * @note[short] MacOS (Intel): 0x523c20
     * @note[short] Windows: 0x162730
     * @note[short] iOS: 0x8d5b8
     * @note[short] Android: Rebinded
     */
    void onUnblockUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x477cfc
     * @note[short] MacOS (Intel): 0x522be0
     * @note[short] Windows: 0x163a00
     * @note[short] iOS: 0x8cb20
     * @note[short] Android: Rebinded
     */
    void onUpdateDescriptionCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475618
     * @note[short] MacOS (Intel): 0x51ff10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8b320
     * @note[short] Android: Rebinded
     */
    void onUpdateLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x475bc8
     * @note[short] MacOS (Intel): 0x520480
     * @note[short] Windows: 0x157650
     * @note[short] iOS: 0x8b714
     * @note[short] Android: Rebinded
     */
    void onUpdateUserScoreCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x476af0
     * @note[short] MacOS (Intel): 0x521500
     * @note[short] Windows: 0x15e370
     * @note[short] iOS: 0x8c0e0
     * @note[short] Android: Rebinded
     */
    void onUploadCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x478124
     * @note[short] MacOS (Intel): 0x522fe0
     * @note[short] Windows: 0x1609a0
     * @note[short] iOS: 0x8cdf4
     * @note[short] Android: Rebinded
     */
    void onUploadFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x473e58
     * @note[short] MacOS (Intel): 0x51e390
     * @note[short] Windows: 0x14d2a0
     * @note[short] iOS: 0x8a400
     * @note[short] Android: Rebinded
     */
    void onUploadLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47f2b0
     * @note[short] MacOS (Intel): 0x52abf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9169c
     * @note[short] Android: Rebinded
     */
    void onUploadLevelListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47a83c
     * @note[short] MacOS (Intel): 0x525850
     * @note[short] Windows: 0x15b290
     * @note[short] iOS: 0x8e5c4
     * @note[short] Android: Rebinded
     */
    void onUploadUserMessageCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4a1784
     * @note[short] MacOS (Intel): 0x5514e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa6fc4
     * @note[short] Android
     */
    int pageFromCommentKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a9f48
     * @note[short] MacOS (Intel): 0x55a1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void parseRestoreData(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4711e4
     * @note[short] MacOS (Intel): 0x51abc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87c6c
     * @note[short] Android
     */
    void performNetworkTest();

    /**
     * @note[short] MacOS (ARM): 0x471558
     * @note[short] MacOS (Intel): 0x51af20
     * @note[short] Windows: 0x142d60
     * @note[short] iOS: 0x87f00
     * @note[short] Android: Rebinded
     */
    void ProcessHttpRequest(gd::string endpoint, gd::string params, gd::string tag, GJHttpType httpType);

    /**
     * @note[short] MacOS (ARM): 0x496110
     * @note[short] MacOS (Intel): 0x544610
     * @note[short] Windows: 0x152370
     * @note[short] iOS: 0x9fd4c
     * @note[short] Android: Rebinded
     */
    void processOnDownloadLevelCompleted(gd::string response, gd::string tag, bool update);

    /**
     * @note[short] MacOS (ARM): 0x48c690
     * @note[short] MacOS (Intel): 0x5399b0
     * @note[short] Windows: 0x14a430
     * @note[short] iOS: 0x99fac
     * @note[short] Android
     */
    void purgeUnusedLevels();

    /**
     * @note[short] MacOS (ARM): 0x498ef8
     * @note[short] MacOS (Intel): 0x547950
     * @note[short] Windows: 0x155350
     * @note[short] iOS: 0xa18a8
     * @note[short] Android
     */
    bool rateDemon(int id, int diff, bool moderator);

    /**
     * @note[short] MacOS (ARM): 0x4a3d9c
     * @note[short] MacOS (Intel): 0x553bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool rateLevelAdmin(int id, int stars, int feature, int rank, bool coins, bool updateRank);

    /**
     * @note[short] MacOS (ARM): 0x4976a4
     * @note[short] MacOS (Intel): 0x545ec0
     * @note[short] Windows: 0x153ac0
     * @note[short] iOS: 0xa0b34
     * @note[short] Android
     */
    void rateStars(int id, int diff);

    /**
     * @note[short] MacOS (ARM): 0x4a5460
     * @note[short] MacOS (Intel): 0x555410
     * @note[short] Windows: 0x161680
     * @note[short] iOS: 0xa8fd0
     * @note[short] Android
     */
    void readFriendRequest(int id);

    /**
     * @note[short] MacOS (ARM): 0x490b5c
     * @note[short] MacOS (Intel): 0x53e6b0
     * @note[short] Windows: 0x16a960
     * @note[short] iOS: 0x9cd44
     * @note[short] Android: Rebinded
     */
    void removeDelimiterChars(gd::string str, bool colon);

    /**
     * @note[short] MacOS (ARM): 0x48b8a0
     * @note[short] MacOS (Intel): 0x538ac0
     * @note[short] Windows: 0x149be0
     * @note[short] iOS: 0x9978c
     * @note[short] Android
     */
    void removeDLFromActive(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a58c8
     * @note[short] MacOS (Intel): 0x5558d0
     * @note[short] Windows: 0x161990
     * @note[short] iOS: 0xa9200
     * @note[short] Android
     */
    bool removeFriend(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x48d018
     * @note[short] MacOS (Intel): 0x53a3c0
     * @note[short] Android
     */
    void removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4a62a4
     * @note[short] MacOS (Intel): 0x556310
     * @note[short] Windows: 0x1628e0
     * @note[short] iOS: 0xa9720
     * @note[short] Android
     */
    void removeUserFromList(int id, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x4a9f4c
     * @note[short] MacOS (Intel): 0x55a1e0
     * @note[short] Windows: 0x16a280
     * @note[short] iOS: 0xababc
     * @note[short] Android
     */
    void reportLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a7e30
     * @note[short] MacOS (Intel): 0x557f40
     * @note[short] Windows: 0x1646c0
     * @note[short] iOS: 0xaa74c
     * @note[short] Android
     */
    bool requestUserAccess();

    /**
     * @note[short] MacOS (ARM): 0x4a1468
     * @note[short] MacOS (Intel): 0x5511e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa6e0c
     * @note[short] Android
     */
    void resetAccountComments(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x48bcdc
     * @note[short] MacOS (Intel): 0x538ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAllTimers();

    /**
     * @note[short] MacOS (ARM): 0x4a30f8
     * @note[short] MacOS (Intel): 0x552cf0
     * @note[short] Windows: 0x15eed0
     * @note[short] iOS: 0xa7bb4
     * @note[short] Android
     */
    void resetCommentTimersForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a2a5c
     * @note[short] MacOS (Intel): 0x552830
     * @note[short] Windows: 0x15ed00
     * @note[short] iOS: 0xa7aa0
     * @note[short] Android
     */
    void resetCommentTimersForLevelID(int id, CommentKeyType type);

    /**
     * @note[short] MacOS (ARM): 0x4a9b48
     * @note[short] MacOS (Intel): 0x559de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xab9b4
     * @note[short] Android
     */
    void resetDailyLevelState(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x49589c
     * @note[short] MacOS (Intel): 0x543c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9f7e4
     * @note[short] Android
     */
    void resetGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x49db54
     * @note[short] MacOS (Intel): 0x54d530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa49c0
     * @note[short] Android
     */
    void resetStoredUserInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a5388
     * @note[short] MacOS (Intel): 0x555370
     * @note[short] Windows: 0x163230
     * @note[short] iOS: 0xa8f30
     * @note[short] Android
     */
    void resetStoredUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x48bbe4
     * @note[short] MacOS (Intel): 0x538de0
     * @note[short] Windows: 0x14a0e0
     * @note[short] iOS: 0x99940
     * @note[short] Android
     */
    void resetTimerForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a9c60
     * @note[short] MacOS (Intel): 0x559ef0
     * @note[short] Android
     */
    void restoreItems();

    /**
     * @note[short] MacOS (ARM): 0x485614
     * @note[short] MacOS (Intel): 0x531f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void saveFetchedLevelLists(cocos2d::CCArray* lists);

    /**
     * @note[short] MacOS (ARM): 0x484adc
     * @note[short] MacOS (Intel): 0x531350
     * @note[short] Windows: 0x1469a0
     * @note[short] iOS: 0x95020
     * @note[short] Android
     */
    void saveFetchedLevels(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x486128
     * @note[short] MacOS (Intel): 0x532ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x95ebc
     * @note[short] Android
     */
    void saveFetchedMapPacks(cocos2d::CCArray* packs);

    /**
     * @note[short] MacOS (ARM): 0x4951d0
     * @note[short] MacOS (Intel): 0x543520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9f430
     * @note[short] Android
     */
    void saveGauntlet(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x48a654
     * @note[short] MacOS (Intel): 0x537770
     * @note[short] Windows: 0x148d80
     * @note[short] iOS: 0x98c3c
     * @note[short] Android
     */
    void saveLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x485678
     * @note[short] MacOS (Intel): 0x531fb0
     * @note[short] Windows: 0x150ee0
     * @note[short] iOS: 0x957f0
     * @note[short] Android
     */
    void saveLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x48d5d4
     * @note[short] MacOS (Intel): 0x53a9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void saveLocalScore(int id, int value, int type);

    /**
     * @note[short] MacOS (ARM): 0x48618c
     * @note[short] MacOS (Intel): 0x532c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x95f20
     * @note[short] Android
     */
    void saveMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x48d5e0
     * @note[short] MacOS (Intel): 0x53a9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setActiveSmartTemplate(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x4aab64
     * @note[short] MacOS (Intel): 0x55ad90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac0cc
     * @note[short] Android
     */
    void setBoolForKey(bool value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4aa5c4
     * @note[short] MacOS (Intel): 0x55a840
     * @note[short] Windows: 0x16a780
     * @note[short] iOS: 0xabe08
     * @note[short] Android
     */
    void setDiffVal(int diff, bool value);

    /**
     * @note[short] MacOS (ARM): 0x48d4a8
     * @note[short] MacOS (Intel): 0x53a890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a640
     * @note[short] Android: Rebinded
     */
    void setFolderName(int id, gd::string name, bool local);

    /**
     * @note[short] MacOS (ARM): 0x4aa94c
     * @note[short] MacOS (Intel): 0x55aba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xabfd0
     * @note[short] Android
     */
    void setIntForKey(int value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4aa828
     * @note[short] MacOS (Intel): 0x55aa80
     * @note[short] Windows: 0x16a870
     * @note[short] iOS: 0xabf30
     * @note[short] Android
     */
    void setLenVal(int diff, bool value);

    /**
     * @note[short] MacOS (ARM): 0x4993b4
     * @note[short] MacOS (Intel): 0x547e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLevelFeatured(int id, int rank, bool epic);

    /**
     * @note[short] MacOS (ARM): 0x4993ac
     * @note[short] MacOS (Intel): 0x547e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool setLevelStars(int id, int stars, bool coins);

    /**
     * @note[short] MacOS (ARM): 0x4a83a8
     * @note[short] MacOS (Intel): 0x558480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int specialFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x49e740
     * @note[short] MacOS (Intel): 0x54e290
     * @note[short] Windows: 0x15d7b0
     * @note[short] iOS: 0xa51a0
     * @note[short] Android: Rebinded
     */
    void storeCommentsResult(cocos2d::CCArray* comments, gd::string pageInfo, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a9a0c
     * @note[short] MacOS (Intel): 0x559cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xab8a4
     * @note[short] Android
     */
    void storeDailyLevelState(int id, int remaining, GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x49db38
     * @note[short] MacOS (Intel): 0x54d500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeFriendRequest(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x48ae74
     * @note[short] MacOS (Intel): 0x538130
     * @note[short] Windows: 0x149670
     * @note[short] iOS: 0x99298
     * @note[short] Android: Rebinded
     */
    void storeSearchResult(cocos2d::CCArray* levels, gd::string pageInfo, char const* searchKey);

    /**
     * @note[short] MacOS (ARM): 0x49d650
     * @note[short] MacOS (Intel): 0x54cff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeUserInfo(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x49db6c
     * @note[short] MacOS (Intel): 0x54d570
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeUserMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x49db8c
     * @note[short] MacOS (Intel): 0x54d5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa49e4
     * @note[short] Android
     */
    void storeUserMessageReply(int id, GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x48227c
     * @note[short] MacOS (Intel): 0x52e100
     * @note[short] Windows: 0x145d10
     * @note[short] iOS: 0x93554
     * @note[short] Android: Rebinded
     */
    void storeUserName(int userID, int accountID, gd::string userName);

    /**
     * @note[short] MacOS (ARM): 0x481a50
     * @note[short] MacOS (Intel): 0x52d930
     * @note[short] Windows: 0x145a10
     * @note[short] iOS: 0x93144
     * @note[short] Android: Rebinded
     */
    void storeUserNames(gd::string usernameString);

    /**
     * @note[short] MacOS (ARM): 0x49ac68
     * @note[short] MacOS (Intel): 0x54a0c0
     * @note[short] Windows: 0x169e40
     * @note[short] iOS: 0xa2b1c
     * @note[short] Android
     */
    void submitUserInfo();

    /**
     * @note[short] MacOS (ARM): 0x4988fc
     * @note[short] MacOS (Intel): 0x547360
     * @note[short] Windows: 0x154d90
     * @note[short] iOS: 0xa15b8
     * @note[short] Android
     */
    void suggestLevelStars(int id, int stars, int feature);

    /**
     * @note[short] MacOS (ARM): 0x482678
     * @note[short] MacOS (Intel): 0x52e500
     * @note[short] Windows: 0x146070
     * @note[short] iOS: 0x93768
     * @note[short] Android
     */
    gd::string tryGetUsername(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4a18ac
     * @note[short] MacOS (Intel): 0x5515e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa7058
     * @note[short] Android
     */
    CommentType typeFromCommentKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a7ab8
     * @note[short] MacOS (Intel): 0x557c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaa590
     * @note[short] Android
     */
    LikeItemType typeFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a6360
     * @note[short] MacOS (Intel): 0x5563c0
     * @note[short] Windows: 0x162410
     * @note[short] iOS: 0xa97dc
     * @note[short] Android
     */
    bool unblockUser(int id);

    /**
     * @note[short] MacOS (ARM): 0x48cf10
     * @note[short] MacOS (Intel): 0x53a2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a524
     * @note[short] Android
     */
    void unfollowUser(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a3da4
     * @note[short] MacOS (Intel): 0x553be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa8290
     * @note[short] Android
     */
    bool unrateLevelAdmin(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a6b00
     * @note[short] MacOS (Intel): 0x556ba0
     * @note[short] Windows: 0x1636b0
     * @note[short] iOS: 0xa9c28
     * @note[short] Android: Rebinded
     */
    bool updateDescription(int id, gd::string description);

    /**
     * @note[short] MacOS (ARM): 0x49735c
     * @note[short] MacOS (Intel): 0x545b60
     * @note[short] Windows: 0x153880
     * @note[short] iOS: 0xa0950
     * @note[short] Android
     */
    void updateLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x488168
     * @note[short] MacOS (Intel): 0x534ea0
     * @note[short] Windows: 0x1476c0
     * @note[short] iOS: 0x97620
     * @note[short] Android
     */
    void updateLevelOrders();

    /**
     * @note[short] MacOS (ARM): 0x4a3dac
     * @note[short] MacOS (Intel): 0x553bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa8298
     * @note[short] Android
     */
    bool updateLevelRankAdmin(int id, int rank);

    /**
     * @note[short] MacOS (ARM): 0x482b14
     * @note[short] MacOS (Intel): 0x52ec40
     * @note[short] Windows: 0x1463c0
     * @note[short] iOS: 0x939e8
     * @note[short] Android
     */
    void updateLevelRewards(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x494720
     * @note[short] MacOS (Intel): 0x542900
     * @note[short] Windows: 0x150fc0
     * @note[short] iOS: 0x9ee78
     * @note[short] Android
     */
    void updateSavedLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x48cbb4
     * @note[short] MacOS (Intel): 0x539f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9a2f8
     * @note[short] Android
     */
    void updateUsernames();

    /**
     * @note[short] MacOS (ARM): 0x4993b8
     * @note[short] MacOS (Intel): 0x547e80
     * @note[short] Windows: 0x155c60
     * @note[short] iOS: 0xa1b20
     * @note[short] Android
     */
    void updateUserScore();

    /**
     * @note[short] MacOS (ARM): 0x4a29b8
     * @note[short] MacOS (Intel): 0x5527b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa7a0c
     * @note[short] Android: Rebinded
     */
    void uploadAccountComment(gd::string content);

    /**
     * @note[short] MacOS (ARM): 0x4a1ba4
     * @note[short] MacOS (Intel): 0x551870
     * @note[short] Windows: 0x15daa0
     * @note[short] iOS: 0xa721c
     * @note[short] Android: Rebinded
     */
    void uploadComment(gd::string content, CommentType type, int levelID, int percent);

    /**
     * @note[short] MacOS (ARM): 0x4a40f8
     * @note[short] MacOS (Intel): 0x553f60
     * @note[short] Windows: 0x160590
     * @note[short] iOS: 0xa848c
     * @note[short] Android: Rebinded
     */
    bool uploadFriendRequest(int accountID, gd::string content);

    /**
     * @note[short] MacOS (ARM): 0x48fab4
     * @note[short] MacOS (Intel): 0x53d400
     * @note[short] Windows: 0x14c7c0
     * @note[short] iOS: 0x9c270
     * @note[short] Android
     */
    void uploadLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4a1af0
     * @note[short] MacOS (Intel): 0x5517e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa717c
     * @note[short] Android: Rebinded
     */
    void uploadLevelComment(int levelID, gd::string content, int percent);

    /**
     * @note[short] MacOS (ARM): 0x4931e8
     * @note[short] MacOS (Intel): 0x541200
     * @note[short] Windows: 0x14fdf0
     * @note[short] iOS: 0x9e228
     * @note[short] Android
     */
    void uploadLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x49ed74
     * @note[short] MacOS (Intel): 0x54e8a0
     * @note[short] Windows: 0x15ae40
     * @note[short] iOS: 0xa5494
     * @note[short] Android: Rebinded
     */
    void uploadUserMessage(int accountID, gd::string subject, gd::string content);

    /**
     * @note[short] MacOS (ARM): 0x482958
     * @note[short] MacOS (Intel): 0x52ea10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x938bc
     * @note[short] Android
     */
    int userIDForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x482974
     * @note[short] MacOS (Intel): 0x52ea30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x938d8
     * @note[short] Android
     */
    GJUserScore* userInfoForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4824d8
     * @note[short] MacOS (Intel): 0x52e360
     * @note[short] Windows: 0x145ef0
     * @note[short] iOS: 0x93698
     * @note[short] Android
     */
    gd::string userNameForUserID(int id);

    /**
     * @note[short] MacOS (ARM): 0x48dc8c
     * @note[short] MacOS (Intel): 0x53b160
     * @note[short] Windows: 0x14b1a0
     * @note[short] iOS: 0x9afd4
     * @note[short] Android
     */
    bool verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x48299c
     * @note[short] MacOS (Intel): 0x52ea70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x93900
     * @note[short] Android
     */
    void verifyLevelState(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x491990
     * @note[short] MacOS (Intel): 0x53f5e0
     * @note[short] Windows: 0x14d9b0
     * @note[short] iOS: 0x9d27c
     * @note[short] Android
     */
    gd::string writeSpecialFilters(GJSearchObject* object);
    gd::set<gd::string> m_queuedLists;
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_storedLevelData;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_favoriteLists;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_activeDailyID;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_activeWeeklyID;
    int m_eventTimeLeft;
    int m_eventID;
    int m_activeEventID;
    cocos2d::CCDictionary* m_gauntletLevels;
    gd::map<gd::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_friendReqAndUserBlocks;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    cocos2d::CCDictionary* m_localLeaderboardLevels;
    gd::string m_searchKey;
    gd::string m_mapPackKey;
    LeaderboardType m_leaderboardType;
    LeaderboardStat m_leaderboardStat;
    bool m_returnToLocalLevels;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    UploadActionDelegate* m_uploadActionDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJOnlineRewardDelegate* m_GJOnlineRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    OnlineListDelegate* m_onlineListDelegate;
    LevelRateInfoDelegate* m_levelRateInfoDelegate;
    SearchType m_searchType;
    int m_mapPack;
    gd::string m_tempSave;
    cocos2d::CCString* m_trueString;
    cocos2d::CCArray* m_smartTemplates;
    GJSmartTemplate* m_smartTemplate;
    bool m_testedNetwork;
};
