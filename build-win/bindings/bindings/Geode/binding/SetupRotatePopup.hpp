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

class SetupRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4e5764
     * @note[short] MacOS (Intel): 0x59c9e0
     * @note[short] Windows: 0x442970
     * @note[short] iOS: 0x2683c4
     * @note[short] Android
     */
    static SetupRotatePopup* create(EnhancedGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4e5dd8
     * @note[short] MacOS (Intel): 0x59d1a0
     * @note[short] Windows: 0x442fe0
     * @note[short] iOS: 0x2688cc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e5e54
     * @note[short] MacOS (Intel): 0x59d220
     * @note[short] Windows: 0x443080
     * @note[short] iOS: 0x268948
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e58ec
     * @note[short] MacOS (Intel): 0x59cc10
     * @note[short] Windows: 0x442a80
     * @note[short] iOS: 0x26849c
     * @note[short] Android
     */
    bool init(EnhancedGameObject* object, cocos2d::CCArray* objects);
};
