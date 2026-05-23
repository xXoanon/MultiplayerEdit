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

class SetupEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEndPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x587918
     * @note[short] MacOS (Intel): 0x668920
     * @note[short] Windows: 0x41ca90
     * @note[short] iOS: 0x2ad078
     * @note[short] Android
     */
    static SetupEndPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x588648
     * @note[short] MacOS (Intel): 0x669810
     * @note[short] Windows: 0x41d580
     * @note[short] iOS: 0x2adb44
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5888b8
     * @note[short] MacOS (Intel): 0x669b30
     * @note[short] Windows: 0x413ec0
     * @note[short] iOS: 0x2add38
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5887c4
     * @note[short] MacOS (Intel): 0x6699e0
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x2adc9c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5887e0
     * @note[short] MacOS (Intel): 0x669a20
     * @note[short] Windows: 0x41d830
     * @note[short] iOS: 0x2adcb8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x587aac
     * @note[short] MacOS (Intel): 0x668b70
     * @note[short] Windows: 0x41cbc0
     * @note[short] iOS: 0x2ad0fc
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5885d0
     * @note[short] MacOS (Intel): 0x669780
     * @note[short] Windows: 0x41d750
     * @note[short] iOS: 0x2adacc
     * @note[short] Android
     */
    void onLockY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x588538
     * @note[short] MacOS (Intel): 0x6696c0
     * @note[short] Windows: 0x41d690
     * @note[short] iOS: 0x2ada34
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x588558
     * @note[short] MacOS (Intel): 0x6696f0
     * @note[short] Windows: 0x41d6c0
     * @note[short] iOS: 0x2ada54
     * @note[short] Android
     */
    void onReversed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x58838c
     * @note[short] MacOS (Intel): 0x6694f0
     * @note[short] Windows: 0x41d7e0
     * @note[short] iOS: 0x2ad950
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x588740
     * @note[short] MacOS (Intel): 0x669940
     * @note[short] Windows: 0x41d9a0
     * @note[short] iOS: 0x2adc18
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x588434
     * @note[short] MacOS (Intel): 0x6695b0
     * @note[short] Windows: 0x41d920
     * @note[short] iOS: 0x2ad9a4
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    bool m_reversed;
    bool m_lockY;
    int m_groupID;
    bool m_multiActivate;
};
