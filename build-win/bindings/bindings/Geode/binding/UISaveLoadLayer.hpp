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

class UISaveLoadLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UISaveLoadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISaveLoadLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UISaveLoadLayer();

    /**
     * @note[short] MacOS (ARM): 0x25203c
     * @note[short] MacOS (Intel): 0x2b4430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e3f78
     * @note[short] Android
     */
    static UISaveLoadLayer* create(UIOptionsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x252cc8
     * @note[short] MacOS (Intel): 0x2b51c0
     * @note[short] Windows: 0x2a4000
     * @note[short] iOS: 0x2e4784
     * @note[short] Android
     */
    bool init(UIOptionsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2535f0
     * @note[short] MacOS (Intel): 0x2b5ad0
     * @note[short] Windows: 0x2a47e0
     * @note[short] iOS: 0x2e4ce0
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2533bc
     * @note[short] MacOS (Intel): 0x2b58a0
     * @note[short] Windows: 0x2a4550
     * @note[short] iOS: 0x2e4b20
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);
    UIOptionsLayer* m_optionsLayer;
};
