#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupPlatformerEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlatformerEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlatformerEndPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x588934
     * @note[short] MacOS (Intel): 0x669c00
     * @note[short] Windows: 0x41da70
     * @note[short] iOS: 0x2addb0
     * @note[short] Android
     */
    static SetupPlatformerEndPopup* create(EndTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x588abc
     * @note[short] MacOS (Intel): 0x669e30
     * @note[short] Windows: 0x41db80
     * @note[short] iOS: 0x2ade88
     * @note[short] Android
     */
    bool init(EndTriggerGameObject* object, cocos2d::CCArray* objects);
};
