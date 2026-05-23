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

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TriggerControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19dffc
     * @note[short] MacOS (Intel): 0x1eef10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x397bf0
     * @note[short] Android
     */
    static TriggerControlGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x19eb18
     * @note[short] MacOS (Intel): 0x1efbd0
     * @note[short] Windows: 0x4c3320
     * @note[short] iOS: 0x3980f0
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x19e8c0
     * @note[short] MacOS (Intel): 0x1ef980
     * @note[short] Windows: 0x4c3230
     * @note[short] iOS: 0x397f38
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19e134
     * @note[short] MacOS (Intel): 0x1ef050
     * @note[short] Windows: 0x4c2fd0
     * @note[short] iOS: 0x397cec
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x19e0d8
     * @note[short] MacOS (Intel): 0x1eeff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x397c90
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x19e9b0
     * @note[short] MacOS (Intel): 0x1efa70
     * @note[short] Windows: 0x4c3350
     * @note[short] iOS: 0x398014
     * @note[short] Android
     */
    void updateTriggerControlFrame();
    gd::string m_triggerControlFrame;
    GJActionCommand m_customTriggerValue;
};
