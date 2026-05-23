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

class SetupAdvFollowRetargetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowRetargetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowRetargetPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x29b02c
     * @note[short] MacOS (Intel): 0x30b5d0
     * @note[short] Windows: 0x408190
     * @note[short] iOS: 0x643ac
     * @note[short] Android
     */
    static SetupAdvFollowRetargetPopup* create(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x29b738
     * @note[short] MacOS (Intel): 0x30be30
     * @note[short] Windows: 0x4055d0
     * @note[short] iOS: 0x64958
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x29b8d8
     * @note[short] MacOS (Intel): 0x30bf70
     * @note[short] Windows: 0x4088e0
     * @note[short] iOS: 0x64ab8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x29b1b4
     * @note[short] MacOS (Intel): 0x30b800
     * @note[short] Windows: 0x4082a0
     * @note[short] iOS: 0x64484
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);
};
