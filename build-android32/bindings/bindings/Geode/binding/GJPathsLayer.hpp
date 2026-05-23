#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x28f2a0
     * @note[short] MacOS (Intel): 0x2fe240
     * @note[short] Windows: 0x284b00
     * @note[short] iOS: 0x3b7f00
     * @note[short] Android
     */
    static GJPathsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x28f090
     * @note[short] MacOS (Intel): 0x2fe060
     * @note[short] Windows: 0x284890
     * @note[short] iOS: 0x3b7e98
     * @note[short] Android
     */
    static gd::string nameForPath(int path);

    /**
     * @note[short] MacOS (ARM): 0x28f3a0
     * @note[short] MacOS (Intel): 0x2fe390
     * @note[short] Windows: 0x284c00
     * @note[short] iOS: 0x3b7fb8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x28fac0
     * @note[short] MacOS (Intel): 0x2feab0
     * @note[short] Windows: 0x285160
     * @note[short] iOS: 0x3b8630
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x28fe58
     * @note[short] MacOS (Intel): 0x2feed0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x3b8824
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x28fd88
     * @note[short] MacOS (Intel): 0x2fee00
     * @note[short] Windows: 0x285450
     * @note[short] iOS: 0x3b8818
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x28fe90
     * @note[short] MacOS (Intel): 0x2fef10
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x3b885c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x28fb14
     * @note[short] MacOS (Intel): 0x2feb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void darkenButtons(bool darken);

    /**
     * @note[short] MacOS (ARM): 0x28f8a0
     * @note[short] MacOS (Intel): 0x2fe8b0
     * @note[short] Windows: 0x2853f0
     * @note[short] iOS: 0x3b841c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28fa34
     * @note[short] MacOS (Intel): 0x2fea30
     * @note[short] Windows: 0x2851b0
     * @note[short] iOS: 0x3b85a4
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_closeSprite;
    bool m_exiting;
};
