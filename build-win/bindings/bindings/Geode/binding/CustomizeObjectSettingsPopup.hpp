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

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomizeObjectSettingsPopup();

    /**
     * @note[short] MacOS (ARM): 0x1a61a8
     * @note[short] MacOS (Intel): 0x1f8640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x502fc
     * @note[short] Android
     */
    static CustomizeObjectSettingsPopup* create(GameObject* object, cocos2d::CCArray* objects, CustomizeObjectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1a75c8
     * @note[short] MacOS (Intel): 0x1f9c70
     * @note[short] Windows: 0xaa560
     * @note[short] iOS: 0x51068
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a7548
     * @note[short] MacOS (Intel): 0x1f9c00
     * @note[short] Windows: 0xaa4b0
     * @note[short] iOS: 0x50fe8
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a7178
     * @note[short] MacOS (Intel): 0x1f97e0
     * @note[short] Windows: 0xaa100
     * @note[short] iOS: 0x50c9c
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects, CustomizeObjectLayer* layer);
    CustomizeObjectLayer* m_customizeLayer;
    bool m_settingsChanged;
};
