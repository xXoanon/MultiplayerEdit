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

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x1acd04
     * @note[short] MacOS (Intel): 0x1ffb10
     * @note[short] Windows: 0x425220
     * @note[short] iOS: 0x1b466c
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1aebbc
     * @note[short] MacOS (Intel): 0x201db0
     * @note[short] Windows: 0x426f00
     * @note[short] iOS: 0x1b5d48
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ae7dc
     * @note[short] MacOS (Intel): 0x2019e0
     * @note[short] Windows: 0x426710
     * @note[short] iOS: 0x1b5a58
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ae4f4
     * @note[short] MacOS (Intel): 0x201730
     * @note[short] Windows: 0x426630
     * @note[short] iOS: 0x1b5830
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1ae738
     * @note[short] MacOS (Intel): 0x201950
     * @note[short] Windows: 0x426650
     * @note[short] iOS: 0x1b59b4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ace9c
     * @note[short] MacOS (Intel): 0x1ffd50
     * @note[short] Windows: 0x425360
     * @note[short] iOS: 0x1b4758
     * @note[short] Android
     */
    bool init(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1ae360
     * @note[short] MacOS (Intel): 0x2015a0
     * @note[short] Windows: 0x426e10
     * @note[short] iOS: 0x1b5740
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ae514
     * @note[short] MacOS (Intel): 0x201750
     * @note[short] Windows: 0x426b70
     * @note[short] iOS: 0x1b5850
     * @note[short] Android
     */
    void refreshPreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x1ae468
     * @note[short] MacOS (Intel): 0x2016a0
     * @note[short] Windows: 0x426e70
     * @note[short] iOS: 0x1b57a4
     * @note[short] Android
     */
    void updateTimeModeButtons();
    cocos2d::CCArray* m_timeModeToggles;
    LevelEditorLayer* m_editorLayer;
    bool m_groupIDChanged;
};
