#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x63d840
     * @note[short] MacOS (Intel): 0x72b930
     * @note[short] Windows: 0x7da0
     * @note[short] iOS: 0xb6d48
     * @note[short] Android
     */
    static AchievementManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x63d930
     * @note[short] MacOS (Intel): 0x72ba40
     * @note[short] Windows: 0x7e60
     * @note[short] iOS: 0xb6dc8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x68c19c
     * @note[short] MacOS (Intel): 0x7852d0
     * @note[short] Windows: 0x3a1c0
     * @note[short] iOS: 0xe85d4
     * @note[short] Android
     */
    gd::string achievementForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x68b8dc
     * @note[short] MacOS (Intel): 0x784ac0
     * @note[short] Windows: 0x7ef0
     * @note[short] iOS: 0xe8068
     * @note[short] Android: Rebinded
     */
    void addAchievement(gd::string identifier, gd::string title, gd::string achievedDescription, gd::string unachievedDescription, gd::string icon, int limits);

    /**
     * @note[short] MacOS (ARM): 0x63d9b8
     * @note[short] MacOS (Intel): 0x72bad0
     * @note[short] Windows: 0x8410
     * @note[short] iOS: 0xb6e50
     * @note[short] Android
     */
    void addManualAchievements();

    /**
     * @note[short] MacOS (ARM): 0x68bd5c
     * @note[short] MacOS (Intel): 0x784f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool areAchievementsEarned(cocos2d::CCArray* achievements);

    /**
     * @note[short] MacOS (ARM): 0x68bccc
     * @note[short] MacOS (Intel): 0x784e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkAchFromUnlock(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x68bc44
     * @note[short] MacOS (Intel): 0x784da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe8344
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x68bcb0
     * @note[short] MacOS (Intel): 0x784e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe8394
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x68bbf8
     * @note[short] MacOS (Intel): 0x784d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe831c
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x68caac
     * @note[short] MacOS (Intel): 0x785d30
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementRewardDict();

    /**
     * @note[short] MacOS (ARM): 0x68bf3c
     * @note[short] MacOS (Intel): 0x7850d0
     * @note[short] Windows: 0x39d70
     * @note[short] iOS: 0xe84cc
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementsWithID(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x68bf34
     * @note[short] MacOS (Intel): 0x7850c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe84c4
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievements();

    /**
     * @note[short] MacOS (ARM): 0x68b230
     * @note[short] MacOS (Intel): 0x784470
     * @note[short] Windows: 0x39b50
     * @note[short] iOS: 0xe7d14
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievementsSorted(bool available);

    /**
     * @note[short] MacOS (ARM): 0x68c040
     * @note[short] MacOS (Intel): 0x7851b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool isAchievementAvailable(gd::string id);

    /**
     * @note[short] MacOS (ARM): 0x68bde8
     * @note[short] MacOS (Intel): 0x784f80
     * @note[short] Windows: 0x39a70
     * @note[short] iOS: 0xe8438
     * @note[short] Android
     */
    bool isAchievementEarned(char const* ach);

    /**
     * @note[short] MacOS (ARM): 0x68c0e8
     * @note[short] MacOS (Intel): 0x785230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe8538
     * @note[short] Android: Rebinded
     */
    int limitForAchievement(gd::string id);

    /**
     * @note[short] MacOS (ARM): 0x68c7f8
     * @note[short] MacOS (Intel): 0x785a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe8998
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* description, char const* icon);

    /**
     * @note[short] MacOS (ARM): 0x68c5fc
     * @note[short] MacOS (Intel): 0x785890
     * @note[short] Windows: 0x3a470
     * @note[short] iOS: 0xe8854
     * @note[short] Android
     */
    void notifyAchievementWithID(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x68bf0c
     * @note[short] MacOS (Intel): 0x785090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int percentageForCount(int count, int total);

    /**
     * @note[short] MacOS (ARM): 0x68be04
     * @note[short] MacOS (Intel): 0x784fa0
     * @note[short] Windows: 0x39a90
     * @note[short] iOS: 0xe8454
     * @note[short] Android
     */
    int percentForAchievement(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x68c93c
     * @note[short] MacOS (Intel): 0x785b80
     * @note[short] iOS: 0xe8a48
     * @note[short] Android
     */
    void reportAchievementWithID(char const* id, int percent, bool dontNotify);

    /**
     * @note[short] MacOS (ARM): 0x68ca98
     * @note[short] MacOS (Intel): 0x785d00
     * @note[short] iOS: 0xe8b38
     * @note[short] Android
     */
    void reportPlatformAchievementWithID(char const* id, int percent);

    /**
     * @note[short] MacOS (ARM): 0x68c844
     * @note[short] MacOS (Intel): 0x785aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe89e4
     * @note[short] Android
     */
    void resetAchievement(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x68caa4
     * @note[short] MacOS (Intel): 0x785d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAchievements();

    /**
     * @note[short] MacOS (ARM): 0x68bcc8
     * @note[short] MacOS (Intel): 0x784e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x68b4d0
     * @note[short] MacOS (Intel): 0x784650
     * @note[short] Windows: 0x39e20
     * @note[short] iOS: 0xe7e74
     * @note[short] Android
     */
    void storeAchievementUnlocks();
    cocos2d::CCArray* m_allAchievements;
    cocos2d::CCDictionary* m_platformAchievements;
    cocos2d::CCDictionary* m_achievementUnlocks;
    void* m_unkPtrUnused;
    cocos2d::CCDictionary* m_reportedAchievements;
    bool m_dontNotify;
    cocos2d::CCArray* m_allAchievementsSorted;
    int m_order;
    cocos2d::CCDictionary* m_unAchieved;
};
