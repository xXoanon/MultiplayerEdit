#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPointDouble.hpp"
#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS (ARM): 0x39215c
     * @note[short] MacOS (Intel): 0x41dbe0
     * @note[short] Windows: 0x385350
     * @note[short] iOS: 0x22eb48
     * @note[short] Android: Out of line
     */
     PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x372f0c
     * @note[short] MacOS (Intel): 0x3fa360
     * @note[short] Windows: 0x3864a0
     * @note[short] iOS: 0x2175f8
     * @note[short] Android: Rebinded
     */
     ~PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x373100
     * @note[short] MacOS (Intel): 0x3fa640
     * @note[short] Windows: 0x3866d0
     * @note[short] iOS: 0x21776c
     * @note[short] Android
     */
    static PlayerObject* create(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x375754
     * @note[short] MacOS (Intel): 0x3fcf50
     * @note[short] Windows: 0x388d80
     * @note[short] iOS: 0x2196c8
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x391b90
     * @note[short] MacOS (Intel): 0x41d570
     * @note[short] Windows: 0x3a3910
     * @note[short] iOS: 0x22e79c
     * @note[short] Android
     */
    virtual void setScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x391b94
     * @note[short] MacOS (Intel): 0x41d580
     * @note[short] Windows: 0x3a3920
     * @note[short] iOS: 0x22e7a0
     * @note[short] Android
     */
    virtual void setScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x391b98
     * @note[short] MacOS (Intel): 0x41d590
     * @note[short] Windows: 0x3a3930
     * @note[short] iOS: 0x22e7a4
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x38e200
     * @note[short] MacOS (Intel): 0x419200
     * @note[short] Windows: 0x39c640
     * @note[short] iOS: 0x22b6d0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x391b9c
     * @note[short] MacOS (Intel): 0x41d5a0
     * @note[short] Windows: 0x3a3940
     * @note[short] iOS: 0x22e7a8
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x391b20
     * @note[short] MacOS (Intel): 0x41d4e0
     * @note[short] Windows: 0x3a3840
     * @note[short] iOS: 0x22e72c
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x38f294
     * @note[short] MacOS (Intel): 0x41a400
     * @note[short] Windows: 0x39daf0
     * @note[short] iOS: 0x22c6b4
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x38ecb8
     * @note[short] MacOS (Intel): 0x419de0
     * @note[short] Windows: 0x39d310
     * @note[short] iOS: 0x22c170
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x391b24
     * @note[short] MacOS (Intel): 0x41d4f0
     * @note[short] Windows: 0x3a3850
     * @note[short] iOS: 0x22e730
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x391b8c
     * @note[short] MacOS (Intel): 0x41d560
     * @note[short] Windows: 0x198200
     * @note[short] iOS: 0x22e798
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x387858
     * @note[short] MacOS (Intel): 0x411f00
     * @note[short] Windows: 0x396ee0
     * @note[short] iOS: 0x22692c
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x38f490
     * @note[short] MacOS (Intel): 0x41a5d0
     * @note[short] Windows: 0x39dc20
     * @note[short] iOS: 0x22c7b8
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x390668
     * @note[short] MacOS (Intel): 0x41b8f0
     * @note[short] Windows: 0x3a0650
     * @note[short] iOS: 0x22d4e0
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x390694
     * @note[short] MacOS (Intel): 0x41b910
     * @note[short] Windows: 0x3a0670
     * @note[short] iOS: 0x22d50c
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x391c6c
     * @note[short] MacOS (Intel): 0x41d690
     * @note[short] Windows: 0x3a3960
     * @note[short] iOS: 0x22e7b4
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x37afbc
     * @note[short] MacOS (Intel): 0x4033f0
     * @note[short] Windows: 0x3a0090
     * @note[short] iOS: 0x21ddc8
     * @note[short] Android
     */
    void activateStreak();

    /**
     * @note[short] MacOS (ARM): 0x3753fc
     * @note[short] MacOS (Intel): 0x3fcbc0
     * @note[short] Windows: 0x388670
     * @note[short] iOS: 0x219434
     * @note[short] Android
     */
    void addAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x38aaec
     * @note[short] MacOS (Intel): 0x415800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x228e24
     * @note[short] Android
     */
    void addToTouchedRings(RingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37570c
     * @note[short] MacOS (Intel): 0x3fcee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToYVelocity(double yVelocity, int type);

    /**
     * @note[short] MacOS (ARM): 0x37b780
     * @note[short] MacOS (Intel): 0x403c30
     * @note[short] Windows: 0x38cc80
     * @note[short] iOS: 0x21e30c
     * @note[short] Android
     */
    void animatePlatformerJump(float scale);

    /**
     * @note[short] MacOS (ARM): 0x37da2c
     * @note[short] MacOS (Intel): 0x406530
     * @note[short] Windows: 0x39fee0
     * @note[short] iOS: 0x21ff64
     * @note[short] Android
     */
    void boostPlayer(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x38f9d0
     * @note[short] MacOS (Intel): 0x41aae0
     * @note[short] Windows: 0x39f6a0
     * @note[short] iOS: 0x22cab0
     * @note[short] Android
     */
    void bumpPlayer(float bumpMod, int objectType, bool noEffects, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38aad0
     * @note[short] MacOS (Intel): 0x4157e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool buttonDown(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x38b440
     * @note[short] MacOS (Intel): 0x4161c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2295fc
     * @note[short] Android
     */
    bool canStickToGround();

    /**
     * @note[short] MacOS (ARM): 0x382fbc
     * @note[short] MacOS (Intel): 0x40ce20
     * @note[short] Windows: 0x393cb0
     * @note[short] iOS: 0x2244b8
     * @note[short] Android
     */
    void checkSnapJumpToObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x382efc
     * @note[short] MacOS (Intel): 0x40cd70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22445c
     * @note[short] Android
     */
    bool collidedWithObject(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37dca0
     * @note[short] MacOS (Intel): 0x4067d0
     * @note[short] Windows: 0x3919b0
     * @note[short] iOS: 0x2201a4
     * @note[short] Android
     */
    bool collidedWithObject(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x37f8e4
     * @note[short] MacOS (Intel): 0x4089c0
     * @note[short] Windows: 0x391a70
     * @note[short] iOS: 0x221800
     * @note[short] Android
     */
    bool collidedWithObjectInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x37dd60
     * @note[short] MacOS (Intel): 0x406870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x220250
     * @note[short] Android
     */
    void collidedWithSlope(float dt, GameObject* object, bool skipPre);

    /**
     * @note[short] MacOS (ARM): 0x37e3e4
     * @note[short] MacOS (Intel): 0x406f50
     * @note[short] Windows: 0x38f810
     * @note[short] iOS: 0x2206f4
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);

    /**
     * @note[short] MacOS (ARM): 0x37a6dc
     * @note[short] MacOS (Intel): 0x402a70
     * @note[short] Windows: 0x38d100
     * @note[short] iOS: 0x21d5d8
     * @note[short] Android
     */
    float convertToClosestRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x39036c
     * @note[short] MacOS (Intel): 0x41b570
     * @note[short] Windows: 0x3a04a0
     * @note[short] iOS: 0x22d248
     * @note[short] Android
     */
    void copyAttributes(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x38ac1c
     * @note[short] MacOS (Intel): 0x415950
     * @note[short] Windows: 0x398660
     * @note[short] iOS: 0x228f54
     * @note[short] Android
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] MacOS (ARM): 0x374834
     * @note[short] MacOS (Intel): 0x3fbfb0
     * @note[short] Windows: 0x387ef0
     * @note[short] iOS: 0x2189ec
     * @note[short] Android
     */
    void createRobot(int frame);

    /**
     * @note[short] MacOS (ARM): 0x374b78
     * @note[short] MacOS (Intel): 0x3fc360
     * @note[short] Windows: 0x3882b0
     * @note[short] iOS: 0x218cdc
     * @note[short] Android
     */
    void createSpider(int frame);

    /**
     * @note[short] MacOS (ARM): 0x379454
     * @note[short] MacOS (Intel): 0x4017b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21c824
     * @note[short] Android
     */
    void deactivateParticle();

    /**
     * @note[short] MacOS (ARM): 0x375594
     * @note[short] MacOS (Intel): 0x3fcd80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2195cc
     * @note[short] Android
     */
    void deactivateStreak(bool stop);

    /**
     * @note[short] MacOS (ARM): 0x38e190
     * @note[short] MacOS (Intel): 0x4191a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22b688
     * @note[short] Android
     */
    bool destroyFromHitHead();

    /**
     * @note[short] MacOS (ARM): 0x3834bc
     * @note[short] MacOS (Intel): 0x40d390
     * @note[short] Windows: 0x393c30
     * @note[short] iOS: 0x2248e0
     * @note[short] Android
     */
    void didHitHead();

    /**
     * @note[short] MacOS (ARM): 0x38ede8
     * @note[short] MacOS (Intel): 0x419f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x38f688
     * @note[short] MacOS (Intel): 0x41a7e0
     * @note[short] Windows: 0x39f3b0
     * @note[short] iOS: 0x22c8ec
     * @note[short] Android
     */
    void disablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x3892fc
     * @note[short] MacOS (Intel): 0x413cf0
     * @note[short] Windows: 0x39af00
     * @note[short] iOS: 0x227cfc
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x37a070
     * @note[short] MacOS (Intel): 0x402460
     * @note[short] Windows: 0x398510
     * @note[short] iOS: 0x21d290
     * @note[short] Android
     */
    void doReversePlayer(bool reverse);

    /**
     * @note[short] MacOS (ARM): 0x38edc8
     * @note[short] MacOS (Intel): 0x419f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22c214
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x38f6e4
     * @note[short] MacOS (Intel): 0x41a840
     * @note[short] Windows: 0x39f500
     * @note[short] iOS: 0x22c948
     * @note[short] Android
     */
    void enablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x37a298
     * @note[short] MacOS (Intel): 0x402600
     * @note[short] Windows: 0x38cf30
     * @note[short] iOS: 0x21d3a0
     * @note[short] Android
     */
    void exitPlatformerAnimateJump();

    /**
     * @note[short] MacOS (ARM): 0x389260
     * @note[short] MacOS (Intel): 0x413c60
     * @note[short] Windows: 0x3a0190
     * @note[short] iOS: 0x227c60
     * @note[short] Android
     */
    void fadeOutStreak2(float duration);

    /**
     * @note[short] MacOS (ARM): 0x384aa8
     * @note[short] MacOS (Intel): 0x40ec70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void flashPlayer(float flashDuration, float flashDelay, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);

    /**
     * @note[short] MacOS (ARM): 0x37b40c
     * @note[short] MacOS (Intel): 0x403880
     * @note[short] Windows: 0x39a1d0
     * @note[short] iOS: 0x21e14c
     * @note[short] Android
     */
    void flipGravity(bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x3793cc
     * @note[short] MacOS (Intel): 0x401730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int flipMod();

    /**
     * @note[short] MacOS (ARM): 0x37b768
     * @note[short] MacOS (Intel): 0x403c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gameEventTriggered(int gameEvent, int material);

    /**
     * @note[short] MacOS (ARM): 0x38b470
     * @note[short] MacOS (Intel): 0x4161f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x229628
     * @note[short] Android
     */
    GameObjectType getActiveMode();

    /**
     * @note[short] MacOS (ARM): 0x3793a4
     * @note[short] MacOS (Intel): 0x401700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21c7d0
     * @note[short] Android
     */
    double getCurrentXVelocity();

    /**
     * @note[short] MacOS (ARM): 0x37b378
     * @note[short] MacOS (Intel): 0x4037e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getModifiedSlopeYVel();

    /**
     * @note[short] MacOS (ARM): 0x37a85c
     * @note[short] MacOS (Intel): 0x402c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21d74c
     * @note[short] Android
     */
    float getOldPosition(float dt);

    /**
     * @note[short] MacOS (ARM): 0x38ed9c
     * @note[short] MacOS (Intel): 0x419ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22c1e8
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();

    /**
     * @note[short] MacOS (ARM): 0x375704
     * @note[short] MacOS (Intel): 0x3fced0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2196c0
     * @note[short] Android
     */
    double getYVelocity();

    /**
     * @note[short] MacOS (ARM): 0x391bcc
     * @note[short] MacOS (Intel): 0x41d5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gravityDown();

    /**
     * @note[short] MacOS (ARM): 0x391ba8
     * @note[short] MacOS (Intel): 0x41d5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gravityUp();

    /**
     * @note[short] MacOS (ARM): 0x37bfd8
     * @note[short] MacOS (Intel): 0x404510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21e8e4
     * @note[short] Android
     */
    void handlePlayerCommand(int command);

    /**
     * @note[short] MacOS (ARM): 0x37df88
     * @note[short] MacOS (Intel): 0x406a60
     * @note[short] Windows: 0x38f140
     * @note[short] iOS: 0x220400
     * @note[short] Android
     */
    bool handleRotatedCollisionInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck, bool skipPre, bool slope);

    /**
     * @note[short] MacOS (ARM): 0x37df1c
     * @note[short] MacOS (Intel): 0x406a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool handleRotatedObjectCollision(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x37e0e8
     * @note[short] MacOS (Intel): 0x406bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleRotatedSlopeCollision(float dt, GameObject* object, bool skipPre);

    /**
     * @note[short] MacOS (ARM): 0x3836a4
     * @note[short] MacOS (Intel): 0x40d5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x224a28
     * @note[short] Android
     */
    void hardFlipGravity();

    /**
     * @note[short] MacOS (ARM): 0x381ea0
     * @note[short] MacOS (Intel): 0x40bbc0
     * @note[short] Windows: 0x39bf30
     * @note[short] iOS: 0x223730
     * @note[short] Android
     */
    void hitGround(GameObject* object, bool notFlipped);

    /**
     * @note[short] MacOS (ARM): 0x383324
     * @note[short] MacOS (Intel): 0x40d1d0
     * @note[short] Windows: 0x39bed0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hitGroundNoJump(GameObject* object, bool notFlipped);

    /**
     * @note[short] MacOS (ARM): 0x37b3d0
     * @note[short] MacOS (Intel): 0x403840
     * @note[short] Windows: 0x38cba0
     * @note[short] iOS: 0x21e110
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x3731b8
     * @note[short] MacOS (Intel): 0x3fa6d0
     * @note[short] Windows: 0x386770
     * @note[short] iOS: 0x217810
     * @note[short] Android
     */
    bool init(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x37d9d4
     * @note[short] MacOS (Intel): 0x4064d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21ff0c
     * @note[short] Android
     */
    bool isBoostValid(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x3793e0
     * @note[short] MacOS (Intel): 0x401750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21c7f8
     * @note[short] Android
     */
    bool isFlying();

    /**
     * @note[short] MacOS (ARM): 0x384318
     * @note[short] MacOS (Intel): 0x40e440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22559c
     * @note[short] Android
     */
    bool isInBasicMode();

    /**
     * @note[short] MacOS (ARM): 0x377ef8
     * @note[short] MacOS (Intel): 0x3ffe50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isInNormalMode();

    /**
     * @note[short] MacOS (ARM): 0x381e74
     * @note[short] MacOS (Intel): 0x40bb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x223704
     * @note[short] Android
     */
    bool isSafeFlip(float flipTime);

    /**
     * @note[short] MacOS (ARM): 0x390244
     * @note[short] MacOS (Intel): 0x41b400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22d1dc
     * @note[short] Android
     */
    bool isSafeHeadTest();

    /**
     * @note[short] MacOS (ARM): 0x381e48
     * @note[short] MacOS (Intel): 0x40bb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSafeMode(float changeTime);

    /**
     * @note[short] MacOS (ARM): 0x383678
     * @note[short] MacOS (Intel): 0x40d5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float flipTime);

    /**
     * @note[short] MacOS (ARM): 0x37b168
     * @note[short] MacOS (Intel): 0x4035b0
     * @note[short] Windows: 0x38b750
     * @note[short] iOS: 0x21df64
     * @note[short] Android
     */
    void levelFlipFinished();

    /**
     * @note[short] MacOS (ARM): 0x379428
     * @note[short] MacOS (Intel): 0x401780
     * @note[short] Windows: 0x39b4f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool levelFlipping();

    /**
     * @note[short] MacOS (ARM): 0x37b120
     * @note[short] MacOS (Intel): 0x403570
     * @note[short] Windows: 0x38b6d0
     * @note[short] iOS: 0x21df20
     * @note[short] Android
     */
    void levelWillFlip();

    /**
     * @note[short] MacOS (ARM): 0x386c4c
     * @note[short] MacOS (Intel): 0x4111d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22614c
     * @note[short] Android
     */
    void limitDashRotation(float& rotation);

    /**
     * @note[short] MacOS (ARM): 0x39107c
     * @note[short] MacOS (Intel): 0x41c670
     * @note[short] Windows: 0x3a21b0
     * @note[short] iOS: 0x22dde4
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* object);

    /**
     * @note[short] MacOS (ARM): 0x38f534
     * @note[short] MacOS (Intel): 0x41a680
     * @note[short] Windows: 0x39f2d0
     * @note[short] iOS: 0x22c85c
     * @note[short] Android
     */
    void lockPlayer();

    /**
     * @note[short] MacOS (ARM): 0x391bc8
     * @note[short] MacOS (Intel): 0x41d5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void logValues();

    /**
     * @note[short] MacOS (ARM): 0x38bf2c
     * @note[short] MacOS (Intel): 0x416d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x229df4
     * @note[short] Android
     */
    void modeDidChange();

    /**
     * @note[short] MacOS (ARM): 0x37dbd8
     * @note[short] MacOS (Intel): 0x406700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2200e0
     * @note[short] Android
     */
    void performSlideCheck();

    /**
     * @note[short] MacOS (ARM): 0x37b07c
     * @note[short] MacOS (Intel): 0x4034d0
     * @note[short] Windows: 0x3a0680
     * @note[short] iOS: 0x21de88
     * @note[short] Android
     */
    void placeStreakPoint();

    /**
     * @note[short] MacOS (ARM): 0x38fb88
     * @note[short] MacOS (Intel): 0x41acb0
     * @note[short] Windows: 0x39fa50
     * @note[short] iOS: 0x22cbe0
     * @note[short] Android
     */
    void playBumpEffect(int objectType, GameObject* player);

    /**
     * @note[short] MacOS (ARM): 0x37bb60
     * @note[short] MacOS (Intel): 0x404070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21e5a4
     * @note[short] Android
     */
    void playBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x1bf7f0
     * @note[short] MacOS (Intel): 0x214020
     * @note[short] Windows: 0x384020
     * @note[short] iOS: 0x5cda8
     * @note[short] Android
     */
    void playCompleteEffect(bool noEffects, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x1b7e94
     * @note[short] MacOS (Intel): 0x20c210
     * @note[short] Windows: 0x37ef10
     * @note[short] iOS: 0x579ec
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] MacOS (ARM): 0x379dac
     * @note[short] MacOS (Intel): 0x4021a0
     * @note[short] Windows: 0x3a14d0
     * @note[short] iOS: 0x21d040
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] MacOS (ARM): 0x38907c
     * @note[short] MacOS (Intel): 0x413a60
     * @note[short] Windows: 0x397d40
     * @note[short] iOS: 0x227b74
     * @note[short] Android
     */
    void playerDestroyed(bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37bb30
     * @note[short] MacOS (Intel): 0x404030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerIsFalling(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x37ba64
     * @note[short] MacOS (Intel): 0x403f40
     * @note[short] Windows: 0x39a430
     * @note[short] iOS: 0x21e4f8
     * @note[short] Android
     */
    bool playerIsFallingBugged();

    /**
     * @note[short] MacOS (ARM): 0x37bb10
     * @note[short] MacOS (Intel): 0x404000
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerIsMovingUp();

    /**
     * @note[short] MacOS (ARM): 0x38b238
     * @note[short] MacOS (Intel): 0x415fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x229550
     * @note[short] Android
     */
    void playerTeleported();

    /**
     * @note[short] MacOS (ARM): 0x38f930
     * @note[short] MacOS (Intel): 0x41aa60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22ca30
     * @note[short] Android
     */
    void playingEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x3889d8
     * @note[short] MacOS (Intel): 0x4133a0
     * @note[short] Windows: 0x397480
     * @note[short] iOS: 0x22762c
     * @note[short] Android
     */
    void playSpawnEffect();

    /**
     * @note[short] MacOS (ARM): 0x384378
     * @note[short] MacOS (Intel): 0x40e490
     * @note[short] Windows: 0x395170
     * @note[short] iOS: 0x2255dc
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] MacOS (ARM): 0x37c258
     * @note[short] MacOS (Intel): 0x4047f0
     * @note[short] Windows: 0x38d580
     * @note[short] iOS: 0x21ea64
     * @note[short] Android
     */
    void postCollision(float dt, bool betweenSteps);

    /**
     * @note[short] MacOS (ARM): 0x37c100
     * @note[short] MacOS (Intel): 0x404660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21e958
     * @note[short] Android
     */
    void preCollision();

    /**
     * @note[short] MacOS (ARM): 0x3819b0
     * @note[short] MacOS (Intel): 0x40b650
     * @note[short] Windows: 0x38f2e0
     * @note[short] iOS: 0x223278
     * @note[short] Android
     */
    bool preSlopeCollision(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38fcac
     * @note[short] MacOS (Intel): 0x41adf0
     * @note[short] Windows: 0x39f850
     * @note[short] iOS: 0x22cd04
     * @note[short] Android
     */
    void propellPlayer(float yVelocity, bool noEffects, int objectType);

    /**
     * @note[short] MacOS (ARM): 0x38957c
     * @note[short] MacOS (Intel): 0x413fb0
     * @note[short] Windows: 0x397f40
     * @note[short] iOS: 0x227eac
     * @note[short] Android
     */
    bool pushButton(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x3902bc
     * @note[short] MacOS (Intel): 0x41b470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22d238
     * @note[short] Android
     */
    void pushDown();

    /**
     * @note[short] MacOS (ARM): 0x38fed4
     * @note[short] MacOS (Intel): 0x41aff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pushPlayer(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x386598
     * @note[short] MacOS (Intel): 0x410ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x225b50
     * @note[short] Android
     */
    void redirectDash(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x39005c
     * @note[short] MacOS (Intel): 0x41b1c0
     * @note[short] Windows: 0x39fc60
     * @note[short] iOS: 0x22cffc
     * @note[short] Android
     */
    void redirectPlayerForce(float rotation, float modifier, float minimum, float maximum);

    /**
     * @note[short] MacOS (ARM): 0x38f4f0
     * @note[short] MacOS (Intel): 0x41a640
     * @note[short] Windows: 0x39f100
     * @note[short] iOS: 0x22c818
     * @note[short] Android
     */
    void releaseAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x38a678
     * @note[short] MacOS (Intel): 0x415330
     * @note[short] Windows: 0x3981d0
     * @note[short] iOS: 0x228d08
     * @note[short] Android
     */
    bool releaseButton(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x37551c
     * @note[short] MacOS (Intel): 0x3fcd10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x219554
     * @note[short] Android
     */
    void removeAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x3882ec
     * @note[short] MacOS (Intel): 0x412be0
     * @note[short] Windows: 0x3a3250
     * @note[short] iOS: 0x22703c
     * @note[short] Android
     */
    void removePendingCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x389040
     * @note[short] MacOS (Intel): 0x413a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x227b38
     * @note[short] Android
     */
    void removePlacedCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x37ae70
     * @note[short] MacOS (Intel): 0x403290
     * @note[short] Windows: 0x38b7e0
     * @note[short] iOS: 0x21dc7c
     * @note[short] Android
     */
    void resetAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x37bfec
     * @note[short] MacOS (Intel): 0x404530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21e8f8
     * @note[short] Android
     */
    void resetCollisionLog(bool full);

    /**
     * @note[short] MacOS (ARM): 0x38372c
     * @note[short] MacOS (Intel): 0x40d670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetCollisionValues();

    /**
     * @note[short] MacOS (ARM): 0x38bd44
     * @note[short] MacOS (Intel): 0x416b30
     * @note[short] Windows: 0x39b2e0
     * @note[short] iOS: 0x229c74
     * @note[short] Android
     */
    void resetPlayerIcon();

    /**
     * @note[short] MacOS (ARM): 0x388100
     * @note[short] MacOS (Intel): 0x4128c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x226f44
     * @note[short] Android
     */
    void resetStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x37aed4
     * @note[short] MacOS (Intel): 0x403300
     * @note[short] Windows: 0x38b5e0
     * @note[short] iOS: 0x21dce0
     * @note[short] Android
     */
    void resetStreak();

    /**
     * @note[short] MacOS (ARM): 0x388164
     * @note[short] MacOS (Intel): 0x412940
     * @note[short] Windows: 0x3982e0
     * @note[short] iOS: 0x226fa8
     * @note[short] Android
     */
    void resetTouchedRings(bool removeAll);

    /**
     * @note[short] MacOS (ARM): 0x37bea8
     * @note[short] MacOS (Intel): 0x4043f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int reverseMod();

    /**
     * @note[short] MacOS (ARM): 0x38ab44
     * @note[short] MacOS (Intel): 0x415860
     * @note[short] Windows: 0x398430
     * @note[short] iOS: 0x228e7c
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38991c
     * @note[short] MacOS (Intel): 0x4143a0
     * @note[short] Windows: 0x398c00
     * @note[short] iOS: 0x228110
     * @note[short] Android
     */
    void ringJump(RingObject* object, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x387c94
     * @note[short] MacOS (Intel): 0x4124b0
     * @note[short] Windows: 0x399d50
     * @note[short] iOS: 0x226c2c
     * @note[short] Android
     */
    void rotateGameplay(int moveDirection, int groundDirection, bool editVelocity, float velocityModX, float velocityModY, bool overrideVelocity, bool dontSlide);

    /**
     * @note[short] MacOS (ARM): 0x37e158
     * @note[short] MacOS (Intel): 0x406c20
     * @note[short] Windows: 0x3913f0
     * @note[short] iOS: 0x220560
     * @note[short] Android
     */
    void rotateGameplayObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38b230
     * @note[short] MacOS (Intel): 0x415fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x229548
     * @note[short] Android
     */
    void rotateGameplayOnly(bool sideways);

    /**
     * @note[short] MacOS (ARM): 0x37e3ac
     * @note[short] MacOS (Intel): 0x406f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void rotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x37bd90
     * @note[short] MacOS (Intel): 0x4042d0
     * @note[short] Windows: 0x38d350
     * @note[short] iOS: 0x21e6f4
     * @note[short] Android
     */
    void runBallRotation(float speed);

    /**
     * @note[short] MacOS (ARM): 0x37bebc
     * @note[short] MacOS (Intel): 0x404410
     * @note[short] Windows: 0x38d480
     * @note[short] iOS: 0x21e7f4
     * @note[short] Android
     */
    void runBallRotation2();

    /**
     * @note[short] MacOS (ARM): 0x37bcb4
     * @note[short] MacOS (Intel): 0x4041c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runNormalRotation();

    /**
     * @note[short] MacOS (ARM): 0x377f68
     * @note[short] MacOS (Intel): 0x3ffeb0
     * @note[short] Windows: 0x38d220
     * @note[short] iOS: 0x21b6a0
     * @note[short] Android
     */
    void runNormalRotation(bool notNormalMode, float speed);

    /**
     * @note[short] MacOS (ARM): 0x37a398
     * @note[short] MacOS (Intel): 0x402710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21d45c
     * @note[short] Android
     */
    void runRotateAction(bool ground, int type);

    /**
     * @note[short] MacOS (ARM): 0x390ad0
     * @note[short] MacOS (Intel): 0x41bd30
     * @note[short] Windows: 0x3a1710
     * @note[short] iOS: 0x22d83c
     * @note[short] Android
     */
    void saveToCheckpoint(PlayerCheckpoint* checkpoint);

    /**
     * @note[short] MacOS (ARM): 0x376680
     * @note[short] MacOS (Intel): 0x3fe080
     * @note[short] Windows: 0x39d3a0
     * @note[short] iOS: 0x21a40c
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x375058
     * @note[short] MacOS (Intel): 0x3fc810
     * @note[short] Windows: 0x3887c0
     * @note[short] iOS: 0x2190ac
     * @note[short] Android
     */
    void setupStreak();

    /**
     * @note[short] MacOS (ARM): 0x374ddc
     * @note[short] MacOS (Intel): 0x3fc630
     * @note[short] Windows: 0x388d10
     * @note[short] iOS: 0x218f30
     * @note[short] Android
     */
    void setYVelocity(double velocity, int type);

    /**
     * @note[short] MacOS (ARM): 0x388b68
     * @note[short] MacOS (Intel): 0x413510
     * @note[short] Windows: 0x3975b0
     * @note[short] iOS: 0x227718
     * @note[short] Android
     */
    void spawnCircle();

    /**
     * @note[short] MacOS (ARM): 0x388c4c
     * @note[short] MacOS (Intel): 0x413600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void spawnCircle2();

    /**
     * @note[short] MacOS (ARM): 0x388f50
     * @note[short] MacOS (Intel): 0x413920
     * @note[short] Windows: 0x397b70
     * @note[short] iOS: 0x227a48
     * @note[short] Android
     */
    void spawnDualCircle();

    /**
     * @note[short] MacOS (ARM): 0x3904fc
     * @note[short] MacOS (Intel): 0x41b760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22d3d4
     * @note[short] Android
     */
    void spawnFromPlayer(PlayerObject* player, bool flip);

    /**
     * @note[short] MacOS (ARM): 0x388cf0
     * @note[short] MacOS (Intel): 0x4136a0
     * @note[short] Windows: 0x397760
     * @note[short] iOS: 0x2277f8
     * @note[short] Android
     */
    void spawnPortalCircle(cocos2d::ccColor3B color, float startRadius);

    /**
     * @note[short] MacOS (ARM): 0x388e10
     * @note[short] MacOS (Intel): 0x4137d0
     * @note[short] Windows: 0x397970
     * @note[short] iOS: 0x227914
     * @note[short] Android
     */
    void spawnScaleCircle();

    /**
     * @note[short] MacOS (ARM): 0x3902cc
     * @note[short] MacOS (Intel): 0x41b490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void specialGroundHit();

    /**
     * @note[short] MacOS (ARM): 0x391c0c
     * @note[short] MacOS (Intel): 0x41d630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void speedDown();

    /**
     * @note[short] MacOS (ARM): 0x391bec
     * @note[short] MacOS (Intel): 0x41d610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void speedUp();

    /**
     * @note[short] MacOS (ARM): 0x37b2c0
     * @note[short] MacOS (Intel): 0x403720
     * @note[short] Windows: 0x394340
     * @note[short] iOS: 0x21e058
     * @note[short] Android
     */
    void spiderTestJump(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x38373c
     * @note[short] MacOS (Intel): 0x40d690
     * @note[short] Windows: 0x3943f0
     * @note[short] iOS: 0x224a9c
     * @note[short] Android
     */
    void spiderTestJumpInternal(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x384b64
     * @note[short] MacOS (Intel): 0x40ed60
     * @note[short] Android
     */
    void spiderTestJumpX(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x38587c
     * @note[short] MacOS (Intel): 0x40fc20
     * @note[short] Android
     */
    void spiderTestJumpY(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x386de8
     * @note[short] MacOS (Intel): 0x411380
     * @note[short] Windows: 0x395910
     * @note[short] iOS: 0x2262e8
     * @note[short] Android
     */
    void startDashing(DashRingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38d598
     * @note[short] MacOS (Intel): 0x4184f0
     * @note[short] Windows: 0x39b4e0
     * @note[short] iOS: 0x22addc
     * @note[short] Android
     */
    void stopBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x3796d0
     * @note[short] MacOS (Intel): 0x401a50
     * @note[short] Windows: 0x396650
     * @note[short] iOS: 0x21ca7c
     * @note[short] Android
     */
    void stopDashing();

    /**
     * @note[short] MacOS (ARM): 0x37b270
     * @note[short] MacOS (Intel): 0x4036c0
     * @note[short] Windows: 0x38b860
     * @note[short] iOS: 0x21e008
     * @note[short] Android
     */
    void stopParticles();

    /**
     * @note[short] MacOS (ARM): 0x37bc1c
     * @note[short] MacOS (Intel): 0x404110
     * @note[short] Windows: 0x38d060
     * @note[short] iOS: 0x21e65c
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();

    /**
     * @note[short] MacOS (ARM): 0x37bca4
     * @note[short] MacOS (Intel): 0x4041a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21e6e4
     * @note[short] Android
     */
    void stopRotation(bool ground, int type);

    /**
     * @note[short] MacOS (ARM): 0x390204
     * @note[short] MacOS (Intel): 0x41b3c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22d19c
     * @note[short] Android
     */
    void stopStreak2();

    /**
     * @note[short] MacOS (ARM): 0x37c04c
     * @note[short] MacOS (Intel): 0x4045a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeCollision(PlayerCollisionDirection direction, int id);

    /**
     * @note[short] MacOS (ARM): 0x389378
     * @note[short] MacOS (Intel): 0x413d80
     * @note[short] Windows: 0x397e30
     * @note[short] iOS: 0x227d78
     * @note[short] Android
     */
    bool switchedDirTo(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x388338
     * @note[short] MacOS (Intel): 0x412c30
     * @note[short] Windows: 0x39be30
     * @note[short] iOS: 0x227088
     * @note[short] Android
     */
    void switchedToMode(GameObjectType type);

    /**
     * @note[short] MacOS (ARM): 0x37dde4
     * @note[short] MacOS (Intel): 0x4068f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2202f4
     * @note[short] Android
     */
    bool testForMoving(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38bf50
     * @note[short] MacOS (Intel): 0x416d50
     * @note[short] Windows: 0x39a820
     * @note[short] iOS: 0x229e18
     * @note[short] Android
     */
    void toggleBirdMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x38cf84
     * @note[short] MacOS (Intel): 0x417e60
     * @note[short] Windows: 0x39af90
     * @note[short] iOS: 0x22a994
     * @note[short] Android
     */
    void toggleDartMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x38b4d8
     * @note[short] MacOS (Intel): 0x416250
     * @note[short] Windows: 0x39a4f0
     * @note[short] iOS: 0x229678
     * @note[short] Android
     */
    void toggleFlyMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x388894
     * @note[short] MacOS (Intel): 0x413220
     * @note[short] Windows: 0x39ee30
     * @note[short] iOS: 0x2274f4
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType type);

    /**
     * @note[short] MacOS (ARM): 0x3753f4
     * @note[short] MacOS (Intel): 0x3fcbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21942c
     * @note[short] Android
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] MacOS (ARM): 0x3884b0
     * @note[short] MacOS (Intel): 0x412d80
     * @note[short] Windows: 0x3a0700
     * @note[short] iOS: 0x2271ac
     * @note[short] Android
     */
    void togglePlayerScale(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x38d95c
     * @note[short] MacOS (Intel): 0x4188e0
     * @note[short] Windows: 0x39b6f0
     * @note[short] iOS: 0x22b0d0
     * @note[short] Android
     */
    void toggleRobotMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x38d5a0
     * @note[short] MacOS (Intel): 0x418510
     * @note[short] Windows: 0x39b570
     * @note[short] iOS: 0x22ade4
     * @note[short] Android
     */
    void toggleRollMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x38dd8c
     * @note[short] MacOS (Intel): 0x418d50
     * @note[short] Windows: 0x39ba70
     * @note[short] iOS: 0x22b3cc
     * @note[short] Android
     */
    void toggleSpiderMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x38c5b4
     * @note[short] MacOS (Intel): 0x417450
     * @note[short] Windows: 0x39ab20
     * @note[short] iOS: 0x22a2b8
     * @note[short] Android
     */
    void toggleSwingMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37ac64
     * @note[short] MacOS (Intel): 0x403080
     * @note[short] Windows: 0x38b440
     * @note[short] iOS: 0x21db2c
     * @note[short] Android
     */
    void toggleVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x391880
     * @note[short] MacOS (Intel): 0x41d220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22e588
     * @note[short] Android
     */
    void touchedObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37a9c0
     * @note[short] MacOS (Intel): 0x402d90
     * @note[short] Windows: 0x3a32d0
     * @note[short] iOS: 0x21d89c
     * @note[short] Android
     */
    void tryPlaceCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x381774
     * @note[short] MacOS (Intel): 0x40b370
     * @note[short] Windows: 0x3916e0
     * @note[short] iOS: 0x223134
     * @note[short] Android
     */
    void unrotateGameplayObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x381978
     * @note[short] MacOS (Intel): 0x40b610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unrotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x3753ec
     * @note[short] MacOS (Intel): 0x3fcba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x219424
     * @note[short] Android
     */
    void updateCheckpointMode(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x37a8d4
     * @note[short] MacOS (Intel): 0x402cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21d7bc
     * @note[short] Android
     */
    void updateCheckpointTest();

    /**
     * @note[short] MacOS (ARM): 0x382520
     * @note[short] MacOS (Intel): 0x40c300
     * @note[short] Windows: 0x393ff0
     * @note[short] iOS: 0x223d3c
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection direction, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3833fc
     * @note[short] MacOS (Intel): 0x40d2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22486c
     * @note[short] Android
     */
    void updateCollideBottom(float y, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3835ec
     * @note[short] MacOS (Intel): 0x40d500
     * @note[short] Windows: 0x394200
     * @note[short] iOS: 0x2249ac
     * @note[short] Android
     */
    void updateCollideLeft(float x, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x383560
     * @note[short] MacOS (Intel): 0x40d460
     * @note[short] Windows: 0x3942a0
     * @note[short] iOS: 0x224930
     * @note[short] Android
     */
    void updateCollideRight(float x, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x383370
     * @note[short] MacOS (Intel): 0x40d230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2247f8
     * @note[short] Android
     */
    void updateCollideTop(float y, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x379488
     * @note[short] MacOS (Intel): 0x4017e0
     * @note[short] Windows: 0x396d20
     * @note[short] iOS: 0x21c858
     * @note[short] Android
     */
    void updateDashAnimation();

    /**
     * @note[short] MacOS (ARM): 0x386724
     * @note[short] MacOS (Intel): 0x410c80
     * @note[short] Windows: 0x3961c0
     * @note[short] iOS: 0x225cbc
     * @note[short] Android
     */
    void updateDashArt();

    /**
     * @note[short] MacOS (ARM): 0x37a854
     * @note[short] MacOS (Intel): 0x402c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21d744
     * @note[short] Android
     */
    void updateEffects(float param);

    /**
     * @note[short] MacOS (ARM): 0x38edf0
     * @note[short] MacOS (Intel): 0x419f40
     * @note[short] Windows: 0x39d430
     * @note[short] iOS: 0x22c234
     * @note[short] Android
     */
    void updateGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x392150
     * @note[short] MacOS (Intel): 0x41dbc0
     * @note[short] Windows: 0x3a3f10
     * @note[short] iOS: 0x22eae0
     * @note[short] Android
     */
    void updateInternalActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3766e8
     * @note[short] MacOS (Intel): 0x3fe0f0
     * @note[short] Windows: 0x38b900
     * @note[short] iOS: 0x21a474
     * @note[short] Android
     */
    void updateJump(float dt);

    /**
     * @note[short] MacOS (ARM): 0x379634
     * @note[short] MacOS (Intel): 0x4019a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateJumpVariables();

    /**
     * @note[short] MacOS (ARM): 0x383488
     * @note[short] MacOS (Intel): 0x40d350
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLastGroundObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x378054
     * @note[short] MacOS (Intel): 0x3fffc0
     * @note[short] Windows: 0x38a0c0
     * @note[short] iOS: 0x21b780
     * @note[short] Android
     */
    void updateMove(float dt);

    /**
     * @note[short] MacOS (ARM): 0x38aeb8
     * @note[short] MacOS (Intel): 0x415bb0
     * @note[short] Windows: 0x398860
     * @note[short] iOS: 0x2291d0
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] MacOS (ARM): 0x38c330
     * @note[short] MacOS (Intel): 0x4171a0
     * @note[short] Windows: 0x39e2e0
     * @note[short] iOS: 0x22a098
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38d368
     * @note[short] MacOS (Intel): 0x4182b0
     * @note[short] Windows: 0x39e9e0
     * @note[short] iOS: 0x22ac28
     * @note[short] Android
     */
    void updatePlayerDartFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x3877f8
     * @note[short] MacOS (Intel): 0x411e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint velocity, bool additive);

    /**
     * @note[short] MacOS (ARM): 0x38cc84
     * @note[short] MacOS (Intel): 0x417b60
     * @note[short] Windows: 0x39dc50
     * @note[short] iOS: 0x22a720
     * @note[short] Android
     */
    void updatePlayerFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38acf8
     * @note[short] MacOS (Intel): 0x415a20
     * @note[short] Windows: 0x3a02a0
     * @note[short] iOS: 0x229030
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] MacOS (ARM): 0x38bb14
     * @note[short] MacOS (Intel): 0x4168f0
     * @note[short] Windows: 0x39e0b0
     * @note[short] iOS: 0x229ac0
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38f4c0
     * @note[short] MacOS (Intel): 0x41a600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22c7e8
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38d730
     * @note[short] MacOS (Intel): 0x4186a0
     * @note[short] Windows: 0x39e580
     * @note[short] iOS: 0x22af20
     * @note[short] Android
     */
    void updatePlayerRollFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38b2e4
     * @note[short] MacOS (Intel): 0x416080
     * @note[short] Windows: 0x3a0220
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerScale();

    /**
     * @note[short] MacOS (ARM): 0x38b8e4
     * @note[short] MacOS (Intel): 0x4166a0
     * @note[short] Windows: 0x39de80
     * @note[short] iOS: 0x22990c
     * @note[short] Android
     */
    void updatePlayerShipFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38f4d8
     * @note[short] MacOS (Intel): 0x41a620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22c800
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37466c
     * @note[short] MacOS (Intel): 0x3fbe10
     * @note[short] Windows: 0x39ec10
     * @note[short] iOS: 0x218854
     * @note[short] Android: Rebinded
     */
    void updatePlayerSpriteExtra(gd::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x38c9bc
     * @note[short] MacOS (Intel): 0x417890
     * @note[short] Windows: 0x39e7b0
     * @note[short] iOS: 0x22a4e0
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x390710
     * @note[short] MacOS (Intel): 0x41b960
     * @note[short] Windows: 0x3a10e0
     * @note[short] iOS: 0x22d518
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();

    /**
     * @note[short] MacOS (ARM): 0x382d40
     * @note[short] MacOS (Intel): 0x40cbb0
     * @note[short] Windows: 0x391020
     * @note[short] iOS: 0x2242b0
     * @note[short] Android
     */
    void updateRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x37a590
     * @note[short] MacOS (Intel): 0x402940
     * @note[short] Windows: 0x391260
     * @note[short] iOS: 0x21d498
     * @note[short] Android
     */
    void updateRotation(float dt, float rotation);

    /**
     * @note[short] MacOS (ARM): 0x382970
     * @note[short] MacOS (Intel): 0x40c7f0
     * @note[short] Windows: 0x390c40
     * @note[short] iOS: 0x223f40
     * @note[short] Android
     */
    void updateShipRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x374750
     * @note[short] MacOS (Intel): 0x3fbee0
     * @note[short] Windows: 0x39ed20
     * @note[short] iOS: 0x218920
     * @note[short] Android: Rebinded
     */
    void updateShipSpriteExtra(gd::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x3827f4
     * @note[short] MacOS (Intel): 0x40c660
     * @note[short] Windows: 0x390bc0
     * @note[short] iOS: 0x223ebc
     * @note[short] Android
     */
    void updateSlopeRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x38296c
     * @note[short] MacOS (Intel): 0x40c7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSlopeYVelocity(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x37a7dc
     * @note[short] MacOS (Intel): 0x402b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21d6d4
     * @note[short] Android
     */
    void updateSpecial(float dt);

    /**
     * @note[short] MacOS (ARM): 0x379650
     * @note[short] MacOS (Intel): 0x4019c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21c9fc
     * @note[short] Android
     */
    void updateStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x38ff20
     * @note[short] MacOS (Intel): 0x41b060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22ced4
     * @note[short] Android
     */
    void updateStaticForce(float rotation, float staticForce, bool additive);

    /**
     * @note[short] MacOS (ARM): 0x375668
     * @note[short] MacOS (Intel): 0x3fce40
     * @note[short] Windows: 0x388ca0
     * @note[short] iOS: 0x21963c
     * @note[short] Android
     */
    void updateStreakBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x3756ec
     * @note[short] MacOS (Intel): 0x3fceb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateStreaks(float dt);

    /**
     * @note[short] MacOS (ARM): 0x38b330
     * @note[short] MacOS (Intel): 0x4160d0
     * @note[short] Windows: 0x39add0
     * @note[short] iOS: 0x229584
     * @note[short] Android
     */
    void updateSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x374e1c
     * @note[short] MacOS (Intel): 0x3fc690
     * @note[short] Windows: 0x3a0d50
     * @note[short] iOS: 0x218f64
     * @note[short] Android
     */
    void updateTimeMod(float speed, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x3906a0
     * @note[short] MacOS (Intel): 0x41b920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool usingWallLimitedMode();

    /**
     * @note[short] MacOS (ARM): 0x391c4c
     * @note[short] MacOS (Intel): 0x41d670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void yStartDown();

    /**
     * @note[short] MacOS (ARM): 0x391c2c
     * @note[short] MacOS (Intel): 0x41d650
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void yStartUp();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::i     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isVanillaPlayer();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::i     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isPlayer1();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::i     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isPlayer2();
    cocos2d::CCNode* m_mainLayer;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    GameObject* m_maybeLastGroundObject;
    cocos2d::CCDictionary* m_collisionLogTop;
    cocos2d::CCDictionary* m_collisionLogBottom;
    cocos2d::CCDictionary* m_collisionLogLeft;
    cocos2d::CCDictionary* m_collisionLogRight;
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
    int m_maybeSavedPlayerFrame;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    cocos2d::CCSprite* m_dashFireSprite;
    bool m_isBallRotating;
    bool m_unk669;
    GameObject* m_currentPotentialSlope;
    GameObject* m_currentSlope;
    double unk_584;
    int m_collidingWithSlopeId;
    bool m_slopeFlipGravityRelated;
    cocos2d::CCArray* m_particleSystems;
    float m_slopeAngleRadians;
    gd::unordered_map<int, GJPointDouble> m_rotateObjectsRelated;
    gd::unordered_map<int, GameObject*> m_potentialSlopeMap;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_isBallRotating2;
    bool m_hasGlow;
    bool m_isHidden;
    GhostType m_ghostType;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_birdVehicle;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_dashSpritesContainer;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    float m_unk648;
    double m_gameModeChangedTime;
    bool m_padRingRelated;
    bool m_maybeReducedEffects;
    bool m_maybeIsFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_maybeCanRunIntoBlocks;
    bool m_hasGroundParticles;
    bool m_hasShipParticles;
    bool m_isOnGround3;
    bool m_checkpointTimeout;
    double m_lastCheckpointTime;
    double m_lastJumpTime;
    double m_lastFlipTime;
    double m_flashTime;
    float m_flashDuration;
    float m_flashDelay;
    cocos2d::ccColor3B m_flashMainColor;
    cocos2d::ccColor3B m_flashSecondColor;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_maybeIsVehicleGlowing;
    bool m_switchWaveTrailColor;
    bool m_practiceDeathEffect;
    double m_accelerationOrSpeed;
    double m_snapDistance;
    bool m_ringJumpRelated;
    gd::unordered_set<int> m_ringRelatedSet;
    GameObject* m_objectSnappedTo;
    CheckpointObject* m_pendingCheckpoint;
    int m_onFlyCheckpointTries;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    bool m_maybeSpriteRelated;
    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    bool m_useLandParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_landParticlesAngle;
    float m_landParticleRelatedY;
    int m_playerStreak;
    float m_streakStrokeWidth;
    bool m_disableStreakTint;
    bool m_alwaysShowStreak;
    ShipStreak m_shipStreakType;
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
    bool m_fadeOutStreak;
    bool m_canPlaceCheckpoint;
    cocos2d::ccColor3B m_originalMainColor;
    cocos2d::ccColor3B m_originalSecondColor;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_maybeIsColliding;
    bool m_jumpBuffered;
    bool m_stateRingJump;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    bool m_stateRingJump2;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_maybeTouchedBreakableBlock;
    geode::SeedValueRSV m_jumpRelatedAC2;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    bool m_maybeUpsideDownSlope;
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    int m_reverseRelated;
    double m_maybeReverseSpeed;
    double m_maybeReverseAcceleration;
    float m_xVelocityRelated2;
    bool m_isDashing;
    int m_dashFireFrame;
    int m_groundObjectMaterial;
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_isOnGround2;
    double m_lastLandTime;
    float m_platformerVelocityRelated;
    bool m_maybeIsBoosted;
    double m_scaleXRelatedTime;
    bool m_decreaseBoostSlide;
    bool m_unkA29;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    bool m_hasEverJumped;
    bool m_hasEverHitRing;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    bool m_isSecondPlayer;
    bool m_unkA99;
    double m_totalTime;
    bool m_isBeingSpawnedByDualPortal;
    float m_audioScale;
    float m_unkAngle1;
    float m_yVelocityRelated3;
    bool m_defaultMiniIcon;
    bool m_swapColors;
    bool m_switchDashFireColor;
    int m_followRelated;
    gd::vector<float> m_playerFollowFloats;
    float m_unk838;
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
    bool m_isPlatformer;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    float m_gravityMod;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    gd::map<int, bool> m_jumpPadRelated;
    float m_somethingPlayerSpeedTime;
    float m_playerSpeedAC;
    bool m_fixRobotJump;
    gd::map<int, bool> m_holdingButtons;
    bool m_inputsLocked;
    gd::string m_currentRobotAnimation;
    bool m_gv0123;
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_robotBatchNode;
    cocos2d::CCSpriteBatchNode* m_spiderBatchNode;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    int m_unkUnused;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    bool m_isOutOfBounds;
    float m_fallStartY;
    bool m_disablePlayerSqueeze;
    bool m_robotAnimation1Enabled;
    bool m_robotAnimation2Enabled;
    bool m_spiderAnimationEnabled;
    bool m_ignoreDamage;
    bool m_enable22Changes;
};
