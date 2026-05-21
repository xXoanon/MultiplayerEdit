#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGameLoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x132b78
     * @note[short] MacOS (Intel): 0x165320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x209258
     * @note[short] Android
     */
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x132a6c
     * @note[short] MacOS (Intel): 0x165200
     * @note[short] Windows: 0x248e20
     * @note[short] iOS: 0x2091cc
     * @note[short] Android
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x132f80
     * @note[short] MacOS (Intel): 0x1657f0
     * @note[short] Windows: 0x52e20
     * @note[short] iOS: 0x209508
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x132f7c
     * @note[short] MacOS (Intel): 0x1657e0
     * @note[short] Windows: 0x2490b0
     * @note[short] iOS: 0x209504
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0xeb304
     * @note[short] MacOS (Intel): 0x10faf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1da984
     * @note[short] Android
     */
    void gameLayerDidUnload();

    /**
     * @note[short] MacOS (ARM): 0x132e14
     * @note[short] MacOS (Intel): 0x165680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2093a4
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x132f10
     * @note[short] MacOS (Intel): 0x165780
     * @note[short] Windows: 0x249010
     * @note[short] iOS: 0x20949c
     * @note[short] Android
     */
    void loadLevel();
    GJGameLevel* m_level;
    bool m_editor;
};
