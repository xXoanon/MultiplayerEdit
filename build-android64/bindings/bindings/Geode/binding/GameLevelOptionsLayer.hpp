#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameLevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): 0x250308
     * @note[short] MacOS (Intel): 0x2b22a0
     * @note[short] Windows: 0x2a0a80
     * @note[short] iOS: 0x2e2444
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x25052c
     * @note[short] MacOS (Intel): 0x2b2580
     * @note[short] Windows: 0x2a0be0
     * @note[short] iOS: 0x2e2578
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x250590
     * @note[short] MacOS (Intel): 0x2b25f0
     * @note[short] Windows: 0x2a0c60
     * @note[short] iOS: 0x2e264c
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] MacOS (ARM): 0x2504c4
     * @note[short] MacOS (Intel): 0x2b2520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e2510
     * @note[short] Android
     */
    bool init(GJGameLevel* level);
    GJGameLevel* m_level;
};
