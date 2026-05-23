#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): 0x1a23f4
     * @note[short] MacOS (Intel): 0x1f42c0
     * @note[short] Windows: 0x1377e0
     * @note[short] iOS: 0x22ef04
     * @note[short] Android: Rebinded
     */
     GameObject();

    /**
     * @note[short] MacOS (ARM): 0x4e5f84
     * @note[short] MacOS (Intel): 0x59d340
     * @note[short] Windows: 0x18b6b0
     * @note[short] iOS: 0x254188
     * @note[short] Android: Rebinded
     */
     ~GameObject();

    /**
     * @note[short] MacOS (ARM): 0x4e6524
     * @note[short] MacOS (Intel): 0x5a1fc0
     * @note[short] Windows: 0x18dc20
     * @note[short] iOS: 0x254ae0
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);

    /**
     * @note[short] MacOS (ARM): 0x4e605c
     * @note[short] MacOS (Intel): 0x59d460
     * @note[short] Windows: 0x18b7d0
     * @note[short] iOS: 0x254250
     * @note[short] Android
     */
    static GameObject* createWithKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x4fab0c
     * @note[short] MacOS (Intel): 0x5cbd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262ddc
     * @note[short] Android
     */
    static bool isBasicEnterEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x4f1018
     * @note[short] MacOS (Intel): 0x5bfce0
     * @note[short] Windows: 0x19d1e0
     * @note[short] iOS: 0x25e050
     * @note[short] Android: Rebinded
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& propValues, gd::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail);

    /**
     * @note[short] MacOS (ARM): 0x4e5f74
     * @note[short] MacOS (Intel): 0x59d330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254178
     * @note[short] Android
     */
    static void resetMID();

    /**
     * @note[short] MacOS (ARM): 0x4e8668
     * @note[short] MacOS (Intel): 0x5aa420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x256710
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4ed5f4
     * @note[short] MacOS (Intel): 0x5bc1f0
     * @note[short] Windows: 0x198250
     * @note[short] iOS: 0x25b5f8
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x4ed68c
     * @note[short] MacOS (Intel): 0x5bc280
     * @note[short] Windows: 0x198330
     * @note[short] iOS: 0x25b690
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x4ed724
     * @note[short] MacOS (Intel): 0x5bc310
     * @note[short] Windows: 0x198420
     * @note[short] iOS: 0x25b728
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x4ed054
     * @note[short] MacOS (Intel): 0x5bbcb0
     * @note[short] Windows: 0x197b60
     * @note[short] iOS: 0x25b0f0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x4edd5c
     * @note[short] MacOS (Intel): 0x5bca00
     * @note[short] Windows: 0x198c50
     * @note[short] iOS: 0x25bc8c
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4ed2d8
     * @note[short] MacOS (Intel): 0x5bbf20
     * @note[short] Windows: 0x197e00
     * @note[short] iOS: 0x25b2fc
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x4ed3c0
     * @note[short] MacOS (Intel): 0x5bbff0
     * @note[short] Windows: 0x197f50
     * @note[short] iOS: 0x25b3d4
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x4ed49c
     * @note[short] MacOS (Intel): 0x5bc0b0
     * @note[short] Windows: 0x1980a0
     * @note[short] iOS: 0x25b4a0
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x4eda40
     * @note[short] MacOS (Intel): 0x5bc660
     * @note[short] Windows: 0x198800
     * @note[short] iOS: 0x25b9a4
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x4e6768
     * @note[short] MacOS (Intel): 0x5a21f0
     * @note[short] Windows: 0x18dcb0
     * @note[short] iOS: 0x254ce4
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x4f8538
     * @note[short] MacOS (Intel): 0x5c9070
     * @note[short] Windows: 0x1a0dc0
     * @note[short] iOS: 0x2611d0
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x4ed55c
     * @note[short] MacOS (Intel): 0x5bc170
     * @note[short] Windows: 0x1981c0
     * @note[short] iOS: 0x25b560
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x4ed5a8
     * @note[short] MacOS (Intel): 0x5bc1b0
     * @note[short] Windows: 0x198200
     * @note[short] iOS: 0x25b5ac
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4e866c
     * @note[short] MacOS (Intel): 0x5aa430
     * @note[short] Windows: 0x190e20
     * @note[short] iOS: 0x256714
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3b5b0c
     * @note[short] MacOS (Intel): 0x444470
     * @note[short] Windows: 0x1aef00
     * @note[short] iOS: 0x2ae598
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x4ef2ac
     * @note[short] MacOS (Intel): 0x5bde10
     * @note[short] Windows: 0x19bd50
     * @note[short] iOS: 0x25cd58
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x4e7c7c
     * @note[short] MacOS (Intel): 0x5a98f0
     * @note[short] Windows: 0x1906d0
     * @note[short] iOS: 0x255da0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x4e8140
     * @note[short] MacOS (Intel): 0x5a9f20
     * @note[short] Windows: 0x190ae0
     * @note[short] iOS: 0x2561dc
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x4e84b4
     * @note[short] MacOS (Intel): 0x5aa280
     * @note[short] Windows: 0x190b90
     * @note[short] iOS: 0x256560
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x4eca24
     * @note[short] MacOS (Intel): 0x5bb5d0
     * @note[short] Windows: 0x197650
     * @note[short] iOS: 0x25ab84
     * @note[short] Android
     */
    virtual void transferObjectRect(cocos2d::CCRect& rect);

    /**
     * @note[short] MacOS (ARM): 0x4ecaa4
     * @note[short] MacOS (Intel): 0x5bb640
     * @note[short] Windows: 0x1976a0
     * @note[short] iOS: 0x25ac04
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4ecab8
     * @note[short] MacOS (Intel): 0x5bb670
     * @note[short] Windows: 0x1976c0
     * @note[short] iOS: 0x25ac18
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x4ecca0
     * @note[short] MacOS (Intel): 0x5bb8a0
     * @note[short] Windows: 0x197850
     * @note[short] iOS: 0x25adf0
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect2(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x4ecd74
     * @note[short] MacOS (Intel): 0x5bb970
     * @note[short] Windows: 0x1978f0
     * @note[short] iOS: 0x25ae80
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x4ecfc4
     * @note[short] MacOS (Intel): 0x5bbbf0
     * @note[short] Windows: 0x197b20
     * @note[short] iOS: 0x25b070
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x4e7b6c
     * @note[short] MacOS (Intel): 0x5a97e0
     * @note[short] Windows: 0x190550
     * @note[short] iOS: 0x255c90
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x4e7fd0
     * @note[short] MacOS (Intel): 0x5a9d50
     * @note[short] Windows: 0x190920
     * @note[short] iOS: 0x2560ec
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x4f286c
     * @note[short] MacOS (Intel): 0x5c1b90
     * @note[short] Windows: 0x19ecd0
     * @note[short] iOS: 0x25f608
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4edea8
     * @note[short] MacOS (Intel): 0x5bcb60
     * @note[short] Windows: 0x198d70
     * @note[short] iOS: 0x25bdd8
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4ee480
     * @note[short] MacOS (Intel): 0x5bd170
     * @note[short] Windows: 0x1992a0
     * @note[short] iOS: 0x25c29c
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4ee4f0
     * @note[short] MacOS (Intel): 0x5bd1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c2f4
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x4ed54c
     * @note[short] MacOS (Intel): 0x5bc150
     * @note[short] Windows: 0x1981a0
     * @note[short] iOS: 0x25b550
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x4ed554
     * @note[short] MacOS (Intel): 0x5bc160
     * @note[short] Windows: 0x1981b0
     * @note[short] iOS: 0x25b558
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x4ed7bc
     * @note[short] MacOS (Intel): 0x5bc3a0
     * @note[short] Windows: 0x198510
     * @note[short] iOS: 0x25b7c0
     * @note[short] Android
     */
    virtual void setRScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x4ed7f0
     * @note[short] MacOS (Intel): 0x5bc3e0
     * @note[short] Windows: 0x198550
     * @note[short] iOS: 0x25b7f4
     * @note[short] Android
     */
    virtual void setRScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x4ed824
     * @note[short] MacOS (Intel): 0x5bc420
     * @note[short] Windows: 0x198590
     * @note[short] iOS: 0x25b828
     * @note[short] Android
     */
    virtual void setRScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x4ed8a8
     * @note[short] MacOS (Intel): 0x5bc4a0
     * @note[short] Windows: 0x1985d0
     * @note[short] iOS: 0x25b86c
     * @note[short] Android
     */
    virtual float getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x4ed8e0
     * @note[short] MacOS (Intel): 0x5bc4d0
     * @note[short] Windows: 0x198610
     * @note[short] iOS: 0x25b8a4
     * @note[short] Android
     */
    virtual float getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x4ed248
     * @note[short] MacOS (Intel): 0x5bbea0
     * @note[short] Windows: 0x197d70
     * @note[short] iOS: 0x25b278
     * @note[short] Android
     */
    virtual void setRRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x4f81f4
     * @note[short] MacOS (Intel): 0x5c8d90
     * @note[short] Windows: 0x1a0a80
     * @note[short] iOS: 0x260ec4
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x4f84e4
     * @note[short] MacOS (Intel): 0x5c9020
     * @note[short] Windows: 0x1a0d70
     * @note[short] iOS: 0x261178
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x4ee510
     * @note[short] MacOS (Intel): 0x5bd220
     * @note[short] Windows: 0x199390
     * @note[short] iOS: 0x25c314
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x4f85bc
     * @note[short] MacOS (Intel): 0x5c90e0
     * @note[short] Windows: 0x1a0e40
     * @note[short] iOS: 0x26125c
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x4f8dc0
     * @note[short] MacOS (Intel): 0x5c9b10
     * @note[short] Windows: 0x1a1510
     * @note[short] iOS: 0x26188c
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4f8e58
     * @note[short] MacOS (Intel): 0x5c9b90
     * @note[short] Windows: 0x1a1570
     * @note[short] iOS: 0x261924
     * @note[short] Android
     */
    virtual void updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4fea4c
     * @note[short] MacOS (Intel): 0x5d2490
     * @note[short] Windows: 0x1a14f0
     * @note[short] iOS: 0x2654e4
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x4f9870
     * @note[short] MacOS (Intel): 0x5ca710
     * @note[short] Windows: 0x1a1f70
     * @note[short] iOS: 0x26219c
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x4f9d74
     * @note[short] MacOS (Intel): 0x5cac00
     * @note[short] Windows: 0x1a1f80
     * @note[short] iOS: 0x26237c
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x4ef994
     * @note[short] MacOS (Intel): 0x5be4f0
     * @note[short] Windows: 0x19c790
     * @note[short] iOS: 0x25d390
     * @note[short] Android
     */
    virtual int addToGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x4efa64
     * @note[short] MacOS (Intel): 0x5be5a0
     * @note[short] Windows: 0x19c8b0
     * @note[short] iOS: 0x25d43c
     * @note[short] Android
     */
    virtual void removeFromGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x4f8030
     * @note[short] MacOS (Intel): 0x5c8bd0
     * @note[short] Windows: 0x1a08d0
     * @note[short] iOS: 0x260d6c
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x1a1e1c
     * @note[short] MacOS (Intel): 0x1f3ac0
     * @note[short] Windows: 0x137c20
     * @note[short] iOS: 0x22eaec
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x4f841c
     * @note[short] MacOS (Intel): 0x5c8f60
     * @note[short] Windows: 0x1a0c60
     * @note[short] iOS: 0x2610b0
     * @note[short] Android
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x4edcd4
     * @note[short] MacOS (Intel): 0x5bc970
     * @note[short] Windows: 0x198aa0
     * @note[short] iOS: 0x25bc04
     * @note[short] Android
     */
    virtual void updateParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateMainParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateSecondaryParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* label);

    /**
     * @note[short] MacOS (ARM): 0x4fab48
     * @note[short] MacOS (Intel): 0x5cbd60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262e18
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canMultiActivate(bool multiActivate);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x1a1e3c
     * @note[short] MacOS (Intel): 0x1f3ae0
     * @note[short] Windows: 0x137c40
     * @note[short] iOS: 0x22eb0c
     * @note[short] Android
     */
    virtual bool getObjectRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x1a1e44
     * @note[short] MacOS (Intel): 0x1f3af0
     * @note[short] Windows: 0x137c50
     * @note[short] iOS: 0x22eb14
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool dirty);

    /**
     * @note[short] MacOS (ARM): 0x1a1e4c
     * @note[short] MacOS (Intel): 0x1f3b00
     * @note[short] Windows: 0x137c60
     * @note[short] iOS: 0x22eb1c
     * @note[short] Android
     */
    virtual bool getOrientedRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x1a1e54
     * @note[short] MacOS (Intel): 0x1f3b10
     * @note[short] Windows: 0x137c70
     * @note[short] iOS: 0x22eb24
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool dirty);

    /**
     * @note[short] MacOS (ARM): 0x1a1e5c
     * @note[short] MacOS (Intel): 0x1f3b20
     * @note[short] Windows: 0x137c80
     * @note[short] iOS: 0x22eb2c
     * @note[short] Android
     */
    virtual GameObjectType getType() const ;

    /**
     * @note[short] MacOS (ARM): 0x1a1e64
     * @note[short] MacOS (Intel): 0x1f3b30
     * @note[short] Windows: 0x137c90
     * @note[short] iOS: 0x22eb34
     * @note[short] Android
     */
    virtual void setType(GameObjectType type);

    /**
     * @note[short] MacOS (ARM): 0x1a1e6c
     * @note[short] MacOS (Intel): 0x1f3b40
     * @note[short] Windows: 0x137ca0
     * @note[short] iOS: 0x22eb3c
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getStartPos() const ;

    /**
     * @note[short] MacOS (ARM): 0x4e70bc
     * @note[short] MacOS (Intel): 0x5a4990
     * @note[short] Windows: 0x18e7b0
     * @note[short] iOS: 0x25542c
     * @note[short] Android: Rebinded
     */
    void addColorSprite(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4e8290
     * @note[short] MacOS (Intel): 0x5aa070
     * @note[short] Windows: 0x19bfc0
     * @note[short] iOS: 0x256338
     * @note[short] Android
     */
    void addColorSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x4ef438
     * @note[short] MacOS (Intel): 0x5bdf80
     * @note[short] Windows: 0x19c1c0
     * @note[short] iOS: 0x25cec4
     * @note[short] Android
     */
    void addColorSpriteToSelf();

    /**
     * @note[short] MacOS (ARM): 0x4ec404
     * @note[short] MacOS (Intel): 0x5bb010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomBlackChild(gd::string frame, float opacity, bool color);

    /**
     * @note[short] MacOS (ARM): 0x4ec5ec
     * @note[short] MacOS (Intel): 0x5bb1b0
     * @note[short] Windows: 0x1972b0
     * @note[short] iOS: 0x25a8bc
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomChild(gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x4ec694
     * @note[short] MacOS (Intel): 0x5bb250
     * @note[short] Windows: 0x197370
     * @note[short] iOS: 0x25a964
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomColorChild(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4e6f64
     * @note[short] MacOS (Intel): 0x5a4820
     * @note[short] Windows: 0x18e660
     * @note[short] iOS: 0x255374
     * @note[short] Android
     */
    void addEmptyGlow();

    /**
     * @note[short] MacOS (ARM): 0x4e6870
     * @note[short] MacOS (Intel): 0x5a2300
     * @note[short] Windows: 0x18dee0
     * @note[short] iOS: 0x254dd8
     * @note[short] Android: Rebinded
     */
    void addGlow(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4ec830
     * @note[short] MacOS (Intel): 0x5bb3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite* parent, gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x4ec76c
     * @note[short] MacOS (Intel): 0x5bb340
     * @note[short] Windows: 0x1974b0
     * @note[short] iOS: 0x25a9fc
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalCustomColorChild(gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x4ec8d4
     * @note[short] MacOS (Intel): 0x5bb480
     * @note[short] Windows: 0x197580
     * @note[short] iOS: 0x25aaac
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalGlowChild(gd::string frame, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x4fa56c
     * @note[short] MacOS (Intel): 0x5cb7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26294c
     * @note[short] Android
     */
    void addNewSlope01(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4fa674
     * @note[short] MacOS (Intel): 0x5cb8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2629f8
     * @note[short] Android
     */
    void addNewSlope01Glow(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4fa7b8
     * @note[short] MacOS (Intel): 0x5cba00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262b10
     * @note[short] Android
     */
    void addNewSlope02(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4fa8c0
     * @note[short] MacOS (Intel): 0x5cbaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262bbc
     * @note[short] Android
     */
    void addNewSlope02Glow(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4ed150
     * @note[short] MacOS (Intel): 0x5bbdc0
     * @note[short] Windows: 0x197cd0
     * @note[short] iOS: 0x25b1ec
     * @note[short] Android
     */
    void addRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x4ed1dc
     * @note[short] MacOS (Intel): 0x5bbe40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addRotation(float rotationX, float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x4efc24
     * @note[short] MacOS (Intel): 0x5be760
     * @note[short] Windows: 0x19c9d0
     * @note[short] iOS: 0x25d588
     * @note[short] Android
     */
    void addToColorGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x4ed918
     * @note[short] MacOS (Intel): 0x5bc500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b8dc
     * @note[short] Android
     */
    void addToCustomScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x4ed940
     * @note[short] MacOS (Intel): 0x5bc540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b904
     * @note[short] Android
     */
    void addToCustomScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x4efd64
     * @note[short] MacOS (Intel): 0x5be8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d650
     * @note[short] Android
     */
    void addToOpacityGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x4ecf40
     * @note[short] MacOS (Intel): 0x5bbb30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b01c
     * @note[short] Android
     */
    void addToTempOffset(double offsetX, double offsetY);

    /**
     * @note[short] MacOS (ARM): 0x4e6854
     * @note[short] MacOS (Intel): 0x5a22e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254dbc
     * @note[short] Android
     */
    void assignUniqueID();

    /**
     * @note[short] MacOS (ARM): 0x4efb90
     * @note[short] MacOS (Intel): 0x5be6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d554
     * @note[short] Android
     */
    bool belongsToGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x4f8e1c
     * @note[short] MacOS (Intel): 0x5c9b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2618e8
     * @note[short] Android
     */
    void calculateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4f92e8
     * @note[short] MacOS (Intel): 0x5ca050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261d2c
     * @note[short] Android
     */
    bool canChangeCustomColor();

    /**
     * @note[short] MacOS (ARM): 0x4f931c
     * @note[short] MacOS (Intel): 0x5ca080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261d60
     * @note[short] Android
     */
    bool canChangeMainColor();

    /**
     * @note[short] MacOS (ARM): 0x4f9330
     * @note[short] MacOS (Intel): 0x5ca0a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261d74
     * @note[short] Android
     */
    bool canChangeSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4ef8ec
     * @note[short] MacOS (Intel): 0x5be430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d348
     * @note[short] Android
     */
    bool canRotateFree();

    /**
     * @note[short] MacOS (ARM): 0x4f9974
     * @note[short] MacOS (Intel): 0x5ca820
     * @note[short] Windows: 0x1a1f90
     * @note[short] iOS: 0x2621fc
     * @note[short] Android
     */
    const cocos2d::ccColor3B& colorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4eb540
     * @note[short] MacOS (Intel): 0x5b5430
     * @note[short] Windows: 0x196d80
     * @note[short] iOS: 0x2596c0
     * @note[short] Android
     */
    void commonInteractiveSetup();

    /**
     * @note[short] MacOS (ARM): 0x4e65f0
     * @note[short] MacOS (Intel): 0x5a2060
     * @note[short] Windows: 0x18dcf0
     * @note[short] iOS: 0x254ba0
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (ARM): 0x4efb18
     * @note[short] MacOS (Intel): 0x5be650
     * @note[short] Windows: 0x19c940
     * @note[short] iOS: 0x25d4e0
     * @note[short] Android
     */
    void copyGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4eb5ec
     * @note[short] MacOS (Intel): 0x5b54f0
     * @note[short] Windows: 0x198b20
     * @note[short] iOS: 0x259770
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0x4efbc4
     * @note[short] MacOS (Intel): 0x5be700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createColorGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x4e6ed0
     * @note[short] MacOS (Intel): 0x5a4780
     * @note[short] Windows: 0x18e6d0
     * @note[short] iOS: 0x2552e0
     * @note[short] Android: Rebinded
     */
    void createGlow(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4ef934
     * @note[short] MacOS (Intel): 0x5be490
     * @note[short] Windows: 0x19c6c0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x4efd04
     * @note[short] MacOS (Intel): 0x5be850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createOpacityGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x4e679c
     * @note[short] MacOS (Intel): 0x5a2220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254d18
     * @note[short] Android
     */
    void createSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x4f8a88
     * @note[short] MacOS (Intel): 0x5c94f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261600
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x4ee4f4
     * @note[short] MacOS (Intel): 0x5bd1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c2f8
     * @note[short] Android
     */
    void destroyObject();

    /**
     * @note[short] MacOS (ARM): 0x4ef52c
     * @note[short] MacOS (Intel): 0x5be080
     * @note[short] Windows: 0x19c2c0
     * @note[short] iOS: 0x25cfb4
     * @note[short] Android
     */
    void determineSlopeDirection();

    /**
     * @note[short] MacOS (ARM): 0x4ed968
     * @note[short] MacOS (Intel): 0x5bc580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleXChange();

    /**
     * @note[short] MacOS (ARM): 0x4ed998
     * @note[short] MacOS (Intel): 0x5bc5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleYChange();

    /**
     * @note[short] MacOS (ARM): 0x4eca14
     * @note[short] MacOS (Intel): 0x5bb5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ab74
     * @note[short] Android
     */
    void dirtifyObjectPos();

    /**
     * @note[short] MacOS (ARM): 0x4eca08
     * @note[short] MacOS (Intel): 0x5bb5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ab68
     * @note[short] Android
     */
    void dirtifyObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4ee55c
     * @note[short] MacOS (Intel): 0x5bd2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c360
     * @note[short] Android
     */
    void disableObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb8a4
     * @note[short] MacOS (Intel): 0x5b5bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool dontCountTowardsLimit();

    /**
     * @note[short] MacOS (ARM): 0x4f9538
     * @note[short] MacOS (Intel): 0x5ca330
     * @note[short] Windows: 0x1a1c80
     * @note[short] iOS: 0x261f0c
     * @note[short] Android
     */
    void duplicateAttributes(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4f94a0
     * @note[short] MacOS (Intel): 0x5ca280
     * @note[short] Windows: 0x1a1ba0
     * @note[short] iOS: 0x261e74
     * @note[short] Android
     */
    void duplicateColorMode(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4f95dc
     * @note[short] MacOS (Intel): 0x5ca410
     * @note[short] Windows: 0x1a1dc0
     * @note[short] iOS: 0x261f90
     * @note[short] Android
     */
    void duplicateValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4f8950
     * @note[short] MacOS (Intel): 0x5c9420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2614e0
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForCustomMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4f877c
     * @note[short] MacOS (Intel): 0x5c92c0
     * @note[short] Windows: 0x1a1020
     * @note[short] iOS: 0x261418
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4f90a8
     * @note[short] MacOS (Intel): 0x5c9e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261b60
     * @note[short] Android
     */
    void fastRotateObject(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x4f9fa4
     * @note[short] MacOS (Intel): 0x5cae50
     * @note[short] Windows: 0x1a20c0
     * @note[short] iOS: 0x2623f4
     * @note[short] Android
     */
    cocos2d::ccColor3B const& getActiveColorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4f7ff8
     * @note[short] MacOS (Intel): 0x5c8ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260d34
     * @note[short] Android
     */
    const char* getBallFrame(int index);

    /**
     * @note[short] MacOS (ARM): 0x4ec9a4
     * @note[short] MacOS (Intel): 0x5bb540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x4ecbb0
     * @note[short] MacOS (Intel): 0x5bb7a0
     * @note[short] Windows: 0x1a17d0
     * @note[short] iOS: 0x25ad10
     * @note[short] Android
     */
    cocos2d::CCPoint const& getBoxOffset();

    /**
     * @note[short] MacOS (ARM): 0x4e7914
     * @note[short] MacOS (Intel): 0x5a9590
     * @note[short] Windows: 0x1903d0
     * @note[short] iOS: 0x255b48
     * @note[short] Android: Rebinded
     */
    gd::string getColorFrame(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4fa3b4
     * @note[short] MacOS (Intel): 0x5cb610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262794
     * @note[short] Android
     */
    int getColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x4f0690
     * @note[short] MacOS (Intel): 0x5bf0d0
     * @note[short] Windows: 0x19cd30
     * @note[short] iOS: 0x25db3c
     * @note[short] Android
     */
    gd::string getColorKey(bool isMainColor, bool colorGroups);

    /**
     * @note[short] MacOS (ARM): 0x4ef91c
     * @note[short] MacOS (Intel): 0x5be460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d378
     * @note[short] Android
     */
    ZLayer getCustomZLayer();

    /**
     * @note[short] MacOS (ARM): 0x4e7a50
     * @note[short] MacOS (Intel): 0x5a96d0
     * @note[short] Windows: 0x190490
     * @note[short] iOS: 0x255bfc
     * @note[short] Android: Rebinded
     */
    gd::string getGlowFrame(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4efe14
     * @note[short] MacOS (Intel): 0x5be950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d6e8
     * @note[short] Android
     */
    bool getGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4efaf8
     * @note[short] MacOS (Intel): 0x5be630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d4c0
     * @note[short] Android
     */
    int getGroupID(int index);

    /**
     * @note[short] MacOS (ARM): 0x4efe50
     * @note[short] MacOS (Intel): 0x5be9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d724
     * @note[short] Android
     */
    gd::string getGroupString();

    /**
     * @note[short] MacOS (ARM): 0x4fa164
     * @note[short] MacOS (Intel): 0x5cb030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26254c
     * @note[short] Android
     */
    cocos2d::CCPoint const& getLastPosition();

    /**
     * @note[short] MacOS (ARM): 0x4f92d8
     * @note[short] MacOS (Intel): 0x5ca030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261d1c
     * @note[short] Android
     */
    GJSpriteColor* getMainColor();

    /**
     * @note[short] MacOS (ARM): 0x4f0fd8
     * @note[short] MacOS (Intel): 0x5bfca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25e010
     * @note[short] Android
     */
    int getMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4ef780
     * @note[short] MacOS (Intel): 0x5be2e0
     * @note[short] Windows: 0x19c520
     * @note[short] iOS: 0x25d208
     * @note[short] Android
     */
    int getObjectDirection();

    /**
     * @note[short] MacOS (ARM): 0x4fa4c8
     * @note[short] MacOS (Intel): 0x5cb710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2628a8
     * @note[short] Android
     */
    float getObjectRadius();

    /**
     * @note[short] MacOS (ARM): 0x4eca68
     * @note[short] MacOS (Intel): 0x5bb610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25abc8
     * @note[short] Android
     */
    cocos2d::CCRect* getObjectRectPointer();

    /**
     * @note[short] MacOS (ARM): 0x4e8278
     * @note[short] MacOS (Intel): 0x5aa050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x256320
     * @note[short] Android
     */
    ZLayer getObjectZLayer();

    /**
     * @note[short] MacOS (ARM): 0x4ef420
     * @note[short] MacOS (Intel): 0x5bdf60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ceac
     * @note[short] Android
     */
    int getObjectZOrder();

    /**
     * @note[short] MacOS (ARM): 0x4ecd30
     * @note[short] MacOS (Intel): 0x5bb930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getOuterObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4ee3fc
     * @note[short] MacOS (Intel): 0x5bd100
     * @note[short] Windows: 0x19ab30
     * @note[short] iOS: 0x25c238
     * @note[short] Android
     */
    int getParentMode();

    /**
     * @note[short] MacOS (ARM): 0x4f9350
     * @note[short] MacOS (Intel): 0x5ca0c0
     * @note[short] Windows: 0x1a1ab0
     * @note[short] iOS: 0x261d94
     * @note[short] Android
     */
    GJSpriteColor* getRelativeSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x4ef7cc
     * @note[short] MacOS (Intel): 0x5be320
     * @note[short] Windows: 0x19c5a0
     * @note[short] iOS: 0x25d24c
     * @note[short] Android
     */
    cocos2d::CCPoint getScalePosDelta();

    /**
     * @note[short] MacOS (ARM): 0x4f92e0
     * @note[short] MacOS (Intel): 0x5ca040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261d24
     * @note[short] Android
     */
    GJSpriteColor* getSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4f0ff8
     * @note[short] MacOS (Intel): 0x5bfcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25e030
     * @note[short] Android
     */
    int getSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4ef748
     * @note[short] MacOS (Intel): 0x5be2a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d1d0
     * @note[short] Android
     */
    float getSlopeAngle();

    /**
     * @note[short] MacOS (ARM): 0x4ecf64
     * @note[short] MacOS (Intel): 0x5bbb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b040
     * @note[short] Android
     */
    cocos2d::CCPoint getUnmodifiedPosition();

    /**
     * @note[short] MacOS (ARM): 0x4fa08c
     * @note[short] MacOS (Intel): 0x5caf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2624c8
     * @note[short] Android
     */
    cocos2d::ccColor3B const& groupColor(cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4f0508
     * @note[short] MacOS (Intel): 0x5bef80
     * @note[short] Windows: 0x19ccb0
     * @note[short] iOS: 0x25d9d4
     * @note[short] Android
     */
    float groupOpacityMod();

    /**
     * @note[short] MacOS (ARM): 0x4efe38
     * @note[short] MacOS (Intel): 0x5be980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d70c
     * @note[short] Android
     */
    void groupWasDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4efe1c
     * @note[short] MacOS (Intel): 0x5be960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d6f0
     * @note[short] Android
     */
    void groupWasEnabled();

    /**
     * @note[short] MacOS (ARM): 0x4f9490
     * @note[short] MacOS (Intel): 0x5ca260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261e64
     * @note[short] Android
     */
    bool hasSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4ebc08
     * @note[short] MacOS (Intel): 0x5b62b0
     * @note[short] Windows: 0x1a3100
     * @note[short] iOS: 0x259d60
     * @note[short] Android
     */
    bool ignoreEditorDuration();

    /**
     * @note[short] MacOS (ARM): 0x4ec99c
     * @note[short] MacOS (Intel): 0x5bb530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ab60
     * @note[short] Android
     */
    bool ignoreEnter();

    /**
     * @note[short] MacOS (ARM): 0x4ec994
     * @note[short] MacOS (Intel): 0x5bb520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ab58
     * @note[short] Android
     */
    bool ignoreFade();

    /**
     * @note[short] MacOS (ARM): 0x4e65b4
     * @note[short] MacOS (Intel): 0x5a2030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254b64
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x4faa1c
     * @note[short] MacOS (Intel): 0x5cbc50
     * @note[short] Windows: 0x1a35f0
     * @note[short] iOS: 0x262cec
     * @note[short] Android
     */
    bool isBasicTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4f93c8
     * @note[short] MacOS (Intel): 0x5ca130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261e04
     * @note[short] Android
     */
    bool isColorObject();

    /**
     * @note[short] MacOS (ARM): 0x4fa360
     * @note[short] MacOS (Intel): 0x5cb5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262740
     * @note[short] Android
     */
    bool isColorTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4faa90
     * @note[short] MacOS (Intel): 0x5cbcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262d60
     * @note[short] Android
     */
    bool isConfigurablePortal();

    /**
     * @note[short] MacOS (ARM): 0x4ebe18
     * @note[short] MacOS (Intel): 0x5b6e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259fb4
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4f9198
     * @note[short] MacOS (Intel): 0x5c9f10
     * @note[short] Windows: 0x1a1910
     * @note[short] iOS: 0x261bdc
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x4f9228
     * @note[short] MacOS (Intel): 0x5c9f90
     * @note[short] Windows: 0x1a19d0
     * @note[short] iOS: 0x261c6c
     * @note[short] Android
     */
    bool isFacingLeft();

    /**
     * @note[short] MacOS (ARM): 0x4faa04
     * @note[short] MacOS (Intel): 0x5cbc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262cd4
     * @note[short] Android
     */
    bool isSettingsObject();

    /**
     * @note[short] MacOS (ARM): 0x4fa174
     * @note[short] MacOS (Intel): 0x5cb060
     * @note[short] Windows: 0x1a26b0
     * @note[short] iOS: 0x26255c
     * @note[short] Android
     */
    bool isSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4fa4f4
     * @note[short] MacOS (Intel): 0x5cb760
     * @note[short] Windows: 0x1a2ac0
     * @note[short] iOS: 0x2628d4
     * @note[short] Android
     */
    bool isSpecialObject();

    /**
     * @note[short] MacOS (ARM): 0x4fa440
     * @note[short] MacOS (Intel): 0x5cb690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262820
     * @note[short] Android
     */
    bool isSpeedObject();

    /**
     * @note[short] MacOS (ARM): 0x4ebaac
     * @note[short] MacOS (Intel): 0x5b6170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259c04
     * @note[short] Android
     */
    bool isStoppableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4eb8b4
     * @note[short] MacOS (Intel): 0x5b5c00
     * @note[short] Windows: 0x1a2240
     * @note[short] iOS: 0x259a14
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4f00ac
     * @note[short] MacOS (Intel): 0x5bec70
     * @note[short] Windows: 0x19cad0
     * @note[short] iOS: 0x25d864
     * @note[short] Android: Rebinded
     */
    void loadGroupsFromString(gd::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x4ee528
     * @note[short] MacOS (Intel): 0x5bd250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c32c
     * @note[short] Android
     */
    void makeInvisible();

    /**
     * @note[short] MacOS (ARM): 0x4ee544
     * @note[short] MacOS (Intel): 0x5bd280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c348
     * @note[short] Android
     */
    void makeVisible();

    /**
     * @note[short] MacOS (ARM): 0x4f9c84
     * @note[short] MacOS (Intel): 0x5cab40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262304
     * @note[short] Android
     */
    float opacityModForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4e8214
     * @note[short] MacOS (Intel): 0x5a9ff0
     * @note[short] Windows: 0x19bee0
     * @note[short] iOS: 0x2562bc
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode);

    /**
     * @note[short] MacOS (ARM): 0x3b5a90
     * @note[short] MacOS (Intel): 0x444400
     * @note[short] Windows: 0x1aeed0
     * @note[short] iOS: 0x2ae52c
     * @note[short] Android
     */
    gd::string perspectiveColorFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x3b5798
     * @note[short] MacOS (Intel): 0x444090
     * @note[short] Windows: 0x1aed90
     * @note[short] iOS: 0x2ae410
     * @note[short] Android
     */
    gd::string perspectiveFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x202534
     * @note[short] MacOS (Intel): 0x25e530
     * @note[short] Windows: 0x1aa4a0
     * @note[short] iOS: 0x349680
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x202064
     * @note[short] MacOS (Intel): 0x25e030
     * @note[short] Windows: 0x1a9ed0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x2020ec
     * @note[short] MacOS (Intel): 0x25e0c0
     * @note[short] Windows: 0x1a9fc0
     * @note[short] iOS: 0x349244
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x4ee5a4
     * @note[short] MacOS (Intel): 0x5bd2f0
     * @note[short] Windows: 0x1993b0
     * @note[short] iOS: 0x25c3a8
     * @note[short] Android
     */
    void playShineEffect();

    /**
     * @note[short] MacOS (ARM): 0x4ecfdc
     * @note[short] MacOS (Intel): 0x5bbc20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b088
     * @note[short] Android
     */
    void quickUpdatePosition();

    /**
     * @note[short] MacOS (ARM): 0x4ed044
     * @note[short] MacOS (Intel): 0x5bbc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void quickUpdatePosition2();

    /**
     * @note[short] MacOS (ARM): 0x4e7090
     * @note[short] MacOS (Intel): 0x5a4960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x4e7054
     * @note[short] MacOS (Intel): 0x5a4920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2553f0
     * @note[short] Android
     */
    void removeGlow();

    /**
     * @note[short] MacOS (ARM): 0x4ef528
     * @note[short] MacOS (Intel): 0x5be070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reorderColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x4efcd4
     * @note[short] MacOS (Intel): 0x5be800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d620
     * @note[short] Android
     */
    void resetColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x4e7f04
     * @note[short] MacOS (Intel): 0x5a9c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x256020
     * @note[short] Android
     */
    void resetGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4efaf0
     * @note[short] MacOS (Intel): 0x5be620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d4b8
     * @note[short] Android
     */
    void resetGroups();

    /**
     * @note[short] MacOS (ARM): 0x4f9448
     * @note[short] MacOS (Intel): 0x5ca1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4e8130
     * @note[short] MacOS (Intel): 0x5a9f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2561cc
     * @note[short] Android
     */
    void resetMoveOffset();

    /**
     * @note[short] MacOS (ARM): 0x4ed868
     * @note[short] MacOS (Intel): 0x5bc460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRScaleForced();

    /**
     * @note[short] MacOS (ARM): 0x4f946c
     * @note[short] MacOS (Intel): 0x5ca220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4ed9c8
     * @note[short] MacOS (Intel): 0x5bc5e0
     * @note[short] Windows: 0x198770
     * @note[short] iOS: 0x25b92c
     * @note[short] Android
     */
    void setAreaOpacity(float step, float value, int index);

    /**
     * @note[short] MacOS (ARM): 0x4ef924
     * @note[short] MacOS (Intel): 0x5be470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d380
     * @note[short] Android
     */
    void setCustomZLayer(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x4eb520
     * @note[short] MacOS (Intel): 0x5b5400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2596a0
     * @note[short] Android
     */
    void setDefaultMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4e7a30
     * @note[short] MacOS (Intel): 0x5a96a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x255bdc
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4edc70
     * @note[short] MacOS (Intel): 0x5bc8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25bb9c
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x4fa16c
     * @note[short] MacOS (Intel): 0x5cb040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262554
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x4f9408
     * @note[short] MacOS (Intel): 0x5ca180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261e44
     * @note[short] Android
     */
    void setMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4f9428
     * @note[short] MacOS (Intel): 0x5ca1b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4f81b8
     * @note[short] MacOS (Intel): 0x5c8d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupColorSprite(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x3d491c
     * @note[short] MacOS (Intel): 0x46a080
     * @note[short] Windows: 0x1c3300
     * @note[short] iOS: 0x2c9a48
     * @note[short] Android
     */
    void setupPixelScale();

    /**
     * @note[short] MacOS (ARM): 0x4ebfcc
     * @note[short] MacOS (Intel): 0x5b7160
     * @note[short] Windows: 0x1a36a0
     * @note[short] iOS: 0x25a164
     * @note[short] Android
     */
    void setupSpriteSize();

    /**
     * @note[short] MacOS (ARM): 0x4e85bc
     * @note[short] MacOS (Intel): 0x5aa380
     * @note[short] Windows: 0x190c80
     * @note[short] iOS: 0x256668
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4eb6d0
     * @note[short] MacOS (Intel): 0x5b55c0
     * @note[short] Windows: 0x196e40
     * @note[short] iOS: 0x259840
     * @note[short] Android
     */
    bool shouldLockX();

    /**
     * @note[short] MacOS (ARM): 0x20200c
     * @note[short] MacOS (Intel): 0x25dfc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldNotHideAnimFreeze();

    /**
     * @note[short] MacOS (ARM): 0x2022ec
     * @note[short] MacOS (Intel): 0x25e300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34943c
     * @note[short] Android
     */
    bool shouldShowPickupEffects();

    /**
     * @note[short] MacOS (ARM): 0x4f8b8c
     * @note[short] MacOS (Intel): 0x5c9900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261704
     * @note[short] Android
     */
    bool slopeFloorTop();

    /**
     * @note[short] MacOS (ARM): 0x4f8b70
     * @note[short] MacOS (Intel): 0x5c98e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2616e8
     * @note[short] Android
     */
    bool slopeWallLeft();

    /**
     * @note[short] MacOS (ARM): 0x4f8ba8
     * @note[short] MacOS (Intel): 0x5c9920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double slopeYPos(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4f8c48
     * @note[short] MacOS (Intel): 0x5c9990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261720
     * @note[short] Android
     */
    double slopeYPos(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x4f8cb8
     * @note[short] MacOS (Intel): 0x5c99e0
     * @note[short] Windows: 0x1a13b0
     * @note[short] iOS: 0x261784
     * @note[short] Android
     */
    double slopeYPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x20235c
     * @note[short] MacOS (Intel): 0x25e360
     * @note[short] Windows: 0x1aa260
     * @note[short] iOS: 0x3494b0
     * @note[short] Android
     */
    void spawnDefaultPickupParticle(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4ef118
     * @note[short] MacOS (Intel): 0x5bdc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ccf4
     * @note[short] Android
     */
    void updateBlendMode();

    /**
     * @note[short] MacOS (ARM): 0x4fa110
     * @note[short] MacOS (Intel): 0x5cafd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateCustomColorType(short type);

    /**
     * @note[short] MacOS (ARM): 0x4e7f10
     * @note[short] MacOS (Intel): 0x5a9c50
     * @note[short] Windows: 0x198650
     * @note[short] iOS: 0x25602c
     * @note[short] Android
     */
    void updateCustomScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x4e7f70
     * @note[short] MacOS (Intel): 0x5a9cd0
     * @note[short] Windows: 0x1986e0
     * @note[short] iOS: 0x25608c
     * @note[short] Android
     */
    void updateCustomScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x4f05a0
     * @note[short] MacOS (Intel): 0x5bf010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25da4c
     * @note[short] Android
     */
    void updateHSVState();

    /**
     * @note[short] MacOS (ARM): 0x4f8fdc
     * @note[short] MacOS (Intel): 0x5c9d30
     * @note[short] Windows: 0x1a1730
     * @note[short] iOS: 0x261a94
     * @note[short] Android
     */
    void updateIsOriented();

    /**
     * @note[short] MacOS (ARM): 0x4f987c
     * @note[short] MacOS (Intel): 0x5ca730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2621a8
     * @note[short] Android
     */
    void updateMainColor();

    /**
     * @note[short] MacOS (ARM): 0x4f9c34
     * @note[short] MacOS (Intel): 0x5caaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x4f9b5c
     * @note[short] MacOS (Intel): 0x5caa20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4f8a90
     * @note[short] MacOS (Intel): 0x5c9510
     * @note[short] Windows: 0x1a12f0
     * @note[short] iOS: 0x261608
     * @note[short] Android
     */
    void updateObjectEditorColor();

    /**
     * @note[short] MacOS (ARM): 0x4f9d80
     * @note[short] MacOS (Intel): 0x5cac20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x262388
     * @note[short] Android
     */
    void updateSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4f9f54
     * @note[short] MacOS (Intel): 0x5cae00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x4f9e7c
     * @note[short] MacOS (Intel): 0x5cad30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4e7bdc
     * @note[short] MacOS (Intel): 0x5a9860
     * @note[short] Windows: 0x1905f0
     * @note[short] iOS: 0x255d00
     * @note[short] Android
     */
    void updateStartPos();

    /**
     * @note[short] MacOS (ARM): 0x4ecf94
     * @note[short] MacOS (Intel): 0x5bbbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateUnmodifiedPositions();

    /**
     * @note[short] MacOS (ARM): 0x201f64
     * @note[short] MacOS (Intel): 0x25dc20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x349160
     * @note[short] Android
     */
    bool usesFreezeAnimation();

    /**
     * @note[short] MacOS (ARM): 0x20201c
     * @note[short] MacOS (Intel): 0x25dfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3491fc
     * @note[short] Android
     */
    bool usesSpecialAnimation();
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_groupColor;
    bool m_isColorSpriteBlack;
    bool m_isObjectBlack;
    float m_blackChildOpacity;
    bool m_blackChildOpacityLocked;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_isGroupDisabledTemp;
    bool m_unk28c;
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseUsesHSV;
    bool m_detailUsesHSV;
    float m_positionXOffset;
    float m_positionYOffset;
    float m_rotationXOffset;
    float m_unk2A8;
    float m_rotationYOffset;
    float m_unk2B0;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_unk2BC;
    float m_unk2C0;
    bool m_tempOffsetXRelated;
    bool m_isFlipX;
    bool m_isFlipY;
    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;
    cocos2d::CCPoint m_boxOffset;
    OBB2D* m_orientedBox;
    bool m_shouldUseOuterOb;
    cocos2d::CCSprite* m_glowSprite;
    bool m_isRingPoweredOn;
    float m_width;
    float m_height;
    bool m_addToNodeContainer;
    bool m_isActivated;
    bool m_isDisabled2;
    cocos2d::CCParticleSystemQuad* m_particle;
    gd::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    cocos2d::CCPoint m_particleOffset;
    bool m_isParticleSpriteLocked;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPosDirty;
    float m_fadeMargin;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_unk353;
    bool m_canRotateFree;
    bool m_isMirroredByScale;
    int m_linkedGroup;
    int m_unk35C;
    short m_colorType;
    short m_childColorType;
    bool m_shouldBlendBase;
    bool m_shouldBlendDetail;
    bool m_hasCustomChild;
    bool m_unk367;
    cocos2d::CCSprite* m_colorSprite;
    bool m_unk370;
    float m_objectRadius;
    bool m_isRotationAligned;
    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    GameObjectType m_objectType;
    GameObjectType m_savedObjectType;
    int m_unk390;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    double m_positionX;
    double m_positionY;
    cocos2d::CCPoint m_startPosition;
    bool m_usesAudioScale;
    bool m_hasNoAudioScale;
    bool m_isDisabled;
    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_unk3ee;
    bool m_isInvisible;
    int m_unk3D8;
    short m_varianceIndex;
    bool m_unk3DE;
    short m_enterType;
    short m_exitType;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_unk3E8;
    short m_parentMode;
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    bool m_unk3F8;
    bool m_intrinsicDontFade;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_isSolidColorBlock;
    bool m_unk3FD;
    bool m_customSpriteColor;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_unk40C;
    bool m_colorZLayerRelated;
    bool m_customAudioScale;
    float m_minAudioScale;
    float m_maxAudioScale;
    bool m_particleLocked;
    int m_property53;
    bool m_isInvisibleBlock;
    bool m_customGlowColor;
    bool m_glowColorIsLBG;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_slopeUphill;
    int m_slopeDirection;
    bool m_slopeIsHazard;
    float m_opacityMod2;
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    bool m_baseOrDetailBlending;
    ZLayer m_defaultZLayer;
    bool m_zFixedZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    bool m_wasSelected;
    bool m_isSelected;
    float m_unk460;
    cocos2d::CCPoint m_unk464;
    bool m_updateParents;
    bool m_updateEditorColor;
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    int m_enabledGroupsCounter;
    bool m_updateCustomContentSize;
    bool m_hasContentSize;
    bool m_isNoTouch;
    cocos2d::CCSize m_lastSize;
    cocos2d::CCPoint m_lastPosition;
    int m_unk4C0;
    int m_unk4C4;
    int m_unk4C8;
    int m_unk4CC;
    GameObjectClassType m_classType;
    bool m_isTrigger;
    bool m_isSpawnOrderTrigger;
    bool m_isColorTrigger;
    bool m_dontIgnoreDuration;
    bool m_canBeControlled;
    bool m_activateTriggerInEditor;
    bool m_isStartPos;
    bool m_isHighDetail;
    ColorActionSprite* m_mainActionSprite;
    ColorActionSprite* m_detailActionSprite;
    GJEffectManager* m_goEffectManager;
    bool m_unk4F8;
    bool m_isDecoration;
    bool m_isDecoration2;
    bool m_unk4fb;
    bool m_maybeNotColorable;
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    bool m_unk507;
    bool m_unk508;
    float m_unk50C;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_mainColorKeyIndex;
    int m_detailColorKeyIndex;
    uint8_t m_areaOpacityRelated;
    float m_areaOpacityValue;
    int m_areaOpacityIndex;
    int m_unk52C;
    bool m_unk530;
    bool m_isUIObject;
    bool m_greenDebugDraw;
};
