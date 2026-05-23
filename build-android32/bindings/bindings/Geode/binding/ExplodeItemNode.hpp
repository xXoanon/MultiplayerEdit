#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExplodeItemNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1befb4
     * @note[short] MacOS (Intel): 0x2136b0
     * @note[short] Windows: 0x3844f0
     * @note[short] iOS: 0x5c6a4
     * @note[short] Android
     */
    static ExplodeItemNode* create(cocos2d::CCRenderTexture* texture);

    /**
     * @note[short] MacOS (ARM): 0x1bfe98
     * @note[short] MacOS (Intel): 0x214680
     * @note[short] Windows: 0x384f60
     * @note[short] iOS: 0x5d3a8
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1bf068
     * @note[short] MacOS (Intel): 0x213760
     * @note[short] Windows: 0x3845b0
     * @note[short] iOS: 0x5c730
     * @note[short] Android
     */
    void createSprites(int countX, int countY, float xVel, float xVar, float yVel, float yVar, float dur, float durVar, cocos2d::ccColor4F startColor, cocos2d::ccColor4F endColor, bool noParticles);

    /**
     * @note[short] MacOS (ARM): 0x1bfd9c
     * @note[short] MacOS (Intel): 0x2145a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5d2b8
     * @note[short] Android
     */
    bool init(cocos2d::CCRenderTexture* texture);
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCArray* m_sprites;
    float m_unk1;
    float m_floorHeight;
    bool m_noGravity;
};
