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

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetItemIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x8cbf4
     * @note[short] MacOS (Intel): 0x9bf70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419bdc
     * @note[short] Android
     */
    static SetItemIDLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x8d66c
     * @note[short] MacOS (Intel): 0x9cba0
     * @note[short] Windows: 0x401b50
     * @note[short] iOS: 0x41a4bc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8d588
     * @note[short] MacOS (Intel): 0x9cab0
     * @note[short] Windows: 0x401a60
     * @note[short] iOS: 0x41a3c8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x8d480
     * @note[short] MacOS (Intel): 0x9c990
     * @note[short] Windows: 0x4018c0
     * @note[short] iOS: 0x41a2c0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8cd7c
     * @note[short] MacOS (Intel): 0x9c1a0
     * @note[short] Windows: 0x401160
     * @note[short] iOS: 0x419cb4
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x8d61c
     * @note[short] MacOS (Intel): 0x9cb50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41a46c
     * @note[short] Android
     */
    void updateEditorLabel();
};
