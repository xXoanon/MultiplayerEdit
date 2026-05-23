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

class LevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x2117fc
     * @note[short] MacOS (Intel): 0x26e720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17babc
     * @note[short] Android
     */
    static LevelOptionsLayer* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x214670
     * @note[short] MacOS (Intel): 0x271b90
     * @note[short] Windows: 0x324710
     * @note[short] iOS: 0x17db68
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x214688
     * @note[short] MacOS (Intel): 0x271bb0
     * @note[short] Windows: 0x324730
     * @note[short] iOS: 0x17db80
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x214044
     * @note[short] MacOS (Intel): 0x271440
     * @note[short] Windows: 0x324070
     * @note[short] iOS: 0x17d690
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x2146a4
     * @note[short] MacOS (Intel): 0x271bd0
     * @note[short] Windows: 0x324750
     * @note[short] iOS: 0x17db9c
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] MacOS (ARM): 0x213fec
     * @note[short] MacOS (Intel): 0x2713f0
     * @note[short] Windows: 0x324000
     * @note[short] iOS: 0x17d638
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x214494
     * @note[short] MacOS (Intel): 0x2718f0
     * @note[short] Windows: 0x324530
     * @note[short] iOS: 0x17da5c
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
    LevelSettingsObject* m_settingsObject;
};
