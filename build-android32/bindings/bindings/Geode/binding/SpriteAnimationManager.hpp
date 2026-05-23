#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpriteAnimationManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SpriteAnimationManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteAnimationManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): 0x636e98
     * @note[short] MacOS (Intel): 0x7246a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x324648
     * @note[short] Android: Rebinded
     */
     ~SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): 0x633f14
     * @note[short] MacOS (Intel): 0x7212c0
     * @note[short] Windows: 0x72fd0
     * @note[short] iOS: 0x322bbc
     * @note[short] Android: Rebinded
     */
    static void createAnimations(gd::string definition);

    /**
     * @note[short] MacOS (ARM): 0x633c00
     * @note[short] MacOS (Intel): 0x720fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3228d0
     * @note[short] Android: Rebinded
     */
    static SpriteAnimationManager* createWithOwner(CCAnimatedSprite* sprite, gd::string definition);

    /**
     * @note[short] MacOS (ARM): 0x635894
     * @note[short] MacOS (Intel): 0x722f20
     * @note[short] Windows: 0x74620
     * @note[short] iOS: 0x323ac8
     * @note[short] Android
     */
    void animationFinished();

    /**
     * @note[short] MacOS (ARM): 0x6369b0
     * @note[short] MacOS (Intel): 0x7241b0
     * @note[short] Windows: 0x74670
     * @note[short] iOS: 0x3244b8
     * @note[short] Android
     */
    void callAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x636e70
     * @note[short] MacOS (Intel): 0x724670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x324620
     * @note[short] Android
     */
    void doCleanup();

    /**
     * @note[short] MacOS (ARM): 0x636320
     * @note[short] MacOS (Intel): 0x723ab0
     * @note[short] Windows: 0x73f60
     * @note[short] iOS: 0x324100
     * @note[short] Android: Rebinded
     */
    void executeAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x636ac4
     * @note[short] MacOS (Intel): 0x7242c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void finishAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x6366d0
     * @note[short] MacOS (Intel): 0x723ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3243dc
     * @note[short] Android: Rebinded
     */
    spriteMode getAnimType(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x636140
     * @note[short] MacOS (Intel): 0x7238c0
     * @note[short] Windows: 0x74750
     * @note[short] iOS: 0x323fdc
     * @note[short] Android: Rebinded
     */
    int getPrio(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x633ce8
     * @note[short] MacOS (Intel): 0x7210a0
     * @note[short] Windows: 0x72390
     * @note[short] iOS: 0x3229b8
     * @note[short] Android: Rebinded
     */
    bool initWithOwner(CCAnimatedSprite* sprite, gd::string definition);

    /**
     * @note[short] MacOS (ARM): 0x634e14
     * @note[short] MacOS (Intel): 0x722270
     * @note[short] Windows: 0x72600
     * @note[short] iOS: 0x3234d0
     * @note[short] Android: Rebinded
     */
    void loadAnimations(gd::string definition);

    /**
     * @note[short] MacOS (ARM): 0x636bd0
     * @note[short] MacOS (Intel): 0x724410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3245a4
     * @note[short] Android
     */
    void offsetCurrentAnimation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x6366e8
     * @note[short] MacOS (Intel): 0x723ee0
     * @note[short] Windows: 0x74450
     * @note[short] iOS: 0x3243f4
     * @note[short] Android
     */
    void overridePrio();

    /**
     * @note[short] MacOS (ARM): 0x635dd0
     * @note[short] MacOS (Intel): 0x7234c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void playSound(gd::string sound);

    /**
     * @note[short] MacOS (ARM): 0x635bf4
     * @note[short] MacOS (Intel): 0x7232d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x323cf0
     * @note[short] Android: Rebinded
     */
    void playSoundForAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x636168
     * @note[short] MacOS (Intel): 0x7238f0
     * @note[short] Windows: 0x74540
     * @note[short] iOS: 0x324004
     * @note[short] Android: Rebinded
     */
    void queueAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x636c48
     * @note[short] MacOS (Intel): 0x724470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAnimState();

    /**
     * @note[short] MacOS (ARM): 0x635dd4
     * @note[short] MacOS (Intel): 0x7234d0
     * @note[short] Windows: 0x73e00
     * @note[short] iOS: 0x323ddc
     * @note[short] Android: Rebinded
     */
    void runAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x636798
     * @note[short] MacOS (Intel): 0x723f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runQueuedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x6368e0
     * @note[short] MacOS (Intel): 0x7240e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x324470
     * @note[short] Android
     */
    void stopAnimations();

    /**
     * @note[short] MacOS (ARM): 0x6358f8
     * @note[short] MacOS (Intel): 0x722f80
     * @note[short] Windows: 0x73b90
     * @note[short] iOS: 0x323b2c
     * @note[short] Android: Rebinded
     */
    void storeAnimation(cocos2d::CCAnimate* action, cocos2d::CCAnimate* frames, gd::string name, int priority, spriteMode type, cocos2d::CCSpriteFrame* first);

    /**
     * @note[short] MacOS (ARM): 0x635834
     * @note[short] MacOS (Intel): 0x722ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x323a68
     * @note[short] Android: Rebinded
     */
    void storeSoundForAnimation(cocos2d::CCString* sound, gd::string animation, float delay);

    /**
     * @note[short] MacOS (ARM): 0x636c80
     * @note[short] MacOS (Intel): 0x7244b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void switchToFirstFrameOfAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x635bb0
     * @note[short] MacOS (Intel): 0x723270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x323ca8
     * @note[short] Android
     */
    void updateAnimationSpeed(float speed);
    CCAnimatedSprite* m_sprite;
    cocos2d::CCDictionary* m_priorityDict;
    cocos2d::CCDictionary* m_typeDict;
    cocos2d::CCDictionary* m_soundDict;
    gd::string m_queuedAnimation;
    float m_speed;
    cocos2d::CCDictionary* m_animateDict;
    cocos2d::CCDictionary* m_frameDict;
    gd::string m_currentAnimation;
    gd::string m_nextAnimation;
};
