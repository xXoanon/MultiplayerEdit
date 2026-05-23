#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DynamicBitset.hpp"
#include "SavedActiveObjectState.hpp"
#include "SavedObjectStateRef.hpp"
#include "SavedSpecialObjectState.hpp"
#include "GJBaseGameLayer.hpp"
#include "CCCircleWaveDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"
#include "DialogDelegate.hpp"

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] MacOS (ARM): 0xac6d8
     * @note[short] MacOS (Intel): 0xbfd90
     * @note[short] Windows: 0x3a4da0
     * @note[short] iOS: 0x122ff4
     * @note[short] Android: Rebinded
     */
     PlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x9abb8
     * @note[short] MacOS (Intel): 0xabd30
     * @note[short] Windows: 0x3a57b0
     * @note[short] iOS: 0x11550c
     * @note[short] Android: Rebinded
     */
     ~PlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x9aeb8
     * @note[short] MacOS (Intel): 0xac140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x115778
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static PlayLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x9ae04
     * @note[short] MacOS (Intel): 0xac0a0
     * @note[short] Windows: 0x3a5a50
     * @note[short] iOS: 0x11570c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): 0xac20c
     * @note[short] MacOS (Intel): 0xbf750
     * @note[short] Windows: 0x3baf90
     * @note[short] iOS: 0x122bd8
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0xac244
     * @note[short] MacOS (Intel): 0xbf780
     * @note[short] Windows: 0x3bafc0
     * @note[short] iOS: 0x122c0c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0xa8434
     * @note[short] MacOS (Intel): 0xbaec0
     * @note[short] Windows: 0x3b4ba0
     * @note[short] iOS: 0x11f64c
     * @note[short] Android
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): 0xa84a0
     * @note[short] MacOS (Intel): 0xbaf20
     * @note[short] Windows: 0x3b4cf0
     * @note[short] iOS: 0x11f720
     * @note[short] Android
     */
    virtual void checkForEnd();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void testTime();

    /**
     * @note[short] MacOS (ARM): 0xa8594
     * @note[short] MacOS (Intel): 0xbb010
     * @note[short] Windows: 0x3b4eb0
     * @note[short] iOS: 0x11f804
     * @note[short] Android
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): 0xa8644
     * @note[short] MacOS (Intel): 0xbb0c0
     * @note[short] Windows: 0x3b4f60
     * @note[short] iOS: 0x11f8b0
     * @note[short] Android
     */
    virtual void updateAttemptTime(float attemptTime);

    /**
     * @note[short] MacOS (ARM): 0xa4b78
     * @note[short] MacOS (Intel): 0xb7010
     * @note[short] Windows: 0x3af3a0
     * @note[short] iOS: 0x11c45c
     * @note[short] Android
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0xa69d8
     * @note[short] MacOS (Intel): 0xb9220
     * @note[short] Windows: 0x3b02e0
     * @note[short] iOS: 0x11df44
     * @note[short] Android
     */
    virtual float opacityForObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa6a9c
     * @note[short] MacOS (Intel): 0xb9300
     * @note[short] Windows: 0x3b1f90
     * @note[short] iOS: 0x11dfb4
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0xa3bf0
     * @note[short] MacOS (Intel): 0xb5f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11b8c0
     * @note[short] Android
     */
    virtual void activateEndTrigger(int targetID, bool reverse, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0xa4024
     * @note[short] MacOS (Intel): 0xb6430
     * @note[short] Windows: 0x3ac2d0
     * @note[short] iOS: 0x11bbe4
     * @note[short] Android: Rebinded
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* object, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0xa7504
     * @note[short] MacOS (Intel): 0xb9df0
     * @note[short] Windows: 0x3b38b0
     * @note[short] iOS: 0x11e93c
     * @note[short] Android
     */
    virtual void toggleGlitter(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xa75d8
     * @note[short] MacOS (Intel): 0xb9ec0
     * @note[short] Windows: 0x3b39d0
     * @note[short] iOS: 0x11e998
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa73fc
     * @note[short] MacOS (Intel): 0xb9d00
     * @note[short] Windows: 0x3b3700
     * @note[short] iOS: 0x11e864
     * @note[short] Android
     */
    virtual void toggleGroundVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xa742c
     * @note[short] MacOS (Intel): 0xb9d30
     * @note[short] Windows: 0x3b3780
     * @note[short] iOS: 0x11e894
     * @note[short] Android
     */
    virtual void toggleMGVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xa743c
     * @note[short] MacOS (Intel): 0xb9d50
     * @note[short] Windows: 0x3b37c0
     * @note[short] iOS: 0x11e8a4
     * @note[short] Android
     */
    virtual void toggleHideAttempts(bool hide);

    /**
     * @note[short] MacOS (ARM): 0xa732c
     * @note[short] MacOS (Intel): 0xb9be0
     * @note[short] Windows: 0x3b35d0
     * @note[short] iOS: 0x11e794
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): 0xa73a0
     * @note[short] MacOS (Intel): 0xb9c60
     * @note[short] Windows: 0x3b3660
     * @note[short] iOS: 0x11e808
     * @note[short] Android
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xa73c0
     * @note[short] MacOS (Intel): 0xb9cb0
     * @note[short] Windows: 0x3b36c0
     * @note[short] iOS: 0x11e828
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0xa3b08
     * @note[short] MacOS (Intel): 0xb5e30
     * @note[short] Windows: 0x3ab9a0
     * @note[short] iOS: 0x11b8a8
     * @note[short] Android
     */
    virtual void updateTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0xa6b00
     * @note[short] MacOS (Intel): 0xb9370
     * @note[short] Windows: 0x3b2050
     * @note[short] iOS: 0x11e020
     * @note[short] Android
     */
    virtual void playGravityEffect(bool flip);

    /**
     * @note[short] MacOS (ARM): 0xa69e0
     * @note[short] MacOS (Intel): 0xb9230
     * @note[short] Windows: 0x3b02f0
     * @note[short] iOS: 0x11df4c
     * @note[short] Android
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa86b8
     * @note[short] MacOS (Intel): 0xbb130
     * @note[short] Windows: 0x3b4fa0
     * @note[short] iOS: 0x11f920
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa72c8
     * @note[short] MacOS (Intel): 0xb9b60
     * @note[short] Windows: 0x3b2a30
     * @note[short] iOS: 0x11e730
     * @note[short] Android
     */
    virtual void flipArt(bool flip);

    /**
     * @note[short] MacOS (ARM): 0xa6ef4
     * @note[short] MacOS (Intel): 0xb97b0
     * @note[short] Windows: 0x3b2560
     * @note[short] iOS: 0x11e3ac
     * @note[short] Android
     */
    virtual void updateTimeLabel(int seconds, int centiseconds, bool decimals);

    /**
     * @note[short] MacOS (ARM): 0xaab60
     * @note[short] MacOS (Intel): 0xbdf10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1218b4
     * @note[short] Android
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): 0xa70d0
     * @note[short] MacOS (Intel): 0xb9980
     * @note[short] Windows: 0x3b2760
     * @note[short] iOS: 0x11e558
     * @note[short] Android
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): 0xa72e8
     * @note[short] MacOS (Intel): 0xb9ba0
     * @note[short] Windows: 0x3b3550
     * @note[short] iOS: 0x11e750
     * @note[short] Android
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0xaa7e8
     * @note[short] MacOS (Intel): 0xbdb00
     * @note[short] Windows: 0x3b8040
     * @note[short] iOS: 0x1215a0
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0xa723c
     * @note[short] MacOS (Intel): 0xb9b00
     * @note[short] Windows: 0x3b2900
     * @note[short] iOS: 0x11e6c4
     * @note[short] Android
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] MacOS (ARM): 0xa81a0
     * @note[short] MacOS (Intel): 0xbabf0
     * @note[short] Windows: 0x3b4910
     * @note[short] iOS: 0x11f3bc
     * @note[short] Android
     */
    virtual void processCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0xaaf88
     * @note[short] MacOS (Intel): 0xbe350
     * @note[short] Windows: 0x3b8eb0
     * @note[short] iOS: 0x121b78
     * @note[short] Android
     */
    virtual void resetLevel();

    /**
     * @note[short] MacOS (ARM): 0xa8044
     * @note[short] MacOS (Intel): 0xbaa20
     * @note[short] Windows: 0x3b4730
     * @note[short] iOS: 0x11f260
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xa80d4
     * @note[short] MacOS (Intel): 0xbaae0
     * @note[short] Windows: 0x3b48f0
     * @note[short] iOS: 0x11f2f0
     * @note[short] Android
     */
    virtual void circleWaveWillBeRemoved(CCCircleWave* circleWave);

    /**
     * @note[short] MacOS (ARM): 0xa8088
     * @note[short] MacOS (Intel): 0xbaa70
     * @note[short] Windows: 0x3b4750
     * @note[short] iOS: 0x11f2a4
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xa80cc
     * @note[short] MacOS (Intel): 0xbaac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11f2e8
     * @note[short] Android
     */
    void addCircle(CCCircleWave* cw);

    /**
     * @note[short] MacOS (ARM): 0xa02e0
     * @note[short] MacOS (Intel): 0xb1fa0
     * @note[short] Windows: 0x3add70
     * @note[short] iOS: 0x118854
     * @note[short] Android
     */
    void addObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa485c
     * @note[short] MacOS (Intel): 0xb6d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToGroupOld(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa5aa0
     * @note[short] MacOS (Intel): 0xb80e0
     * @note[short] Windows: 0x3b0970
     * @note[short] iOS: 0x11d090
     * @note[short] Android
     */
    void applyCustomEnterEffect(GameObject* object, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0xa623c
     * @note[short] MacOS (Intel): 0xb8a90
     * @note[short] Windows: 0x3b1660
     * @note[short] iOS: 0x11d818
     * @note[short] Android
     */
    void applyEnterEffect(GameObject* object, int enterType, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0xabd84
     * @note[short] MacOS (Intel): 0xbf2a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1227cc
     * @note[short] Android
     */
    bool canPauseGame();

    /**
     * @note[short] MacOS (ARM): 0xaa544
     * @note[short] MacOS (Intel): 0xbd890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CheckpointObject* checkpointWithID(int id);

    /**
     * @note[short] MacOS (ARM): 0xa49a4
     * @note[short] MacOS (Intel): 0xb6e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorObject(int id, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xa2014
     * @note[short] MacOS (Intel): 0xb4100
     * @note[short] Windows: 0x3b9de0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void commitJumps();

    /**
     * @note[short] MacOS (ARM): 0xaab68
     * @note[short] MacOS (Intel): 0xbdf30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void compareStateSnapshot();

    /**
     * @note[short] MacOS (ARM): 0xa86d0
     * @note[short] MacOS (Intel): 0xbb150
     * @note[short] Windows: 0x3b4fc0
     * @note[short] iOS: 0x11f938
     * @note[short] Android
     */
    CheckpointObject* createCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa4550
     * @note[short] MacOS (Intel): 0xb69f0
     * @note[short] Windows: 0x3ad8d0
     * @note[short] iOS: 0x11c090
     * @note[short] Android
     */
    void createObjectsFromSetupFinished();

    /**
     * @note[short] MacOS (ARM): 0xaab6c
     * @note[short] MacOS (Intel): 0xbdf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1218b8
     * @note[short] Android
     */
    void delayedFullReset();

    /**
     * @note[short] MacOS (ARM): 0xa8024
     * @note[short] MacOS (Intel): 0xbaa00
     * @note[short] Windows: 0x3b8cf0
     * @note[short] iOS: 0x11f240
     * @note[short] Android
     */
    void delayedResetLevel();

    /**
     * @note[short] MacOS (ARM): 0xaabe0
     * @note[short] MacOS (Intel): 0xbdfa0
     * @note[short] Windows: 0x3b8bf0
     * @note[short] iOS: 0x12192c
     * @note[short] Android
     */
    void fullReset();

    /**
     * @note[short] MacOS (ARM): 0xa6e80
     * @note[short] MacOS (Intel): 0xb9740
     * @note[short] Windows: 0x3b3950
     * @note[short] iOS: 0x11e338
     * @note[short] Android
     */
    float getCurrentPercent();

    /**
     * @note[short] MacOS (ARM): 0xa7560
     * @note[short] MacOS (Intel): 0xb9e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getCurrentPercentInt();

    /**
     * @note[short] MacOS (ARM): 0xa1448
     * @note[short] MacOS (Intel): 0xb3370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1198ec
     * @note[short] Android
     */
    cocos2d::CCPoint getEndPosition();

    /**
     * @note[short] MacOS (ARM): 0xa9854
     * @note[short] MacOS (Intel): 0xbc950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x120744
     * @note[short] Android
     */
    CheckpointObject* getLastCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa6a48
     * @note[short] MacOS (Intel): 0xb9290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getRelativeMod(cocos2d::CCPoint position, float right, float left, float offset);

    /**
     * @note[short] MacOS (ARM): 0xa57d4
     * @note[short] MacOS (Intel): 0xb7e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getRelativeModNew(cocos2d::CCPoint position, float mod, float offset, bool unused, bool isRight);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double getTempMilliTime();

    /**
     * @note[short] MacOS (ARM): 0xa6e68
     * @note[short] MacOS (Intel): 0xb9720
     * @note[short] Windows: 0x3b23a0
     * @note[short] iOS: 0x11e320
     * @note[short] Android
     */
    void gravityEffectFinished();

    /**
     * @note[short] MacOS (ARM): 0xabd0c
     * @note[short] MacOS (Intel): 0xbf230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x122754
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x9af50
     * @note[short] MacOS (Intel): 0xac1b0
     * @note[short] Windows: 0x3a5b00
     * @note[short] iOS: 0x115800
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): 0xac1d8
     * @note[short] MacOS (Intel): 0xbf720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x122ba4
     * @note[short] Android
     */
    bool isGameplayActive();

    /**
     * @note[short] MacOS (ARM): 0xa14ac
     * @note[short] MacOS (Intel): 0xb33c0
     * @note[short] Windows: 0x3a7a80
     * @note[short] iOS: 0x119948
     * @note[short] Android
     */
    void levelComplete();

    /**
     * @note[short] MacOS (ARM): 0xaa700
     * @note[short] MacOS (Intel): 0xbda50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x121518
     * @note[short] Android: Rebinded
     */
    void loadActiveSaveObjects(gd::vector<SavedActiveObjectState>& activeObjects, gd::vector<SavedSpecialObjectState>& specialObjects);

    /**
     * @note[short] MacOS (ARM): 0x9ff78
     * @note[short] MacOS (Intel): 0xb1bf0
     * @note[short] Windows: 0x3b1c50
     * @note[short] iOS: 0x118660
     * @note[short] Android
     */
    void loadDefaultColors();

    /**
     * @note[short] MacOS (ARM): 0xaa5c0
     * @note[short] MacOS (Intel): 0xbd900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1213d8
     * @note[short] Android: Rebinded
     */
    void loadDynamicSaveObjects(gd::vector<SavedObjectStateRef>& dynamicObjects);

    /**
     * @note[short] MacOS (ARM): 0xaa038
     * @note[short] MacOS (Intel): 0xbd320
     * @note[short] Windows: 0x3b7640
     * @note[short] iOS: 0x120fc8
     * @note[short] Android
     */
    void loadFromCheckpoint(CheckpointObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa9fe0
     * @note[short] MacOS (Intel): 0xbd2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x120f7c
     * @note[short] Android
     */
    CheckpointObject* loadLastCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa8374
     * @note[short] MacOS (Intel): 0xbae00
     * @note[short] Windows: 0x3b7570
     * @note[short] iOS: 0x11f590
     * @note[short] Android
     */
    CheckpointObject* markCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa0fdc
     * @note[short] MacOS (Intel): 0xb2f30
     * @note[short] Windows: 0x3babb0
     * @note[short] iOS: 0x119520
     * @note[short] Android
     */
    void onQuit();

    /**
     * @note[short] MacOS (ARM): 0x9d474
     * @note[short] MacOS (Intel): 0xaea80
     * @note[short] Windows: 0x3aebd0
     * @note[short] iOS: 0x11742c
     * @note[short] Android
     */
    void optimizeColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x9d6c4
     * @note[short] MacOS (Intel): 0xaec70
     * @note[short] Windows: 0x3aee60
     * @note[short] iOS: 0x11758c
     * @note[short] Android
     */
    void optimizeOpacityGroups();

    /**
     * @note[short] MacOS (ARM): 0xabda8
     * @note[short] MacOS (Intel): 0xbf2c0
     * @note[short] Windows: 0x3ba0e0
     * @note[short] iOS: 0x1227f0
     * @note[short] Android
     */
    void pauseGame(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0xa3bf4
     * @note[short] MacOS (Intel): 0xb5f50
     * @note[short] Windows: 0x3aba00
     * @note[short] iOS: 0x11b8c4
     * @note[short] Android
     */
    void playEndAnimationToPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xa4114
     * @note[short] MacOS (Intel): 0xb6520
     * @note[short] Windows: 0x3ac3e0
     * @note[short] iOS: 0x11bcd4
     * @note[short] Android
     */
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint position, bool instant);

    /**
     * @note[short] MacOS (ARM): 0xabc10
     * @note[short] MacOS (Intel): 0xbf120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void playReplay(gd::string inputs);

    /**
     * @note[short] MacOS (ARM): 0x9bba4
     * @note[short] MacOS (Intel): 0xacec0
     * @note[short] Windows: 0x3ace40
     * @note[short] iOS: 0x116108
     * @note[short] Android: Rebinded
     */
    void prepareCreateObjectsFromSetup(gd::string& levelString);

    /**
     * @note[short] MacOS (ARM): 0xa0e58
     * @note[short] MacOS (Intel): 0xb2db0
     * @note[short] Windows: 0x3ba8e0
     * @note[short] iOS: 0x1193b0
     * @note[short] Android
     */
    void prepareMusic(bool dontWait);

    /**
     * @note[short] MacOS (ARM): 0x9c028
     * @note[short] MacOS (Intel): 0xad2f0
     * @note[short] Windows: 0x3ad0f0
     * @note[short] iOS: 0x1163a0
     * @note[short] Android
     */
    void processCreateObjectsFromSetup();

    /**
     * @note[short] MacOS (ARM): 0xa49d0
     * @note[short] MacOS (Intel): 0xb6e80
     * @note[short] Windows: 0x3af1d0
     * @note[short] iOS: 0x11c310
     * @note[short] Android
     */
    void processLoadedMoveActions();

    /**
     * @note[short] MacOS (ARM): 0xa9fd0
     * @note[short] MacOS (Intel): 0xbd2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x120f6c
     * @note[short] Android
     */
    void queueCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa1144
     * @note[short] MacOS (Intel): 0xb3070
     * @note[short] Windows: 0x3badb0
     * @note[short] iOS: 0x11964c
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS (ARM): 0xa9eec
     * @note[short] MacOS (Intel): 0xbd1d0
     * @note[short] Windows: 0x3b7f00
     * @note[short] iOS: 0x120e88
     * @note[short] Android
     */
    void removeCheckpoint(bool first);

    /**
     * @note[short] MacOS (ARM): 0xa4938
     * @note[short] MacOS (Intel): 0xb6df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeFromGroupOld(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xaaef8
     * @note[short] MacOS (Intel): 0xbe2c0
     * @note[short] Windows: 0x3b8d10
     * @note[short] iOS: 0x121ae8
     * @note[short] Android
     */
    void resetLevelFromStart();

    /**
     * @note[short] MacOS (ARM): 0xac094
     * @note[short] MacOS (Intel): 0xbf5c0
     * @note[short] Windows: 0x3ba640
     * @note[short] iOS: 0x122a64
     * @note[short] Android
     */
    void resume();

    /**
     * @note[short] MacOS (ARM): 0xabee0
     * @note[short] MacOS (Intel): 0xbf410
     * @note[short] Windows: 0x3ba3c0
     * @note[short] iOS: 0x122924
     * @note[short] Android
     */
    void resumeAndRestart(bool fromStart);

    /**
     * @note[short] MacOS (ARM): 0xa9ab0
     * @note[short] MacOS (Intel): 0xbcc40
     * @note[short] Windows: 0x3b89f0
     * @note[short] iOS: 0x120ae8
     * @note[short] Android: Rebinded
     */
    void saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& activeObjects, gd::vector<SavedSpecialObjectState>& specialObjects);

    /**
     * @note[short] MacOS (ARM): 0xa98d8
     * @note[short] MacOS (Intel): 0xbc9e0
     * @note[short] Windows: 0x3b86e0
     * @note[short] iOS: 0x1208b8
     * @note[short] Android: Rebinded
     */
    void saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& dynamicObjects);

    /**
     * @note[short] MacOS (ARM): 0x9e1d8
     * @note[short] MacOS (Intel): 0xaf7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x117a74
     * @note[short] Android
     */
    void scanActiveSaveObjects();

    /**
     * @note[short] MacOS (ARM): 0x9d914
     * @note[short] MacOS (Intel): 0xaee60
     * @note[short] Windows: 0x3b8090
     * @note[short] iOS: 0x1176ec
     * @note[short] Android
     */
    void scanDynamicSaveObjects();

    /**
     * @note[short] MacOS (ARM): 0xa67b8
     * @note[short] MacOS (Intel): 0xb8fd0
     * @note[short] Windows: 0x3b0750
     * @note[short] iOS: 0x11dd38
     * @note[short] Android
     */
    void screenFlipObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9c828
     * @note[short] MacOS (Intel): 0xadd40
     * @note[short] Windows: 0x3a66d0
     * @note[short] iOS: 0x1168c4
     * @note[short] Android
     */
    void setupHasCompleted();

    /**
     * @note[short] MacOS (ARM): 0xa4548
     * @note[short] MacOS (Intel): 0xb69d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11bf9c
     * @note[short] Android
     */
    bool shouldBlend(int colorID);

    /**
     * @note[short] MacOS (ARM): 0xa1248
     * @note[short] MacOS (Intel): 0xb3190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xa211c
     * @note[short] MacOS (Intel): 0xb4230
     * @note[short] Windows: 0x3a8f30
     * @note[short] iOS: 0x11a360
     * @note[short] Android
     */
    void showCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0xa24cc
     * @note[short] MacOS (Intel): 0xb4680
     * @note[short] Windows: 0x3a8900
     * @note[short] iOS: 0x11a6ac
     * @note[short] Android
     */
    void showCompleteText();

    /**
     * @note[short] MacOS (ARM): 0xa2fd4
     * @note[short] MacOS (Intel): 0xb5260
     * @note[short] Windows: 0x3ac700
     * @note[short] iOS: 0x11addc
     * @note[short] Android
     */
    void showEndLayer();

    /**
     * @note[short] MacOS (ARM): 0xa7eb4
     * @note[short] MacOS (Intel): 0xba890
     * @note[short] Windows: 0x3b4770
     * @note[short] iOS: 0x11f0d8
     * @note[short] Android
     */
    void showHint();

    /**
     * @note[short] MacOS (ARM): 0xa3050
     * @note[short] MacOS (Intel): 0xb52d0
     * @note[short] Windows: 0x3a9550
     * @note[short] iOS: 0x11ae58
     * @note[short] Android
     */
    void showNewBest(bool newReward, int orbs, int diamonds, bool demonKey, bool noRetry, bool noTitle);

    /**
     * @note[short] MacOS (ARM): 0xa44d0
     * @note[short] MacOS (Intel): 0xb6960
     * @note[short] Windows: 0x3ac900
     * @note[short] iOS: 0x11bf24
     * @note[short] Android
     */
    void showRetryLayer();

    /**
     * @note[short] MacOS (ARM): 0x9fa0c
     * @note[short] MacOS (Intel): 0xb16b0
     * @note[short] Windows: 0x3acaa0
     * @note[short] iOS: 0x1181dc
     * @note[short] Android
     */
    void showTwoPlayerGuide();

    /**
     * @note[short] MacOS (ARM): 0xa2048
     * @note[short] MacOS (Intel): 0xb4140
     * @note[short] Windows: 0x3abf00
     * @note[short] iOS: 0x11a2b8
     * @note[short] Android
     */
    void spawnCircle();

    /**
     * @note[short] MacOS (ARM): 0xa2dcc
     * @note[short] MacOS (Intel): 0xb5010
     * @note[short] Windows: 0x3abff0
     * @note[short] iOS: 0x11abd4
     * @note[short] Android
     */
    void spawnFirework();

    /**
     * @note[short] MacOS (ARM): 0xa0f80
     * @note[short] MacOS (Intel): 0xb2ed0
     * @note[short] Windows: 0x3a7a20
     * @note[short] iOS: 0x1194c4
     * @note[short] Android
     */
    void startGame();

    /**
     * @note[short] MacOS (ARM): 0xa1438
     * @note[short] MacOS (Intel): 0xb3350
     * @note[short] Windows: 0x3a7a70
     * @note[short] iOS: 0x1198dc
     * @note[short] Android
     */
    void startGameDelayed();

    /**
     * @note[short] MacOS (ARM): 0xa1340
     * @note[short] MacOS (Intel): 0xb3250
     * @note[short] Windows: 0x3baa60
     * @note[short] iOS: 0x119804
     * @note[short] Android
     */
    void startMusic();

    /**
     * @note[short] MacOS (ARM): 0xabc8c
     * @note[short] MacOS (Intel): 0xbf1b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void startRecording();

    /**
     * @note[short] MacOS (ARM): 0xabc98
     * @note[short] MacOS (Intel): 0xbf1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void startRecordingDelayed();

    /**
     * @note[short] MacOS (ARM): 0x9b918
     * @note[short] MacOS (Intel): 0xacc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x115fe8
     * @note[short] Android
     */
    void stopRecording();

    /**
     * @note[short] MacOS (ARM): 0xa9e48
     * @note[short] MacOS (Intel): 0xbd130
     * @note[short] Windows: 0x3b74a0
     * @note[short] iOS: 0x120e28
     * @note[short] Android
     */
    void storeCheckpoint(CheckpointObject* checkpoint);

    /**
     * @note[short] MacOS (ARM): 0xaab64
     * @note[short] MacOS (Intel): 0xbdf20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void takeStateSnapshot();

    /**
     * @note[short] MacOS (ARM): 0xabc5c
     * @note[short] MacOS (Intel): 0xbf170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x122724
     * @note[short] Android
     */
    void toggleBGEffectVisibility(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0xa128c
     * @note[short] MacOS (Intel): 0xb31c0
     * @note[short] Windows: 0x3a7900
     * @note[short] iOS: 0x119750
     * @note[short] Android
     */
    void toggleDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xabc14
     * @note[short] MacOS (Intel): 0xbf130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1226dc
     * @note[short] Android
     */
    void toggleGhostEffect(int type);

    /**
     * @note[short] MacOS (ARM): 0x9baac
     * @note[short] MacOS (Intel): 0xace00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1160e4
     * @note[short] Android
     */
    void toggleIgnoreDamage(bool value);

    /**
     * @note[short] MacOS (ARM): 0xaad2c
     * @note[short] MacOS (Intel): 0xbe100
     * @note[short] Windows: 0x3b9e50
     * @note[short] iOS: 0x121a00
     * @note[short] Android
     */
    void togglePracticeMode(bool practiceMode);

    /**
     * @note[short] MacOS (ARM): 0xabbe4
     * @note[short] MacOS (Intel): 0xbf0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryStartRecord();

    /**
     * @note[short] MacOS (ARM): 0xaba48
     * @note[short] MacOS (Intel): 0xbef60
     * @note[short] Windows: 0x3b9ba0
     * @note[short] iOS: 0x122540
     * @note[short] Android
     */
    void updateAttempts();

    /**
     * @note[short] MacOS (ARM): 0x9b9c0
     * @note[short] MacOS (Intel): 0xacd20
     * @note[short] Windows: 0x3a7800
     * @note[short] iOS: 0x116084
     * @note[short] Android
     */
    void updateDebugDrawSettings();

    /**
     * @note[short] MacOS (ARM): 0xa80ec
     * @note[short] MacOS (Intel): 0xbab20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11f308
     * @note[short] Android
     */
    void updateEffectPositions();

    /**
     * @note[short] MacOS (ARM): 0x9e3f4
     * @note[short] MacOS (Intel): 0xafac0
     * @note[short] Windows: 0x3b2a60
     * @note[short] iOS: 0x117b58
     * @note[short] Android
     */
    void updateInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0xa5820
     * @note[short] MacOS (Intel): 0xb7e80
     * @note[short] Windows: 0x3b03b0
     * @note[short] iOS: 0x11ce40
     * @note[short] Android
     */
    void updateInvisibleBlock(GameObject* object, float rightFadeBound, float leftFadeBound, float rightFadeWidth, float leftFadeWidth, cocos2d::ccColor3B const& lbgColor);

    /**
     * @note[short] MacOS (ARM): 0x9fdbc
     * @note[short] MacOS (Intel): 0xb1a40
     * @note[short] Windows: 0x3b23c0
     * @note[short] iOS: 0x1184ec
     * @note[short] Android
     */
    void updateProgressbar();

    /**
     * @note[short] MacOS (ARM): 0xa3b20
     * @note[short] MacOS (Intel): 0xb5e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateScreenRotation(int rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xa1068
     * @note[short] MacOS (Intel): 0xb2fe0
     * @note[short] Windows: 0x3a7990
     * @note[short] iOS: 0x1195ac
     * @note[short] Android
     */
    void updateTestModeLabel();
    int m_unk36c8;
    bool m_unk36cc;
    bool m_unk36cd;
    bool m_unk36ce;
    bool m_unk36cf;
    bool m_damageVerified;
    gd::vector<gd::string> m_objectStrings;
    cocos2d::CCArray* m_coinArray;
    bool m_passedIntegrity;
    int m_objectsCreated;
    gd::vector<GameObject*> m_dynamicSaveObjects;
    gd::vector<GameObject*> m_activeSaveObjects1;
    gd::vector<GameObject*> m_activeSaveObjects2;
    gd::vector<SavedObjectStateRef> m_dynamicSaveObjects2;
    int m_unk3768;
    bool m_platformerRestart;
    bool m_unk376d;
    bool m_isIgnoreDamageEnabled;
    cocos2d::CCLabelBMFont* m_statusLabel;
    float m_unk3778;
    int m_unk377c;
    float m_unk3780;
    float m_unk3784;
    int m_unk3788;
    int m_unk378c;
    bool m_endChecked;
    float m_endXPosition;
    CheckpointObject* m_currentCheckpoint;
    cocos2d::CCArray* m_checkpointArray;
    cocos2d::CCArray* m_speedObjects;
    bool m_unk37b0;
    bool m_unk37b1;
    cocos2d::CCPoint m_enterEffectPosition;
    cocos2d::CCArray* m_unk37c0;
    bool m_isSilent;
    int m_unk37cc;
    cocos2d::CCArray* m_circleWaveArray;
    cocos2d::CCArray* m_collectibles;
    bool m_unk37e0;
    int m_pulseRodIndex;
    float m_maxObjectX;
    cocos2d::CCLabelBMFont* m_attemptLabel;
    cocos2d::CCLabelBMFont* m_percentageLabel;
    bool m_decimalPercentage;
    bool m_hintShown;
    cocos2d::CCSprite* m_progressBar;
    cocos2d::CCSprite* m_progressFill;
    float m_progressWidth;
    float m_progressHeight;
    int m_totalGravityEffects;
    int m_activeGravityEffects;
    int m_gravityEffectIndex;
    cocos2d::CCArray* m_gravityEffects;
    bool m_doNot;
    float m_unk383c;
    bool m_skipAudioStep;
    gd::unordered_set<int> m_blendingColors;
    int m_jumps;
    bool m_hasJumped;
    int m_uncommittedJumps;
    bool m_showLeaderboardPercentage;
    bool m_hasCompletedLevel;
    bool m_inResetDelay;
    int m_lastAttemptPercent;
    bool m_endLayerStars;
    int m_orbs;
    int m_diamonds;
    bool m_secretKey;
    bool m_recordingStopped;
    double m_unk38b0;
    double m_unk38b8;
    double m_unk38c0;
    bool m_unk38c8;
    float m_unk38cc;
    int m_unk38d0;
    double m_attemptTime;
    double m_bestAttemptTime;
    double m_pauseTime;
    double m_currentTime;
    double m_pauseDelta;
    float m_unk3900;
    bool m_glitterEnabled;
    bool m_bgEffectDisabled;
    bool m_unk3906;
    bool m_isPaused;
    bool m_disableGravityEffect;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCPoint m_unk3918;
    cocos2d::CCPoint m_unk3920;
    cocos2d::CCDictionary* m_colorKeyDict;
    gd::vector<cocos2d::ccColor3B> m_keyColors;
    gd::vector<float> m_keyOpacities;
    DynamicBitset m_keyPulses;
    int m_nextColorKey;
    bool m_tryPlaceCheckpoint;
    CheckpointGameObject* m_activatedCheckpoint;
    bool m_musicPrepared;
    cocos2d::CCPoint m_endPosition;
    EndTriggerGameObject* m_platformerEndTrigger;
};
