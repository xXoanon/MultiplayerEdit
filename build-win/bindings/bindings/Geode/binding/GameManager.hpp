#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "UIButtonConfig.hpp"
#include "GManager.hpp"

class GameManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameManager, GManager)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameManager* get();

    /**
     * @note[short] MacOS (ARM): 0x300128
     * @note[short] MacOS (Intel): 0x376a80
     * @note[short] Windows: 0x17b4a0
     * @note[short] iOS: 0x311ce8
     * @note[short] Android
     */
    static GameManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x312910
     * @note[short] MacOS (Intel): 0x38bb20
     * @note[short] Windows: 0x189bc0
     * @note[short] iOS: 0x31d358
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x300194
     * @note[short] MacOS (Intel): 0x376ae0
     * @note[short] Windows: 0x17b4f0
     * @note[short] iOS: 0x311d48
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x311d34
     * @note[short] MacOS (Intel): 0x38af20
     * @note[short] Windows: 0x188fb0
     * @note[short] iOS: 0x31cb0c
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x310294
     * @note[short] MacOS (Intel): 0x389140
     * @note[short] Windows: 0x186a90
     * @note[short] iOS: 0x31b408
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x311520
     * @note[short] MacOS (Intel): 0x38a600
     * @note[short] Windows: 0x1886b0
     * @note[short] iOS: 0x31c5f8
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x30cb20
     * @note[short] MacOS (Intel): 0x384e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x319740
     * @note[short] Android
     */
    void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0x308b74
     * @note[short] MacOS (Intel): 0x380b80
     * @note[short] Windows: 0x181a90
     * @note[short] iOS: 0x317640
     * @note[short] Android
     */
    int activeIconForType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x20a000
     * @note[short] MacOS (Intel): 0x266460
     * @note[short] Windows: 0x1aeb60
     * @note[short] iOS: 0x34f588
     * @note[short] Android: Rebinded
     */
    void addCustomAnimationFrame(int objectID, int frameIndex, gd::string mainFrame, gd::string detailFrame);

    /**
     * @note[short] MacOS (ARM): 0x20a118
     * @note[short] MacOS (Intel): 0x266590
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDuplicateLastFrame(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x209d90
     * @note[short] MacOS (Intel): 0x2661e0
     * @note[short] Windows: 0x1ae9f0
     * @note[short] iOS: 0x34f3e4
     * @note[short] Android: Rebinded
     */
    void addGameAnimation(int objectID, int frames, float frameTime, gd::string mainAnimFrame, gd::string detailAnimFrame, int defaultFrame);

    /**
     * @note[short] MacOS (ARM): 0x30951c
     * @note[short] MacOS (Intel): 0x3818c0
     * @note[short] Android
     */
    void addIconDelegate(cocos2d::CCObject* delegate, int key);

    /**
     * @note[short] MacOS (ARM): 0x30c39c
     * @note[short] MacOS (Intel): 0x384670
     * @note[short] Windows: 0x1837f0
     * @note[short] iOS: 0x319398
     * @note[short] Android: Rebinded
     */
    void addNewCustomObject(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x30e288
     * @note[short] MacOS (Intel): 0x386b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToGJLog(cocos2d::CCString* str);

    /**
     * @note[short] MacOS (ARM): 0x31295c
     * @note[short] MacOS (Intel): 0x38bb70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31d384
     * @note[short] Android
     */
    void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x312960
     * @note[short] MacOS (Intel): 0x38bb80
     * @note[short] Windows: 0x189c50
     * @note[short] iOS: 0x31d388
     * @note[short] Android
     */
    void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x300268
     * @note[short] MacOS (Intel): 0x376bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x311e14
     * @note[short] Android
     */
    void calculateBaseKeyForIcons();

    /**
     * @note[short] MacOS (ARM): 0x308258
     * @note[short] MacOS (Intel): 0x380300
     * @note[short] Android
     */
    bool canShowRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x303330
     * @note[short] MacOS (Intel): 0x379f60
     * @note[short] Windows: 0x17e1c0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkSteamAchievementUnlock();

    /**
     * @note[short] MacOS (ARM): 0x306d84
     * @note[short] MacOS (Intel): 0x37eeb0
     * @note[short] Windows: 0x1841d0
     * @note[short] iOS: 0x3168dc
     * @note[short] Android
     */
    void checkUsedIcons();

    /**
     * @note[short] MacOS (ARM): 0x307b04
     * @note[short] MacOS (Intel): 0x37fb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void claimItemsResponse(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x30e290
     * @note[short] MacOS (Intel): 0x386b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31a5e0
     * @note[short] Android
     */
    void clearGJLog();

    /**
     * @note[short] MacOS (ARM): 0x307b08
     * @note[short] MacOS (Intel): 0x37fb70
     * @note[short] Windows: 0x181350
     * @note[short] iOS: 0x316d48
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x307fd4
     * @note[short] MacOS (Intel): 0x380030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int colorForPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x301680
     * @note[short] MacOS (Intel): 0x378320
     * @note[short] Windows: 0x17c7b0
     * @note[short] iOS: 0x312d24
     * @note[short] Android
     */
    gd::string colorKey(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x30253c
     * @note[short] MacOS (Intel): 0x3790e0
     * @note[short] Windows: 0x17d1f0
     * @note[short] iOS: 0x3136dc
     * @note[short] Android: Rebinded
     */
    void completedAchievement(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x308c84
     * @note[short] MacOS (Intel): 0x380df0
     * @note[short] Windows: 0x181c00
     * @note[short] iOS: 0x317750
     * @note[short] Android
     */
    int countForType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x201d2c
     * @note[short] MacOS (Intel): 0x25d9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int defaultFrameForAnimation(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x312860
     * @note[short] MacOS (Intel): 0x38ba90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31d310
     * @note[short] Android
     */
    void didExitPlayscene();

    /**
     * @note[short] MacOS (ARM): 0x312834
     * @note[short] MacOS (Intel): 0x38ba60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31d2e4
     * @note[short] Android
     */
    void doQuickSave();

    /**
     * @note[short] MacOS (ARM): 0x30ecf4
     * @note[short] MacOS (Intel): 0x3878b0
     * @note[short] Windows: 0x186490
     * @note[short] iOS: 0x31a98c
     * @note[short] Android
     */
    gd::string dpadConfigToString(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x307af0
     * @note[short] MacOS (Intel): 0x37fb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void eventUnlockFeature(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x300a40
     * @note[short] MacOS (Intel): 0x3772f0
     * @note[short] Windows: 0x17bab0
     * @note[short] iOS: 0x3122dc
     * @note[short] Android
     */
    void fadeInMenuMusic();

    /**
     * @note[short] MacOS (ARM): 0x300b38
     * @note[short] MacOS (Intel): 0x3773d0
     * @note[short] Windows: 0x17bba0
     * @note[short] iOS: 0x31236c
     * @note[short] Android: Rebinded
     */
    void fadeInMusic(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x30b078
     * @note[short] MacOS (Intel): 0x383440
     * @note[short] Windows: 0x182950
     * @note[short] iOS: 0x318574
     * @note[short] Android
     */
    void finishedLoadingBGAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x30b700
     * @note[short] MacOS (Intel): 0x383a80
     * @note[short] Windows: 0x182df0
     * @note[short] iOS: 0x318bec
     * @note[short] Android
     */
    void finishedLoadingGAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x30b668
     * @note[short] MacOS (Intel): 0x383a00
     * @note[short] Windows: 0x182d70
     * @note[short] iOS: 0x318b54
     * @note[short] Android
     */
    void finishedLoadingGAsync1(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x30b6b4
     * @note[short] MacOS (Intel): 0x383a40
     * @note[short] Windows: 0x182db0
     * @note[short] iOS: 0x318ba0
     * @note[short] Android
     */
    void finishedLoadingGAsync2(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x309690
     * @note[short] MacOS (Intel): 0x381a80
     * @note[short] Android
     */
    void finishedLoadingIconAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x30b3a0
     * @note[short] MacOS (Intel): 0x383730
     * @note[short] Windows: 0x182b90
     * @note[short] iOS: 0x31889c
     * @note[short] Android
     */
    void finishedLoadingMGAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x30b308
     * @note[short] MacOS (Intel): 0x3836b0
     * @note[short] Windows: 0x182b10
     * @note[short] iOS: 0x318804
     * @note[short] Android
     */
    void finishedLoadingMGAsync1(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x30b354
     * @note[short] MacOS (Intel): 0x3836f0
     * @note[short] Windows: 0x182b50
     * @note[short] iOS: 0x318850
     * @note[short] Android
     */
    void finishedLoadingMGAsync2(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x3088ac
     * @note[short] MacOS (Intel): 0x3808d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31739c
     * @note[short] Android
     */
    void followTwitch();

    /**
     * @note[short] MacOS (ARM): 0x3087ac
     * @note[short] MacOS (Intel): 0x3807f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3172a4
     * @note[short] Android
     */
    void followTwitter();

    /**
     * @note[short] MacOS (ARM): 0x201f04
     * @note[short] MacOS (Intel): 0x25dbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int framesForAnimation(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x201f34
     * @note[short] MacOS (Intel): 0x25dbf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float frameTimeForAnimation(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x30e0cc
     * @note[short] MacOS (Intel): 0x3868c0
     * @note[short] Windows: 0x185cf0
     * @note[short] iOS: 0x31a548
     * @note[short] Android
     */
    int generateSecretNumber();

    /**
     * @note[short] MacOS (ARM): 0x30b79c
     * @note[short] MacOS (Intel): 0x383b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x318c88
     * @note[short] Android
     */
    const char* getBGTexture(int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    LevelEditorLayer* getEditorLayer();

    /**
     * @note[short] MacOS (ARM): 0x30acd0
     * @note[short] MacOS (Intel): 0x3830d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3181d0
     * @note[short] Android
     */
    const char* getFontFile(int index);

    /**
     * @note[short] MacOS (ARM): 0x30ad3c
     * @note[short] MacOS (Intel): 0x383120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31823c
     * @note[short] Android
     */
    const char* getFontTexture(int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    GJBaseGameLayer* getGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x3008a0
     * @note[short] MacOS (Intel): 0x3771a0
     * @note[short] Windows: 0x183110
     * @note[short] iOS: 0x312200
     * @note[short] Android
     */
    bool getGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getGameVariableDefault(const char* key, bool defaultValue);

    /**
     * @note[short] MacOS (ARM): 0x30b834
     * @note[short] MacOS (Intel): 0x383bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x318d20
     * @note[short] Android
     */
    const char* getGTexture(int index);

    /**
     * @note[short] MacOS (ARM): 0x30ab30
     * @note[short] MacOS (Intel): 0x382f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x318114
     * @note[short] Android
     */
    int getIconRequestID();

    /**
     * @note[short] MacOS (ARM): 0x30c050
     * @note[short] MacOS (Intel): 0x384330
     * @note[short] Windows: 0x183710
     * @note[short] iOS: 0x319174
     * @note[short] Android
     */
    int getIntGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getIntGameVariableDefault(const char* key, int defaultValue);

    /**
     * @note[short] MacOS (ARM): 0x3003e8
     * @note[short] MacOS (Intel): 0x376d70
     * @note[short] Windows: 0x17b720
     * @note[short] iOS: 0x311f04
     * @note[short] Android
     */
    gd::string getMenuMusicFile();

    /**
     * @note[short] MacOS (ARM): 0x30b7e8
     * @note[short] MacOS (Intel): 0x383b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x318cd4
     * @note[short] Android
     */
    const char* getMGTexture(int index);

    /**
     * @note[short] MacOS (ARM): 0x30c174
     * @note[short] MacOS (Intel): 0x384440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x319208
     * @note[short] Android
     */
    int getNextUniqueObjectKey();

    /**
     * @note[short] MacOS (ARM): 0x30c26c
     * @note[short] MacOS (Intel): 0x384530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3192c4
     * @note[short] Android
     */
    int getNextUsedKey(int index, bool up);

    /**
     * @note[short] MacOS (ARM): 0x30c220
     * @note[short] MacOS (Intel): 0x3844e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x319278
     * @note[short] Android
     */
    cocos2d::CCArray* getOrderedCustomObjectKeys();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerBall();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerBird();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerColor();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerColor2();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerDart();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerDeathEffect();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerFrame();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getPlayerGlow();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerGlowColor();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerJetpack();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerRobot();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerShip();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerShipFire();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerSpider();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerStreak();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerSwing();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    PlayLayer* getPlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x30055c
     * @note[short] MacOS (Intel): 0x376ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x311fcc
     * @note[short] Android
     */
    gd::string getPracticeMusicFile();

    /**
     * @note[short] MacOS (ARM): 0x30bd78
     * @note[short] MacOS (Intel): 0x3840b0
     * @note[short] Windows: 0x1834a0
     * @note[short] iOS: 0x318fe8
     * @note[short] Android
     */
    bool getUGV(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x301aa4
     * @note[short] MacOS (Intel): 0x378750
     * @note[short] Windows: 0x17c9a0
     * @note[short] iOS: 0x312ff8
     * @note[short] Android: Rebinded
     */
    void getUnlockForAchievement(gd::string key, int& id, UnlockType& type);

    /**
     * @note[short] MacOS (ARM): 0x30b43c
     * @note[short] MacOS (Intel): 0x3837d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool groundHasSecondaryColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x309a4c
     * @note[short] MacOS (Intel): 0x381e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void iconAndTypeForKey(int key, int& id, int& type);

    /**
     * @note[short] MacOS (ARM): 0x301028
     * @note[short] MacOS (Intel): 0x377a50
     * @note[short] Windows: 0x17c2d0
     * @note[short] iOS: 0x312814
     * @note[short] Android
     */
    gd::string iconKey(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x3014ac
     * @note[short] MacOS (Intel): 0x377ff0
     * @note[short] Windows: 0x17c5e0
     * @note[short] iOS: 0x312b10
     * @note[short] Android
     */
    UnlockType iconTypeToUnlockType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x3018b0
     * @note[short] MacOS (Intel): 0x3785c0
     * @note[short] Windows: 0x17c8e0
     * @note[short] iOS: 0x312e58
     * @note[short] Android
     */
    bool isColorUnlocked(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x308d60
     * @note[short] MacOS (Intel): 0x381000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31782c
     * @note[short] Android
     */
    bool isIconLoaded(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x301398
     * @note[short] MacOS (Intel): 0x377f30
     * @note[short] Windows: 0x17c500
     * @note[short] iOS: 0x312a48
     * @note[short] Android
     */
    bool isIconUnlocked(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x307af8
     * @note[short] MacOS (Intel): 0x37fb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void itemPurchased(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x30892c
     * @note[short] MacOS (Intel): 0x380940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x317418
     * @note[short] Android
     */
    void joinDiscord();

    /**
     * @note[short] MacOS (ARM): 0x3089ac
     * @note[short] MacOS (Intel): 0x3809b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x317494
     * @note[short] Android
     */
    void joinReddit();

    /**
     * @note[short] MacOS (ARM): 0x308e34
     * @note[short] MacOS (Intel): 0x3810e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int keyForIcon(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x307afc
     * @note[short] MacOS (Intel): 0x37fb50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool levelIsPremium(int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0x30872c
     * @note[short] MacOS (Intel): 0x380780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x317228
     * @note[short] Android
     */
    void likeFacebook();

    /**
     * @note[short] MacOS (ARM): 0x30af28
     * @note[short] MacOS (Intel): 0x383300
     * @note[short] Windows: 0x1828a0
     * @note[short] iOS: 0x318424
     * @note[short] Android
     */
    void loadBackground(int index);

    /**
     * @note[short] MacOS (ARM): 0x30afcc
     * @note[short] MacOS (Intel): 0x3833b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3184c8
     * @note[short] Android
     */
    void loadBackgroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x30ada8
     * @note[short] MacOS (Intel): 0x383170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3182a8
     * @note[short] Android
     */
    void loadDeathEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x30f7ec
     * @note[short] MacOS (Intel): 0x3885e0
     * @note[short] Windows: 0x186780
     * @note[short] iOS: 0x31af70
     * @note[short] Android: Rebinded
     */
    void loadDpadFromString(UIButtonConfig& config, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x30f3e8
     * @note[short] MacOS (Intel): 0x3881a0
     * @note[short] Windows: 0x1861e0
     * @note[short] iOS: 0x31ac74
     * @note[short] Android
     */
    void loadDPadLayout(int index, bool dual);

    /**
     * @note[short] MacOS (ARM): 0x30ac24
     * @note[short] MacOS (Intel): 0x383020
     * @note[short] Windows: 0x1827f0
     * @note[short] iOS: 0x318128
     * @note[short] Android
     */
    void loadFont(int index);

    /**
     * @note[short] MacOS (ARM): 0x30b44c
     * @note[short] MacOS (Intel): 0x3837e0
     * @note[short] Windows: 0x182c50
     * @note[short] iOS: 0x318938
     * @note[short] Android
     */
    void loadGround(int index);

    /**
     * @note[short] MacOS (ARM): 0x30b560
     * @note[short] MacOS (Intel): 0x383900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x318a4c
     * @note[short] Android
     */
    void loadGroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x309b04
     * @note[short] MacOS (Intel): 0x381eb0
     * @note[short] Windows: 0x181d10
     * @note[short] iOS: 0x317a34
     * @note[short] Android
     */
    cocos2d::CCTexture2D* loadIcon(int id, int type, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x308e48
     * @note[short] MacOS (Intel): 0x381100
     * @note[short] Android
     */
    void loadIconAsync(int id, int type, int requestID, cocos2d::CCObject* delegate);

    /**
     * @note[short] MacOS (ARM): 0x30b114
     * @note[short] MacOS (Intel): 0x3834d0
     * @note[short] Windows: 0x182a00
     * @note[short] iOS: 0x318610
     * @note[short] Android
     */
    void loadMiddleground(int index);

    /**
     * @note[short] MacOS (ARM): 0x30b214
     * @note[short] MacOS (Intel): 0x3835d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x318710
     * @note[short] Android
     */
    void loadMiddlegroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x310138
     * @note[short] MacOS (Intel): 0x389030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31b3c0
     * @note[short] Android
     */
    void loadVideoSettings();

    /**
     * @note[short] MacOS (ARM): 0x301a30
     * @note[short] MacOS (Intel): 0x3786f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312f94
     * @note[short] Android
     */
    void lockColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x30160c
     * @note[short] MacOS (Intel): 0x3782c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312cc0
     * @note[short] Android
     */
    void lockIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x30ab44
     * @note[short] MacOS (Intel): 0x382f30
     * @note[short] Android
     */
    void logLoadedIconInfo();

    /**
     * @note[short] MacOS (ARM): 0x308a2c
     * @note[short] MacOS (Intel): 0x380a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x317510
     * @note[short] Android
     */
    void openEditorGuide();

    /**
     * @note[short] MacOS (ARM): 0x3006c4
     * @note[short] MacOS (Intel): 0x377000
     * @note[short] Windows: 0x17b830
     * @note[short] iOS: 0x312094
     * @note[short] Android
     */
    void playMenuMusic();

    /**
     * @note[short] MacOS (ARM): 0x300c70
     * @note[short] MacOS (Intel): 0x3774f0
     * @note[short] Windows: 0x17bcc0
     * @note[short] iOS: 0x312494
     * @note[short] Android
     */
    int playSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x30fb2c
     * @note[short] MacOS (Intel): 0x3888e0
     * @note[short] Windows: 0x1869f0
     * @note[short] iOS: 0x31b1b8
     * @note[short] Android
     */
    void prepareDPadSettings();

    /**
     * @note[short] MacOS (ARM): 0x30e28c
     * @note[short] MacOS (Intel): 0x386b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31a5dc
     * @note[short] Android
     */
    void printGJLog();

    /**
     * @note[short] MacOS (ARM): 0x31316c
     * @note[short] MacOS (Intel): 0x38c2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31d870
     * @note[short] Android
     */
    void queueReloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x3086f8
     * @note[short] MacOS (Intel): 0x380750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3171f4
     * @note[short] Android
     */
    void rateGame();

    /**
     * @note[short] MacOS (ARM): 0x30d280
     * @note[short] MacOS (Intel): 0x385630
     * @note[short] Windows: 0x184bc0
     * @note[short] iOS: 0x319c70
     * @note[short] Android: Rebinded
     */
    void recountUserStats(gd::string str);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x3132b4
     * @note[short] MacOS (Intel): 0x38c420
     * @note[short] Windows: 0x18a410
     * @note[short] iOS: 0x31d910
     * @note[short] Android
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool fix, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x313358
     * @note[short] MacOS (Intel): 0x38c4d0
     * @note[short] Windows: 0x18a4c0
     * @note[short] iOS: 0x31d9b4
     * @note[short] Android
     */
    void reloadAllStep2();

    /**
     * @note[short] MacOS (ARM): 0x313444
     * @note[short] MacOS (Intel): 0x38c5e0
     * @note[short] Windows: 0x18a620
     * @note[short] iOS: 0x31daa0
     * @note[short] Android
     */
    void reloadAllStep3();

    /**
     * @note[short] MacOS (ARM): 0x3134cc
     * @note[short] MacOS (Intel): 0x38c660
     * @note[short] Windows: 0x18a730
     * @note[short] iOS: 0x31db28
     * @note[short] Android
     */
    void reloadAllStep4();

    /**
     * @note[short] MacOS (ARM): 0x313538
     * @note[short] MacOS (Intel): 0x38c6c0
     * @note[short] Windows: 0x18a7d0
     * @note[short] iOS: 0x31db94
     * @note[short] Android
     */
    void reloadAllStep5();

    /**
     * @note[short] MacOS (ARM): 0x3131e0
     * @note[short] MacOS (Intel): 0x38c350
     * @note[short] Windows: 0x18a3e0
     * @note[short] iOS: 0x31d8e0
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x30ca14
     * @note[short] MacOS (Intel): 0x384d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3196c0
     * @note[short] Android
     */
    void removeCustomObject(int key);

    /**
     * @note[short] MacOS (ARM): 0x30a7b8
     * @note[short] MacOS (Intel): 0x382b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x317f48
     * @note[short] Android
     */
    void removeIconDelegate(int requestID);

    /**
     * @note[short] MacOS (ARM): 0x30c6b8
     * @note[short] MacOS (Intel): 0x384990
     * @note[short] Windows: 0x183ac0
     * @note[short] iOS: 0x3194ec
     * @note[short] Android
     */
    int reorderKey(int index, bool up);

    /**
     * @note[short] MacOS (ARM): 0x303214
     * @note[short] MacOS (Intel): 0x379e40
     * @note[short] Windows: 0x17dff0
     * @note[short] iOS: 0x313cec
     * @note[short] Android
     */
    void reportAchievementWithID(char const* key, int percent, bool dontNotify);

    /**
     * @note[short] MacOS (ARM): 0x30288c
     * @note[short] MacOS (Intel): 0x3793e0
     * @note[short] Windows: 0x17d610
     * @note[short] iOS: 0x3138d0
     * @note[short] Android
     */
    void reportPercentageForLevel(int levelID, int percentage, bool isPlatformer);

    /**
     * @note[short] MacOS (ARM): 0x3026ec
     * @note[short] MacOS (Intel): 0x379270
     * @note[short] Windows: 0x17d3b0
     * @note[short] iOS: 0x3137c4
     * @note[short] Android: Rebinded
     */
    void resetAchievement(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x307ff8
     * @note[short] MacOS (Intel): 0x380060
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAdTimer();

    /**
     * @note[short] MacOS (ARM): 0x30cb30
     * @note[short] MacOS (Intel): 0x384e40
     * @note[short] Windows: 0x183ea0
     * @note[short] iOS: 0x319750
     * @note[short] Android
     */
    void resetAllIcons();

    /**
     * @note[short] MacOS (ARM): 0x3064f8
     * @note[short] MacOS (Intel): 0x37e5a0
     * @note[short] Windows: 0x180b70
     * @note[short] iOS: 0x3162a4
     * @note[short] Android
     */
    void resetCoinUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x30fe98
     * @note[short] MacOS (Intel): 0x388cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31b374
     * @note[short] Android
     */
    void resetDPadSettings(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x31358c
     * @note[short] MacOS (Intel): 0x38c700
     * @note[short] Windows: 0x18a810
     * @note[short] iOS: 0x31dbd8
     * @note[short] Android
     */
    cocos2d::CCSize resolutionForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x308228
     * @note[short] MacOS (Intel): 0x3802c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x3081a4
     * @note[short] MacOS (Intel): 0x380250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeAudioDelayed();

    /**
     * @note[short] MacOS (ARM): 0x312dd0
     * @note[short] MacOS (Intel): 0x38bf20
     * @note[short] Windows: 0x189fb0
     * @note[short] iOS: 0x31d52c
     * @note[short] Android
     */
    void returnToLastScene(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x3082c0
     * @note[short] MacOS (Intel): 0x380350
     * @note[short] Android
     */
    void rewardedVideoAdFinished(int unused);

    /**
     * @note[short] MacOS (ARM): 0x308404
     * @note[short] MacOS (Intel): 0x380470
     * @note[short] Android
     */
    void rewardedVideoHidden();

    /**
     * @note[short] MacOS (ARM): 0x308380
     * @note[short] MacOS (Intel): 0x380400
     * @note[short] Android
     */
    void rewardedVideoHiddenDelayed();

    /**
     * @note[short] MacOS (ARM): 0x31310c
     * @note[short] MacOS (Intel): 0x38c280
     * @note[short] Windows: 0x18a360
     * @note[short] iOS: 0x31d80c
     * @note[short] Android
     */
    bool safePopScene();

    /**
     * @note[short] MacOS (ARM): 0x308014
     * @note[short] MacOS (Intel): 0x3800a0
     * @note[short] Android
     */
    void saveAdTimer();

    /**
     * @note[short] MacOS (ARM): 0x30e298
     * @note[short] MacOS (Intel): 0x386b70
     * @note[short] Windows: 0x185e20
     * @note[short] iOS: 0x31a5e8
     * @note[short] Android
     */
    void saveDPadLayout(int index, bool dual);

    /**
     * @note[short] MacOS (ARM): 0x30b880
     * @note[short] MacOS (Intel): 0x383c10
     * @note[short] Windows: 0x182eb0
     * @note[short] iOS: 0x318d6c
     * @note[short] Android
     */
    void setGameVariable(char const* key, bool value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setHasRatingPower(int hasRP);

    /**
     * @note[short] MacOS (ARM): 0x30bf1c
     * @note[short] MacOS (Intel): 0x384200
     * @note[short] Windows: 0x183610
     * @note[short] iOS: 0x3190c4
     * @note[short] Android
     */
    void setIntGameVariable(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerBall(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerBird(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor2(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor3(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerDart(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerDeathEffect(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerFrame(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerGlow(bool v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerJetpack(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerRobot(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerShip(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerShipStreak(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerSpider(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerStreak(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerSwing(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerUserID(int id);

    /**
     * @note[short] MacOS (ARM): 0x30bbd4
     * @note[short] MacOS (Intel): 0x383f40
     * @note[short] Windows: 0x183340
     * @note[short] iOS: 0x318efc
     * @note[short] Android
     */
    void setUGV(char const* key, bool value);

    /**
     * @note[short] MacOS (ARM): 0x203598
     * @note[short] MacOS (Intel): 0x25f5b0
     * @note[short] Windows: 0x1ab7f0
     * @note[short] iOS: 0x34a450
     * @note[short] Android
     */
    void setupGameAnimations();

    /**
     * @note[short] MacOS (ARM): 0x309110
     * @note[short] MacOS (Intel): 0x3813d0
     * @note[short] Windows: 0x182490
     * @note[short] iOS: 0x317888
     * @note[short] Android
     */
    gd::string sheetNameForIcon(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x308000
     * @note[short] MacOS (Intel): 0x380080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void shortenAdTimer(float time);

    /**
     * @note[short] MacOS (ARM): 0x308070
     * @note[short] MacOS (Intel): 0x380100
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldShowInterstitial(int unk1, int unk2, int unk3);

    /**
     * @note[short] MacOS (ARM): 0x308078
     * @note[short] MacOS (Intel): 0x380110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x308124
     * @note[short] MacOS (Intel): 0x3801c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showInterstitialForced();

    /**
     * @note[short] MacOS (ARM): 0x307ff0
     * @note[short] MacOS (Intel): 0x380050
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showMainMenuAd();

    /**
     * @note[short] MacOS (ARM): 0x3003a0
     * @note[short] MacOS (Intel): 0x376d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x311ebc
     * @note[short] Android
     */
    void startUpdate();

    /**
     * @note[short] MacOS (ARM): 0x30c530
     * @note[short] MacOS (Intel): 0x384800
     * @note[short] Windows: 0x183970
     * @note[short] iOS: 0x319440
     * @note[short] Android
     */
    gd::string stringForCustomObject(int customObjectID);

    /**
     * @note[short] MacOS (ARM): 0x30882c
     * @note[short] MacOS (Intel): 0x380860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x317320
     * @note[short] Android
     */
    void subYouTube();

    /**
     * @note[short] MacOS (ARM): 0x30c704
     * @note[short] MacOS (Intel): 0x3849c0
     * @note[short] Windows: 0x183bc0
     * @note[short] iOS: 0x319538
     * @note[short] Android
     */
    void switchCustomObjects(int key1, int key2);

    /**
     * @note[short] MacOS (ARM): 0x313210
     * @note[short] MacOS (Intel): 0x38c380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void switchScreenMode(bool fullscreen, bool borderless, bool fix, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x308a58
     * @note[short] MacOS (Intel): 0x380a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31753c
     * @note[short] Android
     */
    void syncPlatformAchievements();

    /**
     * @note[short] MacOS (ARM): 0x30baf0
     * @note[short] MacOS (Intel): 0x383e80
     * @note[short] Windows: 0x183290
     * @note[short] iOS: 0x318ebc
     * @note[short] Android
     */
    bool toggleGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x308080
     * @note[short] MacOS (Intel): 0x380120
     * @note[short] Android
     */
    void tryCacheAd();

    /**
     * @note[short] MacOS (ARM): 0x30806c
     * @note[short] MacOS (Intel): 0x3800f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowInterstitial(int unk1, int unk2, int unk3);

    /**
     * @note[short] MacOS (ARM): 0x30ae90
     * @note[short] MacOS (Intel): 0x383260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31838c
     * @note[short] Android
     */
    void unloadBackground();

    /**
     * @note[short] MacOS (ARM): 0x30a158
     * @note[short] MacOS (Intel): 0x382530
     * @note[short] Windows: 0x182070
     * @note[short] iOS: 0x317d1c
     * @note[short] Android
     */
    void unloadIcon(int id, int type, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x30a8ac
     * @note[short] MacOS (Intel): 0x382c80
     * @note[short] Windows: 0x182330
     * @note[short] iOS: 0x318024
     * @note[short] Android
     */
    void unloadIcons(int requestID);

    /**
     * @note[short] MacOS (ARM): 0x301984
     * @note[short] MacOS (Intel): 0x378660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312efc
     * @note[short] Android
     */
    void unlockColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x307af4
     * @note[short] MacOS (Intel): 0x37fb30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockedPremium();

    /**
     * @note[short] MacOS (ARM): 0x301560
     * @note[short] MacOS (Intel): 0x378230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312c28
     * @note[short] Android
     */
    void unlockIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x30153c
     * @note[short] MacOS (Intel): 0x378210
     * @note[short] Windows: 0x17c700
     * @note[short] iOS: 0x312c04
     * @note[short] Android
     */
    IconType unlockTypeToIconType(int type);

    /**
     * @note[short] MacOS (ARM): 0x313840
     * @note[short] MacOS (Intel): 0x38c9d0
     * @note[short] Windows: 0x18ac40
     * @note[short] iOS: 0x31dd80
     * @note[short] Android
     */
    void updateCustomFPS();

    /**
     * @note[short] MacOS (ARM): 0x3086b4
     * @note[short] MacOS (Intel): 0x380700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3171b0
     * @note[short] Android
     */
    void updateMusic();

    /**
     * @note[short] MacOS (ARM): 0x303458
     * @note[short] MacOS (Intel): 0x37a080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x313d94
     * @note[short] Android
     */
    void verifyAchievementUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x303664
     * @note[short] MacOS (Intel): 0x37a2a0
     * @note[short] Windows: 0x17e5a0
     * @note[short] iOS: 0x313efc
     * @note[short] Android
     */
    void verifyCoinUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x303604
     * @note[short] MacOS (Intel): 0x37a240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x313ea4
     * @note[short] Android
     */
    void verifyStarUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x30777c
     * @note[short] MacOS (Intel): 0x37f760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void verifySyncedCoins();

    /**
     * @note[short] MacOS (ARM): 0x308170
     * @note[short] MacOS (Intel): 0x380220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void videoAdHidden();

    /**
     * @note[short] MacOS (ARM): 0x30812c
     * @note[short] MacOS (Intel): 0x3801d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void videoAdShowed();
    cocos2d::CCDictionary* m_mainFramesForAnimation;
    cocos2d::CCDictionary* m_detailFramesForAnimation;
    cocos2d::CCDictionary* m_frameTimeForAnimation;
    cocos2d::CCDictionary* m_framesForAnimation;
    cocos2d::CCDictionary* m_defaultFrames;
    bool m_switchModes;
    bool m_toFullscreen;
    bool m_reloading;
    bool m_fix;
    bool m_reloadTextures;
    bool m_unkBool2;
    bool m_vsyncEnabled;
    cocos2d::CCDictionary* m_valueKeeper;
    cocos2d::CCDictionary* m_unlockValueKeeper;
    cocos2d::CCDictionary* m_customObjectDict;
    double m_adTimer;
    double m_adCache;
    bool m_unkBool3;
    int m_unkSize4_1;
    double m_unkDouble2;
    int m_unkSize4_2;
    int m_unkSize4_3;
    bool m_loaded;
    bool m_googlePlaySignedIn;
    gd::string m_editorClipboard;
    int m_copiedObjectCount;
    PlayLayer* m_playLayer;
    LevelEditorLayer* m_levelEditorLayer;
    GJBaseGameLayer* m_gameLayer;
    LevelSelectLayer* m_levelSelectLayer;
    MenuLayer* m_menuLayer;
    bool m_inMenuLayer;
    void* m_premiumPopup;
    bool m_firstSetup;
    bool m_showedMenu;
    bool m_unknownBool4;
    bool m_unknownBool5;
    gd::string m_playerUDID;
    gd::string m_playerName;
    bool m_scoreValid;
    geode::SeedValueRSV m_playerUserID;
    float m_bgVolume;
    float m_sfxVolume;
    float m_timeOffset;
    bool m_ratedGame;
    bool m_clickedFacebook;
    bool m_clickedTwitter;
    bool m_clickedYouTube;
    bool m_clickedTwitch;
    bool m_clickedDiscord;
    bool m_clickedReddit;
    double m_socialsDuration;
    bool m_musicPaused;
    bool m_isParticleObject;
    bool m_editorEnabled;
    int m_sceneEnum;
    bool m_searchObjectBool;
    geode::SeedValueRSV m_playerFrame;
    geode::SeedValueRSV m_playerShip;
    geode::SeedValueRSV m_playerBall;
    geode::SeedValueRSV m_playerBird;
    geode::SeedValueRSV m_playerDart;
    geode::SeedValueRSV m_playerRobot;
    geode::SeedValueRSV m_playerSpider;
    geode::SeedValueRSV m_playerSwing;
    geode::SeedValueRSV m_playerColor;
    geode::SeedValueRSV m_playerColor2;
    geode::SeedValueRSV m_playerGlowColor;
    geode::SeedValueRSV m_playerStreak;
    geode::SeedValueRSV m_playerShipFire;
    geode::SeedValueRSV m_playerDeathEffect;
    geode::SeedValueRSV m_playerJetpack;
    geode::SeedValueRS m_chk;
    geode::SeedValueSR m_secretNumber;
    bool m_playerGlow;
    IconType m_playerIconType;
    bool m_everyPlaySetup;
    bool m_showSongMarkers;
    bool m_showBPMMarkers;
    bool m_recordGameplay;
    bool m_showProgressBar;
    bool m_performanceMode;
    bool m_addGlow;
    bool m_clickedGarage;
    bool m_clickedEditor;
    bool m_clickedName;
    bool m_clickedPractice;
    bool m_showedEditorGuide;
    bool m_showedRateDiffDialog;
    bool m_showedRateStarDialog;
    bool m_showedLowDetailDialog;
    GameRateDelegate* m_gameRateDelegate1;
    GameRateDelegate* m_gameRateDelegate2;
    cocos2d::ccColor3B m_copiedColor;
    int m_currentLevelID;
    int m_currentColorChannel;
    int m_currentGroupID;
    int m_loadedBgID;
    int m_loadedGroundID;
    int m_loadedMG;
    int m_loadedFont;
    int m_loadedDeathEffect;
    bool m_loadingBG;
    bool m_loadingG;
    bool m_loadingG1;
    bool m_finishedLoadingG1;
    bool m_finishedLoadingG2;
    bool m_finishedLoadingMG1;
    bool m_finishedLoadingMG2;
    int m_sessionAttempts;
    int m_sessionAttempts2;
    int m_sessionNormalAttempts;
    int m_bootups;
    bool m_hasRatedGame;
    bool m_unkBool6;
    bool m_shouldLoadUnlockValueKeeper;
    bool m_unkBool7;
    bool m_unkBool8;
    geode::SeedValueRSV m_hasRP;
    bool m_hasDRP;
    bool m_canGetLevelSaveData;
    int m_resolution;
    int m_texQuality;
    bool m_somethingInMenuLayer;
    DailyLevelPage* m_dailyLevelPage;
    bool m_ropeGarageEnter;
    int m_currentGauntlet;
    int m_unkSize4_13;
    bool m_unkBool10;
    int m_unkSize4_14;
    bool m_disableThumbstick;
    float m_customFPSTarget;
    bool m_loadingLevel;
    int m_customMenuSongID;
    int m_customPracticeSongID;
    gd::map<int, int> m_iconLoadCounts;
    gd::map<int, gd::map<int, int>> m_iconRequests;
    gd::map<int, bool> m_isIconBeingLoaded;
    gd::vector<int> m_keyStartForIcon;
    gd::map<int, gd::vector<cocos2d::CCObject*>> m_iconDelegates;
    int m_iconRequestID;
    cocos2d::CCArray* m_gjLog;
    RewardedVideoDelegate* m_rewardedVideoDelegate;
    SearchType m_localSearchType;
    SearchType m_savedSearchType;
    int m_levelSearchType;
    UIButtonConfig m_dpad1;
    UIButtonConfig m_dpad2;
    UIButtonConfig m_dpad3;
    UIButtonConfig m_dpad4;
    UIButtonConfig m_dpad5;
    gd::string m_dpadLayout1;
    gd::string m_dpadLayout2;
    gd::string m_dpadLayout3;
    gd::string m_dpadLayoutDual1;
    gd::string m_dpadLayoutDual2;
    gd::string m_dpadLayoutDual3;
    int m_leaderboardLevelID;
    int m_leaderboardLevelTime;
    int m_leaderboardLevelPoints;
    bool m_shouldResetShader;
    cocos2d::CCPoint m_practicePos;
    float m_practiceOpacity;
    int m_unk664;
};
