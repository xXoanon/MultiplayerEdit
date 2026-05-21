#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GhostTrailEffect : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GhostTrailEffect, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x5225d0
     * @note[short] MacOS (Intel): 0x5f9aa0
     * @note[short] Windows: 0x6a000
     * @note[short] iOS: 0x2f50c0
     * @note[short] Android
     */
    static GhostTrailEffect* create();

    /**
     * @note[short] MacOS (ARM): 0x5226a0
     * @note[short] MacOS (Intel): 0x5f9b70
     * @note[short] Windows: 0x6a0e0
     * @note[short] iOS: 0x2f5134
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x522c08
     * @note[short] MacOS (Intel): 0x5fa120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5698
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x522bf8
     * @note[short] MacOS (Intel): 0x5fa100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5688
     * @note[short] Android
     */
    void doBlendAdditive();

    /**
     * @note[short] MacOS (ARM): 0x5226fc
     * @note[short] MacOS (Intel): 0x5f9bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5190
     * @note[short] Android
     */
    void runWithTarget(cocos2d::CCSprite* sprite, float snapshotInterval, float fadeInterval, float duration, float ghostScale, bool scaleTwice);

    /**
     * @note[short] MacOS (ARM): 0x522ba8
     * @note[short] MacOS (Intel): 0x5fa0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5638
     * @note[short] Android
     */
    void stopTrail();

    /**
     * @note[short] MacOS (ARM): 0x5227b0
     * @note[short] MacOS (Intel): 0x5f9c70
     * @note[short] Windows: 0x6a140
     * @note[short] iOS: 0x2f5240
     * @note[short] Android
     */
    void trailSnapshot(float dt);
    float m_snapshotInterval;
    float m_fadeInterval;
    float m_ghostScale;
    bool m_scaleTwice;
    float m_playerScale;
    cocos2d::ccBlendFunc m_blendFunc;
    cocos2d::CCSprite* m_iconSprite;
    PlayerObject* m_playerObject;
    cocos2d::CCLayer* m_objectLayer;
    float m_opacity;
    void* m_delegate;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    bool m_unk194;
};
