#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteCOpacity : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteCOpacity";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteCOpacity, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteCOpacity();

    /**
     * @note[short] MacOS (ARM): 0x3e8270
     * @note[short] MacOS (Intel): 0x482240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteCOpacity* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x3e8310
     * @note[short] MacOS (Intel): 0x4822d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteCOpacity* createWithSpriteFrameName(char const* frameName);

    /**
     * @note[short] MacOS (ARM): 0x3e83c0
     * @note[short] MacOS (Intel): 0x482370
     * @note[short] Windows: 0x48430
     * @note[short] iOS: 0x1b8250
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);
};
