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

class SetupCountTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCountTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCountTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x257ddc
     * @note[short] MacOS (Intel): 0x2bb300
     * @note[short] Windows: 0x41ae70
     * @note[short] iOS: 0xf3a70
     * @note[short] Android
     */
    static SetupCountTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2591e8
     * @note[short] MacOS (Intel): 0x2bc9b0
     * @note[short] Windows: 0x41c060
     * @note[short] iOS: 0xf4af0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x25968c
     * @note[short] MacOS (Intel): 0x2bcf30
     * @note[short] Windows: 0x41c800
     * @note[short] iOS: 0xf4ebc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25949c
     * @note[short] MacOS (Intel): 0x2bcce0
     * @note[short] Windows: 0x41c320
     * @note[short] iOS: 0xf4d80
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x257f70
     * @note[short] MacOS (Intel): 0x2bb550
     * @note[short] Windows: 0x41afb0
     * @note[short] iOS: 0xf3b58
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x259170
     * @note[short] MacOS (Intel): 0x2bc920
     * @note[short] Windows: 0x419330
     * @note[short] iOS: 0xf4a78
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x258c68
     * @note[short] MacOS (Intel): 0x2bc3a0
     * @note[short] Windows: 0x41c290
     * @note[short] iOS: 0xf4764
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2590f8
     * @note[short] MacOS (Intel): 0x2bc890
     * @note[short] Windows: 0x41c1c0
     * @note[short] iOS: 0xf4a00
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x258d10
     * @note[short] MacOS (Intel): 0x2bc460
     * @note[short] Windows: 0x41c250
     * @note[short] iOS: 0xf47b8
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x258da0
     * @note[short] MacOS (Intel): 0x2bc510
     * @note[short] Windows: 0x41c2e0
     * @note[short] iOS: 0xf4804
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x258ff4
     * @note[short] MacOS (Intel): 0x2bc780
     * @note[short] Windows: 0x419b80
     * @note[short] iOS: 0xf4970
     * @note[short] Android
     */
    void updateCountTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x259398
     * @note[short] MacOS (Intel): 0x2bcba0
     * @note[short] Windows: 0x419c00
     * @note[short] iOS: 0xf4c7c
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x258dec
     * @note[short] MacOS (Intel): 0x2bc560
     * @note[short] Windows: 0x41c5a0
     * @note[short] iOS: 0xf4850
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x25932c
     * @note[short] MacOS (Intel): 0x2bcb20
     * @note[short] Windows: 0x41c770
     * @note[short] iOS: 0xf4c10
     * @note[short] Android
     */
    void updateTargetCount();

    /**
     * @note[short] MacOS (ARM): 0x259418
     * @note[short] MacOS (Intel): 0x2bcc40
     * @note[short] Windows: 0x41c6a0
     * @note[short] iOS: 0xf4cfc
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x258ef0
     * @note[short] MacOS (Intel): 0x2bc670
     * @note[short] Windows: 0x41c620
     * @note[short] iOS: 0xf48e0
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_itemIDInput;
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_targetCountInput;
    int m_itemID;
    int m_targetID;
    int m_targetCount;
    bool m_activateGroup;
    bool m_multiActivate;
};
