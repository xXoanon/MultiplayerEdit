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

class SetupCoinLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCoinLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCoinLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCoinLayer();

    /**
     * @note[short] MacOS (ARM): 0x4cef90
     * @note[short] MacOS (Intel): 0x582ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40f0d8
     * @note[short] Android
     */
    static SetupCoinLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4cf11c
     * @note[short] MacOS (Intel): 0x582f10
     * @note[short] Windows: 0x46f570
     * @note[short] iOS: 0x40f1b4
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
