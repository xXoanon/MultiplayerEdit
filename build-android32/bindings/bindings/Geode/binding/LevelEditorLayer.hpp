#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "LevelSettingsDelegate.hpp"

class LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelEditorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelEditorLayer, GJBaseGameLayer)

    /**
     * @note[short] MacOS (ARM): 0xe3860
     * @note[short] MacOS (Intel): 0x1050c0
     * @note[short] Windows: 0x2d0b50
     * @note[short] iOS: 0x36c620
     * @note[short] Android: Rebinded
     */
     LevelEditorLayer();

    /**
     * @note[short] MacOS (ARM): 0xc1344
     * @note[short] MacOS (Intel): 0xdae60
     * @note[short] Windows: 0x2d1d40
     * @note[short] iOS: 0x356b30
     * @note[short] Android
     */
    static LevelEditorLayer* create(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static LevelEditorLayer* get();

    /**
     * @note[short] MacOS (ARM): 0xc1294
     * @note[short] MacOS (Intel): 0xdadc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x356acc
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): 0xcde90
     * @note[short] MacOS (Intel): 0xe9d80
     * @note[short] Windows: 0x2d7660
     * @note[short] iOS: 0x35de00
     * @note[short] Android
     */
    static void updateObjectLabel(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdf7c0
     * @note[short] MacOS (Intel): 0x1006b0
     * @note[short] Windows: 0x2e88d0
     * @note[short] iOS: 0x369268
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xd6144
     * @note[short] MacOS (Intel): 0xf3420
     * @note[short] Windows: 0x2e0f40
     * @note[short] iOS: 0x36365c
     * @note[short] Android
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): 0xcea74
     * @note[short] MacOS (Intel): 0xeac30
     * @note[short] Windows: 0x2d8e70
     * @note[short] iOS: 0x35e86c
     * @note[short] Android
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0xd6130
     * @note[short] MacOS (Intel): 0xf3400
     * @note[short] Windows: 0x2e0f30
     * @note[short] iOS: 0x363648
     * @note[short] Android
     */
    virtual void playerTookDamage(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0xd3628
     * @note[short] MacOS (Intel): 0xf0400
     * @note[short] Windows: 0x2dda10
     * @note[short] iOS: 0x361868
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0xddfe0
     * @note[short] MacOS (Intel): 0xfe560
     * @note[short] Windows: 0x2e6c70
     * @note[short] iOS: 0x367cfc
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xd3dd0
     * @note[short] MacOS (Intel): 0xf0c80
     * @note[short] Windows: 0x2dea00
     * @note[short] iOS: 0x361c50
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* object, int groupID, bool triggerGroup);

    /**
     * @note[short] MacOS (ARM): 0xd3e88
     * @note[short] MacOS (Intel): 0xf0d30
     * @note[short] Windows: 0x2deb60
     * @note[short] iOS: 0x361cd8
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xd4dd8
     * @note[short] MacOS (Intel): 0xf1e30
     * @note[short] Windows: 0x2df930
     * @note[short] iOS: 0x362898
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd4ee4
     * @note[short] MacOS (Intel): 0xf1f70
     * @note[short] Windows: 0x2dfbe0
     * @note[short] iOS: 0x362998
     * @note[short] Android
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd38c8
     * @note[short] MacOS (Intel): 0xf0700
     * @note[short] Windows: 0x2de7f0
     * @note[short] iOS: 0x361a74
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): 0xd3954
     * @note[short] MacOS (Intel): 0xf0790
     * @note[short] Windows: 0x2de8a0
     * @note[short] iOS: 0x361ae4
     * @note[short] Android
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xd3994
     * @note[short] MacOS (Intel): 0xf0830
     * @note[short] Windows: 0x2de910
     * @note[short] iOS: 0x361b04
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0xd4bd8
     * @note[short] MacOS (Intel): 0xf1c10
     * @note[short] Windows: 0x2df8c0
     * @note[short] iOS: 0x362744
     * @note[short] Android
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0xcf5c0
     * @note[short] MacOS (Intel): 0xeb7f0
     * @note[short] Windows: 0x2d9e70
     * @note[short] iOS: 0x35f200
     * @note[short] Android
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd6fe8
     * @note[short] MacOS (Intel): 0xf4360
     * @note[short] Windows: 0x2e16d0
     * @note[short] iOS: 0x364154
     * @note[short] Android: Rebinded
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0xd70b8
     * @note[short] MacOS (Intel): 0xf4410
     * @note[short] Windows: 0x2e1790
     * @note[short] iOS: 0x364224
     * @note[short] Android: Rebinded
     */
    virtual void unclaimCustomParticle(gd::string const& key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0xd606c
     * @note[short] MacOS (Intel): 0xf3320
     * @note[short] Windows: 0x2e0e30
     * @note[short] iOS: 0x363584
     * @note[short] Android
     */
    virtual void activatedAudioTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd6084
     * @note[short] MacOS (Intel): 0xf3350
     * @note[short] Windows: 0x2e0e60
     * @note[short] iOS: 0x36359c
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd70f8
     * @note[short] MacOS (Intel): 0xf4450
     * @note[short] Windows: 0x2e17d0
     * @note[short] iOS: 0x364264
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc4c10
     * @note[short] MacOS (Intel): 0xdeec0
     * @note[short] Windows: 0x2d3720
     * @note[short] iOS: 0x35932c
     * @note[short] Android
     */
    virtual void levelSettingsUpdated();

    /**
     * @note[short] MacOS (ARM): 0xd2940
     * @note[short] MacOS (Intel): 0xef370
     * @note[short] Windows: 0x2dcf40
     * @note[short] iOS: 0x360db4
     * @note[short] Android
     */
    bool activateTriggerEffect(EffectGameObject* object, float currentTime, float playTime, float boundTime, bool active);

    /**
     * @note[short] MacOS (ARM): 0xd3278
     * @note[short] MacOS (Intel): 0xeff70
     * @note[short] Windows: 0x2dd790
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDelayedSpawn(EffectGameObject* object, float delay);

    /**
     * @note[short] MacOS (ARM): 0xcfe0c
     * @note[short] MacOS (Intel): 0xec040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void addExclusionList(const gd::unordered_set<int>& excludes, gd::unordered_set<int>& groups);

    /**
     * @note[short] MacOS (ARM): 0xc4fdc
     * @note[short] MacOS (Intel): 0xdf2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x359690
     * @note[short] Android: Rebinded
     */
    GameObject* addObjectFromVector(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0xc7708
     * @note[short] MacOS (Intel): 0xe1cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectsAtPosition(cocos2d::CCPoint position, cocos2d::CCArray* objects, cocos2d::CCArray* result);

    /**
     * @note[short] MacOS (ARM): 0xc78b8
     * @note[short] MacOS (Intel): 0xe1ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectsInRect(cocos2d::CCRect rect, bool ignoreGroups, cocos2d::CCArray* objects, cocos2d::CCArray* result);

    /**
     * @note[short] MacOS (ARM): 0xd3d60
     * @note[short] MacOS (Intel): 0xf0c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x361be0
     * @note[short] Android
     */
    void addObjectToGroup(GameObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0xd642c
     * @note[short] MacOS (Intel): 0xf3710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363864
     * @note[short] Android
     */
    void addPlayer2Point(cocos2d::CCPoint point, bool newGroup);

    /**
     * @note[short] MacOS (ARM): 0xd4abc
     * @note[short] MacOS (Intel): 0xf1a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0xd63c8
     * @note[short] MacOS (Intel): 0xf36b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPlayerPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0xc58b8
     * @note[short] MacOS (Intel): 0xdfce0
     * @note[short] Windows: 0x2d7bc0
     * @note[short] iOS: 0x359c14
     * @note[short] Android
     */
    void addSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc83ac
     * @note[short] MacOS (Intel): 0xe2b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35bc34
     * @note[short] Android
     */
    void addToRedoList(UndoObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd4c6c
     * @note[short] MacOS (Intel): 0xf1ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addTouchPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0xc5764
     * @note[short] MacOS (Intel): 0xdfb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x359b30
     * @note[short] Android
     */
    void addToUndoList(UndoObject* object, bool keepRedo);

    /**
     * @note[short] MacOS (ARM): 0xd1b6c
     * @note[short] MacOS (Intel): 0xee240
     * @note[short] Android: Rebinded
     */
    void addTriggersWithGroupID(gd::unordered_set<int>& sourceIDs, cocos2d::CCArray* triggers, gd::unordered_map<int, int>& remap, int objectID);

    /**
     * @note[short] MacOS (ARM): 0xd17f0
     * @note[short] MacOS (Intel): 0xedd00
     * @note[short] Android: Rebinded
     */
    void addTriggersWithTargetGroupID(gd::unordered_set<int>& sourceIDs, gd::unordered_set<int>& targetIDs, cocos2d::CCArray* triggers, gd::unordered_map<int, int>& remap, int objectID);

    /**
     * @note[short] MacOS (ARM): 0xd69f4
     * @note[short] MacOS (Intel): 0xf3cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void applyAttributeState(GameObject* dest, GameObject* src);

    /**
     * @note[short] MacOS (ARM): 0xd67cc
     * @note[short] MacOS (Intel): 0xf3af0
     * @note[short] Windows: 0x2e13d0
     * @note[short] iOS: 0x363af4
     * @note[short] Android
     */
    void applyGroupState(GameObject* dest, GameObject* src);

    /**
     * @note[short] MacOS (ARM): 0xd46f0
     * @note[short] MacOS (Intel): 0xf16c0
     * @note[short] Windows: 0x2df5b0
     * @note[short] iOS: 0x3623fc
     * @note[short] Android
     */
    void breakApartTextObject(TextGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd65b8
     * @note[short] MacOS (Intel): 0xf38d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3639ac
     * @note[short] Android
     */
    bool canPasteState();

    /**
     * @note[short] MacOS (ARM): 0xd57f4
     * @note[short] MacOS (Intel): 0xf29c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearPlayerPoints();

    /**
     * @note[short] MacOS (ARM): 0xd585c
     * @note[short] MacOS (Intel): 0xf2a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearTouchPoints();

    /**
     * @note[short] MacOS (ARM): 0xd65c8
     * @note[short] MacOS (Intel): 0xf38f0
     * @note[short] Windows: 0x2e1230
     * @note[short] iOS: 0x3639bc
     * @note[short] Android
     */
    void copyObjectState(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd6bb8
     * @note[short] MacOS (Intel): 0xf3ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363d94
     * @note[short] Android
     */
    void copyParticleState(ParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc5e74
     * @note[short] MacOS (Intel): 0xe02d0
     * @note[short] Windows: 0x2d46a0
     * @note[short] iOS: 0x35a0ac
     * @note[short] Android
     */
    GameObject* createObject(int key, cocos2d::CCPoint position, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0xc2f4c
     * @note[short] MacOS (Intel): 0xdcc90
     * @note[short] Windows: 0x2d3800
     * @note[short] iOS: 0x357db0
     * @note[short] Android: Rebinded
     */
    void createObjectsFromSetup(gd::string& setup);

    /**
     * @note[short] MacOS (ARM): 0xc5090
     * @note[short] MacOS (Intel): 0xdf360
     * @note[short] Windows: 0x2d4020
     * @note[short] iOS: 0x359730
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createObjectsFromString(gd::string const& str, bool noUndo, bool noLimit);

    /**
     * @note[short] MacOS (ARM): 0xd4cd0
     * @note[short] MacOS (Intel): 0xf1d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x362794
     * @note[short] Android
     */
    void dirtifyTriggers();

    /**
     * @note[short] MacOS (ARM): 0xd710c
     * @note[short] MacOS (Intel): 0xf4470
     * @note[short] Windows: 0x2e1880
     * @note[short] iOS: 0x364278
     * @note[short] Android
     */
    cocos2d::CCArray* duplicateKeyframeAnimation(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xd38b4
     * @note[short] MacOS (Intel): 0xf06d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fastUpdateDisabledGroups();

    /**
     * @note[short] MacOS (ARM): 0xc7abc
     * @note[short] MacOS (Intel): 0xe2130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35b4e8
     * @note[short] Android
     */
    GameObject* findGameObject(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0xd4ce8
     * @note[short] MacOS (Intel): 0xf1d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3627ac
     * @note[short] Android
     */
    StartPosObject* findStartPosObject();

    /**
     * @note[short] MacOS (ARM): 0xce9c4
     * @note[short] MacOS (Intel): 0xeab50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e7d0
     * @note[short] Android
     */
    void forceShowSelectedObjects(bool show);

    /**
     * @note[short] MacOS (ARM): 0xd38b0
     * @note[short] MacOS (Intel): 0xf06c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fullUpdateDisabledGroups();

    /**
     * @note[short] MacOS (ARM): 0xc7ab4
     * @note[short] MacOS (Intel): 0xe2120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35b4e0
     * @note[short] Android
     */
    cocos2d::CCArray* getAllObjects();

    /**
     * @note[short] MacOS (ARM): 0xd3504
     * @note[short] MacOS (Intel): 0xf0280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x361800
     * @note[short] Android
     */
    DelayedSpawnNode* getDelayedSpawnNode();

    /**
     * @note[short] MacOS (ARM): 0xc6530
     * @note[short] MacOS (Intel): 0xe09e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getGridPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xd39d4
     * @note[short] MacOS (Intel): 0xf0880
     * @note[short] Windows: 0x2de960
     * @note[short] iOS: 0x361b44
     * @note[short] Android
     */
    float getLastObjectX();

    /**
     * @note[short] MacOS (ARM): 0xc8c34
     * @note[short] MacOS (Intel): 0xe3470
     * @note[short] Windows: 0x2d6c50
     * @note[short] iOS: 0x35c378
     * @note[short] Android
     */
    gd::string getLevelString();

    /**
     * @note[short] MacOS (ARM): 0xccfb0
     * @note[short] MacOS (Intel): 0xe8b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35d5a4
     * @note[short] Android
     */
    gd::string getLockedLayers();

    /**
     * @note[short] MacOS (ARM): 0xd1260
     * @note[short] MacOS (Intel): 0xed670
     * @note[short] Windows: 0x2db070
     * @note[short] iOS: 0x36029c
     * @note[short] Android
     */
    int getNextColorChannel();

    /**
     * @note[short] MacOS (ARM): 0xd09d0
     * @note[short] MacOS (Intel): 0xeccf0
     * @note[short] Windows: 0x2dae50
     * @note[short] iOS: 0x35fe7c
     * @note[short] Android: Rebinded
     */
    int getNextFreeAreaEffectID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd00b0
     * @note[short] MacOS (Intel): 0xec310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35f9f4
     * @note[short] Android: Rebinded
     */
    int getNextFreeBlockID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd053c
     * @note[short] MacOS (Intel): 0xec810
     * @note[short] Windows: 0x2dabf0
     * @note[short] iOS: 0x35fc38
     * @note[short] Android: Rebinded
     */
    int getNextFreeEditorLayer(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd077c
     * @note[short] MacOS (Intel): 0xeca80
     * @note[short] Windows: 0x2dad20
     * @note[short] iOS: 0x35fd54
     * @note[short] Android: Rebinded
     */
    int getNextFreeEnterChannel(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd1040
     * @note[short] MacOS (Intel): 0xed410
     * @note[short] Windows: 0x2daf60
     * @note[short] iOS: 0x360198
     * @note[short] Android: Rebinded
     */
    int getNextFreeGradientID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xcfaf8
     * @note[short] MacOS (Intel): 0xebcf0
     * @note[short] Windows: 0x2da7a0
     * @note[short] iOS: 0x35f6f4
     * @note[short] Android: Rebinded
     */
    int getNextFreeGroupID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xcfe48
     * @note[short] MacOS (Intel): 0xec080
     * @note[short] Windows: 0x2da980
     * @note[short] iOS: 0x35f8b8
     * @note[short] Android: Rebinded
     */
    int getNextFreeItemID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd02dc
     * @note[short] MacOS (Intel): 0xec580
     * @note[short] Windows: 0x2daab0
     * @note[short] iOS: 0x35fb04
     * @note[short] Android: Rebinded
     */
    int getNextFreeOrderChannel(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd0e18
     * @note[short] MacOS (Intel): 0xed1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36008c
     * @note[short] Android: Rebinded
     */
    int getNextFreeSFXGroupID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xd0bf0
     * @note[short] MacOS (Intel): 0xecf50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35ff80
     * @note[short] Android: Rebinded
     */
    int getNextFreeSFXID(const gd::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xc7010
     * @note[short] MacOS (Intel): 0xe1530
     * @note[short] Windows: 0x2d5800
     * @note[short] iOS: 0x35ae90
     * @note[short] Android
     */
    cocos2d::CCRect getObjectRect(GameObject* object, bool forceSize, bool dontCalculate);

    /**
     * @note[short] MacOS (ARM): 0xc7874
     * @note[short] MacOS (Intel): 0xe1e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xcda3c
     * @note[short] MacOS (Intel): 0xe9800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35db9c
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedEditorPosition(int index);

    /**
     * @note[short] MacOS (ARM): 0xcda64
     * @note[short] MacOS (Intel): 0xe9840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35dbc4
     * @note[short] Android
     */
    gd::string getSavedEditorPositions();

    /**
     * @note[short] MacOS (ARM): 0xcddb0
     * @note[short] MacOS (Intel): 0xe9c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35dd20
     * @note[short] Android
     */
    int getSectionCount();

    /**
     * @note[short] MacOS (ARM): 0xd2290
     * @note[short] MacOS (Intel): 0xeeb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x360870
     * @note[short] Android
     */
    int getSelectedEditorOrder();

    /**
     * @note[short] MacOS (ARM): 0xd22c8
     * @note[short] MacOS (Intel): 0xeebd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3608a4
     * @note[short] Android
     */
    cocos2d::CCPoint getSelectedEffectPos();

    /**
     * @note[short] MacOS (ARM): 0xd2258
     * @note[short] MacOS (Intel): 0xeeb50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36083c
     * @note[short] Android
     */
    int getSelectedOrderChannel();

    /**
     * @note[short] MacOS (ARM): 0xcd66c
     * @note[short] MacOS (Intel): 0xe9340
     * @note[short] Windows: 0x2d7360
     * @note[short] iOS: 0x35d964
     * @note[short] Android
     */
    gd::string getSFXIDs();

    /**
     * @note[short] MacOS (ARM): 0xcd214
     * @note[short] MacOS (Intel): 0xe8df0
     * @note[short] Windows: 0x2d6fb0
     * @note[short] iOS: 0x35d6f0
     * @note[short] Android
     */
    gd::string getSongIDs(bool& multipleSongs);

    /**
     * @note[short] MacOS (ARM): 0xd371c
     * @note[short] MacOS (Intel): 0xf0500
     * @note[short] Windows: 0x2decb0
     * @note[short] iOS: 0x36195c
     * @note[short] Android
     */
    cocos2d::CCArray* getTriggerGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0xc8444
     * @note[short] MacOS (Intel): 0xe2b90
     * @note[short] Windows: 0x2d6550
     * @note[short] iOS: 0x35bccc
     * @note[short] Android
     */
    void handleAction(bool undo, cocos2d::CCArray* undoObjects);

    /**
     * @note[short] MacOS (ARM): 0xc8414
     * @note[short] MacOS (Intel): 0xe2b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35bc9c
     * @note[short] Android
     */
    bool hasAction(bool redo);

    /**
     * @note[short] MacOS (ARM): 0xc13d8
     * @note[short] MacOS (Intel): 0xdaed0
     * @note[short] Windows: 0x2d1dd0
     * @note[short] iOS: 0x356bb4
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): 0xcde14
     * @note[short] MacOS (Intel): 0xe9cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35dd84
     * @note[short] Android
     */
    bool isLayerLocked(int layer);

    /**
     * @note[short] MacOS (ARM): 0xc6d04
     * @note[short] MacOS (Intel): 0xe11f0
     * @note[short] Windows: 0x2d5050
     * @note[short] iOS: 0x35ac30
     * @note[short] Android
     */
    GameObject* objectAtPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xce53c
     * @note[short] MacOS (Intel): 0xea3d0
     * @note[short] iOS: 0x35e3a4
     * @note[short] Android
     */
    void objectMoved(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc73f0
     * @note[short] MacOS (Intel): 0xe1970
     * @note[short] Windows: 0x2d5410
     * @note[short] iOS: 0x35b26c
     * @note[short] Android
     */
    cocos2d::CCArray* objectsAtPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xc6790
     * @note[short] MacOS (Intel): 0xe0c70
     * @note[short] Windows: 0x2d5ca0
     * @note[short] iOS: 0x35a8d0
     * @note[short] Android
     */
    cocos2d::CCArray* objectsInRect(cocos2d::CCRect rect, bool ignoreGroups);

    /**
     * @note[short] MacOS (ARM): 0xd5868
     * @note[short] MacOS (Intel): 0xf2a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363018
     * @note[short] Android
     */
    void onPausePlaytest();

    /**
     * @note[short] MacOS (ARM): 0xd5074
     * @note[short] MacOS (Intel): 0xf2190
     * @note[short] Windows: 0x2dfcd0
     * @note[short] iOS: 0x362a68
     * @note[short] Android
     */
    void onPlaytest();

    /**
     * @note[short] MacOS (ARM): 0xd5a0c
     * @note[short] MacOS (Intel): 0xf2c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3630d8
     * @note[short] Android
     */
    void onResumePlaytest();

    /**
     * @note[short] MacOS (ARM): 0xd5b3c
     * @note[short] MacOS (Intel): 0xf2d60
     * @note[short] Windows: 0x2e0630
     * @note[short] iOS: 0x363204
     * @note[short] Android
     */
    void onStopPlaytest();

    /**
     * @note[short] MacOS (ARM): 0xd691c
     * @note[short] MacOS (Intel): 0xf3c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363c38
     * @note[short] Android
     */
    void pasteAttributeState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd6884
     * @note[short] MacOS (Intel): 0xf3b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363ba4
     * @note[short] Android
     */
    void pasteColorState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd6a24
     * @note[short] MacOS (Intel): 0xf3d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363d10
     * @note[short] Android
     */
    void pasteGroupState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd6d88
     * @note[short] MacOS (Intel): 0xf40a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363f00
     * @note[short] Android
     */
    void pasteParticleState(ParticleGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd3a74
     * @note[short] MacOS (Intel): 0xf0920
     * @note[short] Android
     */
    void processLoadedMoveActions();

    /**
     * @note[short] MacOS (ARM): 0xd4dfc
     * @note[short] MacOS (Intel): 0xf1e60
     * @note[short] Windows: 0x2dfa60
     * @note[short] iOS: 0x3628bc
     * @note[short] Android
     */
    void quickUpdateAllPositions();

    /**
     * @note[short] MacOS (ARM): 0xd3f10
     * @note[short] MacOS (Intel): 0xf0db0
     * @note[short] Windows: 0x2ded10
     * @note[short] iOS: 0x361d38
     * @note[short] Android
     */
    void recreateGroups();

    /**
     * @note[short] MacOS (ARM): 0xc8c1c
     * @note[short] MacOS (Intel): 0xe3430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35c360
     * @note[short] Android
     */
    void redoLastAction();

    /**
     * @note[short] MacOS (ARM): 0xce74c
     * @note[short] MacOS (Intel): 0xea8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e5b4
     * @note[short] Android
     */
    void refreshSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc7fe0
     * @note[short] MacOS (Intel): 0xe26c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35b968
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS (ARM): 0xc80e0
     * @note[short] MacOS (Intel): 0xe27e0
     * @note[short] Windows: 0x2d62c0
     * @note[short] iOS: 0x35ba68
     * @note[short] Android
     */
    void removeAllObjectsOfType(int objectID);

    /**
     * @note[short] MacOS (ARM): 0xc7b04
     * @note[short] MacOS (Intel): 0xe2180
     * @note[short] Windows: 0x2d6180
     * @note[short] iOS: 0x35b530
     * @note[short] Android
     */
    void removeObject(GameObject* object, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0xc2f08
     * @note[short] MacOS (Intel): 0xdcc50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x357d6c
     * @note[short] Android
     */
    void removePlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0xc7bd4
     * @note[short] MacOS (Intel): 0xe2250
     * @note[short] Windows: 0x2d8310
     * @note[short] iOS: 0x35b5bc
     * @note[short] Android
     */
    void removeSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd2470
     * @note[short] MacOS (Intel): 0xeed70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x360a38
     * @note[short] Android
     */
    void resetDelayedSpawnNodes();

    /**
     * @note[short] MacOS (ARM): 0xd49f4
     * @note[short] MacOS (Intel): 0xf19b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x362684
     * @note[short] Android
     */
    void resetEffectTriggerOptim(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd4164
     * @note[short] MacOS (Intel): 0xf10a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x361ee4
     * @note[short] Android
     */
    void resetMovingObjects();

    /**
     * @note[short] MacOS (ARM): 0xd38b8
     * @note[short] MacOS (Intel): 0xf06e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetObjectVector();

    /**
     * @note[short] MacOS (ARM): 0xd2304
     * @note[short] MacOS (Intel): 0xeec20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3608dc
     * @note[short] Android
     */
    void resetPlayback();

    /**
     * @note[short] MacOS (ARM): 0xd1ef4
     * @note[short] MacOS (Intel): 0xee730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0xd3784
     * @note[short] MacOS (Intel): 0xf0560
     * @note[short] Windows: 0x2de610
     * @note[short] iOS: 0x3619b4
     * @note[short] Android
     */
    void resetToggledGroupsAndObjects();

    /**
     * @note[short] MacOS (ARM): 0xd153c
     * @note[short] MacOS (Intel): 0xed9c0
     * @note[short] Windows: 0x2db440
     * @note[short] iOS: 0x360448
     * @note[short] Android
     */
    void resetUnusedColorChannels();

    /**
     * @note[short] MacOS (ARM): 0xd71ec
     * @note[short] MacOS (Intel): 0xf4550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x364358
     * @note[short] Android
     */
    void reverseKeyframeAnimationOrder(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xd381c
     * @note[short] MacOS (Intel): 0xf0620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x361a4c
     * @note[short] Android
     */
    void reverseObjectChanged(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc65fc
     * @note[short] MacOS (Intel): 0xe0af0
     * @note[short] Windows: 0x2d4ec0
     * @note[short] iOS: 0x35a740
     * @note[short] Android
     */
    float rotationForSlopeNearObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd305c
     * @note[short] MacOS (Intel): 0xefd10
     * @note[short] Windows: 0x2dd870
     * @note[short] iOS: 0x3614a0
     * @note[short] Android
     */
    ColorAction* runColorEffect(EffectGameObject* object, int colorID, float delay, float interval, bool instant);

    /**
     * @note[short] MacOS (ARM): 0xcda24
     * @note[short] MacOS (Intel): 0xe97d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35db84
     * @note[short] Android
     */
    void saveEditorPosition(cocos2d::CCPoint& position, int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setObjectCount(int count);

    /**
     * @note[short] MacOS (ARM): 0xc4bcc
     * @note[short] MacOS (Intel): 0xdee80
     * @note[short] Windows: 0x2d36d0
     * @note[short] iOS: 0x3592e8
     * @note[short] Android
     */
    bool shouldBlend(int colorID);

    /**
     * @note[short] MacOS (ARM): 0xce8bc
     * @note[short] MacOS (Intel): 0xeaa50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e6c8
     * @note[short] Android
     */
    void sortBatchnodeChildren(float unused);

    /**
     * @note[short] MacOS (ARM): 0xd2588
     * @note[short] MacOS (Intel): 0xeef00
     * @note[short] Windows: 0x2ddf40
     * @note[short] iOS: 0x360a9c
     * @note[short] Android
     */
    void spawnGroupPreview(int groupID, float xPos, float delay, float currentTime, float playTime, float boundTime, bool ordered, bool active);

    /**
     * @note[short] MacOS (ARM): 0xd4a9c
     * @note[short] MacOS (Intel): 0xf1a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x362724
     * @note[short] Android
     */
    void stopPlayback();

    /**
     * @note[short] MacOS (ARM): 0xd32d0
     * @note[short] MacOS (Intel): 0xeffc0
     * @note[short] Windows: 0x2ddb80
     * @note[short] iOS: 0x3616a0
     * @note[short] Android
     */
    void stopTriggersInGroup(int id, float delay);

    /**
     * @note[short] MacOS (ARM): 0xd38a0
     * @note[short] MacOS (Intel): 0xf06b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x361a64
     * @note[short] Android
     */
    void timeObjectChanged();

    /**
     * @note[short] MacOS (ARM): 0xd2060
     * @note[short] MacOS (Intel): 0xee8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleBackground(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xd2078
     * @note[short] MacOS (Intel): 0xee8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGrid(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xc4990
     * @note[short] MacOS (Intel): 0xdec60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x359214
     * @note[short] Android
     */
    void toggleGround(bool enable);

    /**
     * @note[short] MacOS (ARM): 0xd3164
     * @note[short] MacOS (Intel): 0xefe50
     * @note[short] Windows: 0x2de340
     * @note[short] iOS: 0x3615b4
     * @note[short] Android
     */
    void toggleGroupPreview(int id, bool enable);

    /**
     * @note[short] MacOS (ARM): 0xcddc4
     * @note[short] MacOS (Intel): 0xe9ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35dd34
     * @note[short] Android
     */
    void toggleLockActiveLayer();

    /**
     * @note[short] MacOS (ARM): 0xd2088
     * @note[short] MacOS (Intel): 0xee910
     * @note[short] Windows: 0x2dbde0
     * @note[short] iOS: 0x360670
     * @note[short] Android
     */
    void transferDefaultColors(GJEffectManager* src, GJEffectManager* dest);

    /**
     * @note[short] MacOS (ARM): 0xd4b7c
     * @note[short] MacOS (Intel): 0xf1b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerFollowCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd4ba8
     * @note[short] MacOS (Intel): 0xf1bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerPlayerFollowCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd4b10
     * @note[short] MacOS (Intel): 0xf1ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerRotateCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce370
     * @note[short] MacOS (Intel): 0xea240
     * @note[short] Windows: 0x2d8900
     * @note[short] iOS: 0x35e2ac
     * @note[short] Android
     */
    bool tryUpdateSpeedObject(EffectGameObject* object, bool noPreview);

    /**
     * @note[short] MacOS (ARM): 0xc6150
     * @note[short] MacOS (Intel): 0xe05c0
     * @note[short] Windows: 0x2d4a50
     * @note[short] iOS: 0x35a2dc
     * @note[short] Android
     */
    bool typeExistsAtPosition(int objectID, cocos2d::CCPoint position, bool flipX, bool flipY, float rotation);

    /**
     * @note[short] MacOS (ARM): 0xc8c28
     * @note[short] MacOS (Intel): 0xe3450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35c36c
     * @note[short] Android
     */
    void undoLastAction();

    /**
     * @note[short] MacOS (ARM): 0xcde58
     * @note[short] MacOS (Intel): 0xe9d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35ddc8
     * @note[short] Android
     */
    void unlockAllLayers();

    /**
     * @note[short] MacOS (ARM): 0xc4908
     * @note[short] MacOS (Intel): 0xdebe0
     * @note[short] Windows: 0x2e14a0
     * @note[short] iOS: 0x359194
     * @note[short] Android
     */
    void updateAnimateOnTriggerObjects(bool animate);

    /**
     * @note[short] MacOS (ARM): 0xc49ac
     * @note[short] MacOS (Intel): 0xdec90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateArt(float dt);

    /**
     * @note[short] MacOS (ARM): 0xd2f54
     * @note[short] MacOS (Intel): 0xefc60
     * @note[short] Windows: 0x2de6b0
     * @note[short] iOS: 0x3613a8
     * @note[short] Android
     */
    void updateBlendValues();

    /**
     * @note[short] MacOS (ARM): 0xc36ac
     * @note[short] MacOS (Intel): 0xdd580
     * @note[short] Windows: 0x2d8aa0
     * @note[short] iOS: 0x3582ac
     * @note[short] Android
     */
    void updateEditor(float dt);

    /**
     * @note[short] MacOS (ARM): 0xc45dc
     * @note[short] MacOS (Intel): 0xde890
     * @note[short] Windows: 0x2db7a0
     * @note[short] iOS: 0x358ef4
     * @note[short] Android
     */
    void updateEditorMode();

    /**
     * @note[short] MacOS (ARM): 0xc3acc
     * @note[short] MacOS (Intel): 0xdd990
     * @note[short] Windows: 0x2dc110
     * @note[short] iOS: 0x3585a0
     * @note[short] Android
     */
    void updateGameObjects();

    /**
     * @note[short] MacOS (ARM): 0xce90c
     * @note[short] MacOS (Intel): 0xeaaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e718
     * @note[short] Android
     */
    void updateGridLayer();

    /**
     * @note[short] MacOS (ARM): 0xc4b14
     * @note[short] MacOS (Intel): 0xdedd0
     * @note[short] Windows: 0x2d3620
     * @note[short] iOS: 0x359230
     * @note[short] Android
     */
    void updateGridLayerParent();

    /**
     * @note[short] MacOS (ARM): 0xcf544
     * @note[short] MacOS (Intel): 0xeb770
     * @note[short] Windows: 0x2e1b00
     * @note[short] iOS: 0x35f18c
     * @note[short] Android
     */
    void updateKeyframeObjects();

    /**
     * @note[short] MacOS (ARM): 0xd7224
     * @note[short] MacOS (Intel): 0xf4590
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateKeyframeVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xd4208
     * @note[short] MacOS (Intel): 0xf1140
     * @note[short] Windows: 0x2df070
     * @note[short] iOS: 0x361f88
     * @note[short] Android
     */
    void updateLevelFont(int index);

    /**
     * @note[short] MacOS (ARM): 0xcf5f8
     * @note[short] MacOS (Intel): 0xeb820
     * @note[short] Windows: 0x2d9f00
     * @note[short] iOS: 0x35f238
     * @note[short] Android
     */
    void updateObjectColors(cocos2d::CCArray* gameObjects);

    /**
     * @note[short] MacOS (ARM): 0xc2618
     * @note[short] MacOS (Intel): 0xdc310
     * @note[short] Windows: 0x2d2f60
     * @note[short] iOS: 0x357894
     * @note[short] Android
     */
    void updateOptions();

    /**
     * @note[short] MacOS (ARM): 0xd6f04
     * @note[short] MacOS (Intel): 0xf4280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x364078
     * @note[short] Android
     */
    void updatePreviewAnim();

    /**
     * @note[short] MacOS (ARM): 0xce26c
     * @note[short] MacOS (Intel): 0xea170
     * @note[short] Windows: 0x2e1640
     * @note[short] iOS: 0x35e1c8
     * @note[short] Android
     */
    void updatePreviewParticle(ParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd1f34
     * @note[short] MacOS (Intel): 0xee7a0
     * @note[short] Windows: 0x2e1530
     * @note[short] iOS: 0x3605dc
     * @note[short] Android
     */
    void updatePreviewParticles();

    /**
     * @note[short] MacOS (ARM): 0xd2e3c
     * @note[short] MacOS (Intel): 0xefb20
     * @note[short] Windows: 0x2de4e0
     * @note[short] iOS: 0x3612ac
     * @note[short] Android
     */
    void updateToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0xc6548
     * @note[short] MacOS (Intel): 0xe0a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35a68c
     * @note[short] Android
     */
    bool validGroup(GameObject* object, bool checkLockedLayers);
    bool m_drawTriggerBoxes;
    bool m_showGrid;
    bool m_hideGridOnPlay;
    bool m_drawEffectLines;
    bool m_showGround;
    bool m_showDurationLines;
    bool m_increaseMaxUndoRedo;
    bool m_hideBackground;
    bool m_gv0120;
    bool m_layerLockingEnabled;
    bool m_playtestOrderChanged;
    bool m_previewParticles;
    bool m_previewAnimations;
    bool m_previewShaders;
    bool m_hideParticleIcons;
    bool m_alwaysHideParticleIcons;
    bool m_playTestSmoothFix;
    bool m_hasHighDetail;
    bool m_unk36ca;
    int m_unk36cc;
    bool m_collisionBlocksAdded;
    int m_unk36d4;
    cocos2d::CCArray* m_durationObjects;
    cocos2d::CCArray* m_pulseTriggers;
    cocos2d::CCArray* m_colorTriggers;
    cocos2d::CCArray* m_alphaTriggers;
    cocos2d::CCArray* m_spawnTriggers;
    cocos2d::CCArray* m_moveTriggers;
    cocos2d::CCArray* m_cameraGuideTriggers;
    cocos2d::CCArray* m_particleObjects;
    cocos2d::CCArray* m_keyframeObjects;
    cocos2d::CCDictionary* m_unk3720;
    cocos2d::CCArray* m_playtestTriggers;
    GameObject* m_copyStateObject;
    ParticleGameObject* m_particleObject;
    cocos2d::CCDictionary* m_unk3740;
    cocos2d::CCArray* m_unk3748;
    bool m_keepEditorLayer;
    bool m_unk3751;
    geode::SeedValueRSV m_coinCount;
    bool m_triggersChanged;
    bool m_colorTriggersChanged;
    bool m_pulseTriggersChanged;
    bool m_alphaTriggersChanged;
    bool m_spawnTriggersChanged;
    cocos2d::CCArray* m_spawnOrderObjects;
    bool m_spawnOrderObjectsChanged;
    bool m_sortSpawnNodes;
    cocos2d::CCDictionary* m_unk3778;
    cocos2d::CCDictionary* m_unk3780;
    bool m_initializing;
    short m_currentLayer;
    float m_playtestZoom;
    OBB2D* m_currentOBB2D;
    float m_playtestTimeWarp;
    float m_playtestCameraZoom;
    cocos2d::CCSprite* m_playtestDeathSprite;
    float m_trailTimer;
    bool m_soloMode;
    bool m_nonSquareRotation;
    EditorUI* m_editorUI;
    cocos2d::CCArray* m_undoObjects;
    cocos2d::CCArray* m_redoObjects;
    geode::SeedValueRSV m_objectCount;
    DrawGridLayer* m_drawGridLayer;
    bool m_updateColorSprites;
    bool m_previewMode;
    bool m_alwaysPreviewMode;
    gd::string m_levelString;
    gd::vector<GameObject*> m_objectVector;
    gd::vector<GameObject*> m_loadedMoveObjects;
    cocos2d::CCDictionary* m_triggerGroupsDict;
    gd::vector<cocos2d::CCArray*> m_triggerGroups;
    gd::vector<cocos2d::CCPoint> m_playerPoints;
    gd::vector<gd::vector<cocos2d::CCPoint>> m_player2Points;
    gd::vector<cocos2d::CCPoint> m_touchPoints;
    gd::vector<bool> m_sortedGroups;
    gd::vector<bool> m_toggledGroups;
    gd::vector<bool> m_lockedLayers;
    gd::vector<cocos2d::CCPoint> m_savedPositions;
    cocos2d::CCPoint m_previewPosition;
    gd::vector<bool> m_blendingColors;
    gd::vector<bool> m_blendingColors2;
    gd::vector<unsigned char> m_toggledGroupStates;
    gd::vector<float> m_spawnGroupDelays;
    double m_sessionTime;
    bool m_removingAll;
    EffectGameObject* m_playbackObject;
    EffectGameObject* m_traceInObject;
    EffectGameObject* m_traceOutObject;
    int m_playbackOrder;
    int m_duplicateKeyframeGroup;
    gd::vector<DelayedSpawnNode*> m_delayedSpawnNodes;
    gd::vector<DelayedSpawnNode*> m_delayedSpawnNodes2;
    gd::unordered_map<int, int> m_unk3ae0;
    bool m_playbackActive;
    bool m_activateAudioTriggers;
    bool m_unk3b22;
    int m_unk3b24;
    int m_unk3b28;
    int m_unk3b2c;
    gd::vector<int> m_unk3b30;
    gd::vector<int> m_unk3b48;
};
