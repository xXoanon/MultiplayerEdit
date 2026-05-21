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

class SetupBGSpeedTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupBGSpeedTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupBGSpeedTrigger, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x461f50
     * @note[short] MacOS (Intel): 0x50a780
     * @note[short] Windows: 0x4289b0
     * @note[short] iOS: 0x2f3474
     * @note[short] Android
     */
    static SetupBGSpeedTrigger* create(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4620e0
     * @note[short] MacOS (Intel): 0x50a9b0
     * @note[short] Windows: 0x428ad0
     * @note[short] iOS: 0x2f3554
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, int id);
};
