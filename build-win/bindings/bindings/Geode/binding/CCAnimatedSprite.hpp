#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3ff20
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x2dde0c
     * @note[short] MacOS (Intel): 0x351130
     * @note[short] Windows: 0x411b0
     * @note[short] iOS: 0x2fdf70
     * @note[short] Android: Rebinded
     */
     ~CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x2dcb8c
     * @note[short] MacOS (Intel): 0x34fe10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd21c
     * @note[short] Android
     */
    static CCAnimatedSprite* createWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ddcac
     * @note[short] MacOS (Intel): 0x350fc0
     * @note[short] Windows: 0x410e0
     * @note[short] iOS: 0x2fdeb0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2ddd5c
     * @note[short] MacOS (Intel): 0x351070
     * @note[short] Windows: 0x41140
     * @note[short] iOS: 0x2fdf10
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2ddc94
     * @note[short] MacOS (Intel): 0x350fa0
     * @note[short] Windows: 0x410c0
     * @note[short] iOS: 0x2fde98
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2ddc60
     * @note[short] MacOS (Intel): 0x350f70
     * @note[short] Windows: 0x41080
     * @note[short] iOS: 0x2fde64
     * @note[short] Android
     */
    virtual void animationFinishedO(cocos2d::CCObject* str);

    /**
     * @note[short] MacOS (ARM): 0x2dd548
     * @note[short] MacOS (Intel): 0x350830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd8b4
     * @note[short] Android
     */
    void cleanupSprite();

    /**
     * @note[short] MacOS (ARM): 0x2dcc60
     * @note[short] MacOS (Intel): 0x34fef0
     * @note[short] Windows: 0x40030
     * @note[short] iOS: 0x2fd2e0
     * @note[short] Android
     */
    bool initWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2dce50
     * @note[short] MacOS (Intel): 0x3500e0
     * @note[short] Windows: 0x40250
     * @note[short] iOS: 0x2fd444
     * @note[short] Android
     */
    void loadType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2dd6e4
     * @note[short] MacOS (Intel): 0x3509f0
     * @note[short] Windows: 0x40cf0
     * @note[short] iOS: 0x2fda50
     * @note[short] Android: Rebinded
     */
    void runAnimation(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x2dd77c
     * @note[short] MacOS (Intel): 0x350a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdad8
     * @note[short] Android: Rebinded
     */
    void runAnimationForced(gd::string animation);

    /**
     * @note[short] MacOS (ARM): 0x2ddc24
     * @note[short] MacOS (Intel): 0x350f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fde28
     * @note[short] Android
     */
    void stopTween();

    /**
     * @note[short] MacOS (ARM): 0x2dd5d8
     * @note[short] MacOS (Intel): 0x3508d0
     * @note[short] Windows: 0x40b80
     * @note[short] iOS: 0x2fd944
     * @note[short] Android
     */
    void switchToMode(spriteMode mode);

    /**
     * @note[short] MacOS (ARM): 0x2dd850
     * @note[short] MacOS (Intel): 0x350b30
     * @note[short] Windows: 0x40d60
     * @note[short] iOS: 0x2fdb9c
     * @note[short] Android: Rebinded
     */
    void tweenToAnimation(gd::string animation, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2ddb08
     * @note[short] MacOS (Intel): 0x350e20
     * @note[short] Windows: 0x41030
     * @note[short] iOS: 0x2fdd8c
     * @note[short] Android
     */
    void tweenToAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x2dd820
     * @note[short] MacOS (Intel): 0x350b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdb6c
     * @note[short] Android
     */
    void willPlayAnimation();
    gd::string m_unkString1;
    gd::string m_activeTween;
    SpriteAnimationManager* m_animationManager;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCSprite* m_fbfSprite;
    CCPartAnimSprite* m_paSprite;
    spriteMode m_spriteMode;
    gd::string m_currentAnim;
    AnimatedSpriteDelegate* m_delegate;
};
