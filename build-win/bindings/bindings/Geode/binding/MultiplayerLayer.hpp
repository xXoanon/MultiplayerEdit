#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultiplayerLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MultiplayerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultiplayerLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x32078c
     * @note[short] MacOS (Intel): 0x39aef0
     * @note[short] Android
     */
    static MultiplayerLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3206d0
     * @note[short] MacOS (Intel): 0x39ae20
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x320830
     * @note[short] MacOS (Intel): 0x39afa0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x320908
     * @note[short] MacOS (Intel): 0x39b090
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3208c4
     * @note[short] MacOS (Intel): 0x39b050
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320834
     * @note[short] MacOS (Intel): 0x39afb0
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32087c
     * @note[short] MacOS (Intel): 0x39b000
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
};
