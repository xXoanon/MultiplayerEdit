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

class SetupObjectOptions2Popup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptions2Popup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptions2Popup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptions2Popup();

    /**
     * @note[short] MacOS (ARM): 0x2a5e4c
     * @note[short] MacOS (Intel): 0x317220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ea90
     * @note[short] Android
     */
    static SetupObjectOptions2Popup* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2a9874
     * @note[short] MacOS (Intel): 0x31b770
     * @note[short] Windows: 0x400fc0
     * @note[short] iOS: 0x41a9c
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a93c4
     * @note[short] MacOS (Intel): 0x31b240
     * @note[short] Windows: 0x400ac0
     * @note[short] iOS: 0x416ac
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);
};
