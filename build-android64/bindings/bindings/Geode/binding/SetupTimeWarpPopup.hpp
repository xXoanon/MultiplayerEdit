#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupTimeWarpPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimeWarpPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimeWarpPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x45a984
     * @note[short] MacOS (Intel): 0x502b70
     * @note[short] Windows: 0x463340
     * @note[short] iOS: 0x147d7c
     * @note[short] Android
     */
    static SetupTimeWarpPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x45b05c
     * @note[short] MacOS (Intel): 0x503340
     * @note[short] Windows: 0x4638d0
     * @note[short] iOS: 0x148284
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x45b1ac
     * @note[short] MacOS (Intel): 0x5034d0
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x1483c0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45ab14
     * @note[short] MacOS (Intel): 0x502db0
     * @note[short] Windows: 0x463460
     * @note[short] iOS: 0x147e5c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x45af30
     * @note[short] MacOS (Intel): 0x5031e0
     * @note[short] Windows: 0x4639e0
     * @note[short] iOS: 0x1481d8
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45b140
     * @note[short] MacOS (Intel): 0x503440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x148354
     * @note[short] Android
     */
    void updateTimeWarp();

    /**
     * @note[short] MacOS (ARM): 0x45b00c
     * @note[short] MacOS (Intel): 0x5032f0
     * @note[short] Windows: 0x463ab0
     * @note[short] iOS: 0x148234
     * @note[short] Android
     */
    void updateTimeWarpLabel();
    cocos2d::CCLabelBMFont* m_timeWarpLabel;
    Slider* m_timeWarpSlider;
    float m_timeWarpMod;
};
