#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class StatsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "StatsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(StatsObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x1f909c
     * @note[short] MacOS (Intel): 0x252cb0
     * @note[short] Windows: 0xb2c50
     * @note[short] iOS: 0x10f7cc
     * @note[short] Android
     */
    static StatsObject* create(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x1f9124
     * @note[short] MacOS (Intel): 0x252d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10f854
     * @note[short] Android
     */
    bool init(char const* key, int value);
    const char* m_key;
    int m_value;
};
