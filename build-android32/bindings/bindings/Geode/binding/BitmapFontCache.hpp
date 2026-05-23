#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1cac40
     * @note[short] MacOS (Intel): 0x21ff40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f39e4
     * @note[short] Android: Rebinded
     */
     ~BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1cac14
     * @note[short] MacOS (Intel): 0x21ff10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f39b8
     * @note[short] Android
     */
    static void purgeSharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1cab70
     * @note[short] MacOS (Intel): 0x21fe60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f394c
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1cacf8
     * @note[short] MacOS (Intel): 0x220000
     * @note[short] Windows: 0x3b3c0
     * @note[short] iOS: 0x2f3a38
     * @note[short] Android
     */
    FontObject* fontWithConfigFile(char const* font, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1cabe8
     * @note[short] MacOS (Intel): 0x21fee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    cocos2d::CCDictionary* m_cache;
};
