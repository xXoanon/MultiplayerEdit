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

class SetupKeyframeAnimPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframeAnimPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframeAnimPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x1ac018
     * @note[short] MacOS (Intel): 0x1fea50
     * @note[short] Windows: 0x4246f0
     * @note[short] iOS: 0x1b3d54
     * @note[short] Android
     */
    static SetupKeyframeAnimPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1ac1a0
     * @note[short] MacOS (Intel): 0x1fec80
     * @note[short] Windows: 0x424800
     * @note[short] iOS: 0x1b3e2c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
