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

class SetupTransformPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTransformPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTransformPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x467664
     * @note[short] MacOS (Intel): 0x5108b0
     * @note[short] Windows: 0x464f30
     * @note[short] iOS: 0x231898
     * @note[short] Android
     */
    static SetupTransformPopup* create(TransformTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4677f0
     * @note[short] MacOS (Intel): 0x510ae0
     * @note[short] Windows: 0x465040
     * @note[short] iOS: 0x231974
     * @note[short] Android
     */
    bool init(TransformTriggerGameObject* object, cocos2d::CCArray* objects);
};
