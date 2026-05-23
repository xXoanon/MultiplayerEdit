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

class SetupStaticCameraPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStaticCameraPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStaticCameraPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x3209f8
     * @note[short] MacOS (Intel): 0x39b180
     * @note[short] Windows: 0x45fb90
     * @note[short] iOS: 0x1d09dc
     * @note[short] Android
     */
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x321510
     * @note[short] MacOS (Intel): 0x39bef0
     * @note[short] Windows: 0x4606a0
     * @note[short] iOS: 0x1d12d8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x321598
     * @note[short] MacOS (Intel): 0x39bf80
     * @note[short] Windows: 0x442820
     * @note[short] iOS: 0x1d12f0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320b80
     * @note[short] MacOS (Intel): 0x39b3b0
     * @note[short] Windows: 0x45fca0
     * @note[short] iOS: 0x1d0ab4
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x32149c
     * @note[short] MacOS (Intel): 0x39be70
     * @note[short] Windows: 0x4606c0
     * @note[short] iOS: 0x1d1264
     * @note[short] Android
     */
    void updateState();
};
