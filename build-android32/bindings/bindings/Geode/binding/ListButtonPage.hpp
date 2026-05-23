#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ListButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ListButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x369b2c
     * @note[short] MacOS (Intel): 0x3f0230
     * @note[short] Windows: 0x6b480
     * @note[short] iOS: 0x168104
     * @note[short] Android
     */
    static ListButtonPage* create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset);

    /**
     * @note[short] MacOS (ARM): 0x369dc4
     * @note[short] MacOS (Intel): 0x3f0510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1682a4
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset);
};
