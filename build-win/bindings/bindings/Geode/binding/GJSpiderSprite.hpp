#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJRobotSprite.hpp"

class GJSpiderSprite : public GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJSpiderSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpiderSprite, GJRobotSprite)

    /**
     * @note[short] MacOS (ARM): 0x50869c
     * @note[short] MacOS (Intel): 0x5dd320
     * @note[short] Windows: 0x2a7ae0
     * @note[short] iOS: 0x2401f0
     * @note[short] Android
     */
    static GJSpiderSprite* create(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5087d8
     * @note[short] MacOS (Intel): 0x5dd470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2402b8
     * @note[short] Android
     */
    bool init(int frame);
};
