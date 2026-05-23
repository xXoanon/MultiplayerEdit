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

class CountTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CountTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CountTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CountTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18afc4
     * @note[short] MacOS (Intel): 0x1d6a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3907c0
     * @note[short] Android
     */
    static CountTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x18b0e0
     * @note[short] MacOS (Intel): 0x1d6b80
     * @note[short] Windows: 0x4bb210
     * @note[short] iOS: 0x390888
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x18b2f4
     * @note[short] MacOS (Intel): 0x1d6df0
     * @note[short] Windows: 0x4bb680
     * @note[short] iOS: 0x390a24
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18b680
     * @note[short] MacOS (Intel): 0x1d7210
     * @note[short] Windows: 0x4bb9e0
     * @note[short] iOS: 0x390d24
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x18b098
     * @note[short] MacOS (Intel): 0x1d6b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_pickupCount;
    int m_pickupTriggerMode;
    bool m_multiActivate;
    bool m_isOverride;
    float m_pickupTriggerMultiplier;
};
