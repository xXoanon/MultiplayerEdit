#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "PlayerButtonCommand.hpp"
#include "RecordButtonCommand.hpp"
#include "RecordCheckpoint.hpp"
#include "TriggerEffectDelegate.hpp"

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0xac9f4
     * @note[short] MacOS (Intel): 0xc01e0
     * @note[short] Windows: 0x2cfef0
     * @note[short] iOS: 0x1232b4
     * @note[short] Android: Rebinded
     */
     GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0xea680
     * @note[short] MacOS (Intel): 0x10ea70
     * @note[short] Windows: 0x2057a0
     * @note[short] iOS: 0x1da004
     * @note[short] Android: Rebinded
     */
     ~GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x10d79c
     * @note[short] MacOS (Intel): 0x1383d0
     * @note[short] Windows: 0x22e8b0
     * @note[short] iOS: 0x1ef10c
     * @note[short] Android
     */
    static float convertToClosestDirection(float angle, float bound);

    /**
     * @note[short] MacOS (ARM): 0x11dec0
     * @note[short] MacOS (Intel): 0x14b530
     * @note[short] Windows: 0x232720
     * @note[short] iOS: 0x1fb27c
     * @note[short] Android
     */
    static gd::string gameEventToString(GJGameEvent event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJBaseGameLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x1229e8
     * @note[short] MacOS (Intel): 0x151310
     * @note[short] Windows: 0x237850
     * @note[short] iOS: 0x1fe5c4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0xeb374
     * @note[short] MacOS (Intel): 0x10fb80
     * @note[short] Windows: 0x206f30
     * @note[short] iOS: 0x1da9f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x131340
     * @note[short] MacOS (Intel): 0x163800
     * @note[short] Windows: 0x246ee0
     * @note[short] iOS: 0x2080a4
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
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
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateAttemptTime(float attemptTime);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playerTookDamage(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x1227e8
     * @note[short] MacOS (Intel): 0x1510c0
     * @note[short] Windows: 0x237430
     * @note[short] iOS: 0x1fe3f4
     * @note[short] Android
     */
    virtual float opacityForObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void addToSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1038ec
     * @note[short] MacOS (Intel): 0x12b920
     * @note[short] Windows: 0x219170
     * @note[short] iOS: 0x1eb480
     * @note[short] Android
     */
    virtual void objectsCollided(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x111634
     * @note[short] MacOS (Intel): 0x13c880
     * @note[short] Windows: 0x223970
     * @note[short] iOS: 0x1f1ebc
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0x11179c
     * @note[short] MacOS (Intel): 0x13ca20
     * @note[short] Windows: 0x223b50
     * @note[short] iOS: 0x1f2024
     * @note[short] Android: Rebinded
     */
    virtual void toggleGroupTriggered(int group, bool activate, gd::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x104924
     * @note[short] MacOS (Intel): 0x12caa0
     * @note[short] Windows: 0x21ab80
     * @note[short] iOS: 0x1ec120
     * @note[short] Android: Rebinded
     */
    virtual void spawnGroup(int group, bool ordered, double delay, gd::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x104da8
     * @note[short] MacOS (Intel): 0x12cf20
     * @note[short] Windows: 0x21b030
     * @note[short] iOS: 0x1ec3f8
     * @note[short] Android: Rebinded
     */
    virtual void spawnObject(GameObject* object, double delay, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activateEndTrigger(int targetID, bool reverse, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* object, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleGlitter(bool visible);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void destroyPlayer(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfa7c8
     * @note[short] MacOS (Intel): 0x121920
     * @note[short] Windows: 0x210800
     * @note[short] iOS: 0x1e4758
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x11352c
     * @note[short] MacOS (Intel): 0x13eaa0
     * @note[short] Windows: 0x226500
     * @note[short] iOS: 0x1f3514
     * @note[short] Android
     */
    virtual void addToSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x111cb0
     * @note[short] MacOS (Intel): 0x13cfa0
     * @note[short] Windows: 0x223fd0
     * @note[short] iOS: 0x1f246c
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* object, int groupID, bool triggerGroup);

    /**
     * @note[short] MacOS (ARM): 0x111f0c
     * @note[short] MacOS (Intel): 0x13d1f0
     * @note[short] Windows: 0x224150
     * @note[short] iOS: 0x1f2610
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0x114ad0
     * @note[short] MacOS (Intel): 0x140620
     * @note[short] Windows: 0x227f50
     * @note[short] iOS: 0x1f41b0
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1209ac
     * @note[short] MacOS (Intel): 0x14ea80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fcf10
     * @note[short] Android
     */
    virtual void toggleGroundVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1209b0
     * @note[short] MacOS (Intel): 0x14ea90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fcf14
     * @note[short] Android
     */
    virtual void toggleMGVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1209b4
     * @note[short] MacOS (Intel): 0x14eaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fcf18
     * @note[short] Android
     */
    virtual void toggleHideAttempts(bool hide);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x120af4
     * @note[short] MacOS (Intel): 0x14ec40
     * @note[short] Windows: 0x235e80
     * @note[short] iOS: 0x1fd000
     * @note[short] Android
     */
    virtual void updateScreenRotation(float rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x102950
     * @note[short] MacOS (Intel): 0x12a870
     * @note[short] Windows: 0x218160
     * @note[short] iOS: 0x1ea8b8
     * @note[short] Android
     */
    virtual void reverseDirection(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x102998
     * @note[short] MacOS (Intel): 0x12a8b0
     * @note[short] Windows: 0x2181c0
     * @note[short] iOS: 0x1ea900
     * @note[short] Android
     */
    virtual void rotateGameplay(RotateGameplayGameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0x12110c
     * @note[short] MacOS (Intel): 0x14f380
     * @note[short] Windows: 0x236150
     * @note[short] iOS: 0x1fd44c
     * @note[short] Android
     */
    virtual void updateTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0x121150
     * @note[short] MacOS (Intel): 0x14f3d0
     * @note[short] Windows: 0x2361a0
     * @note[short] iOS: 0x1fd48c
     * @note[short] Android
     */
    virtual void applyTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playGravityEffect(bool flip);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x12cc08
     * @note[short] MacOS (Intel): 0x15ddb0
     * @note[short] Windows: 0x240d80
     * @note[short] iOS: 0x204bb4
     * @note[short] Android: Rebinded
     */
    virtual cocos2d::CCParticleSystemQuad* createCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int minimum, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0x12cf90
     * @note[short] MacOS (Intel): 0x15e120
     * @note[short] Windows: 0x241080
     * @note[short] iOS: 0x204de0
     * @note[short] Android: Rebinded
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0x12d1d0
     * @note[short] MacOS (Intel): 0x15e320
     * @note[short] Windows: 0x241280
     * @note[short] iOS: 0x205020
     * @note[short] Android: Rebinded
     */
    virtual void unclaimCustomParticle(gd::string const& key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x12df0c
     * @note[short] MacOS (Intel): 0x15f260
     * @note[short] Windows: 0x242e30
     * @note[short] iOS: 0x205af4
     * @note[short] Android
     */
    virtual void activatedAudioTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x13109c
     * @note[short] MacOS (Intel): 0x163520
     * @note[short] Windows: 0x246ac0
     * @note[short] iOS: 0x207ea0
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x131098
     * @note[short] MacOS (Intel): 0x163510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x207e9c
     * @note[short] Android
     */
    virtual void flipArt(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x11e06c
     * @note[short] MacOS (Intel): 0x14b720
     * @note[short] Windows: 0x233b80
     * @note[short] iOS: 0x1fb36c
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTimeLabel(int seconds, int centiseconds, bool decimals);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void processCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetLevel();

    /**
     * @note[short] MacOS (ARM): 0x10b030
     * @note[short] MacOS (Intel): 0x135d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1edcc0
     * @note[short] Android
     */
    void activateCustomRing(RingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x12df18
     * @note[short] MacOS (Intel): 0x15f280
     * @note[short] Windows: 0x242e50
     * @note[short] iOS: 0x205b00
     * @note[short] Android
     */
    void activatedAudioTrigger(SFXTriggerGameObject* object, float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x11da7c
     * @note[short] MacOS (Intel): 0x14b050
     * @note[short] Windows: 0x232110
     * @note[short] iOS: 0x1fb020
     * @note[short] Android: Rebinded
     */
    void activateEventTrigger(EventLinkTrigger* object, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x11f16c
     * @note[short] MacOS (Intel): 0x14cc00
     * @note[short] Windows: 0x234630
     * @note[short] iOS: 0x1fbe10
     * @note[short] Android: Rebinded
     */
    void activateItemCompareTrigger(ItemTriggerGameObject* object, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x11eb34
     * @note[short] MacOS (Intel): 0x14c3c0
     * @note[short] Windows: 0x234250
     * @note[short] iOS: 0x1fba70
     * @note[short] Android
     */
    void activateItemEditTrigger(ItemTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10216c
     * @note[short] MacOS (Intel): 0x129fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea504
     * @note[short] Android
     */
    void activateObjectControlTrigger(ObjectControlGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11f6c0
     * @note[short] MacOS (Intel): 0x14d2f0
     * @note[short] Windows: 0x234a40
     * @note[short] iOS: 0x1fc178
     * @note[short] Android
     */
    void activatePersistentItemTrigger(ItemTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x101fb8
     * @note[short] MacOS (Intel): 0x129da0
     * @note[short] Windows: 0x2174e0
     * @note[short] iOS: 0x1ea3a8
     * @note[short] Android
     */
    void activatePlayerControlTrigger(PlayerControlGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11e22c
     * @note[short] MacOS (Intel): 0x14b910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb4ec
     * @note[short] Android
     */
    void activateResetTrigger(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x12a0b0
     * @note[short] MacOS (Intel): 0x15aac0
     * @note[short] Windows: 0x241e50
     * @note[short] iOS: 0x203110
     * @note[short] Android
     */
    void activateSFXEditTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x129db0
     * @note[short] MacOS (Intel): 0x15a740
     * @note[short] Windows: 0x241c50
     * @note[short] iOS: 0x202f94
     * @note[short] Android
     */
    void activateSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x129c2c
     * @note[short] MacOS (Intel): 0x15a590
     * @note[short] Windows: 0x241940
     * @note[short] iOS: 0x202ed0
     * @note[short] Android
     */
    void activateSongEditTrigger(SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x129a28
     * @note[short] MacOS (Intel): 0x15a320
     * @note[short] Windows: 0x2415c0
     * @note[short] iOS: 0x202d88
     * @note[short] Android
     */
    void activateSongTrigger(SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11fa14
     * @note[short] MacOS (Intel): 0x14d6f0
     * @note[short] Windows: 0x234e60
     * @note[short] iOS: 0x1fc390
     * @note[short] Android: Rebinded
     */
    void activateTimerTrigger(TimerTriggerGameObject* object, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x114378
     * @note[short] MacOS (Intel): 0x13fcd0
     * @note[short] Windows: 0x227480
     * @note[short] iOS: 0x1f3d98
     * @note[short] Android: Rebinded
     */
    void addAreaEffect(EnterEffectObject* object, gd::vector<EnterEffectInstance>* instances, GJAreaActionType type);

    /**
     * @note[short] MacOS (ARM): 0xf726c
     * @note[short] MacOS (Intel): 0x11e5c0
     * @note[short] Windows: 0x20e400
     * @note[short] iOS: 0x1e26ac
     * @note[short] Android
     */
    void addCustomEnterEffect(EnterEffectObject* object, bool enter);

    /**
     * @note[short] MacOS (ARM): 0x1301cc
     * @note[short] MacOS (Intel): 0x1624d0
     * @note[short] Windows: 0x245ed0
     * @note[short] iOS: 0x2074f8
     * @note[short] Android
     */
    bool addGuideArt(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11e8c4
     * @note[short] MacOS (Intel): 0x14c120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb970
     * @note[short] Android
     */
    void addObjectCounter(LabelGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11e7fc
     * @note[short] MacOS (Intel): 0x14c010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb8a8
     * @note[short] Android
     */
    void addPickupTrigger(CountTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1268bc
     * @note[short] MacOS (Intel): 0x1564e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2011a0
     * @note[short] Android
     */
    void addPoints(int points);

    /**
     * @note[short] MacOS (ARM): 0x12d578
     * @note[short] MacOS (Intel): 0x15e6e0
     * @note[short] Windows: 0x242430
     * @note[short] iOS: 0x2053a0
     * @note[short] Android
     */
    void addProximityVolumeEffect(int channelID, int targetType, SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf154c
     * @note[short] MacOS (Intel): 0x116a90
     * @note[short] Windows: 0x20dbd0
     * @note[short] iOS: 0x1df978
     * @note[short] Android: Rebinded
     */
    void addRemapTargets(gd::set<int>& targets);

    /**
     * @note[short] MacOS (ARM): 0x1125b0
     * @note[short] MacOS (Intel): 0x13d8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f29f4
     * @note[short] Android
     */
    void addToGroupParents(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x111c3c
     * @note[short] MacOS (Intel): 0x13cf30
     * @note[short] Windows: 0x223f40
     * @note[short] iOS: 0x1f23f8
     * @note[short] Android
     */
    void addToGroups(GameObject* object, bool duplicateTrigger);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void addToObjectsToShow(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x113094
     * @note[short] MacOS (Intel): 0x13e530
     * @note[short] Windows: 0x225f50
     * @note[short] iOS: 0x1f3134
     * @note[short] Android
     */
    void addUIObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfd840
     * @note[short] MacOS (Intel): 0x124d10
     * @note[short] Windows: 0x213370
     * @note[short] iOS: 0x1e6bb8
     * @note[short] Android
     */
    void animateInDualGroundNew(GameObject* object, float height, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xfdf20
     * @note[short] MacOS (Intel): 0x125540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animateInGroundNew(bool unk1, float unk2, bool unk3);

    /**
     * @note[short] MacOS (ARM): 0xfdac8
     * @note[short] MacOS (Intel): 0x125000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e6d88
     * @note[short] Android
     */
    void animateOutGroundNew(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x12b268
     * @note[short] MacOS (Intel): 0x15bff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animatePortalY(float fromY, float toY, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x1288a0
     * @note[short] MacOS (Intel): 0x158db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x201fc0
     * @note[short] Android
     */
    void applyLevelSettings(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x104fa4
     * @note[short] MacOS (Intel): 0x12d0f0
     * @note[short] Windows: 0x21b1c0
     * @note[short] iOS: 0x1ec5c4
     * @note[short] Android: Rebinded
     */
    void applyRemap(EffectGameObject* object, gd::vector<int> const& remapKeys, gd::unordered_map<int, int>& remap);

    /**
     * @note[short] MacOS (ARM): 0x12d45c
     * @note[short] MacOS (Intel): 0x15e5c0
     * @note[short] Windows: 0x242130
     * @note[short] iOS: 0x20529c
     * @note[short] Android
     */
    void applySFXEditTrigger(int channelID, int targetType, SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x12a6b8
     * @note[short] MacOS (Intel): 0x15b150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2034e0
     * @note[short] Android
     */
    void applyShake(cocos2d::CCPoint& point);

    /**
     * @note[short] MacOS (ARM): 0x112c84
     * @note[short] MacOS (Intel): 0x13e060
     * @note[short] Windows: 0x224d40
     * @note[short] iOS: 0x1f2f00
     * @note[short] Android
     */
    void assignNewStickyGroups(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xef434
     * @note[short] MacOS (Intel): 0x1145e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dde44
     * @note[short] Android
     */
    void asyncBGLoaded(int background);

    /**
     * @note[short] MacOS (ARM): 0xef6f4
     * @note[short] MacOS (Intel): 0x1148f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de104
     * @note[short] Android
     */
    void asyncGLoaded(int ground);

    /**
     * @note[short] MacOS (ARM): 0xef988
     * @note[short] MacOS (Intel): 0x114bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de33c
     * @note[short] Android
     */
    void asyncMGLoaded(int middleground);

    /**
     * @note[short] MacOS (ARM): 0xf6e10
     * @note[short] MacOS (Intel): 0x11dff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int atlasValue(int atlas);

    /**
     * @note[short] MacOS (ARM): 0x1004b0
     * @note[short] MacOS (Intel): 0x128130
     * @note[short] Windows: 0x2179d0
     * @note[short] iOS: 0x1e8f8c
     * @note[short] Android
     */
    void bumpPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x126c5c
     * @note[short] MacOS (Intel): 0x156910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int buttonIDToButton(int id);

    /**
     * @note[short] MacOS (ARM): 0x11d85c
     * @note[short] MacOS (Intel): 0x14ae70
     * @note[short] Windows: 0x231e80
     * @note[short] iOS: 0x1faeb4
     * @note[short] Android
     */
    bool buttonIsRelevant(PlayerButtonCommand const& button);

    /**
     * @note[short] MacOS (ARM): 0xf6b08
     * @note[short] MacOS (Intel): 0x11dd40
     * @note[short] Windows: 0x20e0b0
     * @note[short] iOS: 0x1e2298
     * @note[short] Android
     */
    void calculateColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x12af54
     * @note[short] MacOS (Intel): 0x15bc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void cameraMoveX(float value, float duration, float rate, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x12aff0
     * @note[short] MacOS (Intel): 0x15bd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void cameraMoveY(float value, float duration, float rate, bool force);

    /**
     * @note[short] MacOS (ARM): 0x1000cc
     * @note[short] MacOS (Intel): 0x127ce0
     * @note[short] Windows: 0x2178c0
     * @note[short] iOS: 0x1e8d08
     * @note[short] Android
     */
    bool canBeActivatedByPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x12e2f0
     * @note[short] MacOS (Intel): 0x15f770
     * @note[short] Windows: 0x2431a0
     * @note[short] iOS: 0x205f9c
     * @note[short] Android: Rebinded
     */
    bool canProcessSFX(SFXTriggerState& state, gd::unordered_map<int, int>& stateIndices, gd::unordered_map<int, float>& times, gd::vector<SFXTriggerState>& states);

    /**
     * @note[short] MacOS (ARM): 0x10009c
     * @note[short] MacOS (Intel): 0x127cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canTouchObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfa3bc
     * @note[short] MacOS (Intel): 0x1214d0
     * @note[short] Windows: 0x239ba0
     * @note[short] iOS: 0x1e452c
     * @note[short] Android
     */
    void checkCameraLimitAfterTeleport(PlayerObject* player, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x1038bc
     * @note[short] MacOS (Intel): 0x12b8f0
     * @note[short] Windows: 0x219090
     * @note[short] iOS: 0x1eb450
     * @note[short] Android
     */
    bool checkCollision(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x103718
     * @note[short] MacOS (Intel): 0x12b760
     * @note[short] Windows: 0x218ec0
     * @note[short] iOS: 0x1eb2b4
     * @note[short] Android: Rebinded
     */
    void checkCollisionBlocks(EffectGameObject* object, gd::vector<EffectGameObject*>* blocks, int blockCount);

    /**
     * @note[short] MacOS (ARM): 0xfe188
     * @note[short] MacOS (Intel): 0x125800
     * @note[short] Windows: 0x2137f0
     * @note[short] iOS: 0x1e72e8
     * @note[short] Android
     */
    int checkCollisions(PlayerObject* object, float dt, bool ignoreDamage);

    /**
     * @note[short] MacOS (ARM): 0x124648
     * @note[short] MacOS (Intel): 0x153810
     * @note[short] Windows: 0x2398d0
     * @note[short] iOS: 0x1ff64c
     * @note[short] Android
     */
    void checkRepellPlayer();

    /**
     * @note[short] MacOS (ARM): 0x104658
     * @note[short] MacOS (Intel): 0x12c770
     * @note[short] Windows: 0x21a8f0
     * @note[short] iOS: 0x1ebe3c
     * @note[short] Android
     */
    void checkSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0x11a694
     * @note[short] MacOS (Intel): 0x147100
     * @note[short] Windows: 0x22dbe0
     * @note[short] iOS: 0x1f8cc8
     * @note[short] Android
     */
    cocos2d::CCPoint claimMoveAction(int groupID, bool ignoreStaticGroups);

    /**
     * @note[short] MacOS (ARM): 0x12c618
     * @note[short] MacOS (Intel): 0x15d7c0
     * @note[short] Windows: 0x2409d0
     * @note[short] iOS: 0x204864
     * @note[short] Android: Rebinded
     */
    cocos2d::CCParticleSystemQuad* claimParticle(gd::string key, int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x11a52c
     * @note[short] MacOS (Intel): 0x146f90
     * @note[short] Windows: 0x22d9a0
     * @note[short] iOS: 0x1f8bbc
     * @note[short] Android
     */
    void claimRotationAction(int targetID, int centerID, float& rotation, float& offset, bool ignoreStaticGroups, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x12947c
     * @note[short] MacOS (Intel): 0x159c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x202938
     * @note[short] Android
     */
    void clearActivatedAudioTriggers();

    /**
     * @note[short] MacOS (ARM): 0x1019ec
     * @note[short] MacOS (Intel): 0x1297c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearPickedUpItems();

    /**
     * @note[short] MacOS (ARM): 0x11e410
     * @note[short] MacOS (Intel): 0x14bb10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb698
     * @note[short] Android
     */
    void collectedObject(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xff074
     * @note[short] MacOS (Intel): 0x126910
     * @note[short] Windows: 0x214960
     * @note[short] iOS: 0x1e7f38
     * @note[short] Android: Rebinded
     */
    void collisionCheckObjects(PlayerObject* object, gd::vector<GameObject*>* objects, int objectCount, float dt);

    /**
     * @note[short] MacOS (ARM): 0x10b894
     * @note[short] MacOS (Intel): 0x136840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ee104
     * @note[short] Android
     */
    void controlAdvancedFollowCommand(AdvancedFollowTriggerObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10b7c0
     * @note[short] MacOS (Intel): 0x136790
     * @note[short] Windows: 0x2279f0
     * @note[short] iOS: 0x1ee004
     * @note[short] Android: Rebinded
     */
    void controlAreaEffect(EnterEffectObject* object, gd::vector<EnterEffectInstance>* instances, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10c2c0
     * @note[short] MacOS (Intel): 0x137250
     * @note[short] Windows: 0x2277f0
     * @note[short] iOS: 0x1ee5fc
     * @note[short] Android
     */
    void controlAreaEffectWithID(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10dc34
     * @note[short] MacOS (Intel): 0x138960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ef5ac
     * @note[short] Android: Rebinded
     */
    void controlDynamicCommand(EffectGameObject* object, int controlID, gd::vector<DynamicObjectAction>& actions, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10bedc
     * @note[short] MacOS (Intel): 0x136e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void controlDynamicMoveCommand(EffectGameObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10bdb4
     * @note[short] MacOS (Intel): 0x136d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void controlDynamicRotateCommand(EffectGameObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10bb7c
     * @note[short] MacOS (Intel): 0x136af0
     * @note[short] Windows: 0x232380
     * @note[short] iOS: 0x1ee250
     * @note[short] Android
     */
    void controlEventLink(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10bd58
     * @note[short] MacOS (Intel): 0x136ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ee40c
     * @note[short] Android
     */
    void controlGradientTrigger(GradientTriggerObject* object, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10b0e4
     * @note[short] MacOS (Intel): 0x135e20
     * @note[short] Windows: 0x21e190
     * @note[short] iOS: 0x1edd74
     * @note[short] Android
     */
    void controlTriggersInGroup(int group, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10c004
     * @note[short] MacOS (Intel): 0x136f40
     * @note[short] Windows: 0x21e720
     * @note[short] iOS: 0x1ee468
     * @note[short] Android
     */
    void controlTriggersWithControlID(int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x10176c
     * @note[short] MacOS (Intel): 0x129510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e9c08
     * @note[short] Android
     */
    int countCollectedUserCoins();

    /**
     * @note[short] MacOS (ARM): 0xef1e8
     * @note[short] MacOS (Intel): 0x114390
     * @note[short] Windows: 0x20b820
     * @note[short] iOS: 0x1ddbf8
     * @note[short] Android
     */
    void createBackground(int background);

    /**
     * @note[short] MacOS (ARM): 0xef71c
     * @note[short] MacOS (Intel): 0x114910
     * @note[short] Windows: 0x20bc60
     * @note[short] iOS: 0x1de12c
     * @note[short] Android
     */
    void createGroundLayer(int ground, int line);

    /**
     * @note[short] MacOS (ARM): 0xef900
     * @note[short] MacOS (Intel): 0x114b20
     * @note[short] Windows: 0x20bae0
     * @note[short] iOS: 0x1de2b4
     * @note[short] Android
     */
    void createMiddleground(int middleground);

    /**
     * @note[short] MacOS (ARM): 0x11e018
     * @note[short] MacOS (Intel): 0x14b6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb318
     * @note[short] Android
     */
    cocos2d::CCArray* createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x12c140
     * @note[short] MacOS (Intel): 0x15d2d0
     * @note[short] Windows: 0x2405f0
     * @note[short] iOS: 0x204598
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0xeeea0
     * @note[short] MacOS (Intel): 0x114030
     * @note[short] Windows: 0x20b310
     * @note[short] iOS: 0x1dd8b0
     * @note[short] Android
     */
    void createPlayer();

    /**
     * @note[short] MacOS (ARM): 0x102b24
     * @note[short] MacOS (Intel): 0x12aa90
     * @note[short] Windows: 0x218370
     * @note[short] iOS: 0x1eaa3c
     * @note[short] Android
     */
    void createPlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0xf82c0
     * @note[short] MacOS (Intel): 0x11f9a0
     * @note[short] Windows: 0x20ec90
     * @note[short] iOS: 0x1e2f84
     * @note[short] Android
     */
    void createTextLayers();

    /**
     * @note[short] MacOS (ARM): 0xfb5d4
     * @note[short] MacOS (Intel): 0x122880
     * @note[short] Windows: 0x211620
     * @note[short] iOS: 0x1e536c
     * @note[short] Android
     */
    cocos2d::CCArray* damagingObjectsInRect(cocos2d::CCRect rect, bool enabledGroups);

    /**
     * @note[short] MacOS (ARM): 0x100c28
     * @note[short] MacOS (Intel): 0x128940
     * @note[short] Windows: 0x216090
     * @note[short] iOS: 0x1e9474
     * @note[short] Android
     */
    void destroyObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x101f4c
     * @note[short] MacOS (Intel): 0x129d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea33c
     * @note[short] Android
     */
    void enterDualMode(GameObject* object, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x12b6b0
     * @note[short] MacOS (Intel): 0x15c620
     * @note[short] Windows: 0x23f670
     * @note[short] iOS: 0x203de4
     * @note[short] Android
     */
    void exitStaticCamera(bool exitX, bool exitY, float time, int easingType, float easingRate, bool smoothVelocity, float smoothVelocityMod, bool exitInstant);

    /**
     * @note[short] MacOS (ARM): 0x126858
     * @note[short] MacOS (Intel): 0x156470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20114c
     * @note[short] Android
     */
    void flipFinished();

    /**
     * @note[short] MacOS (ARM): 0xfd41c
     * @note[short] MacOS (Intel): 0x1248a0
     * @note[short] Windows: 0x212b00
     * @note[short] iOS: 0x1e681c
     * @note[short] Android
     */
    void flipGravity(PlayerObject* object, bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x130fe0
     * @note[short] MacOS (Intel): 0x163460
     * @note[short] Windows: 0x246a00
     * @note[short] iOS: 0x207de4
     * @note[short] Android
     */
    void flipObjects();

    /**
     * @note[short] MacOS (ARM): 0xfa490
     * @note[short] MacOS (Intel): 0x121590
     * @note[short] Windows: 0x231ff0
     * @note[short] iOS: 0x1e45e4
     * @note[short] Android
     */
    void gameEventTriggered(GJGameEvent event, int material, int playerID);

    /**
     * @note[short] MacOS (ARM): 0xf7c70
     * @note[short] MacOS (Intel): 0x11f1b0
     * @note[short] Windows: 0x20ea40
     * @note[short] iOS: 0x1e2c28
     * @note[short] Android
     */
    int generateEnterEasingBuffer(int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xf7be8
     * @note[short] MacOS (Intel): 0x11f120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2be4
     * @note[short] Android
     */
    void generateEnterEasingBuffers(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10137c
     * @note[short] MacOS (Intel): 0x1290b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e9a30
     * @note[short] Android
     */
    void generatePickupAnimRandVal(GameObject* object, float& randomValue1, float& randomValue2);

    /**
     * @note[short] MacOS (ARM): 0xf1d44
     * @note[short] MacOS (Intel): 0x117420
     * @note[short] Windows: 0x21dfb0
     * @note[short] iOS: 0x1dfc28
     * @note[short] Android
     */
    void generateSpawnRemap();

    /**
     * @note[short] MacOS (ARM): 0xf4354
     * @note[short] MacOS (Intel): 0x11a720
     * @note[short] Windows: 0x224e60
     * @note[short] iOS: 0x1e0c74
     * @note[short] Android
     */
    void generateTargetGroups();

    /**
     * @note[short] MacOS (ARM): 0xf5d58
     * @note[short] MacOS (Intel): 0x11caf0
     * @note[short] Windows: 0x231590
     * @note[short] iOS: 0x1e1b54
     * @note[short] Android
     */
    void generateVisibilityGroups();

    /**
     * @note[short] MacOS (ARM): 0x1048d4
     * @note[short] MacOS (Intel): 0x12ca30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ec0a8
     * @note[short] Android
     */
    cocos2d::CCArray* getActiveOrderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0x117708
     * @note[short] MacOS (Intel): 0x143860
     * @note[short] Windows: 0x228070
     * @note[short] iOS: 0x1f65a4
     * @note[short] Android
     */
    float getAreaObjectValue(EnterEffectInstance* instance, GameObject* object, cocos2d::CCPoint& position, bool& show);

    /**
     * @note[short] MacOS (ARM): 0x1022b8
     * @note[short] MacOS (Intel): 0x12a110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea508
     * @note[short] Android
     */
    float getBumpMod(PlayerObject* player, int type);

    /**
     * @note[short] MacOS (ARM): 0x120ea4
     * @note[short] MacOS (Intel): 0x14f0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fd2c8
     * @note[short] Android
     */
    float getCameraEdgeValue(int type);

    /**
     * @note[short] MacOS (ARM): 0xf7fb4
     * @note[short] MacOS (Intel): 0x11f590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2de4
     * @note[short] Android
     */
    gd::string getCapacityString();

    /**
     * @note[short] MacOS (ARM): 0x112260
     * @note[short] MacOS (Intel): 0x13d520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* getCenterGroupObject(int groupID, int defaultID);

    /**
     * @note[short] MacOS (ARM): 0xf7acc
     * @note[short] MacOS (Intel): 0x11f000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2ae0
     * @note[short] Android
     */
    gd::vector<EnterEffectInstance>* getCustomEnterEffects(int id, bool enter);

    /**
     * @note[short] MacOS (ARM): 0x117938
     * @note[short] MacOS (Intel): 0x143a90
     * @note[short] Windows: 0x228260
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getEasedAreaValue(GameObject* object, EnterEffectInstance* instance, float value, bool show, int index);

    /**
     * @note[short] MacOS (ARM): 0xf7c2c
     * @note[short] MacOS (Intel): 0x11f170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getEnterEasingKey(int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xf7f54
     * @note[short] MacOS (Intel): 0x11f520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2d88
     * @note[short] Android
     */
    float getEnterEasingValue(float value, int easingType, float easingRate, int easingBuffer);

    /**
     * @note[short] MacOS (ARM): 0x11af7c
     * @note[short] MacOS (Intel): 0x147c10
     * @note[short] Windows: 0x22e950
     * @note[short] iOS: 0x1f9364
     * @note[short] Android
     */
    cocos2d::CCPoint getFollowSpeedVal(GameObject* object, int startSpeedRef, int startDirRef, float startDir, float startSpeed);

    /**
     * @note[short] MacOS (ARM): 0xfbcec
     * @note[short] MacOS (Intel): 0x123010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e5954
     * @note[short] Android
     */
    float getGroundHeight(PlayerObject* player, int type);

    /**
     * @note[short] MacOS (ARM): 0xfbc78
     * @note[short] MacOS (Intel): 0x122fb0
     * @note[short] Windows: 0x211d50
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getGroundHeightForMode(int type);

    /**
     * @note[short] MacOS (ARM): 0xf6d9c
     * @note[short] MacOS (Intel): 0x11df80
     * @note[short] Windows: 0x224280
     * @note[short] iOS: 0x1e2404
     * @note[short] Android
     */
    cocos2d::CCArray* getGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x112070
     * @note[short] MacOS (Intel): 0x13d330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f26b4
     * @note[short] Android
     */
    GameObject* getGroupParent(int groupId);

    /**
     * @note[short] MacOS (ARM): 0x112678
     * @note[short] MacOS (Intel): 0x13d970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f2ab4
     * @note[short] Android
     */
    gd::string getGroupParentsString(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11ea08
     * @note[short] MacOS (Intel): 0x14c280
     * @note[short] Windows: 0x2341c0
     * @note[short] iOS: 0x1fb9f4
     * @note[short] Android
     */
    double getItemValue(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0xfe0e4
     * @note[short] MacOS (Intel): 0x125750
     * @note[short] Windows: 0x213770
     * @note[short] iOS: 0x1e7270
     * @note[short] Android
     */
    float getMaxPortalY();

    /**
     * @note[short] MacOS (ARM): 0x12db24
     * @note[short] MacOS (Intel): 0x15ed70
     * @note[short] Windows: 0x2429c0
     * @note[short] iOS: 0x205728
     * @note[short] Android
     */
    float getMinDistance(cocos2d::CCPoint position, cocos2d::CCArray* objects, float minNear, int mode);

    /**
     * @note[short] MacOS (ARM): 0xfe008
     * @note[short] MacOS (Intel): 0x125670
     * @note[short] Windows: 0x213690
     * @note[short] iOS: 0x1e71a0
     * @note[short] Android
     */
    float getMinPortalY();

    /**
     * @note[short] MacOS (ARM): 0x122958
     * @note[short] MacOS (Intel): 0x151260
     * @note[short] Windows: 0x2377b0
     * @note[short] iOS: 0x1fe538
     * @note[short] Android
     */
    double getModifiedDelta(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1038f4
     * @note[short] MacOS (Intel): 0x12b940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1eb488
     * @note[short] Android
     */
    cocos2d::CCPoint getMoveTargetDelta(EffectGameObject* object, bool mainObject);

    /**
     * @note[short] MacOS (ARM): 0x111db8
     * @note[short] MacOS (Intel): 0x13d0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f24dc
     * @note[short] Android
     */
    cocos2d::CCArray* getOptimizedGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xfbdf4
     * @note[short] MacOS (Intel): 0x123120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e5a5c
     * @note[short] Android
     */
    PlayerObject* getOtherPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x12bd04
     * @note[short] MacOS (Intel): 0x15ce10
     * @note[short] Windows: 0x2403c0
     * @note[short] iOS: 0x2043d0
     * @note[short] Android
     */
    gd::string getParticleKey(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0x12c06c
     * @note[short] MacOS (Intel): 0x15d200
     * @note[short] Windows: 0x240540
     * @note[short] iOS: 0x204544
     * @note[short] Android: Rebinded
     */
    gd::string getParticleKey2(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x126c2c
     * @note[short] MacOS (Intel): 0x1568d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2013b0
     * @note[short] Android
     */
    int getPlayerButtonID(int button, bool player2);

    /**
     * @note[short] MacOS (ARM): 0x1268b0
     * @note[short] MacOS (Intel): 0x1564d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getPlayTimerFullSeconds();

    /**
     * @note[short] MacOS (ARM): 0x126894
     * @note[short] MacOS (Intel): 0x1564b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x201188
     * @note[short] Android
     */
    int getPlayTimerMilli();

    /**
     * @note[short] MacOS (ARM): 0xfa084
     * @note[short] MacOS (Intel): 0x1211a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e4268
     * @note[short] Android
     */
    TeleportPortalObject* getPortalTarget(TeleportPortalObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfa1a0
     * @note[short] MacOS (Intel): 0x1212b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e4318
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalTargetPos(TeleportPortalObject* object, GameObject* target, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x127224
     * @note[short] MacOS (Intel): 0x157170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2017d4
     * @note[short] Android
     */
    gd::string getRecordExtra();

    /**
     * @note[short] MacOS (ARM): 0x127374
     * @note[short] MacOS (Intel): 0x1572c0
     * @note[short] Windows: 0x23a2f0
     * @note[short] iOS: 0x2018a4
     * @note[short] Android
     */
    gd::string getRecordString(bool compress);

    /**
     * @note[short] MacOS (ARM): 0x10d318
     * @note[short] MacOS (Intel): 0x137fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1eece4
     * @note[short] Android
     */
    void getRotateCommandTargets(EnhancedTriggerObject* object, GameObject*& centerObject, GameObject*& targetObject, GameObject*& rotateObject);

    /**
     * @note[short] MacOS (ARM): 0x103b14
     * @note[short] MacOS (Intel): 0x12bbb0
     * @note[short] Windows: 0x2192a0
     * @note[short] iOS: 0x1eb5a4
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedPosition(int groupID, float delay);

    /**
     * @note[short] MacOS (ARM): 0x102afc
     * @note[short] MacOS (Intel): 0x12aa40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getScaledGroundHeight(float height);

    /**
     * @note[short] MacOS (ARM): 0x11215c
     * @note[short] MacOS (Intel): 0x13d430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f2794
     * @note[short] Android
     */
    GameObject* getSingleGroupObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf7904
     * @note[short] MacOS (Intel): 0x11ee60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSpecialKey(int groupID, bool ignoreGroupParent, bool ignoreLinkedObjects);

    /**
     * @note[short] MacOS (ARM): 0x111e2c
     * @note[short] MacOS (Intel): 0x13d120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f2540
     * @note[short] Android
     */
    cocos2d::CCArray* getStaticGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0x112ab8
     * @note[short] MacOS (Intel): 0x13de60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f2d44
     * @note[short] Android
     */
    cocos2d::CCArray* getStickyGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0xfdbc4
     * @note[short] MacOS (Intel): 0x125130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e6e00
     * @note[short] Android
     */
    float getTargetFlyCameraY(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11303c
     * @note[short] MacOS (Intel): 0x13e4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getTargetGroup(int index, int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x113068
     * @note[short] MacOS (Intel): 0x13e500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getTargetGroupOrigin(int index, int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x1006dc
     * @note[short] MacOS (Intel): 0x1283d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e90c8
     * @note[short] Android
     */
    void gravBumpPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x112ac4
     * @note[short] MacOS (Intel): 0x13de80
     * @note[short] Windows: 0x224b60
     * @note[short] iOS: 0x1f2d50
     * @note[short] Android
     */
    void groupStickyObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x11d578
     * @note[short] MacOS (Intel): 0x14aba0
     * @note[short] Windows: 0x2338e0
     * @note[short] iOS: 0x1fabbc
     * @note[short] Android
     */
    void handleButton(bool down, int button, bool isPlayer1);

    /**
     * @note[short] MacOS (ARM): 0x101668
     * @note[short] MacOS (Intel): 0x129410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e9b80
     * @note[short] Android
     */
    bool hasItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x100d0c
     * @note[short] MacOS (Intel): 0x128a10
     * @note[short] Windows: 0x216700
     * @note[short] iOS: 0x1e9558
     * @note[short] Android
     */
    bool hasUniqueCoin(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf013c
     * @note[short] MacOS (Intel): 0x115410
     * @note[short] Windows: 0x20cc20
     * @note[short] iOS: 0x1dea1c
     * @note[short] Android
     */
    void increaseBatchNodeCapacity();

    /**
     * @note[short] MacOS (ARM): 0x12683c
     * @note[short] MacOS (Intel): 0x156440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x201130
     * @note[short] Android
     */
    bool isFlipping();

    /**
     * @note[short] MacOS (ARM): 0x126c20
     * @note[short] MacOS (Intel): 0x1568c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isPlayer2Button(int button);

    /**
     * @note[short] MacOS (ARM): 0x1311b4
     * @note[short] MacOS (Intel): 0x163660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x207fb8
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint to, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xfa244
     * @note[short] MacOS (Intel): 0x121330
     * @note[short] Windows: 0x246d00
     * @note[short] iOS: 0x1e43bc
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x1128f8
     * @note[short] MacOS (Intel): 0x13dc90
     * @note[short] Windows: 0x224860
     * @note[short] iOS: 0x1f2c64
     * @note[short] Android: Rebinded
     */
    void loadGroupParentsFromString(GameObject* object, gd::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x12874c
     * @note[short] MacOS (Intel): 0x158c10
     * @note[short] Windows: 0x23ad00
     * @note[short] iOS: 0x201e8c
     * @note[short] Android
     */
    void loadLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1204b0
     * @note[short] MacOS (Intel): 0x14e480
     * @note[short] Windows: 0x235760
     * @note[short] iOS: 0x1fcacc
     * @note[short] Android
     */
    void loadStartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x120650
     * @note[short] MacOS (Intel): 0x14e680
     * @note[short] Windows: 0x235900
     * @note[short] iOS: 0x1fcbfc
     * @note[short] Android
     */
    void loadUpToPosition(float position, int order, int channel);

    /**
     * @note[short] MacOS (ARM): 0x10e79c
     * @note[short] MacOS (Intel): 0x139580
     * @note[short] Windows: 0x2237b0
     * @note[short] iOS: 0x1efd04
     * @note[short] Android
     */
    int maxZOrderForShaderZ(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x1114b4
     * @note[short] MacOS (Intel): 0x13c700
     * @note[short] Windows: 0x223700
     * @note[short] iOS: 0x1f1d48
     * @note[short] Android
     */
    int minZOrderForShaderZ(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x11b70c
     * @note[short] MacOS (Intel): 0x148490
     * @note[short] Windows: 0x22ee00
     * @note[short] iOS: 0x1f9760
     * @note[short] Android
     */
    void modifyGroupPhysics(AdvancedFollowEditObject* object, cocos2d::CCArray* group);

    /**
     * @note[short] MacOS (ARM): 0x11b84c
     * @note[short] MacOS (Intel): 0x1486d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f97e8
     * @note[short] Android
     */
    void modifyObjectPhysics(AdvancedFollowEditObject* object, GameObjectPhysics& physics);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x22aab0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void moveAreaObject(GameObject* object, float dx, float dy);

    /**
     * @note[short] MacOS (ARM): 0x12ae2c
     * @note[short] MacOS (Intel): 0x15bb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void moveCameraToPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x11af24
     * @note[short] MacOS (Intel): 0x147bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f930c
     * @note[short] Android
     */
    void moveObject(GameObject* object, double dx, double dy, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0x11acb0
     * @note[short] MacOS (Intel): 0x147890
     * @note[short] Windows: 0x22dd50
     * @note[short] iOS: 0x1f91bc
     * @note[short] Android
     */
    void moveObjects(cocos2d::CCArray* objects, double dx, double dy, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0x10d058
     * @note[short] MacOS (Intel): 0x137c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1eea84
     * @note[short] Android
     */
    void moveObjectsSilent(int groupId, double dx, double dy);

    /**
     * @note[short] MacOS (ARM): 0x11d070
     * @note[short] MacOS (Intel): 0x14a660
     * @note[short] Windows: 0x231410
     * @note[short] iOS: 0x1fa7e0
     * @note[short] Android
     */
    void moveObjectToStaticGroup(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfbf74
     * @note[short] MacOS (Intel): 0x123280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e5b3c
     * @note[short] Android
     */
    bool objectIntersectsCircle(GameObject* object, GameObject* circle);

    /**
     * @note[short] MacOS (ARM): 0xfd81c
     * @note[short] MacOS (Intel): 0x124cf0
     * @note[short] Windows: 0x232560
     * @note[short] iOS: 0x1e6b94
     * @note[short] Android
     */
    GJGameEvent objectTypeToGameEvent(int type);

    /**
     * @note[short] MacOS (ARM): 0xf2284
     * @note[short] MacOS (Intel): 0x117a30
     * @note[short] Windows: 0x230a20
     * @note[short] iOS: 0x1dff04
     * @note[short] Android
     */
    void optimizeMoveGroups();

    /**
     * @note[short] MacOS (ARM): 0x130134
     * @note[short] MacOS (Intel): 0x162420
     * @note[short] Windows: 0x245d70
     * @note[short] iOS: 0x207460
     * @note[short] Android
     */
    void orderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xf86a8
     * @note[short] MacOS (Intel): 0x11fde0
     * @note[short] Windows: 0x20f160
     * @note[short] iOS: 0x1e336c
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject);

    /**
     * @note[short] MacOS (ARM): 0x122888
     * @note[short] MacOS (Intel): 0x151160
     * @note[short] Windows: 0x2374b0
     * @note[short] iOS: 0x1fe480
     * @note[short] Android
     */
    void pauseAudio();

    /**
     * @note[short] MacOS (ARM): 0x11ea90
     * @note[short] MacOS (Intel): 0x14c2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double performMathOperation(double operand1, double operand2, int operation);

    /**
     * @note[short] MacOS (ARM): 0x11eae0
     * @note[short] MacOS (Intel): 0x14c350
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double performMathRounding(double value, int type);

    /**
     * @note[short] MacOS (ARM): 0x100e40
     * @note[short] MacOS (Intel): 0x128b10
     * @note[short] Windows: 0x2161b0
     * @note[short] iOS: 0x1e9654
     * @note[short] Android
     */
    void pickupItem(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1023a8
     * @note[short] MacOS (Intel): 0x12a1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea5cc
     * @note[short] Android
     */
    void playAnimationCommand(int id, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xfbe18
     * @note[short] MacOS (Intel): 0x123150
     * @note[short] Windows: 0x211df0
     * @note[short] iOS: 0x1e5a80
     * @note[short] Android
     */
    bool playerCircleCollision(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfbed0
     * @note[short] MacOS (Intel): 0x1231f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e5a98
     * @note[short] Android
     */
    bool playerIntersectsCircle(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1021c8
     * @note[short] MacOS (Intel): 0x12a020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchedObject(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x100904
     * @note[short] MacOS (Intel): 0x128600
     * @note[short] Windows: 0x217e40
     * @note[short] iOS: 0x1e9218
     * @note[short] Android
     */
    void playerTouchedRing(PlayerObject* player, RingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1009c8
     * @note[short] MacOS (Intel): 0x1286b0
     * @note[short] Windows: 0x217f50
     * @note[short] iOS: 0x1e92dc
     * @note[short] Android
     */
    void playerTouchedTrigger(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x102170
     * @note[short] MacOS (Intel): 0x129fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerWasTouchingObject(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfd58c
     * @note[short] MacOS (Intel): 0x124a20
     * @note[short] Windows: 0x212ef0
     * @note[short] iOS: 0x1e698c
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x101a70
     * @note[short] MacOS (Intel): 0x129860
     * @note[short] Windows: 0x216e80
     * @note[short] iOS: 0x1e9e70
     * @note[short] Android
     */
    void playExitDualEffect(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x1312a0
     * @note[short] MacOS (Intel): 0x163760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playFlashEffect(float duration, int flashes, float unknown);

    /**
     * @note[short] MacOS (ARM): 0x102478
     * @note[short] MacOS (Intel): 0x12a2a0
     * @note[short] Windows: 0x217bc0
     * @note[short] iOS: 0x1ea654
     * @note[short] Android: Rebinded
     */
    void playKeyframeAnimation(KeyframeAnimTriggerObject* object, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x12bb74
     * @note[short] MacOS (Intel): 0x15cc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x204244
     * @note[short] Android
     */
    void playSpeedParticle(float timeMod);

    /**
     * @note[short] MacOS (ARM): 0x111170
     * @note[short] MacOS (Intel): 0x13c3d0
     * @note[short] Windows: 0x223550
     * @note[short] iOS: 0x1f1ac4
     * @note[short] Android
     */
    cocos2d::CCPoint positionForShaderTarget(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf58d0
     * @note[short] MacOS (Intel): 0x11c5a0
     * @note[short] Windows: 0x226070
     * @note[short] iOS: 0x1e1790
     * @note[short] Android
     */
    void positionUIObjects();

    /**
     * @note[short] MacOS (ARM): 0xf2b2c
     * @note[short] MacOS (Intel): 0x1183b0
     * @note[short] Windows: 0x2197b0
     * @note[short] iOS: 0x1e0264
     * @note[short] Android
     */
    void prepareSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0x117f2c
     * @note[short] MacOS (Intel): 0x144120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f6c60
     * @note[short] Android
     */
    void prepareTransformParent(bool rotateNode);

    /**
     * @note[short] MacOS (ARM): 0x12287c
     * @note[short] MacOS (Intel): 0x151150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fe474
     * @note[short] Android
     */
    void preResumeGame();

    /**
     * @note[short] MacOS (ARM): 0x1211a4
     * @note[short] MacOS (Intel): 0x14f420
     * @note[short] Windows: 0x236200
     * @note[short] iOS: 0x1fd4e0
     * @note[short] Android
     */
    void preUpdateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0x12ebc0
     * @note[short] MacOS (Intel): 0x160360
     * @note[short] Windows: 0x243970
     * @note[short] iOS: 0x2065c0
     * @note[short] Android
     */
    void processActivatedAudioTriggers(float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x11b934
     * @note[short] MacOS (Intel): 0x148820
     * @note[short] Windows: 0x22f300
     * @note[short] iOS: 0x1f98d0
     * @note[short] Android
     */
    void processAdvancedFollowAction(AdvancedFollowInstance& instance, bool started, float dt);

    /**
     * @note[short] MacOS (ARM): 0x119fd4
     * @note[short] MacOS (Intel): 0x146910
     * @note[short] Windows: 0x22f0e0
     * @note[short] iOS: 0x1f87b8
     * @note[short] Android
     */
    void processAdvancedFollowActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1172c0
     * @note[short] MacOS (Intel): 0x143300
     * @note[short] Windows: 0x228fc0
     * @note[short] iOS: 0x1f62b8
     * @note[short] Android
     */
    void processAreaActions(float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0x114c54
     * @note[short] MacOS (Intel): 0x140790
     * @note[short] Windows: 0x2283e0
     * @note[short] iOS: 0x1f42ec
     * @note[short] Android: Rebinded
     */
    void processAreaEffects(gd::vector<EnterEffectInstance>* effects, GJAreaActionType type, float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0x11682c
     * @note[short] MacOS (Intel): 0x142840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f5b60
     * @note[short] Android
     */
    void processAreaFadeGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups);

    /**
     * @note[short] MacOS (ARM): 0x116254
     * @note[short] MacOS (Intel): 0x142020
     * @note[short] Windows: 0x22a4d0
     * @note[short] iOS: 0x1f54d4
     * @note[short] Android
     */
    void processAreaMoveGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0x115f74
     * @note[short] MacOS (Intel): 0x141cf0
     * @note[short] Windows: 0x229d90
     * @note[short] iOS: 0x1f515c
     * @note[short] Android
     */
    void processAreaRotateGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0x116a18
     * @note[short] MacOS (Intel): 0x142a90
     * @note[short] Windows: 0x22aba0
     * @note[short] iOS: 0x1f5cfc
     * @note[short] Android
     */
    void processAreaTintGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups);

    /**
     * @note[short] MacOS (ARM): 0x115b74
     * @note[short] MacOS (Intel): 0x1418b0
     * @note[short] Windows: 0x229220
     * @note[short] iOS: 0x1f4ce4
     * @note[short] Android
     */
    void processAreaTransformGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0x1176bc
     * @note[short] MacOS (Intel): 0x143810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f6558
     * @note[short] Android
     */
    void processAreaVisualActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0xfc0d4
     * @note[short] MacOS (Intel): 0x123400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e5c9c
     * @note[short] Android
     */
    GameObject* processCameraObject(GameObject* object, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x124490
     * @note[short] MacOS (Intel): 0x1535e0
     * @note[short] Windows: 0x239c60
     * @note[short] iOS: 0x1ff4f8
     * @note[short] Android
     */
    void processCommands(float dt, bool isHalfTick, bool isLastTick);

    /**
     * @note[short] MacOS (ARM): 0x118490
     * @note[short] MacOS (Intel): 0x1446f0
     * @note[short] Windows: 0x22e280
     * @note[short] iOS: 0x1f7180
     * @note[short] Android
     */
    void processDynamicObjectActions(int type, float dt);

    /**
     * @note[short] MacOS (ARM): 0x11a19c
     * @note[short] MacOS (Intel): 0x146b00
     * @note[short] Windows: 0x230580
     * @note[short] iOS: 0x1f895c
     * @note[short] Android
     */
    void processFollowActions();

    /**
     * @note[short] MacOS (ARM): 0x1017d4
     * @note[short] MacOS (Intel): 0x129560
     * @note[short] Windows: 0x216290
     * @note[short] iOS: 0x1e9c64
     * @note[short] Android
     */
    void processItems();

    /**
     * @note[short] MacOS (ARM): 0x119c0c
     * @note[short] MacOS (Intel): 0x146450
     * @note[short] Windows: 0x22d5b0
     * @note[short] iOS: 0x1f84c4
     * @note[short] Android
     */
    void processMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x118368
     * @note[short] MacOS (Intel): 0x1445c0
     * @note[short] Windows: 0x22b5d0
     * @note[short] iOS: 0x1f705c
     * @note[short] Android
     */
    void processMoveActionsStep(float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0x1119b4
     * @note[short] MacOS (Intel): 0x13cc40
     * @note[short] Windows: 0x223d50
     * @note[short] iOS: 0x1f2208
     * @note[short] Android
     */
    void processOptionsTrigger(GameOptionsTrigger* object);

    /**
     * @note[short] MacOS (ARM): 0x119d98
     * @note[short] MacOS (Intel): 0x146640
     * @note[short] Windows: 0x22ded0
     * @note[short] iOS: 0x1f85b8
     * @note[short] Android
     */
    void processPlayerFollowActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0x12996c
     * @note[short] MacOS (Intel): 0x15a260
     * @note[short] Windows: 0x23bae0
     * @note[short] iOS: 0x202ce0
     * @note[short] Android
     */
    void processQueuedAudioTriggers();

    /**
     * @note[short] MacOS (ARM): 0x11d44c
     * @note[short] MacOS (Intel): 0x14aa80
     * @note[short] Windows: 0x231d10
     * @note[short] iOS: 0x1fab00
     * @note[short] Android
     */
    void processQueuedButtons(float dt, bool clearInputQueue);

    /**
     * @note[short] MacOS (ARM): 0x126cec
     * @note[short] MacOS (Intel): 0x156ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void processReplayCheckpoint(int id);

    /**
     * @note[short] MacOS (ARM): 0x119470
     * @note[short] MacOS (Intel): 0x145ba0
     * @note[short] Windows: 0x22b7f0
     * @note[short] iOS: 0x1f7ed8
     * @note[short] Android
     */
    void processRotationActions();

    /**
     * @note[short] MacOS (ARM): 0xf68e8
     * @note[short] MacOS (Intel): 0x11db10
     * @note[short] Windows: 0x241a10
     * @note[short] iOS: 0x1e20ec
     * @note[short] Android
     */
    void processSFXObjects();

    /**
     * @note[short] MacOS (ARM): 0x12e65c
     * @note[short] MacOS (Intel): 0x15fbd0
     * @note[short] Windows: 0x244e10
     * @note[short] iOS: 0x206164
     * @note[short] Android
     */
    void processSFXState(SFXTriggerState* state1, SFXTriggerState* state2, int type, float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x12fcd0
     * @note[short] MacOS (Intel): 0x161dc0
     * @note[short] Windows: 0x245350
     * @note[short] iOS: 0x207074
     * @note[short] Android: Rebinded
     */
    bool processSongState(int musicID, float spawnDelay, float levelTime, int songOffset, float volume, float speed, gd::vector<SongTriggerState>* states, SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1028b8
     * @note[short] MacOS (Intel): 0x12a7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea840
     * @note[short] Android
     */
    void processStateObjects();

    /**
     * @note[short] MacOS (ARM): 0x118960
     * @note[short] MacOS (Intel): 0x144ce0
     * @note[short] Windows: 0x22c680
     * @note[short] iOS: 0x1f7544
     * @note[short] Android
     */
    void processTransformActions(bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0x11d2d8
     * @note[short] MacOS (Intel): 0x14a900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fa9bc
     * @note[short] Android
     */
    void queueButton(int button, bool push, bool isPlayer2, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x121104
     * @note[short] MacOS (Intel): 0x14f370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fd444
     * @note[short] Android
     */
    void queueTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0x112e18
     * @note[short] MacOS (Intel): 0x13e200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f3080
     * @note[short] Android
     */
    void reAddToStickyGroup(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11deec
     * @note[short] MacOS (Intel): 0x14b570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb2a8
     * @note[short] Android
     */
    void recordAction(int button, bool down, bool player2);

    /**
     * @note[short] MacOS (ARM): 0xfbae4
     * @note[short] MacOS (Intel): 0x122e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e57c0
     * @note[short] Android
     */
    bool rectIntersectsCircle(cocos2d::CCRect rect, cocos2d::CCPoint center, float radius);

    /**
     * @note[short] MacOS (ARM): 0x120068
     * @note[short] MacOS (Intel): 0x14df30
     * @note[short] Windows: 0x2355b0
     * @note[short] iOS: 0x1fc7cc
     * @note[short] Android
     */
    void refreshCounterLabels();

    /**
     * @note[short] MacOS (ARM): 0xf6718
     * @note[short] MacOS (Intel): 0x11d920
     * @note[short] Windows: 0x233ce0
     * @note[short] iOS: 0x1e1f28
     * @note[short] Android
     */
    void refreshKeyframeAnims();

    /**
     * @note[short] MacOS (ARM): 0xf1ea4
     * @note[short] MacOS (Intel): 0x1175b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dfd14
     * @note[short] Android
     */
    void regenerateEnterEasingBuffers();

    /**
     * @note[short] MacOS (ARM): 0x10af04
     * @note[short] MacOS (Intel): 0x135c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1edbe8
     * @note[short] Android: Rebinded
     */
    int registerSpawnRemap(gd::vector<ChanceObject>& spawnRemap);

    /**
     * @note[short] MacOS (ARM): 0x102864
     * @note[short] MacOS (Intel): 0x12a770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea7ec
     * @note[short] Android
     */
    void registerStateObject(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xef390
     * @note[short] MacOS (Intel): 0x114550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ddda0
     * @note[short] Android
     */
    void removeBackground();

    /**
     * @note[short] MacOS (ARM): 0xf75b4
     * @note[short] MacOS (Intel): 0x11e9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeCustomEnterEffects(int id, bool enter);

    /**
     * @note[short] MacOS (ARM): 0x112508
     * @note[short] MacOS (Intel): 0x13d7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f294c
     * @note[short] Android
     */
    void removeFromGroupParents(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x111ea0
     * @note[short] MacOS (Intel): 0x13d190
     * @note[short] Windows: 0x2240c0
     * @note[short] iOS: 0x1f25a4
     * @note[short] Android
     */
    void removeFromGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x112d8c
     * @note[short] MacOS (Intel): 0x13e170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f2ff4
     * @note[short] Android
     */
    void removeFromStickyGroup(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xefa40
     * @note[short] MacOS (Intel): 0x114c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de394
     * @note[short] Android
     */
    void removeGroundLayer();

    /**
     * @note[short] MacOS (ARM): 0x11207c
     * @note[short] MacOS (Intel): 0x13d350
     * @note[short] Windows: 0x224790
     * @note[short] iOS: 0x1f26c0
     * @note[short] Android
     */
    void removeGroupParent(int groupID);

    /**
     * @note[short] MacOS (ARM): 0x11e1dc
     * @note[short] MacOS (Intel): 0x14b8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb49c
     * @note[short] Android
     */
    void removeKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xefa0c
     * @note[short] MacOS (Intel): 0x114c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de360
     * @note[short] Android
     */
    void removeMiddleground();

    /**
     * @note[short] MacOS (ARM): 0x113250
     * @note[short] MacOS (Intel): 0x13e730
     * @note[short] Windows: 0x226d60
     * @note[short] iOS: 0x1f324c
     * @note[short] Android
     */
    void removeObjectFromSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x101ef0
     * @note[short] MacOS (Intel): 0x129cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ea2e0
     * @note[short] Android
     */
    void removePlayer2();

    /**
     * @note[short] MacOS (ARM): 0x11d1a0
     * @note[short] MacOS (Intel): 0x14a7b0
     * @note[short] Windows: 0x231ba0
     * @note[short] iOS: 0x1fa89c
     * @note[short] Android
     */
    void removeReleasedButtons();

    /**
     * @note[short] MacOS (ARM): 0x129538
     * @note[short] MacOS (Intel): 0x159d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20296c
     * @note[short] Android
     */
    void removeTemporaryParticles();

    /**
     * @note[short] MacOS (ARM): 0x102f38
     * @note[short] MacOS (Intel): 0x12af00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1eacd4
     * @note[short] Android
     */
    void reorderObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x111408
     * @note[short] MacOS (Intel): 0x13c680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f1c9c
     * @note[short] Android
     */
    void reparentObject(cocos2d::CCNode* node, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0xf6e4c
     * @note[short] MacOS (Intel): 0x11e020
     * @note[short] Windows: 0x20e390
     * @note[short] iOS: 0x1e2468
     * @note[short] Android
     */
    void resetActiveEnterEffects();

    /**
     * @note[short] MacOS (ARM): 0x115854
     * @note[short] MacOS (Intel): 0x141460
     * @note[short] Windows: 0x227c30
     * @note[short] iOS: 0x1f4a8c
     * @note[short] Android
     */
    bool resetAreaObjectValues(GameObject* object, bool update);

    /**
     * @note[short] MacOS (ARM): 0x1228dc
     * @note[short] MacOS (Intel): 0x1511d0
     * @note[short] Windows: 0x237710
     * @note[short] iOS: 0x1fe4d4
     * @note[short] Android
     */
    void resetAudio();

    /**
     * @note[short] MacOS (ARM): 0x1295f0
     * @note[short] MacOS (Intel): 0x159df0
     * @note[short] Windows: 0x23fb00
     * @note[short] iOS: 0x202a14
     * @note[short] Android
     */
    void resetCamera();

    /**
     * @note[short] MacOS (ARM): 0x10e5f0
     * @note[short] MacOS (Intel): 0x139370
     * @note[short] Windows: 0x220fa0
     * @note[short] iOS: 0x1efc28
     * @note[short] Android
     */
    void resetGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0x1202f8
     * @note[short] MacOS (Intel): 0x14e280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fc978
     * @note[short] Android
     */
    void resetGroupCounters(bool reset);

    /**
     * @note[short] MacOS (ARM): 0x128b88
     * @note[short] MacOS (Intel): 0x159060
     * @note[short] Windows: 0x23b040
     * @note[short] iOS: 0x20220c
     * @note[short] Android
     */
    void resetLevelVariables();

    /**
     * @note[short] MacOS (ARM): 0x11d030
     * @note[short] MacOS (Intel): 0x14a600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fa7a0
     * @note[short] Android
     */
    void resetMoveOptimizedValue();

    /**
     * @note[short] MacOS (ARM): 0xfc15c
     * @note[short] MacOS (Intel): 0x123490
     * @note[short] Windows: 0x2120b0
     * @note[short] iOS: 0x1e5d24
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (ARM): 0x126d7c
     * @note[short] MacOS (Intel): 0x156bb0
     * @note[short] Windows: 0x239e20
     * @note[short] iOS: 0x2014b4
     * @note[short] Android
     */
    void resetRecord(int steps, bool noFullReset);

    /**
     * @note[short] MacOS (ARM): 0x126cf0
     * @note[short] MacOS (Intel): 0x156af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRecordFull();

    /**
     * @note[short] MacOS (ARM): 0x120928
     * @note[short] MacOS (Intel): 0x14e9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSongTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x1298a8
     * @note[short] MacOS (Intel): 0x15a170
     * @note[short] Windows: 0x245e20
     * @note[short] iOS: 0x202c1c
     * @note[short] Android
     */
    void resetSpawnChannelIndex();

    /**
     * @note[short] MacOS (ARM): 0xfdf24
     * @note[short] MacOS (Intel): 0x125550
     * @note[short] Windows: 0x23fde0
     * @note[short] iOS: 0x1e70f8
     * @note[short] Android
     */
    void resetStaticCamera(bool resetX, bool resetY);

    /**
     * @note[short] MacOS (ARM): 0x117600
     * @note[short] MacOS (Intel): 0x143770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f64a4
     * @note[short] Android
     */
    void resetStoppedAreaObjects();

    /**
     * @note[short] MacOS (ARM): 0x1133d0
     * @note[short] MacOS (Intel): 0x13e8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f33ec
     * @note[short] Android
     */
    void restoreAllUIObjects();

    /**
     * @note[short] MacOS (ARM): 0x120ffc
     * @note[short] MacOS (Intel): 0x14f1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restoreDefaultGameplayOffsetX();

    /**
     * @note[short] MacOS (ARM): 0x121018
     * @note[short] MacOS (Intel): 0x14f230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restoreDefaultGameplayOffsetY();

    /**
     * @note[short] MacOS (ARM): 0x109338
     * @note[short] MacOS (Intel): 0x1337e0
     * @note[short] Windows: 0x21cfa0
     * @note[short] iOS: 0x1ed668
     * @note[short] Android: Rebinded
     */
    void restoreRemap(EffectGameObject* object, gd::unordered_map<int, int>& remap);

    /**
     * @note[short] MacOS (ARM): 0x1228b4
     * @note[short] MacOS (Intel): 0x1511a0
     * @note[short] Windows: 0x237600
     * @note[short] iOS: 0x1fe4ac
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x117f90
     * @note[short] MacOS (Intel): 0x144190
     * @note[short] Windows: 0x22a100
     * @note[short] iOS: 0x1f6cc4
     * @note[short] Android
     */
    void rotateAreaObjects(GameObject* object, cocos2d::CCArray* objects, float rotation, bool reset);

    /**
     * @note[short] MacOS (ARM): 0x11a7f4
     * @note[short] MacOS (Intel): 0x147350
     * @note[short] Windows: 0x22c100
     * @note[short] iOS: 0x1f8d84
     * @note[short] Android
     */
    void rotateObject(GameObject* object, float rotation);

    /**
     * @note[short] MacOS (ARM): 0x11a870
     * @note[short] MacOS (Intel): 0x1473d0
     * @note[short] Windows: 0x22c1a0
     * @note[short] iOS: 0x1f8e00
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint position, cocos2d::CCPoint offset, bool finished, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x1123c0
     * @note[short] MacOS (Intel): 0x13d690
     * @note[short] Windows: 0x224680
     * @note[short] iOS: 0x1f284c
     * @note[short] Android
     */
    void setGroupParent(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xfc3c8
     * @note[short] MacOS (Intel): 0x123730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e5ee0
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* startPos);

    /**
     * @note[short] MacOS (ARM): 0xec740
     * @note[short] MacOS (Intel): 0x111680
     * @note[short] Windows: 0x208aa0
     * @note[short] iOS: 0x1db75c
     * @note[short] Android
     */
    void setupLayers();

    /**
     * @note[short] MacOS (ARM): 0xfc410
     * @note[short] MacOS (Intel): 0x123780
     * @note[short] Windows: 0x212220
     * @note[short] iOS: 0x1e5f28
     * @note[short] Android
     */
    void setupLevelStart(LevelSettingsObject* settings);

    /**
     * @note[short] MacOS (ARM): 0x127220
     * @note[short] MacOS (Intel): 0x157160
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void setupReplay(gd::string inputs);

    /**
     * @note[short] MacOS (ARM): 0x12a4c4
     * @note[short] MacOS (Intel): 0x15af20
     * @note[short] Windows: 0x23bc50
     * @note[short] iOS: 0x2033ac
     * @note[short] Android
     */
    void shakeCamera(float duration, float strength, float interval);

    /**
     * @note[short] MacOS (ARM): 0xeec54
     * @note[short] MacOS (Intel): 0x113e50
     * @note[short] Windows: 0x20b050
     * @note[short] iOS: 0x1dd7f8
     * @note[short] Android
     */
    bool shouldExitHackedLevel();

    /**
     * @note[short] MacOS (ARM): 0x11d790
     * @note[short] MacOS (Intel): 0x14ada0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fae00
     * @note[short] Android
     */
    bool shouldUseSubstepForButton(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1121f0
     * @note[short] MacOS (Intel): 0x13d4c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f27e4
     * @note[short] Android
     */
    void sortAllGroupsX();

    /**
     * @note[short] MacOS (ARM): 0xf1f80
     * @note[short] MacOS (Intel): 0x1176f0
     * @note[short] Windows: 0x2242f0
     * @note[short] iOS: 0x1dfda0
     * @note[short] Android
     */
    void sortGroups();

    /**
     * @note[short] MacOS (ARM): 0x114058
     * @note[short] MacOS (Intel): 0x13f8b0
     * @note[short] Windows: 0x226fa0
     * @note[short] iOS: 0x1f3b30
     * @note[short] Android
     */
    void sortSectionVector();

    /**
     * @note[short] MacOS (ARM): 0xf4234
     * @note[short] MacOS (Intel): 0x11a5d0
     * @note[short] Windows: 0x224a00
     * @note[short] iOS: 0x1e0b5c
     * @note[short] Android
     */
    void sortStickyGroups();

    /**
     * @note[short] MacOS (ARM): 0x104900
     * @note[short] MacOS (Intel): 0x12ca60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ec0ec
     * @note[short] Android: Rebinded
     */
    void spawnGroupTriggered(int targetID, float delay, bool spawnOrdered, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x104c54
     * @note[short] MacOS (Intel): 0x12cdc0
     * @note[short] Windows: 0x21ae00
     * @note[short] iOS: 0x1ec298
     * @note[short] Android: Rebinded
     */
    void spawnObjectsInOrder(cocos2d::CCArray* objects, double delay, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x12ba9c
     * @note[short] MacOS (Intel): 0x15cbe0
     * @note[short] Windows: 0x2402e0
     * @note[short] iOS: 0x20417c
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* spawnParticle(char const* plist, int zOrder, cocos2d::tCCPositionType positionType, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x12b938
     * @note[short] MacOS (Intel): 0x15ca00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x204018
     * @note[short] Android
     */
    void spawnParticleTrigger(SpawnParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x100f54
     * @note[short] MacOS (Intel): 0x128c20
     * @note[short] Windows: 0x23feb0
     * @note[short] iOS: 0x1e96dc
     * @note[short] Android
     */
    void spawnParticleTrigger(int particleID, cocos2d::CCPoint position, float rotation, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1019f4
     * @note[short] MacOS (Intel): 0x1297e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e9df4
     * @note[short] Android
     */
    void spawnPlayer2();

    /**
     * @note[short] MacOS (ARM): 0x11129c
     * @note[short] MacOS (Intel): 0x13c4f0
     * @note[short] Windows: 0x223600
     * @note[short] iOS: 0x1f1b8c
     * @note[short] Android
     */
    cocos2d::CCPoint speedForShaderTarget(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xfb0b4
     * @note[short] MacOS (Intel): 0x122390
     * @note[short] Windows: 0x211260
     * @note[short] iOS: 0x1e5014
     * @note[short] Android
     */
    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect rect, bool enabledGroups);

    /**
     * @note[short] MacOS (ARM): 0xfdfe0
     * @note[short] MacOS (Intel): 0x125640
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopAllGroundActions();

    /**
     * @note[short] MacOS (ARM): 0x12a548
     * @note[short] MacOS (Intel): 0x15afc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x203430
     * @note[short] Android
     */
    void stopCameraShake();

    /**
     * @note[short] MacOS (ARM): 0xf7938
     * @note[short] MacOS (Intel): 0x11ee90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2900
     * @note[short] Android
     */
    void stopCustomEnterEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf798c
     * @note[short] MacOS (Intel): 0x11eee0
     * @note[short] Windows: 0x20e760
     * @note[short] iOS: 0x1e2964
     * @note[short] Android
     */
    void stopCustomEnterEffect(EnterEffectObject* object, bool enter);

    /**
     * @note[short] MacOS (ARM): 0x10b9c4
     * @note[short] MacOS (Intel): 0x136940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ee180
     * @note[short] Android
     */
    void stopSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xef3c4
     * @note[short] MacOS (Intel): 0x114580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dddd4
     * @note[short] Android
     */
    void swapBackground(int background);

    /**
     * @note[short] MacOS (ARM): 0xef6a4
     * @note[short] MacOS (Intel): 0x1148b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de0b4
     * @note[short] Android
     */
    void swapGround(int ground);

    /**
     * @note[short] MacOS (ARM): 0xef7f0
     * @note[short] MacOS (Intel): 0x114a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de200
     * @note[short] Android
     */
    void swapMiddleground(int middleground);

    /**
     * @note[short] MacOS (ARM): 0xfcebc
     * @note[short] MacOS (Intel): 0x124330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e64c8
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* player, GameObject* object, bool noPortal, int type);

    /**
     * @note[short] MacOS (ARM): 0xfd0b4
     * @note[short] MacOS (Intel): 0x124520
     * @note[short] Windows: 0x212c20
     * @note[short] iOS: 0x1e662c
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0xfd008
     * @note[short] MacOS (Intel): 0x124470
     * @note[short] Windows: 0x212e00
     * @note[short] iOS: 0x1e65c8
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0xfd160
     * @note[short] MacOS (Intel): 0x1245d0
     * @note[short] Windows: 0x212d10
     * @note[short] iOS: 0x1e6690
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0x128a70
     * @note[short] MacOS (Intel): 0x158f50
     * @note[short] Windows: 0x23afa0
     * @note[short] iOS: 0x202154
     * @note[short] Android
     */
    void syncBGTextures();

    /**
     * @note[short] MacOS (ARM): 0xf99d8
     * @note[short] MacOS (Intel): 0x120ac0
     * @note[short] Windows: 0x20fdb0
     * @note[short] iOS: 0x1e3d14
     * @note[short] Android
     */
    void teleportPlayer(TeleportPortalObject* object, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x11e350
     * @note[short] MacOS (Intel): 0x14ba70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb5d8
     * @note[short] Android: Rebinded
     */
    void testInstantCountTrigger(int itemID, int compareCount, int groupID, bool activateGroup, int triggerMode, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xec5dc
     * @note[short] MacOS (Intel): 0x111510
     * @note[short] Windows: 0x248ae0
     * @note[short] iOS: 0x1db5a0
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xfcb94
     * @note[short] MacOS (Intel): 0x123fb0
     * @note[short] Windows: 0x2168d0
     * @note[short] iOS: 0x1e627c
     * @note[short] Android
     */
    void toggleDualMode(GameObject* object, bool dual, PlayerObject* player, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x100308
     * @note[short] MacOS (Intel): 0x127f40
     * @note[short] Windows: 0x2467d0
     * @note[short] iOS: 0x1e8e28
     * @note[short] Android
     */
    void toggleFlipped(bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x11181c
     * @note[short] MacOS (Intel): 0x13ca90
     * @note[short] Windows: 0x223bc0
     * @note[short] iOS: 0x1f20a4
     * @note[short] Android
     */
    void toggleGroup(int id, bool activate);

    /**
     * @note[short] MacOS (ARM): 0x111c10
     * @note[short] MacOS (Intel): 0x13cee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleLockPlayer(bool disable, bool player2);

    /**
     * @note[short] MacOS (ARM): 0x111b98
     * @note[short] MacOS (Intel): 0x13ce60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f23b0
     * @note[short] Android
     */
    void togglePlayerStreakBlend(bool blend, bool force);

    /**
     * @note[short] MacOS (ARM): 0x120964
     * @note[short] MacOS (Intel): 0x14ea40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fcec8
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x111be4
     * @note[short] MacOS (Intel): 0x13ceb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible, bool player1);

    /**
     * @note[short] MacOS (ARM): 0x117a40
     * @note[short] MacOS (Intel): 0x143ba0
     * @note[short] Windows: 0x229720
     * @note[short] iOS: 0x1f67a8
     * @note[short] Android
     */
    void transformAreaObjects(GameObject* object, cocos2d::CCArray* objects, float scaleX, float scaleY, bool reset);

    /**
     * @note[short] MacOS (ARM): 0x10df1c
     * @note[short] MacOS (Intel): 0x138c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ef750
     * @note[short] Android
     */
    void triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0x11b100
     * @note[short] MacOS (Intel): 0x147d80
     * @note[short] Windows: 0x22eac0
     * @note[short] iOS: 0x1f94d8
     * @note[short] Android
     */
    void triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1142f4
     * @note[short] MacOS (Intel): 0x13fc20
     * @note[short] Windows: 0x2271c0
     * @note[short] iOS: 0x1f3d14
     * @note[short] Android
     */
    void triggerAreaEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1146c8
     * @note[short] MacOS (Intel): 0x140130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f3fe8
     * @note[short] Android
     */
    void triggerAreaEffectAnimation(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10cf74
     * @note[short] MacOS (Intel): 0x137bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ee9d4
     * @note[short] Android
     */
    void triggerDynamicMoveCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10d9cc
     * @note[short] MacOS (Intel): 0x138640
     * @note[short] Windows: 0x21f2a0
     * @note[short] iOS: 0x1ef2fc
     * @note[short] Android
     */
    void triggerDynamicRotateCommand(EnhancedTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10e12c
     * @note[short] MacOS (Intel): 0x138e90
     * @note[short] Windows: 0x21f750
     * @note[short] iOS: 0x1ef928
     * @note[short] Android
     */
    void triggerGradientCommand(GradientTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1115d0
     * @note[short] MacOS (Intel): 0x13c810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f1e64
     * @note[short] Android
     */
    void triggerGravityChange(EffectGameObject* object, int playerID);

    /**
     * @note[short] MacOS (ARM): 0x10cca4
     * @note[short] MacOS (Intel): 0x1378b0
     * @note[short] Windows: 0x21ea40
     * @note[short] iOS: 0x1ee79c
     * @note[short] Android
     */
    void triggerMoveCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10d7f8
     * @note[short] MacOS (Intel): 0x138450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ef168
     * @note[short] Android
     */
    void triggerRotateCommand(EnhancedTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10f8e4
     * @note[short] MacOS (Intel): 0x13a9a0
     * @note[short] Windows: 0x221030
     * @note[short] iOS: 0x1f0c20
     * @note[short] Android
     */
    void triggerShaderCommand(ShaderGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10dd58
     * @note[short] MacOS (Intel): 0x138a60
     * @note[short] Windows: 0x21f4c0
     * @note[short] iOS: 0x1ef61c
     * @note[short] Android
     */
    void triggerTransformCommand(TransformTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1122fc
     * @note[short] MacOS (Intel): 0x13d5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* tryGetGroupParent(int groupID);

    /**
     * @note[short] MacOS (ARM): 0x1027ac
     * @note[short] MacOS (Intel): 0x12a6c0
     * @note[short] Windows: 0x224520
     * @note[short] iOS: 0x1ea79c
     * @note[short] Android
     */
    GameObject* tryGetMainObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xfc288
     * @note[short] MacOS (Intel): 0x1235f0
     * @note[short] Windows: 0x224590
     * @note[short] iOS: 0x1e5e50
     * @note[short] Android
     */
    GameObject* tryGetObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0x1228fc
     * @note[short] MacOS (Intel): 0x151200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fe4f4
     * @note[short] Android
     */
    void tryResumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x12c930
     * @note[short] MacOS (Intel): 0x15dac0
     * @note[short] Windows: 0x240be0
     * @note[short] iOS: 0x204a54
     * @note[short] Android
     */
    void unclaimParticle(char const* key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x112bdc
     * @note[short] MacOS (Intel): 0x13dfa0
     * @note[short] Windows: 0x224c80
     * @note[short] iOS: 0x1f2e60
     * @note[short] Android
     */
    void ungroupStickyObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x11de88
     * @note[short] MacOS (Intel): 0x14b4f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlinkAllEvents();

    /**
     * @note[short] MacOS (ARM): 0xf6eb4
     * @note[short] MacOS (Intel): 0x11e090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e24d0
     * @note[short] Android
     */
    void updateActiveEnterEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x128a08
     * @note[short] MacOS (Intel): 0x158ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2020ec
     * @note[short] Android
     */
    void updateAllObjectSection();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x227eb0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateAreaObjectLastValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x12437c
     * @note[short] MacOS (Intel): 0x153470
     * @note[short] Windows: 0x248880
     * @note[short] iOS: 0x1ff3e4
     * @note[short] Android
     */
    void updateAudioVisualizer();

    /**
     * @note[short] MacOS (ARM): 0x129418
     * @note[short] MacOS (Intel): 0x159b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2028d4
     * @note[short] Android
     */
    void updateBGArtSpeed(float modX, float modY);

    /**
     * @note[short] MacOS (ARM): 0x124838
     * @note[short] MacOS (Intel): 0x153a30
     * @note[short] Windows: 0x23bcf0
     * @note[short] iOS: 0x1ff830
     * @note[short] Android
     */
    void updateCamera(float dt);

    /**
     * @note[short] MacOS (ARM): 0x12a788
     * @note[short] MacOS (Intel): 0x15b270
     * @note[short] Windows: 0x23e450
     * @note[short] iOS: 0x2035b0
     * @note[short] Android
     */
    void updateCameraBGArt(cocos2d::CCPoint position, float zoom);

    /**
     * @note[short] MacOS (ARM): 0x120e5c
     * @note[short] MacOS (Intel): 0x14f070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fd280
     * @note[short] Android
     */
    void updateCameraEdge(int direction, int value);

    /**
     * @note[short] MacOS (ARM): 0xfd518
     * @note[short] MacOS (Intel): 0x1249a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e6918
     * @note[short] Android
     */
    void updateCameraMode(EffectGameObject* obj, bool updateDual);

    /**
     * @note[short] MacOS (ARM): 0x120cc4
     * @note[short] MacOS (Intel): 0x14ee70
     * @note[short] Windows: 0x235f70
     * @note[short] iOS: 0x1fd180
     * @note[short] Android
     */
    void updateCameraOffsetX(float offsetX, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x120d90
     * @note[short] MacOS (Intel): 0x14ef70
     * @note[short] Windows: 0x236010
     * @note[short] iOS: 0x1fd200
     * @note[short] Android
     */
    void updateCameraOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x102f6c
     * @note[short] MacOS (Intel): 0x12af30
     * @note[short] Windows: 0x2187d0
     * @note[short] iOS: 0x1ead08
     * @note[short] Android
     */
    void updateCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0x11e468
     * @note[short] MacOS (Intel): 0x14bb60
     * @note[short] Windows: 0x233ec0
     * @note[short] iOS: 0x1fb6f0
     * @note[short] Android
     */
    void updateCounters(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0xfd20c
     * @note[short] MacOS (Intel): 0x124680
     * @note[short] Windows: 0x213180
     * @note[short] iOS: 0x1e66f4
     * @note[short] Android
     */
    void updateDualGround(PlayerObject* object, int mode, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xf7b40
     * @note[short] MacOS (Intel): 0x11f060
     * @note[short] Windows: 0x20e960
     * @note[short] iOS: 0x1e2b4c
     * @note[short] Android
     */
    void updateEnterEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x114004
     * @note[short] MacOS (Intel): 0x13f860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f3adc
     * @note[short] Android
     */
    void updateExtendedCollision(GameObject* object, bool extendedCollision);

    /**
     * @note[short] MacOS (ARM): 0x1114d8
     * @note[short] MacOS (Intel): 0x13c720
     * @note[short] Windows: 0x223850
     * @note[short] iOS: 0x1f1d6c
     * @note[short] Android
     */
    void updateExtraGameLayers();

    /**
     * @note[short] MacOS (ARM): 0x12100c
     * @note[short] MacOS (Intel): 0x14f210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fd3a8
     * @note[short] Android
     */
    void updateGameplayOffsetX(int offsetX, bool staticOffset);

    /**
     * @note[short] MacOS (ARM): 0x121028
     * @note[short] MacOS (Intel): 0x14f250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fd3b4
     * @note[short] Android
     */
    void updateGameplayOffsetY(int offsetY, bool staticOffset);

    /**
     * @note[short] MacOS (ARM): 0x10e7c0
     * @note[short] MacOS (Intel): 0x1395a0
     * @note[short] Windows: 0x21fbe0
     * @note[short] iOS: 0x1efd70
     * @note[short] Android
     */
    void updateGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0xefa88
     * @note[short] MacOS (Intel): 0x114cd0
     * @note[short] Windows: 0x20bd60
     * @note[short] iOS: 0x1de3dc
     * @note[short] Android
     */
    void updateGroundShadows();

    /**
     * @note[short] MacOS (ARM): 0x1242a4
     * @note[short] MacOS (Intel): 0x1533a0
     * @note[short] Windows: 0x2466c0
     * @note[short] iOS: 0x1ff310
     * @note[short] Android
     */
    void updateGuideArt();

    /**
     * @note[short] MacOS (ARM): 0x12b0b0
     * @note[short] MacOS (Intel): 0x15be10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateInternalCamOffsetX(float offsetX, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x12b18c
     * @note[short] MacOS (Intel): 0x15bf00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateInternalCamOffsetY(float offsetY, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x11e10c
     * @note[short] MacOS (Intel): 0x14b7b0
     * @note[short] Windows: 0x233c10
     * @note[short] iOS: 0x1fb3f8
     * @note[short] Android
     */
    void updateKeyframeOrder(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xf02ac
     * @note[short] MacOS (Intel): 0x1155b0
     * @note[short] Windows: 0x20cd00
     * @note[short] iOS: 0x1deb84
     * @note[short] Android: Rebinded
     */
    void updateLayerCapacity(gd::string capacityString);

    /**
     * @note[short] MacOS (ARM): 0xf01d8
     * @note[short] MacOS (Intel): 0x1154b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1deab0
     * @note[short] Android
     */
    void updateLegacyLayerCapacity(int front, int frontBlend, int back, int backBlend);

    /**
     * @note[short] MacOS (ARM): 0xef458
     * @note[short] MacOS (Intel): 0x114600
     * @note[short] Windows: 0x20c490
     * @note[short] iOS: 0x1dde68
     * @note[short] Android
     */
    void updateLevelColors();

    /**
     * @note[short] MacOS (ARM): 0x12890c
     * @note[short] MacOS (Intel): 0x158e00
     * @note[short] Windows: 0x23aec0
     * @note[short] iOS: 0x202018
     * @note[short] Android
     */
    void updateMaxGameplayY();

    /**
     * @note[short] MacOS (ARM): 0x12944c
     * @note[short] MacOS (Intel): 0x159bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x202908
     * @note[short] Android
     */
    void updateMGArtSpeed(float modX, float modY);

    /**
     * @note[short] MacOS (ARM): 0x121034
     * @note[short] MacOS (Intel): 0x14f270
     * @note[short] Windows: 0x2360b0
     * @note[short] iOS: 0x1fd3c0
     * @note[short] Android
     */
    void updateMGOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xfba80
     * @note[short] MacOS (Intel): 0x122d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e575c
     * @note[short] Android
     */
    void updateOBB2(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x12d288
     * @note[short] MacOS (Intel): 0x15e3d0
     * @note[short] Windows: 0x241340
     * @note[short] iOS: 0x2050d8
     * @note[short] Android
     */
    void updateParticles(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1268d4
     * @note[short] MacOS (Intel): 0x156500
     * @note[short] Windows: 0x2396c0
     * @note[short] iOS: 0x2011b8
     * @note[short] Android
     */
    void updatePlatformerTime();

    /**
     * @note[short] MacOS (ARM): 0x102dd0
     * @note[short] MacOS (Intel): 0x12ad60
     * @note[short] Windows: 0x2185a0
     * @note[short] iOS: 0x1eabc8
     * @note[short] Android
     */
    void updatePlayerCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0x126778
     * @note[short] MacOS (Intel): 0x156380
     * @note[short] Windows: 0x242320
     * @note[short] iOS: 0x201074
     * @note[short] Android
     */
    void updateProximityVolumeEffects();

    /**
     * @note[short] MacOS (ARM): 0x11ffcc
     * @note[short] MacOS (Intel): 0x14de70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fc738
     * @note[short] Android
     */
    void updateQueuedLabels();

    /**
     * @note[short] MacOS (ARM): 0x12721c
     * @note[short] MacOS (Intel): 0x157150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateReplay();

    /**
     * @note[short] MacOS (ARM): 0x103f50
     * @note[short] MacOS (Intel): 0x12c0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1eb820
     * @note[short] Android
     */
    void updateSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0x11002c
     * @note[short] MacOS (Intel): 0x13b3b0
     * @note[short] Windows: 0x2222b0
     * @note[short] iOS: 0x1f1288
     * @note[short] Android
     */
    void updateShaderLayer(float dt);

    /**
     * @note[short] MacOS (ARM): 0xf1cd8
     * @note[short] MacOS (Intel): 0x1173b0
     * @note[short] Windows: 0x20df30
     * @note[short] iOS: 0x1dfbbc
     * @note[short] Android
     */
    void updateSpecialGroupData();

    /**
     * @note[short] MacOS (ARM): 0x126354
     * @note[short] MacOS (Intel): 0x155e30
     * @note[short] Windows: 0x2393e0
     * @note[short] iOS: 0x200df0
     * @note[short] Android
     */
    void updateSpecialLabels();

    /**
     * @note[short] MacOS (ARM): 0xfdc70
     * @note[short] MacOS (Intel): 0x1251b0
     * @note[short] Windows: 0x23f230
     * @note[short] iOS: 0x1e6e88
     * @note[short] Android
     */
    void updateStaticCameraPos(cocos2d::CCPoint pos, bool staticX, bool staticY, bool followOrSmoothEase, float time, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x12b340
     * @note[short] MacOS (Intel): 0x15c0d0
     * @note[short] Windows: 0x23ee40
     * @note[short] iOS: 0x203c0c
     * @note[short] Android
     */
    void updateStaticCameraPosToGroup(int centerID, bool updateX, bool updateY, bool followObject, float followEase, float duration, int easingType, float easingRate, bool smoothVelocity, float velocityMod);

    /**
     * @note[short] MacOS (ARM): 0xfd3a8
     * @note[short] MacOS (Intel): 0x124820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e67a4
     * @note[short] Android
     */
    void updateTimeMod(float speed, bool players, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x11fae4
     * @note[short] MacOS (Intel): 0x14d820
     * @note[short] Windows: 0x235240
     * @note[short] iOS: 0x1fc460
     * @note[short] Android
     */
    void updateTimerLabels();

    /**
     * @note[short] MacOS (ARM): 0x1209b8
     * @note[short] MacOS (Intel): 0x14eab0
     * @note[short] Windows: 0x235cf0
     * @note[short] iOS: 0x1fcf1c
     * @note[short] Android
     */
    void updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x1327f0
     * @note[short] MacOS (Intel): 0x164f80
     * @note[short] Windows: 0x2482c0
     * @note[short] iOS: 0x208f6c
     * @note[short] Android
     */
    void visitWithColorFlash();

    /**
     * @note[short] MacOS (ARM): 0x12d794
     * @note[short] MacOS (Intel): 0x15e910
     * @note[short] Windows: 0x2425f0
     * @note[short] iOS: 0x205444
     * @note[short] Android
     */
    float volumeForProximityEffect(SFXTriggerInstance& instance);
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    bool m_lowDetailMode;
    bool m_extraLDM;
    bool m_ignoreDamage;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_fixNegativeScale;
    bool m_startingFromBeginning;
    gd::vector<SFXTriggerGameObject*> m_activeSfxTriggers;
    gd::vector<void*> m_unk8a0;
    cocos2d::CCNode* m_hoverNode;
    cocos2d::CCNode* m_areaTransformNode;
    cocos2d::CCNode* m_areaSkewNode;
    cocos2d::CCNode* m_areaScaleNode;
    cocos2d::CCNode* m_areaRotateNode;
    cocos2d::CCNode* m_areaTransformNode2;
    OBB2D* m_obb2;
    gd::vector<gd::unordered_map<int,int>> m_spawnRemapTriggers;
    gd::unordered_map<int, cocos2d::CCPoint> m_uiObjectPositions;
    GJEffectManager* m_effectManager;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_gameLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_glowLayerT4;
    CCNodeContainer* m_specialLayerT4;
    cocos2d::CCSpriteBatchNode* m_textLayerT4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_game2LayerT4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_glowLayerT3;
    CCNodeContainer* m_specialLayerT3;
    cocos2d::CCSpriteBatchNode* m_textLayerT3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_game2LayerT3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_glowLayerT2;
    CCNodeContainer* m_specialLayerT2;
    cocos2d::CCSpriteBatchNode* m_textLayerT2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_game2LayerT2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameLayerT1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_glowLayerT1;
    CCNodeContainer* m_specialLayerT1;
    cocos2d::CCSpriteBatchNode* m_textLayerT1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerT1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB0;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_gameLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_glowLayerB1;
    CCNodeContainer* m_specialLayerB1;
    cocos2d::CCSpriteBatchNode* m_textLayerB1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_glowLayerB2;
    CCNodeContainer* m_specialLayerB2;
    cocos2d::CCSpriteBatchNode* m_textLayerB2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_game2LayerB2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_glowLayerB3;
    CCNodeContainer* m_specialLayerB3;
    cocos2d::CCSpriteBatchNode* m_textLayerB3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_game2LayerB3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_glowLayerB4;
    CCNodeContainer* m_specialLayerB4;
    cocos2d::CCSpriteBatchNode* m_textLayerB4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_game2LayerB4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameLayerB5;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_glowLayerB5;
    CCNodeContainer* m_specialLayerB5;
    cocos2d::CCSpriteBatchNode* m_textLayerB5;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_game2LayerB5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB5;
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_collisionBlocks;
    cocos2d::CCArray* m_spawnObjectsArray;
    cocos2d::CCDictionary* m_spawnObjects;
    cocos2d::CCNode* m_unkdd0;
    gd::vector<GameObject*> m_unkdd8;
    gd::vector<GameObject*> m_disabledObjects;
    gd::vector<GameObject*> m_unke08;
    gd::vector<GameObject*> m_areaObjects;
    gd::vector<GameObject*> m_processedAreaObjects;
    gd::unordered_map<int, gd::vector<GameObject*>> m_visibilityGroups;
    gd::vector<GameObject*> m_visibleObjects;
    int m_visibleObjectsCount;
    int m_visibleObjectsIndex;
    gd::vector<GameObject*> m_visibleObjects2;
    int m_visibleObjects2Count;
    int m_visibleObjects2Index;
    int m_unked0;
    int m_disabledObjectsCount;
    int m_unked8;
    int m_areaObjectsCount;
    int m_processedAreaObjectsCount;
    int m_unkee4;
    int m_disabledObjectsIndex;
    int m_unkeec;
    int m_areaObjectsIndex;
    int m_processedAreaObjectsIndex;
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    gd::vector<cocos2d::CCArray*> m_groups;
    gd::vector<cocos2d::CCArray*> m_staticGroups;
    gd::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_parentGroupsDict;
    cocos2d::CCDictionary* m_parentGroupIDs;
    cocos2d::CCDictionary* m_removedParentGroupIDs;
    cocos2d::CCArray* m_targetGroupsArray;
    gd::unordered_map<int, std::pair<int, int>> m_targetGroups;
    cocos2d::CCDictionary* m_linkedGroupDict;
    int m_lastUsedLinkedID;
    cocos2d::CCNode* m_objectParent;
    cocos2d::CCNode* m_inShaderParent;
    cocos2d::CCNode* m_aboveShaderParent;
    cocos2d::CCLayer* m_objectLayer;
    cocos2d::CCLayer* m_inShaderObjectLayer;
    cocos2d::CCLayer* m_aboveShaderObjectLayer;
    cocos2d::CCSprite* m_background;
    void* m_unk1000;
    GJGroundLayer* m_groundLayer;
    GJGroundLayer* m_groundLayer2;
    GJMGLayer* m_middleground;
    cocos2d::CCArray* m_batchNodes;
    cocos2d::CCDictionary* m_objectsToDeactivate;
    gd::unordered_map<int, gd::vector<LabelGameObject*>> m_labelObjects;
    gd::unordered_map<int, gd::vector<LabelGameObject*>> m_timeLabelObjects;
    gd::set<std::tuple<int, int, int>> m_spawnTuples;
    bool m_increasedLayerCapacity;
    std::array<float, 2000> m_varianceValues;
    gd::map<std::pair<int, int>, std::pair<float, float>> m_destroyObjectValues;
    gd::vector<float> m_enterEasingValues;
    gd::unordered_map<int, int> m_enterEasingIndices;
    int m_enterEasingValuesIndex;
    bool m_dualTouchTrigger;
    int m_clicks;
    int m_attempts;
    bool m_jumping;
    int m_leftSectionIndex;
    int m_rightSectionIndex;
    int m_bottomSectionIndex;
    int m_topSectionIndex;
    bool m_isEditor;
    bool m_blending;
    bool m_isPlatformer;
    GameObject* m_player1CollisionBlock;
    GameObject* m_player2CollisionBlock;
    int m_particleCount;
    int m_customParticleCount;
    int m_particleSystemLimit;
    cocos2d::CCDictionary* m_particlesDict;
    cocos2d::CCDictionary* m_customParticles;
    cocos2d::CCArray* m_unclaimedParticles;
    gd::unordered_map<int, gd::string> m_particleCountToParticleString;
    cocos2d::CCDictionary* m_claimedParticles;
    cocos2d::CCArray* m_temporaryParticles;
    gd::unordered_set<int> m_customParticlesUIDs;
    cocos2d::CCDictionary* m_gradientLayers;
    int m_activeGradients;
    ShaderLayer* m_shaderLayer;
    bool m_objectsDeactivated;
    bool m_areaObjectsUpdated;
    StartPosObject* m_startPosObject;
    bool m_useReplay;
    bool m_unk3189;
    int m_solidCollisionObjectsCount;
    int m_solidCollisionObjectsIndex;
    gd::vector<GameObject*> m_solidCollisionObjects;
    int m_hazardCollisionObjectsCount;
    int m_hazardCollisionObjectsIndex;
    gd::vector<GameObject*> m_hazardCollisionObjects;
    gd::vector<SequenceTriggerGameObject*> m_sequenceTriggers;
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_loadingProgress;
    cocos2d::CCNode* m_flashNode;
    float m_unk31f8;
    float m_cameraFlip;
    float m_cameraWidthOffset;
    float m_cameraHeightOffset;
    bool m_updateGroundShadows;
    cocos2d::CCDictionary* m_collectedItems;
    float m_levelLength;
    bool m_resetActiveObjects;
    bool m_skipArtReload;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    bool m_freezeStartCamera;
    bool m_unk322a;
    float m_cameraUnzoomedHeightOffset;
    float m_targetCameraHeightOffset;
    bool m_calculateTargetHeightOffset;
    cocos2d::CCParticleSystemQuad* m_glitterParticles;
    bool m_staticCameraShake;
    bool m_skipCameraShake;
    bool m_playerDied;
    double m_extraDelta;
    bool m_started;
    bool m_unk3251;
    float m_cameraWidth;
    float m_cameraHeight;
    float m_cameraUnzoomedX;
    float m_halfCameraWidth;
    AudioEffectsLayer* m_audioEffectsLayer;
    OBB2D* m_cameraObb2;
    gd::vector<GameObject*> m_activeObjects;
    int m_activeObjectsCount;
    int m_activeObjectsIndex;
    cocos2d::ccColor3B m_lightBGColor;
    int m_resumeTimer;
    bool m_recordInputs;
    bool m_unk32a1;
    bool m_unk32a2;
    bool m_unk32a3;
    bool m_unk32a4;
    gd::string m_recordString;
    cocos2d::CCObject* m_unk32c8;
    int m_unk32d0;
    bool m_unk32d4;
    uint64_t m_randomSeed;
    uint64_t m_unk32e0;
    uint64_t m_replayRandSeed;
    int m_unk32ec;
    int m_currentStep;
    gd::vector<PlayerButtonCommand> m_queuedButtons;
    gd::vector<RecordButtonCommand> m_queuedRecordedButtons;
    gd::unordered_map<int, RecordCheckpoint> m_unk3330;
    int m_unk3370;
    gd::vector<RecordButtonCommand> m_queuedReplayButtons;
    gd::unordered_map<int, RecordCheckpoint> m_unk3390;
    gd::vector<void*> m_unk3340;
    gd::vector<void*> m_unk3358;
    int m_queuedRecordedButtonsSize;
    gd::string m_persistentStateString;
    gd::string m_savedPersistentStateString;
    int m_savedAttempts;
    bool m_portalIndicators;
    bool m_orbIndicators;
    cocos2d::CCArray* m_indicatorSprites;
    float m_unk3380;
    gd::vector<int> m_unk3388;
    gd::vector<int> m_unk33a0;
    bool m_hideGround;
    cocos2d::CCArray* m_unk33c0;
    cocos2d::CCArray* m_objectsToMove;
    gd::unordered_map<int, GameObject*> m_savePositionObjects;
    gd::unordered_map<int, int> m_savePositionValues;
    bool m_keepGroupParents;
    cocos2d::CCDictionary* m_keyframeGroups;
    int m_keyframeGroup;
    UILayer* m_uiLayer;
    cocos2d::CCArray* m_uiObjects;
    cocos2d::CCDictionary* m_uiObjectLayers;
    cocos2d::CCNode* m_uiTriggerUI;
    double m_timePlayed;
    int m_tickIndex;
    int m_clickIndex;
    bool m_levelEndAnimationStarted;
    int m_points;
    gd::string m_pointsString;
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_sections;
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_nonEffectObjects;
    gd::vector<gd::vector<GameObject*>*> m_collisionBlockSections;
    gd::vector<GameObject*> m_calcNonEffectObjects;
    int m_calcNonEffectObjectsSize;
    gd::vector<GameObject*> m_calcCollisionBlockObjects;
    int m_calcCollisionBlockObjectsSize;
    gd::vector<GameObject*> m_calcCollisionBlockObjects2;
    int m_calcCollisionBlockObjects2Size;
    gd::vector<gd::vector<int>*> m_sectionSizes;
    gd::vector<gd::vector<int>*> m_nonEffectObjectsSizes;
    gd::vector<gd::vector<int>*> m_collisionBlockSectionSizes;
    gd::vector<gd::vector<bool>*> m_nonEffectObjectsFlags;
    float m_sectionXFactor;
    float m_sectionYFactor;
    float m_maxGameplayY;
    float m_songTriggerInterval;
    gd::unordered_map<int, int> m_stickyGroups;
    FMODLevelVisualizer* m_audioVisualizerBG;
    FMODLevelVisualizer* m_audioVisualizerSFX;
    bool m_showAudioVisualizer;
    int m_areaMovedCount;
    int m_areaScaledCount;
    int m_areaRotatedCount;
    int m_areaColorCount;
    int m_areaMovedCountTotal;
    int m_areaScaledCountTotal;
    int m_areaRotatedCountTotal;
    int m_areaColorCountTotal;
    int m_movedCount;
    int m_scaledCount;
    int m_rotatedCount;
    int m_followedCount;
    int m_areaMovedCountDisplay;
    int m_areaScaledCountDisplay;
    int m_areaRotatedCountDisplay;
    int m_areaColorCountDisplay;
    int m_areaMovedCountTotalDisplay;
    int m_areaScaledCountTotalDisplay;
    int m_areaRotatedCountTotalDisplay;
    int m_areaColorCountTotalDisplay;
    int m_movedCountDisplay;
    int m_scaledCountDisplay;
    int m_rotatedCountDisplay;
    int m_followedCountDisplay;
    bool m_loadingStartPosition;
    bool m_processingAudioTriggers;
    bool m_audioPaused;
    bool m_startOptimization;
    GJGameLoadingLayer* m_loadingLayer;
    cocos2d::CCDrawNode* m_debugDrawNode;
    std::array<cocos2d::CCPoint, 400>* m_debugDrawPoints;
    bool m_isDebugDrawEnabled;
    bool m_disablePlayerHitbox;
    bool m_hitboxesOnDeath;
    GameObject* m_anticheatSpike;
    double m_timestamp;
    bool m_isBetweenSteps;
    bool m_clickBetweenSteps;
    bool m_clickOnSteps;
};
