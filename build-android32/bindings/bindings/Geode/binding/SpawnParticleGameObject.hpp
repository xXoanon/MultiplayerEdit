#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class SpawnParticleGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnParticleGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399bf4
     * @note[short] Android: Out of line
     */
     SpawnParticleGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19eb3c
     * @note[short] MacOS (Intel): 0x1efc00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398114
     * @note[short] Android
     */
    static SpawnParticleGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x19ec10
     * @note[short] MacOS (Intel): 0x1efcd0
     * @note[short] Windows: 0x4c3530
     * @note[short] iOS: 0x398188
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1a0170
     * @note[short] MacOS (Intel): 0x1f1810
     * @note[short] Windows: 0x4c3c00
     * @note[short] iOS: 0x3987c8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19ec60
     * @note[short] MacOS (Intel): 0x1efd20
     * @note[short] Windows: 0x4c35a0
     * @note[short] iOS: 0x3981d8
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    cocos2d::CCPoint m_offset;
    cocos2d::CCPoint m_offsetVariance;
    bool m_matchRotation;
    float m_rotation;
    float m_rotationVariance;
    float m_scale;
    float m_scaleVariance;
};
