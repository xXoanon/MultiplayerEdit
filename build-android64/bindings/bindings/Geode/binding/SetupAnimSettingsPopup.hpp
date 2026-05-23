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

class SetupAnimSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x8b934
     * @note[short] MacOS (Intel): 0x9a9a0
     * @note[short] Windows: 0x40a180
     * @note[short] iOS: 0x2e75c8
     * @note[short] Android
     */
    static SetupAnimSettingsPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x8c298
     * @note[short] MacOS (Intel): 0x9b4f0
     * @note[short] Windows: 0x40ab10
     * @note[short] iOS: 0x2e7d64
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8babc
     * @note[short] MacOS (Intel): 0x9abd0
     * @note[short] Windows: 0x40a290
     * @note[short] iOS: 0x2e76a0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x8c234
     * @note[short] MacOS (Intel): 0x9b480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e7d00
     * @note[short] Android
     */
    void updateAnimSettings();
};
