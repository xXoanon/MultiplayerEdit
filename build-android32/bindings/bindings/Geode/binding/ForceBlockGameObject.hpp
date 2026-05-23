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

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ForceBlockGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19b35c
     * @note[short] MacOS (Intel): 0x1eb9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3967b4
     * @note[short] Android
     */
    static ForceBlockGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x19c0c4
     * @note[short] MacOS (Intel): 0x1ecac0
     * @note[short] Windows: 0x4c1d30
     * @note[short] iOS: 0x396c28
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19b474
     * @note[short] MacOS (Intel): 0x1ebb00
     * @note[short] Windows: 0x4c1950
     * @note[short] iOS: 0x396878
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x19c254
     * @note[short] MacOS (Intel): 0x1ecc90
     * @note[short] Windows: 0x4c1ec0
     * @note[short] iOS: 0x396d98
     * @note[short] Android
     */
    cocos2d::CCPoint calculateForceToTarget(GameObject* target);

    /**
     * @note[short] MacOS (ARM): 0x19b42c
     * @note[short] MacOS (Intel): 0x1ebab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_force;
    float m_minForce;
    float m_maxForce;
    bool m_relativeForce;
    bool m_forceRange;
    int m_forceID;
};
