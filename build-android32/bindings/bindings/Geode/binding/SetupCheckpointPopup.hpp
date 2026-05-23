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

class SetupCheckpointPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCheckpointPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCheckpointPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCheckpointPopup();

    /**
     * @note[short] MacOS (ARM): 0x4c8ce4
     * @note[short] MacOS (Intel): 0x57c030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40a2dc
     * @note[short] Android
     */
    static SetupCheckpointPopup* create(CheckpointGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4c8e6c
     * @note[short] MacOS (Intel): 0x57c260
     * @note[short] Windows: 0x468f90
     * @note[short] iOS: 0x40a3b4
     * @note[short] Android
     */
    bool init(CheckpointGameObject* object, cocos2d::CCArray* objects);
};
