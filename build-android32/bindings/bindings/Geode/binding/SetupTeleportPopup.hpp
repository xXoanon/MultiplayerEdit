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

class SetupTeleportPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTeleportPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTeleportPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x2e45f8
     * @note[short] MacOS (Intel): 0x358ae0
     * @note[short] Windows: 0x460830
     * @note[short] iOS: 0xb254
     * @note[short] Android
     */
    static SetupTeleportPopup* create(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2e5aac
     * @note[short] MacOS (Intel): 0x35a310
     * @note[short] Windows: 0x28f240
     * @note[short] iOS: 0xc1dc
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2e5ab0
     * @note[short] MacOS (Intel): 0x35a320
     * @note[short] Windows: 0x461ad0
     * @note[short] iOS: 0xc1e0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x2e5bbc
     * @note[short] MacOS (Intel): 0x35a420
     * @note[short] Windows: 0x461b00
     * @note[short] iOS: 0xc294
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2e47a0
     * @note[short] MacOS (Intel): 0x358d30
     * @note[short] Windows: 0x460970
     * @note[short] iOS: 0xb348
     * @note[short] Android
     */
    bool init(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2e5994
     * @note[short] MacOS (Intel): 0x35a1f0
     * @note[short] Windows: 0x461c00
     * @note[short] iOS: 0xc148
     * @note[short] Android
     */
    void onTeleportGravity(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e5b44
     * @note[short] MacOS (Intel): 0x35a3b0
     * @note[short] Windows: 0x461c90
     * @note[short] iOS: 0xc21c
     * @note[short] Android
     */
    void updateTeleportGravityState(int state);
    cocos2d::CCArray* m_teleportGravityToggles;
};
