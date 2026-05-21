#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x45710
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePlus();

    /**
     * @note[short] MacOS (ARM): 0x3e79bc
     * @note[short] MacOS (Intel): 0x481910
     * @note[short] Windows: 0x47d30
     * @note[short] iOS: 0x1b7b5c
     * @note[short] Android: Rebinded
     */
     ~CCSpritePlus();

    /**
Creates a sprite by a given sprite frame

 @param frame the frame to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fa     * @note[short] MacOS (ARM): 0x3e7aa4
     * @note[short] MacOS (Intel): 0x481a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b7bc0
     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
Creates a sprite by a given sprite's frame name

 @param frame the frame or filename to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fa     * @note[short] MacOS (ARM): 0x3e7b54
     * @note[short] MacOS (Intel): 0x481ad0
     * @note[short] Windows: 0x47d80
     * @note[short] iOS: 0x1b7c64
     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrameName(char const* frame);

    /**
Sets X's scale on itself and it's followers

 @param scaleX the scale of X to      * @note[short] MacOS (ARM): 0x3e7f84
     * @note[short] MacOS (Intel): 0x481f60
     * @note[short] Windows: 0x48240
     * @note[short] iOS: 0x1b7ffc
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
Sets Y's scale on itself and it's followers

 @param scaleY the scale of Y to      * @note[short] MacOS (ARM): 0x3e8008
     * @note[short] MacOS (Intel): 0x481fe0
     * @note[short] Windows: 0x482c0
     * @note[short] iOS: 0x1b8080
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
Sets the Scale of itself and it's followers

 @param scale the scale value to      * @note[short] MacOS (ARM): 0x3e808c
     * @note[short] MacOS (Intel): 0x482060
     * @note[short] Windows: 0x48350
     * @note[short] iOS: 0x1b8104
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
Sets the position where the sprite will be at and it's followers

 @param position the position to place to the sprite and it's follow     * @note[short] MacOS (ARM): 0x3e7c34
     * @note[short] MacOS (Intel): 0x481bc0
     * @note[short] Windows: 0x47e40
     * @note[short] iOS: 0x1b7cac
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
Sets the sprite's given rotation and it's followers

 @param rotation the rotation value to      * @note[short] MacOS (ARM): 0x3e7cac
     * @note[short] MacOS (Intel): 0x481c40
     * @note[short] Windows: 0x47ed0
     * @note[short] iOS: 0x1b7d24
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
Sets the sprite's given rotation of X and it's followers

 @param rotationX the rotation of X to s     * @note[short] MacOS (ARM): 0x3e7d24
     * @note[short] MacOS (Intel): 0x481cc0
     * @note[short] Windows: 0x47f60
     * @note[short] iOS: 0x1b7d9c
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
Sets the sprite's given rotation of Y and it's followers

 @param rotationY the rotation of Y to      * @note[short] MacOS (ARM): 0x3e7d9c
     * @note[short] MacOS (Intel): 0x481d40
     * @note[short] Windows: 0x47ff0
     * @note[short] iOS: 0x1b7e14
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
Initalizes the sprite using a texture

 @param texture the texture to initalize the sprite with

 @return true if initalization succeed     * @note[short] MacOS (ARM): 0x3e7c20
     * @note[short] MacOS (Intel): 0x481ba0
     * @note[short] Windows: 0x47e20
     * @note[short] iOS: 0x1b7c98
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
Initalizes the sprite with a frame name

 @param frameName the frame to initalize the sprite with

 @return true if initalization succee     * @note[short] MacOS (ARM): 0x3e7c14
     * @note[short] MacOS (Intel): 0x481b80
     * @note[short] Windows: 0x47e10
     * @note[short] iOS: 0x1b7c8c
     * @note[short] Android
     */
    virtual bool initWithSpriteFrameName(char const* frameName);

    /**
Sets flipX to itself and it's followers

 @param flipX the direction that the sprite should be flipped     * @note[short] MacOS (ARM): 0x3e7e14
     * @note[short] MacOS (Intel): 0x481dc0
     * @note[short] Windows: 0x48080
     * @note[short] iOS: 0x1b7e8c
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
Sets flipY to itself and it's followers

 @param flipY the direction that the sprite should be flipped     * @note[short] MacOS (ARM): 0x3e7ecc
     * @note[short] MacOS (Intel): 0x481e90
     * @note[short] Windows: 0x48160
     * @note[short] iOS: 0x1b7f44
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
Adds a follower to the sprite

 @param follower Something that will follow this spr     * @note[short] MacOS (ARM): 0x3e8110
     * @note[short] MacOS (Intel): 0x4820e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8188
     * @note[short] Android
     */
    void addFollower(cocos2d::CCNode* follower);

    /**
Attaches a sprite to the sprite. and other way around

 you can think of this as attaching 2 lego blocks together and letting

 it drag along.

 @param sprite the sprite to attach to the main sprite and vice ve     * @note[short] MacOS (ARM): 0x3e81a8
     * @note[short] MacOS (Intel): 0x482180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8208
     * @note[short] Android
     */
    void followSprite(CCSpritePlus* sprite);

    /**
Obtains the first following sprite if it has a follower on hand

 @return nullptr if there is no follower avali     * @note[short] MacOS (ARM): 0x3e8250
     * @note[short] MacOS (Intel): 0x482220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8230
     * @note[short] Android
     */
    CCSpritePlus* getFollower();

    /**
Removes a specific following sprite from this sprite.

 @param sprite follower sprite that will be remov     * @note[short] MacOS (ARM): 0x3e8160
     * @note[short] MacOS (Intel): 0x482130
     * @note[short] Windows: 0x483e0
     * @note[short] iOS: 0x1b81cc
     * @note[short] Android
     */
    void removeFollower(cocos2d::CCNode* sprite);

    /**
Stops this child sprite from following it's given par     * @note[short] MacOS (ARM): 0x3e8200
     * @note[short] MacOS (Intel): 0x4821d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b821c
     * @note[short] Android
     */
    void stopFollow();
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
};
