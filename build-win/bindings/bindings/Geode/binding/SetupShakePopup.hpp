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

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x5836fc
     * @note[short] MacOS (Intel): 0x663ff0
     * @note[short] Windows: 0x454bf0
     * @note[short] iOS: 0x3a9018
     * @note[short] Android
     */
    static SetupShakePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x58473c
     * @note[short] MacOS (Intel): 0x665100
     * @note[short] Windows: 0x455a70
     * @note[short] iOS: 0x3a9c7c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x584d7c
     * @note[short] MacOS (Intel): 0x665870
     * @note[short] Windows: 0x4564c0
     * @note[short] iOS: 0x3aa1a4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x584a70
     * @note[short] MacOS (Intel): 0x6654e0
     * @note[short] Windows: 0x456100
     * @note[short] iOS: 0x3a9f6c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x583890
     * @note[short] MacOS (Intel): 0x664240
     * @note[short] Windows: 0x454d20
     * @note[short] iOS: 0x3a90fc
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x584138
     * @note[short] MacOS (Intel): 0x664b20
     * @note[short] Windows: 0x455c40
     * @note[short] iOS: 0x3a991c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x584920
     * @note[short] MacOS (Intel): 0x665360
     * @note[short] Windows: 0x272a00
     * @note[short] iOS: 0x3a9e34
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x584474
     * @note[short] MacOS (Intel): 0x664e60
     * @note[short] Windows: 0x271de0
     * @note[short] iOS: 0x3a9acc
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x584990
     * @note[short] MacOS (Intel): 0x6653e0
     * @note[short] Windows: 0x456080
     * @note[short] iOS: 0x3a9e9c
     * @note[short] Android
     */
    void updateInterval();

    /**
     * @note[short] MacOS (ARM): 0x5845d8
     * @note[short] MacOS (Intel): 0x664fb0
     * @note[short] Windows: 0x455fb0
     * @note[short] iOS: 0x3a9ba4
     * @note[short] Android
     */
    void updateIntervalLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x584a00
     * @note[short] MacOS (Intel): 0x665460
     * @note[short] Windows: 0x455f30
     * @note[short] iOS: 0x3a9f04
     * @note[short] Android
     */
    void updateShake();

    /**
     * @note[short] MacOS (ARM): 0x584310
     * @note[short] MacOS (Intel): 0x664d10
     * @note[short] Windows: 0x455e60
     * @note[short] iOS: 0x3a99f4
     * @note[short] Android
     */
    void updateShakeLabel(bool decimals);
    CCTextInputNode* m_durationInput;
    Slider* m_durationSlider;
    float m_duration;
    CCTextInputNode* m_strengthInput;
    Slider* m_strengthSlider;
    float m_strength;
    CCTextInputNode* m_intervalInput;
    Slider* m_intervalSlider;
    float m_interval;
};
