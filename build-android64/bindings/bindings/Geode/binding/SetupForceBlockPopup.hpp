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

class SetupForceBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupForceBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupForceBlockPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4d0ab4
     * @note[short] MacOS (Intel): 0x584ce0
     * @note[short] Windows: 0x470ee0
     * @note[short] iOS: 0x410660
     * @note[short] Android
     */
    static SetupForceBlockPopup* create(ForceBlockGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d1264
     * @note[short] MacOS (Intel): 0x585620
     * @note[short] Windows: 0x471710
     * @note[short] iOS: 0x410c9c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4d0c3c
     * @note[short] MacOS (Intel): 0x584f10
     * @note[short] Windows: 0x470ff0
     * @note[short] iOS: 0x410738
     * @note[short] Android
     */
    bool init(ForceBlockGameObject* object, cocos2d::CCArray* objects);
};
