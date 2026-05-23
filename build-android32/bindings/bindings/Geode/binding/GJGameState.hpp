#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EventTriggerInstance.hpp"
#include "SongChannelState.hpp"
#include "DynamicObjectAction.hpp"
#include "AdvancedFollowInstance.hpp"
#include "EnterEffectInstance.hpp"
#include "GameObjectPhysics.hpp"
#include "GJValueTween.hpp"
#include "SFXTriggerInstance.hpp"
#include "SFXTriggerState.hpp"
#include "SongTriggerState.hpp"
#include "EnterEffectAnimValue.hpp"

class GJGameState {
public:
    static constexpr auto CLASS_NAME = "GJGameState";

    /**
     * @note[short] MacOS (ARM): 0xe9f0c
     * @note[short] MacOS (Intel): 0x10e120
     * @note[short] Windows: 0x205460
     * @note[short] iOS: 0x1d9cec
     * @note[short] Android
     */
    void controlTweenAction(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xea43c
     * @note[short] MacOS (Intel): 0x10e7c0
     * @note[short] Windows: 0x205660
     * @note[short] iOS: 0x1d9f74
     * @note[short] Android
     */
    GameObjectPhysics& getGameObjectPhysics(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xea328
     * @note[short] MacOS (Intel): 0x10e690
     * @note[short] Windows: 0x2054f0
     * @note[short] iOS: 0x1d9eb4
     * @note[short] Android
     */
    void processStateTriggers();

    /**
     * @note[short] MacOS (ARM): 0xe9ee4
     * @note[short] MacOS (Intel): 0x10e0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopTweenAction(int action);

    /**
     * @note[short] MacOS (ARM): 0xe9e48
     * @note[short] MacOS (Intel): 0x10e040
     * @note[short] Windows: 0x2053a0
     * @note[short] iOS: 0x1d9c50
     * @note[short] Android
     */
    void tweenValue(float from, float to, int action, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xea274
     * @note[short] MacOS (Intel): 0x10e570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d9e00
     * @note[short] Android
     */
    void updateTweenAction(float value, int action);

    /**
     * @note[short] MacOS (ARM): 0xea07c
     * @note[short] MacOS (Intel): 0x10e290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d9d88
     * @note[short] Android
     */
    void updateTweenActions(float tweenValue);
    float m_cameraZoom;
    float m_targetCameraZoom;
    cocos2d::CCPoint m_cameraOffset;
    cocos2d::CCPoint m_unkPoint1;
    cocos2d::CCPoint m_unkPoint2;
    cocos2d::CCPoint m_unkPoint3;
    cocos2d::CCPoint m_unkPoint4;
    cocos2d::CCPoint m_unkPoint5;
    cocos2d::CCPoint m_unkPoint6;
    cocos2d::CCPoint m_unkPoint7;
    cocos2d::CCPoint m_unkPoint8;
    cocos2d::CCPoint m_unkPoint9;
    cocos2d::CCPoint m_unkPoint10;
    cocos2d::CCPoint m_unkPoint11;
    cocos2d::CCPoint m_unkPoint12;
    cocos2d::CCPoint m_unkPoint13;
    cocos2d::CCPoint m_unkPoint14;
    cocos2d::CCPoint m_unkPoint15;
    cocos2d::CCPoint m_unkPoint16;
    cocos2d::CCPoint m_unkPoint17;
    cocos2d::CCPoint m_unkPoint18;
    cocos2d::CCPoint m_unkPoint19;
    cocos2d::CCPoint m_unkPoint20;
    cocos2d::CCPoint m_unkPoint21;
    cocos2d::CCPoint m_unkPoint22;
    cocos2d::CCPoint m_unkPoint23;
    cocos2d::CCPoint m_unkPoint24;
    cocos2d::CCPoint m_unkPoint25;
    cocos2d::CCPoint m_unkPoint26;
    cocos2d::CCPoint m_unkPoint27;
    cocos2d::CCPoint m_unkPoint28;
    cocos2d::CCPoint m_unkPoint29;
    bool m_unkBool1;
    int m_unkInt1;
    bool m_unkBool2;
    int m_unkInt2;
    bool m_unkBool3;
    cocos2d::CCPoint m_unkPoint30;
    float m_middleGroundOffsetY;
    int m_unkInt3;
    int m_unkInt4;
    bool m_unkBool4;
    bool m_unkBool5;
    float m_unkFloat2;
    float m_unkFloat3;
    int m_unkInt5;
    int m_unkInt6;
    int m_unkInt7;
    int m_unkInt8;
    int m_unkInt9;
    int m_unkInt10;
    int m_unkInt11;
    float m_unkFloat4;
    float m_unkUint1;
    float m_portalY;
    bool m_unkBool6;
    bool m_gravityRelated;
    int m_unkInt12;
    float m_unkInt13;
    int m_unkInt14;
    int m_unkInt15;
    bool m_unkBool7;
    bool m_unkBool8;
    bool m_unkBool9;
    float m_unkFloat5;
    float m_unkFloat6;
    float m_unkFloat7;
    float m_unkFloat8;
    float m_cameraAngle;
    float m_targetCameraAngle;
    bool m_playerStreakBlend;
    float m_timeWarp;
    float m_queuedTimeWarp;
    float m_timeWarpRelated;
    int m_currentChannel;
    int m_rotateChannel;
    gd::unordered_map<int, int> m_spawnChannelRelated0;
    gd::unordered_map<int, bool> m_spawnChannelRelated1;
    double m_totalTime;
    double m_levelTime;
    double m_unkDouble3;
    unsigned int m_commandIndex;
    float m_unkUint3;
    unsigned int m_currentProgress;
    int m_unkUint4;
    int m_unkUint5;
    int m_unkUint6;
    int m_unkUint7;
    int m_unkUint8;
    GameObject* m_lastActivatedPortal1;
    GameObject* m_lastActivatedPortal2;
    cocos2d::CCPoint m_cameraPosition;
    bool m_unkBool10;
    float m_levelFlipping;
    bool m_unkBool11;
    bool m_unkBool12;
    bool m_isDualMode;
    float m_unkFloat9;
    gd::unordered_map<int, GJValueTween> m_tweenActions;
    int m_cameraEdgeValue0;
    int m_cameraEdgeValue1;
    int m_cameraEdgeValue2;
    int m_cameraEdgeValue3;
    gd::unordered_map<int, GameObjectPhysics> m_gameObjectPhysics;
    gd::vector<float> m_unkVecFloat1;
    float m_unkUint10;
    int m_unkUint11;
    int m_unkUint12;
    cocos2d::CCPoint m_cameraStepDiff;
    float m_unkFloat10;
    float m_timeModRelated;
    bool m_timeModRelated2;
    gd::map<std::pair<int, int>, int> m_activatedObjectIDs;
    float m_unkUint13;
    cocos2d::CCPoint m_unkPoint32;
    cocos2d::CCPoint m_cameraPosition2;
    bool m_unkBool20;
    bool m_unkBool21;
    bool m_unkBool22;
    float m_unkUint14;
    bool m_unkBool26;
    bool m_cameraShakeEnabled;
    float m_cameraShakeFactor;
    float m_unkUint15;
    float m_unkUint16;
    double m_unkUint64_1;
    cocos2d::CCPoint m_unkPoint34;
    unsigned int m_dualRelated;
    gd::unordered_map<int, EnhancedGameObject*> m_stateObjects;
    gd::map<std::pair<GJGameEvent, int>, gd::vector<EventTriggerInstance>> m_unkMapPairGJGameEventIntVectorEventTriggerInstance;
    gd::map<std::pair<GJGameEvent, int>, int> m_unkMapPairGJGameEventIntInt;
    gd::unordered_map<int, gd::vector<EnterEffectInstance>> m_enterEffectInstanceVectors;
    gd::unordered_map<int, gd::vector<EnterEffectInstance>> m_exitEffectInstanceVectors;
    gd::vector<int> m_enterChannelMap;
    gd::vector<int> m_exitChannelMap;
    gd::vector<EnterEffectInstance> m_moveEffectInstances;
    gd::vector<EnterEffectInstance> m_rotateEffectInstances;
    gd::vector<EnterEffectInstance> m_scaleEffectInstances;
    gd::vector<EnterEffectInstance> m_fadeEffectInstances;
    gd::vector<EnterEffectInstance> m_tintEffectInstances;
    gd::unordered_set<int> m_unsortedAreaEffects;
    bool m_unkBool27;
    gd::vector<AdvancedFollowInstance> m_advanceFollowInstances;
    gd::vector<DynamicObjectAction> m_dynamicMoveActions;
    gd::vector<DynamicObjectAction> m_dynamicRotateActions;
    bool m_unkBool28;
    bool m_unkBool29;
    float m_unkUint17;
    gd::unordered_map<int, gd::vector<int>> m_unkUMap8;
    gd::map<std::pair<int,int>, SFXTriggerInstance> m_proximityVolumeRelated;
    gd::unordered_map<int, SongChannelState> m_songChannelStates;
    gd::unordered_map<int, gd::vector<SongTriggerState>> m_songTriggerStateVectors;
    gd::vector<SFXTriggerState> m_sfxTriggerStates;
    bool m_unkBool30;
    int m_background;
    int m_ground;
    int m_middleground;
    bool m_unkBool31;
    int m_points;
    bool m_unkBool32;
    unsigned int m_pauseCounter;
    unsigned int m_pauseBufferTimer;
};
