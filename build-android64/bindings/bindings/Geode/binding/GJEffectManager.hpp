#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DynamicMoveCalculation.hpp"
#include "PulseEffectAction.hpp"
#include "TouchToggleAction.hpp"
#include "CollisionTriggerAction.hpp"
#include "ToggleTriggerAction.hpp"
#include "SpawnTriggerAction.hpp"
#include "GroupCommandObject2.hpp"
#include "OpacityEffectAction.hpp"
#include "CountTriggerAction.hpp"
#include "TimerItem.hpp"
#include "TimerTriggerAction.hpp"

class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x2773fc
     * @note[short] MacOS (Intel): 0x2dd140
     * @note[short] Windows: 0x25ac80
     * @note[short] iOS: 0xeab8
     * @note[short] Android
     */
    static GJEffectManager* create();

    /**
     * @note[short] MacOS (ARM): 0x28475c
     * @note[short] MacOS (Intel): 0x2edd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16438
     * @note[short] Android
     */
    static cocos2d::ccColor3B getMixedColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, float ratio);

    /**
     * @note[short] MacOS (ARM): 0x2775d4
     * @note[short] MacOS (Intel): 0x2dd4b0
     * @note[short] Windows: 0x25ace0
     * @note[short] iOS: 0xeb2c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x278138
     * @note[short] MacOS (Intel): 0x2de420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf10c
     * @note[short] Android
     */
    cocos2d::ccColor3B activeColorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x2782a0
     * @note[short] MacOS (Intel): 0x2de580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf1e0
     * @note[short] Android
     */
    float activeOpacityForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x278bb4
     * @note[short] MacOS (Intel): 0x2df010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addAllInheritedColorActions(cocos2d::CCArray* actions);

    /**
     * @note[short] MacOS (ARM): 0x281bd4
     * @note[short] MacOS (Intel): 0x2ea210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x151e8
     * @note[short] Android
     */
    void addCountToItem(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0x27f644
     * @note[short] MacOS (Intel): 0x2e7510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b40
     * @note[short] Android
     */
    void addMoveCalculation(CCMoveCNode* node, cocos2d::CCPoint offset, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x278450
     * @note[short] MacOS (Intel): 0x2de770
     * @note[short] Windows: 0x25b460
     * @note[short] iOS: 0xf26c
     * @note[short] Android
     */
    void calculateBaseActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x278cd4
     * @note[short] MacOS (Intel): 0x2df150
     * @note[short] Windows: 0x25b840
     * @note[short] iOS: 0xf76c
     * @note[short] Android
     */
    void calculateInheritedColor(int id, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x2845c8
     * @note[short] MacOS (Intel): 0x2edba0
     * @note[short] Windows: 0x2639f0
     * @note[short] iOS: 0x1634c
     * @note[short] Android
     */
    void calculateLightBGColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x279ac8
     * @note[short] MacOS (Intel): 0x2e00e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1016c
     * @note[short] Android
     */
    bool checkCollision(int const& blockAID, int const& blockBID);

    /**
     * @note[short] MacOS (ARM): 0x2791c4
     * @note[short] MacOS (Intel): 0x2df640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfbdc
     * @note[short] Android
     */
    void colorActionChanged(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x2791a0
     * @note[short] MacOS (Intel): 0x2df610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfbb8
     * @note[short] Android
     */
    bool colorExists(int col);

    /**
     * @note[short] MacOS (ARM): 0x279a34
     * @note[short] MacOS (Intel): 0x2e0050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10138
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForEffect(cocos2d::ccColor3B color, cocos2d::ccHSVValue hsv);

    /**
     * @note[short] MacOS (ARM): 0x280b24
     * @note[short] MacOS (Intel): 0x2e8ec0
     * @note[short] Windows: 0x261b10
     * @note[short] iOS: 0x14738
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForGroupID(int id, cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x277fd4
     * @note[short] MacOS (Intel): 0x2de2a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x278f30
     * @note[short] MacOS (Intel): 0x2df3d0
     * @note[short] Windows: 0x261760
     * @note[short] iOS: 0xf9c4
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPulseEffect(cocos2d::ccColor3B const& color, PulseEffectAction* action);

    /**
     * @note[short] MacOS (ARM): 0x27b8dc
     * @note[short] MacOS (Intel): 0x2e26b0
     * @note[short] Windows: 0x25da50
     * @note[short] iOS: 0x11688
     * @note[short] Android
     */
    void controlActionsForControlID(int id, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x27c534
     * @note[short] MacOS (Intel): 0x2e3630
     * @note[short] Windows: 0x25e3b0
     * @note[short] iOS: 0x11ee4
     * @note[short] Android
     */
    void controlActionsForTrigger(EffectGameObject* object, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x281adc
     * @note[short] MacOS (Intel): 0x2ea0b0
     * @note[short] Windows: 0x2623f0
     * @note[short] iOS: 0x151a8
     * @note[short] Android
     */
    int countForItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x27a508
     * @note[short] MacOS (Intel): 0x2e0cc0
     * @note[short] Windows: 0x25cae0
     * @note[short] iOS: 0x10910
     * @note[short] Android
     */
    void createFollowCommand(float xMod, float yMod, float duration, int targetID, int centerID, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27a7a8
     * @note[short] MacOS (Intel): 0x2e0f80
     * @note[short] Windows: 0x25cd10
     * @note[short] iOS: 0x10b78
     * @note[short] Android: Rebinded
     */
    GroupCommandObject2* createKeyframeCommand(int targetID, cocos2d::CCArray* group, GameObject* object, int uniqueID, int controlID, bool temporary, float posXMod, float posYMod, float rotMod, float scaleXMod, float scaleYMod, float timeMod, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x27a1ac
     * @note[short] MacOS (Intel): 0x2e0910
     * @note[short] Windows: 0x25c700
     * @note[short] iOS: 0x105b4
     * @note[short] Android
     */
    void createMoveCommand(cocos2d::CCPoint pt, int groupID, float duration, int easingType, float easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, float moveModX, float moveModY, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27a5cc
     * @note[short] MacOS (Intel): 0x2e0da0
     * @note[short] Windows: 0x25cbf0
     * @note[short] iOS: 0x109d4
     * @note[short] Android
     */
    void createPlayerFollowCommand(float delay, float speed, int offset, float maxSpeed, float duration, int targetID, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27a300
     * @note[short] MacOS (Intel): 0x2e0a70
     * @note[short] Windows: 0x25c9b0
     * @note[short] iOS: 0x10708
     * @note[short] Android
     */
    void createRotateCommand(float offset, float duration, int targetID, int centerID, int easingType, float easingRate, bool lockRotation, bool player1, bool player2, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27a3f4
     * @note[short] MacOS (Intel): 0x2e0b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x107fc
     * @note[short] Android
     */
    void createTransformCommand(double scaleX, double scaleY, double property450, double property451, bool onlyMove, float duration, int targetID, int centerID, int easingType, float easingRate, bool p10, bool relativeRotation, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x277ee8
     * @note[short] MacOS (Intel): 0x2de180
     * @note[short] Windows: 0x25b2d0
     * @note[short] iOS: 0xeffc
     * @note[short] Android
     */
    cocos2d::CCArray* getAllColorActions();

    /**
     * @note[short] MacOS (ARM): 0x277f38
     * @note[short] MacOS (Intel): 0x2de1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x277ff4
     * @note[short] MacOS (Intel): 0x2de2c0
     * @note[short] Windows: 0x25bc00
     * @note[short] iOS: 0xf094
     * @note[short] Android
     */
    ColorAction* getColorAction(int index);

    /**
     * @note[short] MacOS (ARM): 0x278194
     * @note[short] MacOS (Intel): 0x2de470
     * @note[short] Windows: 0x25bcc0
     * @note[short] iOS: 0xf164
     * @note[short] Android
     */
    ColorActionSprite* getColorSprite(int index);

    /**
     * @note[short] MacOS (ARM): 0x27fc74
     * @note[short] MacOS (Intel): 0x2e7ca0
     * @note[short] Windows: 0x260950
     * @note[short] iOS: 0x13f7c
     * @note[short] Android: Rebinded
     */
    void getLoadedMoveOffset(gd::unordered_map<int, std::pair<double, double>>& offsets);

    /**
     * @note[short] MacOS (ARM): 0x27b6cc
     * @note[short] MacOS (Intel): 0x2e2460
     * @note[short] Windows: 0x25efd0
     * @note[short] iOS: 0x11458
     * @note[short] Android
     */
    CCMoveCNode* getMoveCommandNode(GroupCommandObject2* command);

    /**
     * @note[short] MacOS (ARM): 0x27d318
     * @note[short] MacOS (Intel): 0x2e46e0
     * @note[short] Windows: 0x25eed0
     * @note[short] iOS: 0x128bc
     * @note[short] Android
     */
    CCMoveCNode* getMoveCommandObject();

    /**
     * @note[short] MacOS (ARM): 0x27fdd8
     * @note[short] MacOS (Intel): 0x2e7e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x140e0
     * @note[short] Android
     */
    OpacityEffectAction* getOpacityActionForGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x283100
     * @note[short] MacOS (Intel): 0x2ebef0
     * @note[short] Android: Rebinded
     */
    void getPersistentState(gd::unordered_map<int, int>& counts, gd::unordered_map<int, TimerItem>& items);

    /**
     * @note[short] MacOS (ARM): 0x282228
     * @note[short] MacOS (Intel): 0x2eaa80
     * @note[short] Windows: 0x262900
     * @note[short] iOS: 0x1553c
     * @note[short] Android
     */
    gd::string getPersistentStateString();

    /**
     * @note[short] MacOS (ARM): 0x284938
     * @note[short] MacOS (Intel): 0x2edf80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16558
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x27d480
     * @note[short] MacOS (Intel): 0x2e4890
     * @note[short] Windows: 0x25f270
     * @note[short] iOS: 0x1299c
     * @note[short] Android
     */
    GroupCommandObject2* getTempGroupCommand();

    /**
     * @note[short] MacOS (ARM): 0x279cb4
     * @note[short] MacOS (Intel): 0x2e0340
     * @note[short] Windows: 0x25c540
     * @note[short] iOS: 0x10284
     * @note[short] Android
     */
    void handleObjectCollision(bool triggerOnExit, int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x28140c
     * @note[short] MacOS (Intel): 0x2e98f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14cf0
     * @note[short] Android
     */
    bool hasActiveDualTouch();

    /**
     * @note[short] MacOS (ARM): 0x2812a0
     * @note[short] MacOS (Intel): 0x2e9750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14bec
     * @note[short] Android
     */
    bool hasBeenTriggered(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x280a3c
     * @note[short] MacOS (Intel): 0x2e8d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool hasPulseEffectForGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2812e4
     * @note[short] MacOS (Intel): 0x2e97a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14c30
     * @note[short] Android
     */
    bool isGroupEnabled(int id);

    /**
     * @note[short] MacOS (ARM): 0x2833e4
     * @note[short] MacOS (Intel): 0x2ec330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void itemWasUsed(int id);

    /**
     * @note[short] MacOS (ARM): 0x2807f8
     * @note[short] MacOS (Intel): 0x2e8aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* keyForGroupIDColor(int id, cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x285738
     * @note[short] MacOS (Intel): 0x2eee70
     * @note[short] Windows: 0x2644a0
     * @note[short] iOS: 0x16d50
     * @note[short] Android
     */
    void loadFromState(EffectManagerState& state);

    /**
     * @note[short] MacOS (ARM): 0x282cc4
     * @note[short] MacOS (Intel): 0x2eb9d0
     * @note[short] Android: Rebinded
     */
    void loadPersistentStateString(gd::string state);

    /**
     * @note[short] MacOS (ARM): 0x279eac
     * @note[short] MacOS (Intel): 0x2e0550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x103d8
     * @note[short] Android
     */
    void objectsCollided(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x278120
     * @note[short] MacOS (Intel): 0x2de410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float opacityForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x280080
     * @note[short] MacOS (Intel): 0x2e81b0
     * @note[short] Windows: 0x260b80
     * @note[short] iOS: 0x14218
     * @note[short] Android
     */
    float opacityModForGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x28397c
     * @note[short] MacOS (Intel): 0x2ecac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15cd4
     * @note[short] Android
     */
    void pauseTimer(int id);

    /**
     * @note[short] MacOS (ARM): 0x281448
     * @note[short] MacOS (Intel): 0x2e9930
     * @note[short] Windows: 0x262190
     * @note[short] iOS: 0x14d2c
     * @note[short] Android
     */
    void playerButton(bool down, bool player1);

    /**
     * @note[short] MacOS (ARM): 0x281758
     * @note[short] MacOS (Intel): 0x2e9ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14f68
     * @note[short] Android
     */
    void playerDied();

    /**
     * @note[short] MacOS (ARM): 0x279bfc
     * @note[short] MacOS (Intel): 0x2e0270
     * @note[short] Windows: 0x25c2e0
     * @note[short] iOS: 0x101ec
     * @note[short] Android
     */
    void postCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x27f800
     * @note[short] MacOS (Intel): 0x2e76d0
     * @note[short] Windows: 0x260800
     * @note[short] iOS: 0x13c78
     * @note[short] Android
     */
    void postMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x279be4
     * @note[short] MacOS (Intel): 0x2e0250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x101d4
     * @note[short] Android
     */
    void preCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x27de38
     * @note[short] MacOS (Intel): 0x2e55d0
     * @note[short] Windows: 0x25f3f0
     * @note[short] iOS: 0x12c34
     * @note[short] Android
     */
    void prepareMoveActions(float dt, bool intermediate);

    /**
     * @note[short] MacOS (ARM): 0x2782fc
     * @note[short] MacOS (Intel): 0x2de5e0
     * @note[short] Windows: 0x25b340
     * @note[short] iOS: 0xf238
     * @note[short] Android
     */
    void processColors();

    /**
     * @note[short] MacOS (ARM): 0x278884
     * @note[short] MacOS (Intel): 0x2deca0
     * @note[short] Windows: 0x261510
     * @note[short] iOS: 0xf59c
     * @note[short] Android
     */
    void processCopyColorPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x2785ac
     * @note[short] MacOS (Intel): 0x2de900
     * @note[short] Windows: 0x25b520
     * @note[short] iOS: 0xf3bc
     * @note[short] Android
     */
    void processInheritedColors();

    /**
     * @note[short] MacOS (ARM): 0x27fb60
     * @note[short] MacOS (Intel): 0x2e7b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e6c
     * @note[short] Android
     */
    void processMoveCalculations();

    /**
     * @note[short] MacOS (ARM): 0x2784e8
     * @note[short] MacOS (Intel): 0x2de830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf300
     * @note[short] Android
     */
    void processPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x27a014
     * @note[short] MacOS (Intel): 0x2e0750
     * @note[short] Windows: 0x25c430
     * @note[short] iOS: 0x10498
     * @note[short] Android: Rebinded
     */
    void registerCollisionTrigger(int targetID, int blockAID, int blockBID, bool triggerOnExit, bool activateGroup, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27d8cc
     * @note[short] MacOS (Intel): 0x2e4ef0
     * @note[short] Windows: 0x25f170
     * @note[short] iOS: 0x12a9c
     * @note[short] Android
     */
    void registerRotationCommand(GroupCommandObject2* object, bool clear);

    /**
     * @note[short] MacOS (ARM): 0x279808
     * @note[short] MacOS (Intel): 0x2dfdc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xff1c
     * @note[short] Android
     */
    void removeAllPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x279158
     * @note[short] MacOS (Intel): 0x2df5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfb70
     * @note[short] Android
     */
    void removeColorAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x283568
     * @note[short] MacOS (Intel): 0x2ec550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a64
     * @note[short] Android
     */
    void removePersistentFromAllItems();

    /**
     * @note[short] MacOS (ARM): 0x283600
     * @note[short] MacOS (Intel): 0x2ec600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15aa4
     * @note[short] Android
     */
    void removePersistentFromAllTimers();

    /**
     * @note[short] MacOS (ARM): 0x2811a8
     * @note[short] MacOS (Intel): 0x2e9670
     * @note[short] Windows: 0x2620e0
     * @note[short] iOS: 0x14bbc
     * @note[short] Android
     */
    void removeTriggeredID(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x2777e4
     * @note[short] MacOS (Intel): 0x2dd730
     * @note[short] Windows: 0x25b0a0
     * @note[short] iOS: 0xee08
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x2778b4
     * @note[short] MacOS (Intel): 0x2dd850
     * @note[short] Windows: 0x25c020
     * @note[short] iOS: 0xeec0
     * @note[short] Android
     */
    void resetEffects();

    /**
     * @note[short] MacOS (ARM): 0x277e40
     * @note[short] MacOS (Intel): 0x2de080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xef98
     * @note[short] Android
     */
    void resetMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x27dbf4
     * @note[short] MacOS (Intel): 0x2e52b0
     * @note[short] Windows: 0x25f300
     * @note[short] iOS: 0x12b70
     * @note[short] Android
     */
    void resetTempGroupCommands(bool noRemove);

    /**
     * @note[short] MacOS (ARM): 0x2798bc
     * @note[short] MacOS (Intel): 0x2dfea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10014
     * @note[short] Android
     */
    void resetToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0x2799fc
     * @note[short] MacOS (Intel): 0x2e0010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTriggeredIDs();

    /**
     * @note[short] MacOS (ARM): 0x283350
     * @note[short] MacOS (Intel): 0x2ec260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15994
     * @note[short] Android
     */
    void resetUsedItemState();

    /**
     * @note[short] MacOS (ARM): 0x283a9c
     * @note[short] MacOS (Intel): 0x2ecc60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15d34
     * @note[short] Android
     */
    void resumeTimer(int id);

    /**
     * @note[short] MacOS (ARM): 0x281888
     * @note[short] MacOS (Intel): 0x2e9e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1505c
     * @note[short] Android: Rebinded
     */
    void runCountTrigger(int id, int targetCount, bool multiActivate, int targetID, bool activateGroup, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x28167c
     * @note[short] MacOS (Intel): 0x2e9bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14ef0
     * @note[short] Android: Rebinded
     */
    void runDeathTrigger(int targetID, bool activateGroup, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27feb8
     * @note[short] MacOS (Intel): 0x2e7f70
     * @note[short] Windows: 0x260a70
     * @note[short] iOS: 0x14114
     * @note[short] Android
     */
    OpacityEffectAction* runOpacityActionOnGroup(int targetID, float duration, float opacity, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x280244
     * @note[short] MacOS (Intel): 0x2e83e0
     * @note[short] Windows: 0x260c40
     * @note[short] iOS: 0x142a8
     * @note[short] Android
     */
    PulseEffectAction* runPulseEffect(int targetID, bool targetGroup, float fadeInDuration, float holdDuration, float fadeOutDuration, PulseEffectType effectType, cocos2d::ccColor3B targetColor, cocos2d::ccHSVValue targetHSV, int copyID, bool mainOnly, bool detailOnly, bool exclusive, bool legacyHSV, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x283bc0
     * @note[short] MacOS (Intel): 0x2ece00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15d98
     * @note[short] Android: Rebinded
     */
    void runTimerTrigger(int id, double targetTime, bool multiActivate, int targetID, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x281310
     * @note[short] MacOS (Intel): 0x2e97e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14c5c
     * @note[short] Android: Rebinded
     */
    void runTouchTriggerCommand(int targetID, bool holdMode, TouchTriggerType touchType, TouchTriggerControl touchControl, bool dualMode, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27fac4
     * @note[short] MacOS (Intel): 0x2e7ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13dd0
     * @note[short] Android
     */
    void saveCompletedMove(int groupId, double dx, double dy);

    /**
     * @note[short] MacOS (ARM): 0x285360
     * @note[short] MacOS (Intel): 0x2ee9a0
     * @note[short] Windows: 0x263e80
     * @note[short] iOS: 0x169f4
     * @note[short] Android
     */
    void saveToState(EffectManagerState& state);

    /**
     * @note[short] MacOS (ARM): 0x2790f4
     * @note[short] MacOS (Intel): 0x2df540
     * @note[short] Windows: 0x25be20
     * @note[short] iOS: 0xfb0c
     * @note[short] Android
     */
    void setColorAction(ColorAction* action, int id);

    /**
     * @note[short] MacOS (ARM): 0x284804
     * @note[short] MacOS (Intel): 0x2eddf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x164e0
     * @note[short] Android
     */
    void setFollowing(int targetID, int targetPosID, bool following);

    /**
     * @note[short] MacOS (ARM): 0x284be4
     * @note[short] MacOS (Intel): 0x2ee2b0
     * @note[short] Windows: 0x263bf0
     * @note[short] iOS: 0x166dc
     * @note[short] Android: Rebinded
     */
    void setupFromString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x2782d4
     * @note[short] MacOS (Intel): 0x2de5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf210
     * @note[short] Android
     */
    bool shouldBlend(int id);

    /**
     * @note[short] MacOS (ARM): 0x27f6f8
     * @note[short] MacOS (Intel): 0x2e75b0
     * @note[short] Windows: 0x261cb0
     * @note[short] iOS: 0x13be0
     * @note[short] Android: Rebinded
     */
    void spawnGroup(int targetID, float delay, bool spawnOrdered, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x280d00
     * @note[short] MacOS (Intel): 0x2e9110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14820
     * @note[short] Android: Rebinded
     */
    void spawnObject(GameObject* object, float delay, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x283658
     * @note[short] MacOS (Intel): 0x2ec670
     * @note[short] Windows: 0x262f50
     * @note[short] iOS: 0x15aac
     * @note[short] Android: Rebinded
     */
    void startTimer(int id, double startTime, double targetTime, bool stopTime, bool active, bool dontOverride, float timeMod, bool ignoreTimewarp, int targetID, gd::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x2810dc
     * @note[short] MacOS (Intel): 0x2e95b0
     * @note[short] Windows: 0x261ff0
     * @note[short] iOS: 0x14b88
     * @note[short] Android
     */
    void storeTriggeredID(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x2844d0
     * @note[short] MacOS (Intel): 0x2eda50
     * @note[short] Windows: 0x263930
     * @note[short] iOS: 0x16304
     * @note[short] Android
     */
    double timeForItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x283898
     * @note[short] MacOS (Intel): 0x2ec980
     * @note[short] Windows: 0x263110
     * @note[short] iOS: 0x15ca4
     * @note[short] Android
     */
    bool timerExists(int id);

    /**
     * @note[short] MacOS (ARM): 0x2833e8
     * @note[short] MacOS (Intel): 0x2ec340
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void timerWasUsed(int id);

    /**
     * @note[short] MacOS (ARM): 0x27a12c
     * @note[short] MacOS (Intel): 0x2e0890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1053c
     * @note[short] Android
     */
    void toggleGroup(int id, bool activate);

    /**
     * @note[short] MacOS (ARM): 0x2833ec
     * @note[short] MacOS (Intel): 0x2ec350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159bc
     * @note[short] Android
     */
    void toggleItemPersistent(int id, bool persistent);

    /**
     * @note[short] MacOS (ARM): 0x2835c0
     * @note[short] MacOS (Intel): 0x2ec5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a6c
     * @note[short] Android
     */
    void toggleTimerPersistent(int id, bool persistent);

    /**
     * @note[short] MacOS (ARM): 0x279968
     * @note[short] MacOS (Intel): 0x2dff70
     * @note[short] Windows: 0x262ed0
     * @note[short] iOS: 0x10060
     * @note[short] Android
     */
    void transferPersistentItems();

    /**
     * @note[short] MacOS (ARM): 0x278c50
     * @note[short] MacOS (Intel): 0x2df0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf6e8
     * @note[short] Android
     */
    void traverseInheritanceChain(InheritanceNode* node);

    /**
     * @note[short] MacOS (ARM): 0x27d7ec
     * @note[short] MacOS (Intel): 0x2e4d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12a6c
     * @note[short] Android
     */
    CCMoveCNode* tryGetMoveCommandNode(int id);

    /**
     * @note[short] MacOS (ARM): 0x2801c0
     * @note[short] MacOS (Intel): 0x2e8340
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateActiveOpacityEffects();

    /**
     * @note[short] MacOS (ARM): 0x27fda0
     * @note[short] MacOS (Intel): 0x2e7dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x140a8
     * @note[short] Android
     */
    void updateColorAction(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x2792e0
     * @note[short] MacOS (Intel): 0x2df790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfc3c
     * @note[short] Android
     */
    void updateColorEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x277f88
     * @note[short] MacOS (Intel): 0x2de240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf04c
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);

    /**
     * @note[short] MacOS (ARM): 0x281c48
     * @note[short] MacOS (Intel): 0x2ea280
     * @note[short] Windows: 0x2624b0
     * @note[short] iOS: 0x1525c
     * @note[short] Android
     */
    void updateCountForItem(int id, int count);

    /**
     * @note[short] MacOS (ARM): 0x2791e4
     * @note[short] MacOS (Intel): 0x2df670
     * @note[short] Windows: 0x25bea0
     * @note[short] iOS: 0xfbfc
     * @note[short] Android
     */
    void updateEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x280178
     * @note[short] MacOS (Intel): 0x2e8300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14260
     * @note[short] Android
     */
    void updateOpacityAction(OpacityEffectAction* action);

    /**
     * @note[short] MacOS (ARM): 0x279720
     * @note[short] MacOS (Intel): 0x2dfcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfea4
     * @note[short] Android
     */
    void updateOpacityEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x279440
     * @note[short] MacOS (Intel): 0x2df970
     * @note[short] Windows: 0x2611c0
     * @note[short] iOS: 0xfcc8
     * @note[short] Android
     */
    void updatePulseEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x280df8
     * @note[short] MacOS (Intel): 0x2e9230
     * @note[short] Windows: 0x261da0
     * @note[short] iOS: 0x148ac
     * @note[short] Android
     */
    void updateSpawnTriggers(float dt);

    /**
     * @note[short] MacOS (ARM): 0x283cfc
     * @note[short] MacOS (Intel): 0x2ecf50
     * @note[short] Windows: 0x2631b0
     * @note[short] iOS: 0x15e98
     * @note[short] Android
     */
    void updateTimer(int id, double time);

    /**
     * @note[short] MacOS (ARM): 0x283e6c
     * @note[short] MacOS (Intel): 0x2ed130
     * @note[short] Windows: 0x263340
     * @note[short] iOS: 0x15f80
     * @note[short] Android
     */
    void updateTimers(float dt, float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0x28484c
     * @note[short] MacOS (Intel): 0x2ede30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16520
     * @note[short] Android
     */
    bool wasFollowing(int targetID, int targetPosID);

    /**
     * @note[short] MacOS (ARM): 0x278c20
     * @note[short] MacOS (Intel): 0x2df080
     * @note[short] Windows: 0x25bbe0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool wouldCreateLoop(InheritanceNode* node, int id);
    TriggerEffectDelegate* m_triggerEffectDelegate;
    cocos2d::CCDictionary* m_unkObject148;
    cocos2d::CCDictionary* m_unkDict150;
    gd::vector<PulseEffectAction> m_pulseEffectVector;
    gd::unordered_map<int, gd::vector<PulseEffectAction>> m_pulseEffectMap;
    gd::unordered_map<int, OpacityEffectAction> m_opacityEffectMap;
    gd::vector<TouchToggleAction> m_unkVector1e0;
    gd::unordered_map<int, gd::vector<CountTriggerAction>> m_countTriggerActions;
    gd::vector<CollisionTriggerAction> m_unkVector230;
    gd::vector<ToggleTriggerAction> m_unkVector248;
    cocos2d::CCDictionary* m_colorActionDict;
    cocos2d::CCDictionary* m_unkDict268;
    gd::vector<InheritanceNode*> m_unkVector270;
    gd::unordered_map<int, bool> m_unkMap288;
    gd::vector<ColorAction*> m_colorActionVector;
    gd::vector<ColorActionSprite*> m_colorActionSpriteVector;
    gd::vector<bool> m_unkVector2f0;
    gd::unordered_map<int, int> m_itemCountMap;
    gd::unordered_map<int, int> m_persistentItemCountMap;
    gd::unordered_set<int> m_persistentTimerItemSet;
    gd::unordered_set<int> m_unk3f0;
    gd::unordered_set<int> m_unk430;
    gd::unordered_map<int, TimerItem> m_timerItemMap;
    gd::unordered_map<int, gd::vector<TimerTriggerAction>> m_unkMap3f8;
    cocos2d::CCArray* m_unkArray430;
    gd::vector<bool> m_unkVector438;
    gd::unordered_set<int> m_unkMap460;
    gd::set<std::pair<int, int>> m_unkMap498;
    gd::unordered_set<int> m_unkMap4c8;
    gd::vector<SpawnTriggerAction> m_spawnTriggerActions;
    gd::vector<GroupCommandObject2*> m_unkVector518;
    gd::vector<GroupCommandObject2*> m_unkVector530;
    gd::vector<cocos2d::CCObject*> m_unkVector548;
    gd::vector<GroupCommandObject2> m_unkVector560;
    gd::unordered_map<int, std::pair<double, double>> m_unkMap578;
    gd::vector<GroupCommandObject2*> m_unkVector5b0;
    gd::unordered_map<int, gd::vector<GroupCommandObject2*>> m_unkMap5c8;
    gd::vector<GroupCommandObject2*> m_unkVector600;
    gd::unordered_map<int, CCMoveCNode*> m_unkMap618;
    gd::unordered_map<int, CCMoveCNode*> m_unkMap650;
    gd::unordered_map<int, CCMoveCNode*> m_unkMap688;
    gd::vector<CCMoveCNode*> m_unkVector6c0;
    gd::vector<CCMoveCNode*> m_unkVector6d8;
    gd::vector<CCMoveCNode*> m_unkVector6f0;
    gd::vector<DynamicMoveCalculation> m_unkVector708;
    gd::map<std::pair<int, int>, gd::vector<GroupCommandObject2*>> m_unkMap770;
    float m_unk780;
    float m_unk784;
    float m_unk788;
    float m_unk78C;
    float m_unk790;
    float m_unk794;
    bool m_unk798;
};
