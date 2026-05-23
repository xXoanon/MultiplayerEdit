#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FontObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "FontObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FontObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FontObject();

    /**
     * @note[short] MacOS (ARM): 0x1caf78
     * @note[short] MacOS (Intel): 0x2202b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f3b58
     * @note[short] Android
     */
    static FontObject* createWithConfigFile(char const* font, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1cb848
     * @note[short] MacOS (Intel): 0x220d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f40b8
     * @note[short] Android
     */
    int getFontWidth(int character);

    /**
     * @note[short] MacOS (ARM): 0x1cafec
     * @note[short] MacOS (Intel): 0x220320
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool initWithConfigFile(char const* font, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1cb004
     * @note[short] MacOS (Intel): 0x220330
     * @note[short] Windows: 0x3b660
     * @note[short] iOS: 0x2f3bcc
     * @note[short] Android
     */
    void parseConfigFile(char const* font, float scale);
    std::array<int, 300> m_fontWidths;
};
