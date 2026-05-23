#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class EffectGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "EffectGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EffectGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): 0x1a2200
     * @note[short] MacOS (Intel): 0x1f3fa0
     * @note[short] Windows: 0x495720
     * @note[short] iOS: 0x3998b0
     * @note[short] Android: Rebinded
     */
     EffectGameObject();

    /**
     * @note[short] MacOS (ARM): 0x172940
     * @note[short] MacOS (Intel): 0x1b9020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x384fc0
     * @note[short] Android
     */
    static EffectGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x172d20
     * @note[short] MacOS (Intel): 0x1b94d0
     * @note[short] Windows: 0x4a5ef0
     * @note[short] iOS: 0x38528c
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x174270
     * @note[short] MacOS (Intel): 0x1bb240
     * @note[short] Windows: 0x4a87b0
     * @note[short] iOS: 0x3867e0
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x1572dc
     * @note[short] MacOS (Intel): 0x196af0
     * @note[short] Windows: 0x4a87e0
     * @note[short] iOS: 0x37723c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x172da4
     * @note[short] MacOS (Intel): 0x1b9550
     * @note[short] Windows: 0x4a5f30
     * @note[short] iOS: 0x385310
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1586f8
     * @note[short] MacOS (Intel): 0x197e80
     * @note[short] Windows: 0x4a8ad0
     * @note[short] iOS: 0x378220
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x14f4f8
     * @note[short] MacOS (Intel): 0x18c4a0
     * @note[short] Windows: 0x4abc20
     * @note[short] iOS: 0x3724f0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1729e4
     * @note[short] MacOS (Intel): 0x1b90b0
     * @note[short] Windows: 0x4a58f0
     * @note[short] iOS: 0x385058
     * @note[short] Android
     */
    virtual void setRScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x1729f4
     * @note[short] MacOS (Intel): 0x1b90d0
     * @note[short] Windows: 0x4a5940
     * @note[short] iOS: 0x385068
     * @note[short] Android
     */
    virtual void setRScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x1741fc
     * @note[short] MacOS (Intel): 0x1bb1d0
     * @note[short] Windows: 0x4a8790
     * @note[short] iOS: 0x38676c
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x173fb8
     * @note[short] MacOS (Intel): 0x1baf90
     * @note[short] Windows: 0x4a8580
     * @note[short] iOS: 0x386534
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x1741b8
     * @note[short] MacOS (Intel): 0x1bb190
     * @note[short] Windows: 0x4a8750
     * @note[short] iOS: 0x386730
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): 0x1744c8
     * @note[short] MacOS (Intel): 0x1bb3e0
     * @note[short] Windows: 0x4aba40
     * @note[short] iOS: 0x3869a8
     * @note[short] Android
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): 0x174554
     * @note[short] MacOS (Intel): 0x1bb450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x386a34
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): 0x1746f4
     * @note[short] MacOS (Intel): 0x1bb5f0
     * @note[short] Windows: 0x4abbb0
     * @note[short] iOS: 0x386a3c
     * @note[short] Android
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x1a1f90
     * @note[short] MacOS (Intel): 0x1f3c90
     * @note[short] Windows: 0x495990
     * @note[short] iOS: 0x39957c
     * @note[short] Android
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): 0x1a1f98
     * @note[short] MacOS (Intel): 0x1f3ca0
     * @note[short] Windows: 0x4959a0
     * @note[short] iOS: 0x399584
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* label);

    /**
     * @note[short] MacOS (ARM): 0x173f2c
     * @note[short] MacOS (Intel): 0x1baf00
     * @note[short] Windows: 0x4a84d0
     * @note[short] iOS: 0x3864a8
     * @note[short] Android
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x17429c
     * @note[short] MacOS (Intel): 0x1bb270
     * @note[short] Windows: 0x4abb20
     * @note[short] iOS: 0x38680c
     * @note[short] Android
     */
    bool canSpawnTriggers();

    /**
     * @note[short] MacOS (ARM): 0x173fcc
     * @note[short] MacOS (Intel): 0x1bafb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x386548
     * @note[short] Android
     */
    int getTargetColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x17455c
     * @note[short] MacOS (Intel): 0x1bb460
     * @note[short] Android
     */
    bool hasSpawnTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x149850
     * @note[short] MacOS (Intel): 0x1848f0
     * @note[short] Windows: 0x4a5880
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x172a04
     * @note[short] MacOS (Intel): 0x1b90f0
     * @note[short] Windows: 0x4a5990
     * @note[short] iOS: 0x385078
     * @note[short] Android
     */
    void playTriggerEffect();

    /**
     * @note[short] MacOS (ARM): 0x17423c
     * @note[short] MacOS (Intel): 0x1bb210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3867ac
     * @note[short] Android
     */
    void resetSpawnTrigger();

    /**
     * @note[short] MacOS (ARM): 0x160968
     * @note[short] MacOS (Intel): 0x1a2cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37c8ec
     * @note[short] Android
     */
    void setTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x160980
     * @note[short] MacOS (Intel): 0x1a2cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37c904
     * @note[short] Android
     */
    void setTargetID2(int id);

    /**
     * @note[short] MacOS (ARM): 0x172d18
     * @note[short] MacOS (Intel): 0x1b94c0
     * @note[short] Windows: 0x4a5ee0
     * @note[short] iOS: 0x385284
     * @note[short] Android
     */
    void triggerEffectFinished();

    /**
     * @note[short] MacOS (ARM): 0x1740b8
     * @note[short] MacOS (Intel): 0x1bb080
     * @note[short] Windows: 0x4a8630
     * @note[short] iOS: 0x386634
     * @note[short] Android
     */
    void updateInteractiveHover(float offset);

    /**
     * @note[short] MacOS (ARM): 0x174040
     * @note[short] MacOS (Intel): 0x1bb020
     * @note[short] Windows: 0x4a85b0
     * @note[short] iOS: 0x3865bc
     * @note[short] Android
     */
    void updateSpecialColor();

    /**
     * @note[short] MacOS (ARM): 0x174364
     * @note[short] MacOS (Intel): 0x1bb320
     * @note[short] Windows: 0x4ab8f0
     * @note[short] iOS: 0x3868d4
     * @note[short] Android
     */
    void updateSpeedModType();
    bool m_unknownBool;
    cocos2d::ccColor3B m_triggerTargetColor;
    float m_duration;
    float m_opacity;
    bool m_triggerEffectPlaying;
    int m_targetGroupID;
    int m_centerGroupID;
    bool m_isTouchTriggered;
    bool m_isSpawnTriggered;
    bool m_hasCenterEffect;
    float m_shakeStrength;
    float m_shakeInterval;
    bool m_tintGround;
    bool m_usesPlayerColor1;
    bool m_usesPlayerColor2;
    bool m_usesBlending;
    cocos2d::CCPoint m_moveOffset;
    EasingType m_easingType;
    float m_easingRate;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_useMoveTarget;
    MoveTargetType m_moveTargetMode;
    float m_moveModX;
    float m_moveModY;
    bool m_smallStep;
    bool m_isDirectionFollowSnap360;
    int m_targetModCenterID;
    float m_directionModeDistance;
    bool m_isDynamicMode;
    bool m_isSilent;
    int m_specialTarget;
    float m_rotationDegrees;
    int m_times360;
    bool m_lockObjectRotation;
    int m_rotationTargetID;
    float m_rotationOffset;
    int m_dynamicModeEasing;
    float m_followXMod;
    float m_followYMod;
    float m_followYSpeed;
    float m_followYDelay;
    int m_followYOffset;
    float m_followYMaxSpeed;
    float m_fadeInDuration;
    float m_holdDuration;
    float m_fadeOutDuration;
    int m_pulseMode;
    int m_pulseTargetType;
    cocos2d::ccHSVValue m_hsvValue;
    int m_copyColorID;
    bool m_copyOpacity;
    bool m_pulseMainOnly;
    bool m_pulseDetailOnly;
    bool m_pulseExclusive;
    bool m_legacyHSV;
    bool m_activateGroup;
    bool m_touchHoldMode;
    TouchTriggerType m_touchToggleMode;
    TouchTriggerControl m_touchPlayerMode;
    bool m_isDualMode;
    int m_animationID;
    float m_spawnXPosition;
    int m_spawnOrder;
    bool m_isMultiTriggered;
    bool m_previewDisable;
    bool m_spawnOrdered;
    bool m_triggerOnExit;
    int m_itemID2;
    int m_controlID;
    bool m_targetControlID;
    bool m_isDynamicBlock;
    int m_itemID;
    bool m_targetPlayer1;
    bool m_targetPlayer2;
    bool m_followCPP;
    bool m_subtractCount;
    bool m_collectibleIsPickupItem;
    bool m_collectibleIsToggleTrigger;
    int m_collectibleParticleID;
    int m_collectiblePoints;
    bool m_hasNoAnimation;
    void* m_unk698;
    int m_forceModID;
    bool m_rotateFollowP1;
    bool m_rotateFollowP2;
    float m_unk6a8;
    float m_unk6ac;
    float m_unk6b0;
    bool m_unk6b4;
    float m_gravityValue;
    bool m_isSinglePTouch;
    float m_zoomValue;
    bool m_cameraIsFreeMode;
    bool m_cameraEditCameraSettings;
    float m_cameraEasingValue;
    float m_cameraPaddingValue;
    bool m_cameraDisableGridSnap;
    bool m_endReversed;
    float m_timeWarpTimeMod;
    bool m_shouldPreview;
    int m_ordValue;
    int m_channelValue;
    bool m_isReverse;
    short m_speedModType;
    cocos2d::CCPoint m_speedStart;
    int m_secretCoinID;
    bool m_unk6f4;
    bool m_unk6f5;
    cocos2d::CCPoint m_endPosition;
    float m_spawnTriggerDelay;
    float m_gravityMod;
    bool m_unk708;
    cocos2d::CCLabelBMFont* m_objectLabel;
    bool m_ignoreGroupParent;
    bool m_ignoreLinkedObjects;
    bool m_channelChanged;
    bool m_canSpawnTriggers;
};
