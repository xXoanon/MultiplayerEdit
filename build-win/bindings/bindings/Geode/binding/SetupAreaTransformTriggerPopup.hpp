#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"

class SetupAreaTransformTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTransformTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTransformTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTransformTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x432e28
     * @note[short] MacOS (Intel): 0x4d52d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x363d0
     * @note[short] Android
     */
    static SetupAreaTransformTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x432fb4
     * @note[short] MacOS (Intel): 0x4d5510
     * @note[short] Windows: 0x40e0e0
     * @note[short] iOS: 0x364b0
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
