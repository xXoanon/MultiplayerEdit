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

class MultiTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "MultiTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MultiTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4c9304
     * @note[short] MacOS (Intel): 0x57c790
     * @note[short] Windows: 0x4694f0
     * @note[short] iOS: 0x40a798
     * @note[short] Android
     */
    static MultiTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4c9490
     * @note[short] MacOS (Intel): 0x57c9c0
     * @note[short] Windows: 0x469600
     * @note[short] iOS: 0x40a874
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
