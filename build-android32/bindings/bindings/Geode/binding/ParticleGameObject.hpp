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

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticleGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16bbd8
     * @note[short] MacOS (Intel): 0x1b1580
     * @note[short] Windows: 0x49fb00
     * @note[short] iOS: 0x380b0c
     * @note[short] Android
     */
    static ParticleGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x16bd38
     * @note[short] MacOS (Intel): 0x1b1760
     * @note[short] Windows: 0x49fc20
     * @note[short] iOS: 0x380c0c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16cd40
     * @note[short] MacOS (Intel): 0x1b27c0
     * @note[short] Windows: 0x4a0fe0
     * @note[short] iOS: 0x381a08
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x16cdb4
     * @note[short] MacOS (Intel): 0x1b2830
     * @note[short] Windows: 0x4a1060
     * @note[short] iOS: 0x381a58
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x16ce28
     * @note[short] MacOS (Intel): 0x1b28a0
     * @note[short] Windows: 0x4a10e0
     * @note[short] iOS: 0x381aa8
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x16cc50
     * @note[short] MacOS (Intel): 0x1b2700
     * @note[short] Windows: 0x4a0bd0
     * @note[short] iOS: 0x381918
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x16cca0
     * @note[short] MacOS (Intel): 0x1b2740
     * @note[short] Windows: 0x4a0c10
     * @note[short] iOS: 0x381968
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x16ccf0
     * @note[short] MacOS (Intel): 0x1b2780
     * @note[short] Windows: 0x4a0d80
     * @note[short] iOS: 0x3819b8
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x16cf98
     * @note[short] MacOS (Intel): 0x1b2a00
     * @note[short] Windows: 0x4a1290
     * @note[short] iOS: 0x381bf4
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x16bf58
     * @note[short] MacOS (Intel): 0x1b1a30
     * @note[short] Windows: 0x49fe70
     * @note[short] iOS: 0x380dec
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x16c008
     * @note[short] MacOS (Intel): 0x1b1b00
     * @note[short] Windows: 0x49ff40
     * @note[short] iOS: 0x380e9c
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x16d154
     * @note[short] MacOS (Intel): 0x1b2bd0
     * @note[short] Windows: 0x4a14e0
     * @note[short] iOS: 0x381db0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x16d118
     * @note[short] MacOS (Intel): 0x1b2b90
     * @note[short] Windows: 0x4a14a0
     * @note[short] iOS: 0x381d74
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x16bd70
     * @note[short] MacOS (Intel): 0x1b1790
     * @note[short] Windows: 0x49fc80
     * @note[short] iOS: 0x380c44
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16d360
     * @note[short] MacOS (Intel): 0x1b2dd0
     * @note[short] Windows: 0x4a1730
     * @note[short] iOS: 0x381fa0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x16c0ec
     * @note[short] MacOS (Intel): 0x1b1be0
     * @note[short] Windows: 0x4a0030
     * @note[short] iOS: 0x380f80
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x16c678
     * @note[short] MacOS (Intel): 0x1b2150
     * @note[short] Windows: 0x4a05f0
     * @note[short] iOS: 0x3814e4
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x16c6e0
     * @note[short] MacOS (Intel): 0x1b21d0
     * @note[short] Windows: 0x4a06d0
     * @note[short] iOS: 0x38154c
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x16ce9c
     * @note[short] MacOS (Intel): 0x1b2910
     * @note[short] Windows: 0x4a1160
     * @note[short] iOS: 0x381af8
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x16bfd4
     * @note[short] MacOS (Intel): 0x1b1ac0
     * @note[short] Windows: 0x49ff00
     * @note[short] iOS: 0x380e68
     * @note[short] Android
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x16d094
     * @note[short] MacOS (Intel): 0x1b2af0
     * @note[short] Windows: 0x4a13c0
     * @note[short] iOS: 0x381cf0
     * @note[short] Android
     */
    virtual void updateMainParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x16d0d8
     * @note[short] MacOS (Intel): 0x1b2b40
     * @note[short] Windows: 0x4a1440
     * @note[short] iOS: 0x381d34
     * @note[short] Android
     */
    virtual void updateSecondaryParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x16d1bc
     * @note[short] MacOS (Intel): 0x1b2c30
     * @note[short] Windows: 0x4a1540
     * @note[short] iOS: 0x381e18
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x16d308
     * @note[short] MacOS (Intel): 0x1b2d80
     * @note[short] Windows: 0x4a16b0
     * @note[short] iOS: 0x381f48
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool animate);

    /**
     * @note[short] MacOS (ARM): 0x16c244
     * @note[short] MacOS (Intel): 0x1b1d60
     * @note[short] Windows: 0x4a0230
     * @note[short] iOS: 0x3810d8
     * @note[short] Android
     */
    void applyParticleSettings(cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x16bf00
     * @note[short] MacOS (Intel): 0x1b19c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x380d94
     * @note[short] Android
     */
    void createAndAddCustomParticle();

    /**
     * @note[short] MacOS (ARM): 0x16ca48
     * @note[short] MacOS (Intel): 0x1b2520
     * @note[short] Windows: 0x4a09c0
     * @note[short] iOS: 0x381770
     * @note[short] Android
     */
    void createParticlePreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x16c838
     * @note[short] MacOS (Intel): 0x1b2310
     * @note[short] Windows: 0x4a0790
     * @note[short] iOS: 0x3815ec
     * @note[short] Android: Rebinded
     */
    void setParticleString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x16c8cc
     * @note[short] MacOS (Intel): 0x1b23a0
     * @note[short] Windows: 0x4a0820
     * @note[short] iOS: 0x38162c
     * @note[short] Android
     */
    void updateParticle();

    /**
     * @note[short] MacOS (ARM): 0x16c55c
     * @note[short] MacOS (Intel): 0x1b2040
     * @note[short] Windows: 0x4a0eb0
     * @note[short] iOS: 0x3813d0
     * @note[short] Android
     */
    void updateParticleAngle(float angle, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x16cbcc
     * @note[short] MacOS (Intel): 0x1b2680
     * @note[short] Windows: 0x4a0b50
     * @note[short] iOS: 0x381894
     * @note[short] Android
     */
    void updateParticlePreviewArtOpacity(float opacity);

    /**
     * @note[short] MacOS (ARM): 0x16c9f4
     * @note[short] MacOS (Intel): 0x1b24d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38171c
     * @note[short] Android
     */
    void updateParticleScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x16c0c8
     * @note[short] MacOS (Intel): 0x1b1bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x380f5c
     * @note[short] Android
     */
    void updateParticleStruct();
    gd::string m_particleData;
    bool m_updatedParticleData;
    cocos2d::ParticleStruct m_particleStruct;
    bool m_hasUniformObjectColor;
    int m_popupPage;
    bool m_shouldQuickStart;
    float m_respawnResult;
    bool m_startingRespawn;
    bool m_notPreviewing;
};
