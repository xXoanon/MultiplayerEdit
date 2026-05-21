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

class SetupReverbPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupReverbPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupReverbPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupReverbPopup();

    /**
     * @note[short] MacOS (ARM): 0x4188ec
     * @note[short] MacOS (Intel): 0x4b7ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17f264
     * @note[short] Android
     */
    static SetupReverbPopup* create(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4191cc
     * @note[short] MacOS (Intel): 0x4b8520
     * @note[short] Windows: 0x4470b0
     * @note[short] iOS: 0x17f9e8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x418a74
     * @note[short] MacOS (Intel): 0x4b7dd0
     * @note[short] Windows: 0x446820
     * @note[short] iOS: 0x17f33c
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41917c
     * @note[short] MacOS (Intel): 0x4b84c0
     * @note[short] Windows: 0x446de0
     * @note[short] iOS: 0x17f998
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41902c
     * @note[short] MacOS (Intel): 0x4b8390
     * @note[short] Windows: 0x446ed0
     * @note[short] iOS: 0x17f860
     * @note[short] Android
     */
    void onReverb(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4190a8
     * @note[short] MacOS (Intel): 0x4b8410
     * @note[short] Windows: 0x446f60
     * @note[short] iOS: 0x17f8dc
     * @note[short] Android
     */
    void updateReverbLabel();
    cocos2d::CCLabelBMFont* m_reverbLabel;
};
