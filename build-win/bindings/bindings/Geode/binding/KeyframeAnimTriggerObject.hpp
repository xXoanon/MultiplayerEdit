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

class KeyframeAnimTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeAnimTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeAnimTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeyframeAnimTriggerObject();

    /**
     * @note[short] MacOS (ARM): 0x174764
     * @note[short] MacOS (Intel): 0x1bb640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x386aa4
     * @note[short] Android
     */
    static KeyframeAnimTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x174840
     * @note[short] MacOS (Intel): 0x1bb710
     * @note[short] Windows: 0x4b1590
     * @note[short] iOS: 0x386b74
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x175524
     * @note[short] MacOS (Intel): 0x1bc7c0
     * @note[short] Windows: 0x4b1a00
     * @note[short] iOS: 0x386fb4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x174890
     * @note[short] MacOS (Intel): 0x1bb760
     * @note[short] Windows: 0x4b1600
     * @note[short] iOS: 0x386bc4
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    float m_timeMod;
    float m_positionXMod;
    float m_positionYMod;
    float m_rotationMod;
    float m_scaleXMod;
    float m_scaleYMod;
};
