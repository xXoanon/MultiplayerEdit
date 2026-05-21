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

class SetupAudioTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAudioTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4187c0
     * @note[short] MacOS (Intel): 0x4b7a60
     * @note[short] Windows: 0x4466a0
     * @note[short] iOS: 0x17f1a0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x417ab0
     * @note[short] MacOS (Intel): 0x4b6b90
     * @note[short] Windows: 0x4456c0
     * @note[short] iOS: 0x17e5d8
     * @note[short] Android
     */
    void addProxVolControls(int page);

    /**
     * @note[short] MacOS (ARM): 0x417740
     * @note[short] MacOS (Intel): 0x4b67f0
     * @note[short] Windows: 0x445300
     * @note[short] iOS: 0x17e2d0
     * @note[short] Android
     */
    void addTimeControls(int page, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x418670
     * @note[short] MacOS (Intel): 0x4b7920
     * @note[short] Windows: 0x446550
     * @note[short] iOS: 0x17f050
     * @note[short] Android
     */
    void onProxMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41873c
     * @note[short] MacOS (Intel): 0x4b79e0
     * @note[short] Windows: 0x446620
     * @note[short] iOS: 0x17f11c
     * @note[short] Android
     */
    void updateSpecialGroup();
    cocos2d::CCArray* m_proximityButtons;
};
