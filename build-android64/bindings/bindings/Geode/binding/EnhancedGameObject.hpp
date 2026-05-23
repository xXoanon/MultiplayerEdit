#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x18b500
     * @note[short] iOS: 0x2655c0
     * @note[short] Android: Out of line
     */
     EnhancedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x4e6420
     * @note[short] MacOS (Intel): 0x5a1e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254a6c
     * @note[short] Android
     */
    static EnhancedGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x4fb368
     * @note[short] MacOS (Intel): 0x5cc870
     * @note[short] Windows: 0x1a4f70
     * @note[short] iOS: 0x263548
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x4facc4
     * @note[short] MacOS (Intel): 0x5cc0b0
     * @note[short] Windows: 0x1a4930
     * @note[short] iOS: 0x262f94
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x4fc5a4
     * @note[short] MacOS (Intel): 0x5cf790
     * @note[short] Windows: 0x1a6a70
     * @note[short] iOS: 0x264714
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x4faf7c
     * @note[short] MacOS (Intel): 0x5cc380
     * @note[short] Windows: 0x1a4c40
     * @note[short] iOS: 0x26321c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x4fc6f0
     * @note[short] MacOS (Intel): 0x5cf8d0
     * @note[short] Windows: 0x1a6bd0
     * @note[short] iOS: 0x264788
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4fadf0
     * @note[short] MacOS (Intel): 0x5cc210
     * @note[short] Windows: 0x1a4a80
     * @note[short] iOS: 0x2630bc
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x4fad40
     * @note[short] MacOS (Intel): 0x5cc140
     * @note[short] Windows: 0x1a49e0
     * @note[short] iOS: 0x263010
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x4faeec
     * @note[short] MacOS (Intel): 0x5cc2e0
     * @note[short] Windows: 0x1a4b70
     * @note[short] iOS: 0x263194
     * @note[short] Android
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x4fadfc
     * @note[short] MacOS (Intel): 0x5cc220
     * @note[short] Windows: 0x1a4a90
     * @note[short] iOS: 0x2630c8
     * @note[short] Android
     */
    virtual void activatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x4fae5c
     * @note[short] MacOS (Intel): 0x5cc270
     * @note[short] Windows: 0x1a4af0
     * @note[short] iOS: 0x263120
     * @note[short] Android
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x4faecc
     * @note[short] MacOS (Intel): 0x5cc2c0
     * @note[short] Windows: 0x1a4b50
     * @note[short] iOS: 0x263178
     * @note[short] Android
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x4faf00
     * @note[short] MacOS (Intel): 0x5cc300
     * @note[short] Windows: 0x1a4bd0
     * @note[short] iOS: 0x2631a8
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x4fab90
     * @note[short] MacOS (Intel): 0x5cbdb0
     * @note[short] Windows: 0x1a47d0
     * @note[short] iOS: 0x262e60
     * @note[short] Android
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): 0x1a1f68
     * @note[short] MacOS (Intel): 0x1f3c40
     * @note[short] Windows: 0x18b5e0
     * @note[short] iOS: 0x26550c
     * @note[short] Android
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1a1f70
     * @note[short] MacOS (Intel): 0x1f3c50
     * @note[short] Windows: 0x18b5f0
     * @note[short] iOS: 0x265514
     * @note[short] Android
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x4fadd0
     * @note[short] MacOS (Intel): 0x5cc1f0
     * @note[short] Windows: 0x1a4a60
     * @note[short] iOS: 0x2630a0
     * @note[short] Android
     */
    virtual bool canMultiActivate(bool multiActivate);

    /**
     * @note[short] MacOS (ARM): 0x4fad78
     * @note[short] MacOS (Intel): 0x5cc180
     * @note[short] Windows: 0x1a4a20
     * @note[short] iOS: 0x263048
     * @note[short] Android
     */
    virtual void powerOnObject(int state);

    /**
     * @note[short] MacOS (ARM): 0x4fad8c
     * @note[short] MacOS (Intel): 0x5cc1a0
     * @note[short] Windows: 0x1a4a40
     * @note[short] iOS: 0x26305c
     * @note[short] Android
     */
    virtual void powerOffObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x200828
     * @note[short] MacOS (Intel): 0x25b9b0
     * @note[short] Windows: 0x1a7db0
     * @note[short] iOS: 0x347bc4
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x201c64
     * @note[short] MacOS (Intel): 0x25d900
     * @note[short] Windows: 0x1a9a70
     * @note[short] iOS: 0x348f44
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool animate);

    /**
     * @note[short] MacOS (ARM): 0x4fb2f8
     * @note[short] MacOS (Intel): 0x5cc7d0
     * @note[short] Windows: 0x1a7280
     * @note[short] iOS: 0x2634d8
     * @note[short] Android
     */
    void createRotateAction(float angle, int clockwiseDirection);

    /**
     * @note[short] MacOS (ARM): 0x4fab50
     * @note[short] MacOS (Intel): 0x5cbd70
     * @note[short] Windows: 0x1a4780
     * @note[short] iOS: 0x262e20
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x201d5c
     * @note[short] MacOS (Intel): 0x25d9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x349010
     * @note[short] Android
     */
    void previewAnimateOnTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4fdce0
     * @note[short] MacOS (Intel): 0x5d1590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x264d88
     * @note[short] Android
     */
    void refreshRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x201d9c
     * @note[short] MacOS (Intel): 0x25da30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x349050
     * @note[short] Android
     */
    void resetSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x201dcc
     * @note[short] MacOS (Intel): 0x25da80
     * @note[short] Windows: 0x1a9b70
     * @note[short] iOS: 0x349080
     * @note[short] Android
     */
    void setupAnimationVariables();

    /**
     * @note[short] MacOS (ARM): 0x201c00
     * @note[short] MacOS (Intel): 0x25d8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x348ee0
     * @note[short] Android
     */
    void triggerAnimation();

    /**
     * @note[short] MacOS (ARM): 0x4fdd54
     * @note[short] MacOS (Intel): 0x5d1610
     * @note[short] Windows: 0x1a7310
     * @note[short] iOS: 0x264d94
     * @note[short] Android
     */
    void updateRotateAction(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4fada4
     * @note[short] MacOS (Intel): 0x5cc1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x263074
     * @note[short] Android
     */
    void updateState(int state);

    /**
     * @note[short] MacOS (ARM): 0x4f2768
     * @note[short] MacOS (Intel): 0x5c1a80
     * @note[short] Windows: 0x1a68f0
     * @note[short] iOS: 0x25f504
     * @note[short] Android
     */
    void updateUserCoin();

    /**
     * @note[short] MacOS (ARM): 0x201aa4
     * @note[short] MacOS (Intel): 0x25d770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x348da8
     * @note[short] Android
     */
    void waitForAnimationTrigger();
    bool m_poweredOn;
    int m_state;
    int m_animationRandomizedStartValue;
    float m_animationStart;
    float m_unk540;
    float m_unk544;
    bool m_unk548;
    float m_randomFrameTime;
    bool m_visible;
    bool m_shouldNotHideAnimFreeze;
    bool m_usesSpecialAnimation;
    float m_frameTime;
    short m_frames;
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    float m_rotationSpeed;
    float m_rotationAngle;
    float m_rotationDelta;
    float m_rotationAnimationSpeed;
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    bool m_animationTriggered;
    int m_unkAnimationInt;
    int m_maybeAnimationVariableXInt;
    int m_maybeAnimationVariableYInt;
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    bool m_activated;
    bool m_activatedByPlayer1;
    bool m_activatedByPlayer2;
    bool m_hasUniqueCoin;
};
