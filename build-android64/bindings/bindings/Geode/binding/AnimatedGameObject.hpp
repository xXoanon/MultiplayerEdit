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
#include "AnimatedSpriteDelegate.hpp"
#include "SpritePartDelegate.hpp"

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16fd60
     * @note[short] MacOS (Intel): 0x1b6150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3830cc
     * @note[short] Android: Rebinded
     */
     ~AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1724f0
     * @note[short] MacOS (Intel): 0x1b8c80
     * @note[short] Windows: 0x4a5380
     * @note[short] iOS: 0x384e84
     * @note[short] Android
     */
    static gd::string animationForID(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0x16fedc
     * @note[short] MacOS (Intel): 0x1b6300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x383150
     * @note[short] Android
     */
    static AnimatedGameObject* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x17285c
     * @note[short] MacOS (Intel): 0x1b8f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float getTweenTime(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0x170f18
     * @note[short] MacOS (Intel): 0x1b73a0
     * @note[short] Windows: 0x4a3cc0
     * @note[short] iOS: 0x383f28
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x1728d0
     * @note[short] MacOS (Intel): 0x1b8fa0
     * @note[short] Windows: 0x4a5830
     * @note[short] iOS: 0x384f50
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x17286c
     * @note[short] MacOS (Intel): 0x1b8f30
     * @note[short] Windows: 0x4a5330
     * @note[short] iOS: 0x384ef4
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x170e2c
     * @note[short] MacOS (Intel): 0x1b7290
     * @note[short] Windows: 0x4a3b10
     * @note[short] iOS: 0x383e48
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x170e70
     * @note[short] MacOS (Intel): 0x1b72d0
     * @note[short] Windows: 0x4a3be0
     * @note[short] iOS: 0x383e8c
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x170fe4
     * @note[short] MacOS (Intel): 0x1b7480
     * @note[short] Windows: 0x4a3d90
     * @note[short] iOS: 0x383ff4
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x171018
     * @note[short] MacOS (Intel): 0x1b74b0
     * @note[short] Windows: 0x4a3dd0
     * @note[short] iOS: 0x384028
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x172054
     * @note[short] MacOS (Intel): 0x1b87e0
     * @note[short] Windows: 0x4a50b0
     * @note[short] iOS: 0x384a64
     * @note[short] Android: Rebinded
     */
    virtual void displayFrameChanged(cocos2d::CCObject* sprite, gd::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x170000
     * @note[short] MacOS (Intel): 0x1b6450
     * @note[short] Windows: 0x4a2a40
     * @note[short] iOS: 0x383214
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x172374
     * @note[short] MacOS (Intel): 0x1b8b20
     * @note[short] Windows: 0x4a5200
     * @note[short] iOS: 0x384d20
     * @note[short] Android
     */
    void playAnimation(int type);

    /**
     * @note[short] MacOS (ARM): 0x17019c
     * @note[short] MacOS (Intel): 0x1b65f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3833b0
     * @note[short] Android
     */
    void setupAnimatedSize(int id);

    /**
     * @note[short] MacOS (ARM): 0x17032c
     * @note[short] MacOS (Intel): 0x1b67b0
     * @note[short] Windows: 0x4a2fd0
     * @note[short] iOS: 0x383540
     * @note[short] Android
     */
    void setupChildSprites();

    /**
     * @note[short] MacOS (ARM): 0x170c14
     * @note[short] MacOS (Intel): 0x1b7050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x383c3c
     * @note[short] Android
     */
    void updateChildSpriteColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x170c94
     * @note[short] MacOS (Intel): 0x1b70d0
     * @note[short] Windows: 0x4a38a0
     * @note[short] iOS: 0x383cbc
     * @note[short] Android
     */
    void updateObjectAnimation();
    CCAnimatedSprite* m_animatedSprite;
    cocos2d::CCSprite* m_childSprite;
    CCSpritePart* m_eyeSpritePart;
    bool m_finishedAnimating;
    bool m_playingAnimation;
    gd::string m_currentAnimation;
    bool m_notGrounded;
    int m_animationID;
};
