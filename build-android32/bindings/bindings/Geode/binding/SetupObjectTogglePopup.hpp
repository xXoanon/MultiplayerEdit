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

class SetupObjectTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x2ff384
     * @note[short] MacOS (Intel): 0x375ad0
     * @note[short] Windows: 0x4298f0
     * @note[short] iOS: 0x1a2bd8
     * @note[short] Android
     */
    static SetupObjectTogglePopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2ffea0
     * @note[short] MacOS (Intel): 0x376820
     * @note[short] Windows: 0x4244b0
     * @note[short] iOS: 0x1a3494
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ffe28
     * @note[short] MacOS (Intel): 0x3767a0
     * @note[short] Windows: 0x42a360
     * @note[short] iOS: 0x1a3424
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2ff514
     * @note[short] MacOS (Intel): 0x375d00
     * @note[short] Windows: 0x429a10
     * @note[short] iOS: 0x1a2cb8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);
};
