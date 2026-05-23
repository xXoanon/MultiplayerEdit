#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupInstantCollisionTriggerPopup.hpp"

class SetupCollisionStateTriggerPopup : public SetupInstantCollisionTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionStateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionStateTriggerPopup, SetupInstantCollisionTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCollisionStateTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x31d938
     * @note[short] MacOS (Intel): 0x397d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x231488
     * @note[short] Android
     */
    static SetupCollisionStateTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x31dac4
     * @note[short] MacOS (Intel): 0x397f50
     * @note[short] Windows: 0x41a9c0
     * @note[short] iOS: 0x231564
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
