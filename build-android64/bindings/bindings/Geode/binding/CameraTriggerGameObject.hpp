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

class CameraTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CameraTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CameraTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CameraTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x190a24
     * @note[short] MacOS (Intel): 0x1ddde0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x392a50
     * @note[short] Android
     */
    static CameraTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x190b48
     * @note[short] MacOS (Intel): 0x1ddf20
     * @note[short] Windows: 0x4bd820
     * @note[short] iOS: 0x392b20
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x193e9c
     * @note[short] MacOS (Intel): 0x1e2460
     * @note[short] Windows: 0x4beac0
     * @note[short] iOS: 0x393a70
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x190ce8
     * @note[short] MacOS (Intel): 0x1de180
     * @note[short] Windows: 0x4bdb80
     * @note[short] iOS: 0x392cdc
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x190b00
     * @note[short] MacOS (Intel): 0x1dded0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_exitStatic;
    bool m_followObject;
    float m_followEasing;
    int m_edgeDirection;
    bool m_smoothVelocity;
    float m_velocityModifier;
    bool m_exitInstant;
    float m_previewOpacity;
};
