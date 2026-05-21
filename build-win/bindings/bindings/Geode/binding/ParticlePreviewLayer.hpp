#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ParticlePreviewLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ParticlePreviewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ParticlePreviewLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticlePreviewLayer();

    /**
     * @note[short] MacOS (ARM): 0x3da404
     * @note[short] MacOS (Intel): 0x472ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cd9a4
     * @note[short] Android
     */
    static ParticlePreviewLayer* create(cocos2d::CCParticleSystemQuad* particleSystem);

    /**
     * @note[short] MacOS (ARM): 0x3de758
     * @note[short] MacOS (Intel): 0x477880
     * @note[short] Windows: 0x435920
     * @note[short] iOS: 0x2d1548
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x3de5d0
     * @note[short] MacOS (Intel): 0x477700
     * @note[short] Windows: 0x435840
     * @note[short] iOS: 0x2d1468
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3de558
     * @note[short] MacOS (Intel): 0x4776a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d13f0
     * @note[short] Android
     */
    bool init(cocos2d::CCParticleSystemQuad* particleSystem);

    /**
     * @note[short] MacOS (ARM): 0x3de750
     * @note[short] MacOS (Intel): 0x477870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void postVisit();

    /**
     * @note[short] MacOS (ARM): 0x3de6b0
     * @note[short] MacOS (Intel): 0x4777d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void preVisitWithClippingRect(cocos2d::CCRect rect);
    int m_particleMode;
    int m_drawMode;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    bool m_gravityMode;
};
