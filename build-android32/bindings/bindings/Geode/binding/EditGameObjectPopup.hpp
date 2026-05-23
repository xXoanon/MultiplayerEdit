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

class EditGameObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditGameObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditGameObjectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditGameObjectPopup();

    /**
     * @note[short] MacOS (ARM): 0x249aa0
     * @note[short] MacOS (Intel): 0x2ab0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dd7a4
     * @note[short] Android
     */
    static EditGameObjectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x249c30
     * @note[short] MacOS (Intel): 0x2ab310
     * @note[short] Windows: 0x29af40
     * @note[short] iOS: 0x2dd884
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);
};
