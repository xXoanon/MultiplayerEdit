#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DungeonBarsSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DungeonBarsSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DungeonBarsSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DungeonBarsSprite();

    /**
     * @note[short] MacOS (ARM): 0x408708
     * @note[short] MacOS (Intel): 0x4a4bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30ef60
     * @note[short] Android
     */
    static DungeonBarsSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x40bbbc
     * @note[short] MacOS (Intel): 0x4a84c0
     * @note[short] Windows: 0x3ef7e0
     * @note[short] iOS: 0x3118b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x40bc40
     * @note[short] MacOS (Intel): 0x4a8540
     * @note[short] Windows: 0x3ef860
     * @note[short] iOS: 0x311930
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x40a75c
     * @note[short] MacOS (Intel): 0x4a6ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31096c
     * @note[short] Android
     */
    void animateOutBars();
    cocos2d::CCSprite* m_barsSprite;
};
