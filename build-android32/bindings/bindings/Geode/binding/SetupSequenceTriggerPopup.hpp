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

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x439c70
     * @note[short] MacOS (Intel): 0x4dd690
     * @note[short] Windows: 0x443310
     * @note[short] iOS: 0x1d24b0
     * @note[short] Android
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x43b018
     * @note[short] MacOS (Intel): 0x4dec70
     * @note[short] Windows: 0x444650
     * @note[short] iOS: 0x1d35e4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x439df8
     * @note[short] MacOS (Intel): 0x4dd8e0
     * @note[short] Windows: 0x443440
     * @note[short] iOS: 0x1d2524
     * @note[short] Android
     */
    bool init(SequenceTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x43ab0c
     * @note[short] MacOS (Intel): 0x4de790
     * @note[short] Windows: 0x444ca0
     * @note[short] iOS: 0x1d3110
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43ac28
     * @note[short] MacOS (Intel): 0x4de880
     * @note[short] Windows: 0x444de0
     * @note[short] iOS: 0x1d3218
     * @note[short] Android
     */
    void onChangeOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43abdc
     * @note[short] MacOS (Intel): 0x4de830
     * @note[short] Windows: 0x444ec0
     * @note[short] iOS: 0x1d31cc
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43b0f8
     * @note[short] MacOS (Intel): 0x4ded70
     * @note[short] Windows: 0x444c20
     * @note[short] iOS: 0x1d36b8
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43acdc
     * @note[short] MacOS (Intel): 0x4de920
     * @note[short] Windows: 0x444740
     * @note[short] iOS: 0x1d32cc
     * @note[short] Android
     */
    void updateGroupIDButtons();
    CCMenuItemSpriteExtra* m_selectedButton;
    bool m_unk3b0;
    bool m_unk3b1;
    cocos2d::CCArray* m_groupButtons;
    int m_unk3c0;
    bool m_unk3c4;
};
