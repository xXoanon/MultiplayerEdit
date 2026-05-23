#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteWithHue.hpp"

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x51a6f4
     * @note[short] MacOS (Intel): 0x5f0ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteGrayscale* create(gd::string const& file);

    /**
     * @note[short] MacOS (ARM): 0x51a7c0
     * @note[short] MacOS (Intel): 0x5f0da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteGrayscale* create(gd::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x51aaac
     * @note[short] MacOS (Intel): 0x5f1040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3e98
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x51aba8
     * @note[short] MacOS (Intel): 0x5f1120
     * @note[short] Windows: 0x49090
     * @note[short] iOS: 0x1a3f84
     * @note[short] Android: Rebinded
     */
    static CCSpriteGrayscale* createWithSpriteFrameName(gd::string const& frameName);

    /**
     * @note[short] MacOS (ARM): 0x51a8a0
     * @note[short] MacOS (Intel): 0x5f0e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x51a9b8
     * @note[short] MacOS (Intel): 0x5f0f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x51a6d0
     * @note[short] MacOS (Intel): 0x5f0cc0
     * @note[short] Windows: 0x49030
     * @note[short] iOS: 0x1a3e88
     * @note[short] Android
     */
    virtual gd::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x51a590
     * @note[short] MacOS (Intel): 0x5f0a90
     * @note[short] Windows: 0x48e70
     * @note[short] iOS: 0x1a3dac
     * @note[short] Android
     */
    virtual const char* shaderBody();
};
