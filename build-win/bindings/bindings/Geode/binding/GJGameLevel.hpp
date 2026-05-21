#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLevel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJGameLevel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLevel, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4b2c00
     * @note[short] MacOS (Intel): 0x563bf0
     * @note[short] Windows: 0x141590
     * @note[short] iOS: 0xb2650
     * @note[short] Android: Out of line
     */
     GJGameLevel();

    /**
     * @note[short] MacOS (ARM): 0x4aae78
     * @note[short] MacOS (Intel): 0x55b090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac324
     * @note[short] Android: Rebinded
     */
     ~GJGameLevel();

    /**
     * @note[short] MacOS (ARM): 0x480ac0
     * @note[short] MacOS (Intel): 0x52c890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x926e0
     * @note[short] Android
     */
    static GJGameLevel* create();

    /**
     * @note[short] MacOS (ARM): 0x482e48
     * @note[short] MacOS (Intel): 0x52efa0
     * @note[short] Windows: 0x16ae30
     * @note[short] iOS: 0x93c10
     * @note[short] Android
     */
    static GJGameLevel* create(cocos2d::CCDictionary* dict, bool download);

    /**
     * @note[short] MacOS (ARM): 0x4ad0d8
     * @note[short] MacOS (Intel): 0x55d880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xadd14
     * @note[short] Android
     */
    static GJGameLevel* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4aece8
     * @note[short] MacOS (Intel): 0x55f710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf890
     * @note[short] Android
     */
    static int demonIconForDifficulty(DemonDifficultyType type);

    /**
     * @note[short] MacOS (ARM): 0x4ab738
     * @note[short] MacOS (Intel): 0x55bc60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xacaac
     * @note[short] Android
     */
    static int getLengthKey(int length, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x4ab774
     * @note[short] MacOS (Intel): 0x55bca0
     * @note[short] Windows: 0x16cbd0
     * @note[short] iOS: 0xacae8
     * @note[short] Android
     */
    static gd::string lengthKeyToString(int key);

    /**
     * @note[short] MacOS (ARM): 0x4ae088
     * @note[short] MacOS (Intel): 0x55ea40
     * @note[short] Windows: 0x16ef00
     * @note[short] iOS: 0xaec20
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4aebcc
     * @note[short] MacOS (Intel): 0x55f600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf780
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4ab0a0
     * @note[short] MacOS (Intel): 0x55b3d0
     * @note[short] Windows: 0x16c6a0
     * @note[short] iOS: 0xac4a8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4aebd4
     * @note[short] MacOS (Intel): 0x55f610
     * @note[short] Windows: 0x16ff40
     * @note[short] iOS: 0xaf788
     * @note[short] Android
     */
    bool areCoinsVerified();

    /**
     * @note[short] MacOS (ARM): 0x4ac9ac
     * @note[short] MacOS (Intel): 0x55cee0
     * @note[short] Windows: 0x16d810
     * @note[short] iOS: 0xad774
     * @note[short] Android
     */
    void copyLevelInfo(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4ad15c
     * @note[short] MacOS (Intel): 0x55d8f0
     * @note[short] Windows: 0x16dec0
     * @note[short] iOS: 0xadd44
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4abce4
     * @note[short] MacOS (Intel): 0x55c1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    gd::string generateSettingsString();

    /**
     * @note[short] MacOS (ARM): 0x4abacc
     * @note[short] MacOS (Intel): 0x55bfe0
     * @note[short] Windows: 0x16cef0
     * @note[short] iOS: 0xacc68
     * @note[short] Android
     */
    gd::string getAudioFileName();

    /**
     * @note[short] MacOS (ARM): 0x4ab864
     * @note[short] MacOS (Intel): 0x55bd70
     * @note[short] Windows: 0x16cd30
     * @note[short] iOS: 0xacb14
     * @note[short] Android
     */
    int getAverageDifficulty();

    /**
     * @note[short] MacOS (ARM): 0x49cb1c
     * @note[short] MacOS (Intel): 0x54c470
     * @note[short] Windows: 0x16cda0
     * @note[short] iOS: 0xa3fc4
     * @note[short] Android
     */
    char const* getCoinKey(int coinNumber);

    /**
     * @note[short] MacOS (ARM): 0x4ab890
     * @note[short] MacOS (Intel): 0x55bdc0
     * @note[short] Windows: 0x16ce20
     * @note[short] iOS: 0xacb40
     * @note[short] Android
     */
    int getLastBuildPageForTab(int tab);

    /**
     * @note[short] MacOS (ARM): 0x4acdd8
     * @note[short] MacOS (Intel): 0x55d4d0
     * @note[short] Windows: 0x16db30
     * @note[short] iOS: 0xada58
     * @note[short] Android
     */
    GJGameLevel* getListSnapshot();

    /**
     * @note[short] MacOS (ARM): 0x4813b8
     * @note[short] MacOS (Intel): 0x52d210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x92cd4
     * @note[short] Android
     */
    int getNormalPercent();

    /**
     * @note[short] MacOS (ARM): 0x4abbfc
     * @note[short] MacOS (Intel): 0x55c100
     * @note[short] Windows: 0x16cfb0
     * @note[short] iOS: 0xacd08
     * @note[short] Android
     */
    gd::string getSongName();

    /**
     * @note[short] MacOS (ARM): 0x4aec30
     * @note[short] MacOS (Intel): 0x55f670
     * @note[short] Windows: 0x170060
     * @note[short] iOS: 0xaf7e4
     * @note[short] Android
     */
    gd::string getUnpackedLevelDescription();

    /**
     * @note[short] MacOS (ARM): 0x48f0f8
     * @note[short] MacOS (Intel): 0x53c950
     * @note[short] Windows: 0x16fb60
     * @note[short] iOS: 0x9bc6c
     * @note[short] Android
     */
    void handleStatsConflict(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x489ba0
     * @note[short] MacOS (Intel): 0x536c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x984ac
     * @note[short] Android
     */
    bool isPlatformer();

    /**
     * @note[short] MacOS (ARM): 0x4ab20c
     * @note[short] MacOS (Intel): 0x55b5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac63c
     * @note[short] Android
     */
    void levelWasAltered();

    /**
     * @note[short] MacOS (ARM): 0x490d18
     * @note[short] MacOS (Intel): 0x53e880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void levelWasSubmitted();

    /**
     * @note[short] MacOS (ARM): 0x4ab09c
     * @note[short] MacOS (Intel): 0x55b3c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void parseSettingsString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4abe54
     * @note[short] MacOS (Intel): 0x55c330
     * @note[short] Windows: 0x16d230
     * @note[short] iOS: 0xacdf0
     * @note[short] Android: Rebinded
     */
    void saveNewScore(int value, int type, int ticks, int clicks, int coins, gd::string inputs, bool save);

    /**
     * @note[short] MacOS (ARM): 0x4ab368
     * @note[short] MacOS (Intel): 0x55b7d0
     * @note[short] Windows: 0x16c8b0
     * @note[short] iOS: 0xac744
     * @note[short] Android
     */
    void savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid);

    /**
     * @note[short] MacOS (ARM): 0x4ac4a0
     * @note[short] MacOS (Intel): 0x55c910
     * @note[short] Windows: 0x16d680
     * @note[short] iOS: 0xad080
     * @note[short] Android: Rebinded
     */
    void scoreStringToVector(gd::string& str, gd::vector<int>& vec);

    /**
     * @note[short] MacOS (ARM): 0x4ac6c4
     * @note[short] MacOS (Intel): 0x55cb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xad2dc
     * @note[short] Android: Rebinded
     */
    gd::string scoreVectorToString(gd::vector<int>& vec, int type);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAccountID(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAttempts(int attempts);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAttemptTime(int time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClicks(int clicks);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setCoinsVerified(int coinsVerified);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDailyID(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDemon(int demon);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setJumps(int jumps);

    /**
     * @note[short] MacOS (ARM): 0x4ab9a8
     * @note[short] MacOS (Intel): 0x55bec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xacbc8
     * @note[short] Android
     */
    void setLastBuildPageForTab(int tab, int page);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setLevelID(int levelID);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setNewNormalPercent(int percent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setNewNormalPercent2(int percent);

    /**
     * @note[short] MacOS (ARM): 0x482acc
     * @note[short] MacOS (Intel): 0x52ebf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setNormalPercent(int percent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setObjectCount(int count);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setOriginalLevel(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPassword(int password);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setStars(int stars);

    /**
     * @note[short] MacOS (ARM): 0x482a84
     * @note[short] MacOS (Intel): 0x52ebb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldCheatReset();

    /**
     * @note[short] MacOS (ARM): 0x4ac240
     * @note[short] MacOS (Intel): 0x55c740
     * @note[short] Windows: 0x16d400
     * @note[short] iOS: 0xacf54
     * @note[short] Android
     */
    void storeNewLocalScore(int value, int type);

    /**
     * @note[short] MacOS (ARM): 0x4ab2e8
     * @note[short] MacOS (Intel): 0x55b720
     * @note[short] Windows: 0x16ffa0
     * @note[short] iOS: 0xac6c4
     * @note[short] Android
     */
    void unverifyCoins();
    cocos2d::CCDictionary* m_lastBuildSave;
    geode::SeedValueRSV m_levelID;
    gd::string m_levelName;
    gd::string m_levelDesc;
    gd::string m_levelString;
    gd::string m_creatorName;
    gd::string m_recordString;
    gd::string m_uploadDate;
    gd::string m_updateDate;
    gd::string m_lockedEditorLayers;
    gd::string m_savedCameraPositions;
    cocos2d::CCPoint m_previewLock;
    geode::SeedValueRSV m_userID;
    geode::SeedValueRSV m_accountID;
    GJDifficulty m_difficulty;
    int m_audioTrack;
    int m_songID;
    int m_levelRev;
    bool m_unlisted;
    bool m_friendsOnly;
    geode::SeedValueRSV m_objectCount;
    int m_levelIndex;
    int m_ratings;
    int m_ratingsSum;
    int m_downloads;
    bool m_isEditable;
    bool m_gauntletLevel;
    bool m_gauntletLevel2;
    int m_workingTime;
    int m_workingTime2;
    bool m_lowDetailMode;
    bool m_lowDetailModeToggled;
    bool m_disableShakeToggled;
    bool m_selected;
    bool m_localOrSaved;
    bool m_disableShake;
    geode::SeedValueRS m_isVerified;
    bool m_isVerifiedRaw;
    bool m_isUploaded;
    bool m_hasBeenModified;
    int m_levelVersion;
    int m_gameVersion;
    geode::SeedValueRSV m_attempts;
    geode::SeedValueRSV m_jumps;
    geode::SeedValueRSV m_clicks;
    geode::SeedValueRSV m_attemptTime;
    int m_chk;
    bool m_isChkValid;
    bool m_isCompletionLegitimate;
    geode::SeedValueVSR m_normalPercent;
    geode::SeedValueRSV m_orbCompletion;
    geode::SeedValueRSV m_newNormalPercent2;
    int m_practicePercent;
    int m_likes;
    int m_dislikes;
    int m_levelLength;
    int m_featured;
    int m_isEpic;
    bool m_levelFavorited;
    int m_levelFolder;
    geode::SeedValueRSV m_dailyID;
    geode::SeedValueRSV m_demon;
    int m_demonDifficulty;
    geode::SeedValueRSV m_stars;
    bool m_autoLevel;
    int m_coins;
    geode::SeedValueRSV m_coinsVerified;
    geode::SeedValueRS m_password;
    geode::SeedValueRSV m_originalLevel;
    bool m_twoPlayerMode;
    int m_failedPasswordAttempts;
    geode::SeedValueRSV m_firstCoinVerified;
    geode::SeedValueRSV m_secondCoinVerified;
    geode::SeedValueRSV m_thirdCoinVerified;
    int m_starsRequested;
    bool m_showedSongWarning;
    int m_starRatings;
    int m_starRatingsSum;
    int m_maxStarRatings;
    int m_minStarRatings;
    int m_demonVotes;
    int m_rateStars;
    bool m_rateFeature;
    gd::string m_rateUser;
    bool m_dontSave;
    bool m_levelNotDownloaded;
    int m_requiredCoins;
    bool m_isUnlocked;
    cocos2d::CCPoint m_lastCameraPos;
    float m_lastEditorZoom;
    int m_lastBuildTab;
    int m_lastBuildPage;
    int m_lastBuildGroupID;
    GJLevelType m_levelType;
    int m_M_ID;
    gd::string m_tempName;
    gd::string m_capacityString;
    bool m_highObjectsEnabled;
    bool m_unlimitedObjectsEnabled;
    gd::string m_personalBests;
    int m_timestamp;
    int m_listPosition;
    gd::string m_songIDs;
    gd::string m_sfxIDs;
    int m_songSize;
    int m_bestTime;
    int m_ticksTime;
    int m_clicksTime;
    int m_coinsTime;
    gd::string m_inputsTime;
    int m_bestPoints;
    int m_ticksPoints;
    int m_clicksPoints;
    int m_coinsPoints;
    gd::string m_inputsPoints;
    int m_platformerSeed;
    gd::string m_localBestTimes;
    gd::string m_localBestPoints;
    bool m_savedTime;
    bool m_savedPoints;
};
