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

class TransformTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TransformTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TransformTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TransformTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18d044
     * @note[short] MacOS (Intel): 0x1d9500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39140c
     * @note[short] Android
     */
    static TransformTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x18d164
     * @note[short] MacOS (Intel): 0x1d9630
     * @note[short] Windows: 0x4bc180
     * @note[short] iOS: 0x3914d8
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x18d184
     * @note[short] MacOS (Intel): 0x1d9660
     * @note[short] Windows: 0x4bc1a0
     * @note[short] iOS: 0x3914fc
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18d44c
     * @note[short] MacOS (Intel): 0x1d9a40
     * @note[short] Windows: 0x4bc4a0
     * @note[short] iOS: 0x39178c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x18d11c
     * @note[short] MacOS (Intel): 0x1d95e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_objectScaleX;
    float m_objectScaleY;
    float m_property450;
    float m_property451;
    bool m_onlyMove;
    bool m_divideX;
    bool m_divideY;
    bool m_relativeRotation;
    bool m_relativeScale;
};
