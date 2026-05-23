#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ButtonPage();

    /**
     * @note[short] MacOS (ARM): 0x50cf90
     * @note[short] MacOS (Intel): 0x5e23b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x421408
     * @note[short] Android
     */
    static ButtonPage* create(cocos2d::CCArray* objects, cocos2d::CCPoint position, int rows, float spacing);

    /**
     * @note[short] MacOS (ARM): 0x50d13c
     * @note[short] MacOS (Intel): 0x5e25a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x421550
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint position, int rows, float spacing);
};
