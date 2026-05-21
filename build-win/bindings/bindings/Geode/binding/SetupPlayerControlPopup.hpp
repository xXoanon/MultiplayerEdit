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

class SetupPlayerControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlayerControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlayerControlPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4c7a98
     * @note[short] MacOS (Intel): 0x57a9b0
     * @note[short] Windows: 0x467c90
     * @note[short] iOS: 0x4093d4
     * @note[short] Android
     */
    static SetupPlayerControlPopup* create(PlayerControlGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4c7c20
     * @note[short] MacOS (Intel): 0x57abe0
     * @note[short] Windows: 0x467da0
     * @note[short] iOS: 0x4094ac
     * @note[short] Android
     */
    bool init(PlayerControlGameObject* object, cocos2d::CCArray* objects);
};
