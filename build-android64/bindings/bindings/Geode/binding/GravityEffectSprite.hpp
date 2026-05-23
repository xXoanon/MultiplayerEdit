#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GravityEffectSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GravityEffectSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GravityEffectSprite();

    /**
     * @note[short] MacOS (ARM): 0x9b920
     * @note[short] MacOS (Intel): 0xacc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x115ff0
     * @note[short] Android
     */
    static GravityEffectSprite* create();

    /**
     * @note[short] MacOS (ARM): 0xac4b8
     * @note[short] MacOS (Intel): 0xbfaf0
     * @note[short] Windows: 0x3bb2b0
     * @note[short] iOS: 0x122dec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0xac6bc
     * @note[short] MacOS (Intel): 0xbfd50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x122ff0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xa6ddc
     * @note[short] MacOS (Intel): 0xb9690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11e294
     * @note[short] Android
     */
    void updateSpritesColor(cocos2d::ccColor3B color);
};
