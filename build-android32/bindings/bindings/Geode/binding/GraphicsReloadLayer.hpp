#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GraphicsReloadLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GraphicsReloadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GraphicsReloadLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GraphicsReloadLayer();

    /**
     * @note[short] MacOS (ARM): 0x6abf2c
     * @note[short] MacOS (Intel): 0x7a4e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GraphicsReloadLayer* create(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x6abe8c
     * @note[short] MacOS (Intel): 0x7a4de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x6ac08c
     * @note[short] MacOS (Intel): 0x7a4ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x6ac150
     * @note[short] MacOS (Intel): 0x7a50c0
     * @note[short] Windows: 0x37c200
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void performReload();
    cocos2d::TextureQuality m_quality;
    cocos2d::CCSize m_resolution;
    bool m_fullscreen;
    bool m_borderless;
    bool m_fix;
    bool m_changedResolution;
};
