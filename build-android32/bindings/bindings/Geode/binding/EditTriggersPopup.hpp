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

class EditTriggersPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditTriggersPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditTriggersPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x23a660
     * @note[short] MacOS (Intel): 0x29a800
     * @note[short] Windows: 0x28edd0
     * @note[short] iOS: 0x2d2464
     * @note[short] Android
     */
    static EditTriggersPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x23aac8
     * @note[short] MacOS (Intel): 0x29ace0
     * @note[short] Windows: 0x28f240
     * @note[short] iOS: 0x2d279c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x23aacc
     * @note[short] MacOS (Intel): 0x29acf0
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x2d27a0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a7e8
     * @note[short] MacOS (Intel): 0x29aa30
     * @note[short] Windows: 0x28eee0
     * @note[short] iOS: 0x2d253c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
