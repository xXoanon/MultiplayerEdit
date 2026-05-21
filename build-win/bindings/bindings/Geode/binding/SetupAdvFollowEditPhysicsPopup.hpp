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

class SetupAdvFollowEditPhysicsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowEditPhysicsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowEditPhysicsPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x29a258
     * @note[short] MacOS (Intel): 0x30a4f0
     * @note[short] Windows: 0x407220
     * @note[short] iOS: 0x637f8
     * @note[short] Android
     */
    static SetupAdvFollowEditPhysicsPopup* create(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x29aff0
     * @note[short] MacOS (Intel): 0x30b590
     * @note[short] Windows: 0x4080c0
     * @note[short] iOS: 0x64374
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x29a3e0
     * @note[short] MacOS (Intel): 0x30a720
     * @note[short] Windows: 0x407330
     * @note[short] iOS: 0x638d0
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);
};
