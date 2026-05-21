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

class SetupOptionsTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOptionsTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOptionsTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x511fdc
     * @note[short] MacOS (Intel): 0x5e7980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x413f88
     * @note[short] Android: Out of line
     */
     SetupOptionsTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x51149c
     * @note[short] MacOS (Intel): 0x5e6d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4135f8
     * @note[short] Android
     */
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x511f28
     * @note[short] MacOS (Intel): 0x5e78d0
     * @note[short] Windows: 0x436940
     * @note[short] iOS: 0x413ed4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x511cf4
     * @note[short] MacOS (Intel): 0x5e7680
     * @note[short] Windows: 0x4366e0
     * @note[short] iOS: 0x413cac
     * @note[short] Android: Rebinded
     */
    void addOption(int property, gd::string label);

    /**
     * @note[short] MacOS (ARM): 0x511530
     * @note[short] MacOS (Intel): 0x5e6da0
     * @note[short] Windows: 0x435ee0
     * @note[short] iOS: 0x41367c
     * @note[short] Android
     */
    bool init(GameOptionsTrigger* object, cocos2d::CCArray* objects);
    cocos2d::CCPoint m_togglePosition;
    int m_togglePage;
};
