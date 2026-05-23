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

class SetupRotateGameplayPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateGameplayPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateGameplayPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupRotateGameplayPopup();

    /**
     * @note[short] MacOS (ARM): 0x69f7b4
     * @note[short] MacOS (Intel): 0x797800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19e628
     * @note[short] Android
     */
    static SetupRotateGameplayPopup* create(RotateGameplayGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6a0218
     * @note[short] MacOS (Intel): 0x798480
     * @note[short] Windows: 0x441f20
     * @note[short] iOS: 0x19eed4
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a02b4
     * @note[short] MacOS (Intel): 0x798530
     * @note[short] Windows: 0x441fd0
     * @note[short] iOS: 0x19ef48
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x69f93c
     * @note[short] MacOS (Intel): 0x797a30
     * @note[short] Windows: 0x441550
     * @note[short] iOS: 0x19e700
     * @note[short] Android
     */
    bool init(RotateGameplayGameObject* object, cocos2d::CCArray* objects);
};
