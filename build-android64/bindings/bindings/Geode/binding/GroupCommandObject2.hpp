#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "KeyframeObject.hpp"

class GroupCommandObject2 {
public:
    static constexpr auto CLASS_NAME = "GroupCommandObject2";

    /**
     * @note[short] MacOS (ARM): 0x447014
     * @note[short] MacOS (Intel): 0x4ecb30
     * @note[short] Windows: 0x257690
     * @note[short] iOS: 0xa9f4
     * @note[short] Android: Rebinded
     */
     GroupCommandObject2();

    /**
     * @note[short] MacOS (ARM): 0x447144
     * @note[short] MacOS (Intel): 0x4ecd00
     * @note[short] Windows: 0x257700
     * @note[short] iOS: 0xaa60
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x447794
     * @note[short] MacOS (Intel): 0x4ed4f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf34
     * @note[short] Android
     */
    void resetDelta(bool intermediate);

    /**
     * @note[short] MacOS (ARM): 0x447718
     * @note[short] MacOS (Intel): 0x4ed440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaebc
     * @note[short] Android
     */
    void runFollowCommand(double xMod, double yMod, double duration);

    /**
     * @note[short] MacOS (ARM): 0x447558
     * @note[short] MacOS (Intel): 0x4ed1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xacfc
     * @note[short] Android
     */
    void runMoveCommand(cocos2d::CCPoint offset, double duration, int easingType, double easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, double moveModX, double moveModY);

    /**
     * @note[short] MacOS (ARM): 0x447748
     * @note[short] MacOS (Intel): 0x4ed490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaeec
     * @note[short] Android
     */
    void runPlayerFollowCommand(double delay, double speed, int offset, double maxSpeed, double duration);

    /**
     * @note[short] MacOS (ARM): 0x4476a8
     * @note[short] MacOS (Intel): 0x4ed390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xae4c
     * @note[short] Android
     */
    void runRotateCommand(double offset, double duration, int easingType, double easingRate, bool lockRotation, int targetType);

    /**
     * @note[short] MacOS (ARM): 0x4476f8
     * @note[short] MacOS (Intel): 0x4ed400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xae9c
     * @note[short] Android
     */
    void runTransformCommand(double duration, int easingType, double easingRate);

    /**
     * @note[short] MacOS (ARM): 0x44722c
     * @note[short] MacOS (Intel): 0x4ece80
     * @note[short] Windows: 0x257900
     * @note[short] iOS: 0xab44
     * @note[short] Android
     */
    void step(float dt);

    /**
     * @note[short] MacOS (ARM): 0x447440
     * @note[short] MacOS (Intel): 0x4ed0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac9c
     * @note[short] Android
     */
    void stepTransformCommand(float dt, bool intermediate, bool skipStep);

    /**
     * @note[short] MacOS (ARM): 0x4472fc
     * @note[short] MacOS (Intel): 0x4ecf50
     * @note[short] Windows: 0x2579d0
     * @note[short] iOS: 0xac0c
     * @note[short] Android
     */
    void updateAction(int type, float value);

    /**
     * @note[short] MacOS (ARM): 0x4477bc
     * @note[short] MacOS (Intel): 0x4ed540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf5c
     * @note[short] Android
     */
    void updateEffectAction(float value, int type);
    int m_groupCommandUniqueID;
    cocos2d::CCPoint m_moveOffset;
    EasingType m_easingType;
    double m_easingRate;
    double m_duration;
    double m_deltaTime;
    int m_targetGroupID;
    int m_centerGroupID;
    double m_currentXOffset;
    double m_currentYOffset;
    double m_deltaX;
    double m_deltaY;
    double m_oldDeltaX;
    double m_oldDeltaY;
    double m_lockedCurrentXOffset;
    double m_lockedCurrentYOffset;
    bool m_finished;
    bool m_disabled;
    bool m_finishRelated;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_lockedInX;
    bool m_lockedInY;
    double m_moveModX;
    double m_moveModY;
    double m_currentRotateOrTransformValue;
    double m_currentRotateOrTransformDelta;
    double m_someInterpValue1RelatedOne;
    double m_someInterpValue2RelatedOne;
    double m_rotationOffset;
    bool m_lockObjectRotation;
    int m_targetPlayer;
    double m_followXMod;
    double m_followYMod;
    int m_commandType;
    double m_someInterpValue1;
    double m_someInterpValue2;
    double m_keyframeRelated;
    double m_targetScaleX;
    double m_targetScaleY;
    double m_transformTriggerProperty450;
    double m_transformTriggerProperty451;
    double m_someInterpValue1RelatedZero;
    double m_someInterpValue2RelatedZero;
    bool m_onlyMove;
    bool m_transformRelatedFalse;
    bool m_relativeRotation;
    double m_someInterpValue1Related;
    double m_someInterpValue2Related;
    double m_followYSpeed;
    double m_followYDelay;
    int m_followYOffset;
    double m_followYMaxSpeed;
    int m_triggerUniqueID;
    int m_controlID;
    double m_deltaX_3;
    double m_deltaY_3;
    double m_oldDeltaX_3;
    double m_oldDeltaY_3;
    double m_Delta_3_Related;
    double m_unkDoubleMaybeUnused;
    int m_actionType1;
    int m_actionType2;
    double m_actionValue1;
    double m_actionValue2;
    bool m_someInterpValue1RelatedFalse;
    float m_deltaTimeInFloat;
    bool m_alreadyUpdated;
    bool m_doUpdate;
    gd::vector<KeyframeObject> m_keyframes;
    cocos2d::CCPoint m_splineRelated;
    GameObject* m_gameObject;
    float m_gameObjectRotation;
    gd::vector<int> m_remapKeys;
    bool m_someInterpValue2RelatedTrue;
    int m_unkInt204;
};
