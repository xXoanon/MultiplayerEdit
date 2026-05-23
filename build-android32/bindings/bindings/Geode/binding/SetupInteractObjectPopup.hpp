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

class SetupInteractObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInteractObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInteractObjectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4652d8
     * @note[short] MacOS (Intel): 0x50df00
     * @note[short] Windows: 0x423990
     * @note[short] iOS: 0x4128f0
     * @note[short] Android
     */
    static SetupInteractObjectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x465e2c
     * @note[short] MacOS (Intel): 0x50ec80
     * @note[short] Windows: 0x4244b0
     * @note[short] iOS: 0x413190
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x465d08
     * @note[short] MacOS (Intel): 0x50eb50
     * @note[short] Windows: 0x424360
     * @note[short] iOS: 0x4130fc
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x465d98
     * @note[short] MacOS (Intel): 0x50ebf0
     * @note[short] Windows: 0x424480
     * @note[short] iOS: 0x41316c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x465460
     * @note[short] MacOS (Intel): 0x50e130
     * @note[short] Windows: 0x423aa0
     * @note[short] iOS: 0x4129c8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x465c94
     * @note[short] MacOS (Intel): 0x50ead0
     * @note[short] Windows: 0x424400
     * @note[short] iOS: 0x413088
     * @note[short] Android
     */
    void updateItems();
};
