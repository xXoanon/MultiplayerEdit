#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GameOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x24f060
     * @note[short] MacOS (Intel): 0x2b0e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e1520
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* baseGameLayer);

    /**
     * @note[short] MacOS (ARM): 0x24f268
     * @note[short] MacOS (Intel): 0x2b1100
     * @note[short] Windows: 0x29ef40
     * @note[short] iOS: 0x2e1644
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x24ffa8
     * @note[short] MacOS (Intel): 0x2b1ea0
     * @note[short] Windows: 0x2a0560
     * @note[short] iOS: 0x2e2190
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] MacOS (ARM): 0x24f210
     * @note[short] MacOS (Intel): 0x2b10b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e15ec
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* baseGameLayer);

    /**
     * @note[short] MacOS (ARM): 0x24f9c0
     * @note[short] MacOS (Intel): 0x2b18a0
     * @note[short] Windows: 0x2a0270
     * @note[short] iOS: 0x2e1d48
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f92c
     * @note[short] MacOS (Intel): 0x2b1800
     * @note[short] Windows: 0x2a03f0
     * @note[short] iOS: 0x2e1cb4
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f9a0
     * @note[short] MacOS (Intel): 0x2b1880
     * @note[short] Windows: 0x2a0410
     * @note[short] iOS: 0x2e1d28
     * @note[short] Android
     */
    void onUIPOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24fa2c
     * @note[short] MacOS (Intel): 0x2b1900
     * @note[short] Windows: 0x29fa10
     * @note[short] iOS: 0x2e1d64
     * @note[short] Android
     */
    void showPracticeMusicSyncUnlockInfo();
    GJBaseGameLayer* m_baseGameLayer;
    int m_practiceDialogIndex;
};
