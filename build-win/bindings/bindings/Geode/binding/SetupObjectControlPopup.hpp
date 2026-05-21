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

class SetupObjectControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectControlPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4d2338
     * @note[short] MacOS (Intel): 0x586930
     * @note[short] Windows: 0x472e30
     * @note[short] iOS: 0x411ac0
     * @note[short] Android
     */
    static SetupObjectControlPopup* create(ObjectControlGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d24c4
     * @note[short] MacOS (Intel): 0x586b60
     * @note[short] Windows: 0x472f40
     * @note[short] iOS: 0x411b9c
     * @note[short] Android
     */
    bool init(ObjectControlGameObject* object, cocos2d::CCArray* objects);
};
