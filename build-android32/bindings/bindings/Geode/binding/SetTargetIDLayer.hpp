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

class SetTargetIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetTargetIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTargetIDLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x256fe8
     * @note[short] MacOS (Intel): 0x2b9ba0
     * @note[short] Windows: 0x401cd0
     * @note[short] iOS: 0x2131c4
     * @note[short] Android: Rebinded
     */
    static SetTargetIDLayer* create(EffectGameObject* object, cocos2d::CCArray* objects, gd::string title, gd::string label, int minimum, int maximum, int objectID);

    /**
     * @note[short] MacOS (ARM): 0x257600
     * @note[short] MacOS (Intel): 0x2ba2d0
     * @note[short] Windows: 0x28f240
     * @note[short] iOS: 0x213688
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x257604
     * @note[short] MacOS (Intel): 0x2ba2e0
     * @note[short] Windows: 0x402300
     * @note[short] iOS: 0x21368c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x257274
     * @note[short] MacOS (Intel): 0x2b9ed0
     * @note[short] Windows: 0x401e60
     * @note[short] iOS: 0x213388
     * @note[short] Android: Rebinded
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, gd::string title, gd::string label, int minimum, int maximum, int objectID);
    int m_objectID;
    int m_minimumID;
    int m_maximumID;
};
