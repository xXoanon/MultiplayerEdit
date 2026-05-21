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

class SongsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "SongsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x4685c4
     * @note[short] MacOS (Intel): 0x511a90
     * @note[short] Windows: 0x494660
     * @note[short] iOS: 0x346ebc
     * @note[short] Android
     */
    static SongsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x46873c
     * @note[short] MacOS (Intel): 0x511cc0
     * @note[short] Windows: 0x494730
     * @note[short] iOS: 0x346fa4
     * @note[short] Android
     */
    virtual void customSetup();
};
