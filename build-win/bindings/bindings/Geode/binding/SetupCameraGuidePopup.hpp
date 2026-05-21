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

class SetupCameraGuidePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4d0430
     * @note[short] MacOS (Intel): 0x584520
     * @note[short] Windows: 0x470810
     * @note[short] iOS: 0x410158
     * @note[short] Android
     */
    static SetupCameraGuidePopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d05bc
     * @note[short] MacOS (Intel): 0x584750
     * @note[short] Windows: 0x470920
     * @note[short] iOS: 0x410234
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);
};
