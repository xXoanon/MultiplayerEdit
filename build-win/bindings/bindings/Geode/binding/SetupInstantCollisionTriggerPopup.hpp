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

class SetupInstantCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x418140
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupInstantCollisionTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x31ce84
     * @note[short] MacOS (Intel): 0x3970c0
     * @note[short] Windows: 0x419eb0
     * @note[short] iOS: 0x230b40
     * @note[short] Android
     */
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x31d914
     * @note[short] MacOS (Intel): 0x397d00
     * @note[short] Windows: 0x41a890
     * @note[short] iOS: 0x231464
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x31d618
     * @note[short] MacOS (Intel): 0x3979f0
     * @note[short] Windows: 0x41a660
     * @note[short] iOS: 0x23117c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x31d00c
     * @note[short] MacOS (Intel): 0x3972f0
     * @note[short] Windows: 0x419f40
     * @note[short] iOS: 0x230c18
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x31d63c
     * @note[short] MacOS (Intel): 0x397a20
     * @note[short] Windows: 0x41a680
     * @note[short] iOS: 0x2311a0
     * @note[short] Android
     */
    void updateSpecialNodes();
};
