#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class StatsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "StatsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     StatsLayer();

    /**
     * @note[short] MacOS (ARM): 0x8c384
     * @note[short] MacOS (Intel): 0x9b5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x242a64
     * @note[short] Android
     */
    static StatsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x8c4fc
     * @note[short] MacOS (Intel): 0x9b800
     * @note[short] Windows: 0x4c7c50
     * @note[short] iOS: 0x242b4c
     * @note[short] Android
     */
    virtual void customSetup();
};
