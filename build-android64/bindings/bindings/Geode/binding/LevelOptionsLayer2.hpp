#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelOptionsLayer.hpp"

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelOptionsLayer2();

    /**
     * @note[short] MacOS (ARM): 0x2144d4
     * @note[short] MacOS (Intel): 0x271930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17da9c
     * @note[short] Android
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x214968
     * @note[short] MacOS (Intel): 0x271ea0
     * @note[short] Windows: 0x3249d0
     * @note[short] iOS: 0x17de30
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x21486c
     * @note[short] MacOS (Intel): 0x271da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17dd64
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);
};
