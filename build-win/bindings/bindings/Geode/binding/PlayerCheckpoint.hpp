#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DashRingObject.hpp"

class PlayerCheckpoint : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerCheckpoint, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0xb1ac4
     * @note[short] MacOS (Intel): 0xc9aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1273c4
     * @note[short] Android: Out of line
     */
     PlayerCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa8cac
     * @note[short] MacOS (Intel): 0xbb860
     * @note[short] Windows: 0x3bb010
     * @note[short] iOS: 0x11fd08
     * @note[short] Android
     */
    static PlayerCheckpoint* create();

    /**
     * @note[short] MacOS (ARM): 0xac350
     * @note[short] MacOS (Intel): 0xbf8e0
     * @note[short] Windows: 0x3bb230
     * @note[short] iOS: 0x122cd8
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_lastPosition;
    double m_yVelocityUnrounded;
    bool m_isUpsideDown;
    bool m_isSideways;
    bool m_isShip;
    bool m_isBall;
    bool m_isBird;
    bool m_isSwing;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isOnGround;
    GhostType m_ghostType;
    bool m_isMini;
    float m_playerSpeed;
    bool m_isHidden;
    bool m_isGoingLeft;
    double m_maybeReverseSpeed;
    bool m_jumpBuffered;
    bool m_isDashing;
    float m_dashStartTimeold;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    bool m_platformerCheckpoint;
    double m_lastFlipTime;
    float m_gravityMod;
    GameObject* m_objectSnappedTo;
    double m_snapDistance;
    double m_accelerationOrSpeed;
    bool m_decreaseBoostSlide;
    int m_followRelated;
    gd::vector<float> m_playerFollowFloats;
    float m_unk838;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    float m_rotation;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    int m_unk50C;
    int m_unk510;
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    bool m_isBallRotating;
    bool m_unk669;
    GameObject* m_currentPotentialSlope;
    GameObject* m_currentSlope;
    double unk_584;
    int m_collidingWithSlopeId;
    bool m_slopeFlipGravityRelated;
    float m_slopeAngleRadians;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_isBallRotating2;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    double m_gameModeChangedTime;
    bool m_padRingRelated;
    bool m_maybeIsFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_isOnGround3;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_ringJumpRelated;
    gd::unordered_set<int> m_ringRelatedSet;
    bool m_maybeSpriteRelated;
    float m_landParticlesAngle;
    float m_landParticleRelatedY;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    double m_unk3d0;
    double m_blackOrbRelated;
    bool m_unk3e0;
    bool m_unk3e1;
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    bool m_stateRingJump2;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_maybeTouchedBreakableBlock;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_maybeUpsideDownSlope;
    int m_reverseRelated;
    double m_maybeReverseAcceleration;
    float m_xVelocityRelated2;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_isOnGround2;
    double m_lastLandTime;
    float m_platformerVelocityRelated;
    bool m_maybeIsBoosted;
    double m_scaleXRelatedTime;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    double m_totalTime;
    float m_yVelocityRelated3;
    bool m_defaultMiniIcon;
    bool m_swapColors;
    bool m_switchDashFireColor;
    int m_stateOnGround;
    unsigned char m_stateUnk;
    unsigned char m_stateNoStickX;
    unsigned char m_stateNoStickY;
    unsigned char m_stateUnk2;
    int m_stateBoostX;
    int m_stateBoostY;
    int m_maybeStateForce2;
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    double m_scaleXRelated;
    bool m_maybeHasStopped;
    float m_xVelocityRelated;
    bool m_maybeGoingCorrectSlopeDirection;
    bool m_isSliding;
    double m_maybeSlopeForce;
    bool m_isOnIce;
    double m_physDeltaRelated;
    bool m_isOnGround4;
    int m_maybeSlidingTime;
    double m_maybeSlidingStartTime;
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    bool m_platformerMovingLeft;
    bool m_platformerMovingRight;
    bool m_isSlidingRight;
    double m_maybeChangedDirectionAngle;
    double m_unkUnused2;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    gd::map<int, bool> m_jumpPadRelated;
    float m_fallStartY;
};
