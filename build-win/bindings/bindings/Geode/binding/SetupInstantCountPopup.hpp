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

class SetupInstantCountPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCountPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCountPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x512d98
     * @note[short] MacOS (Intel): 0x5e8a10
     * @note[short] Windows: 0x422270
     * @note[short] iOS: 0x1bbd9c
     * @note[short] Android
     */
    static SetupInstantCountPopup* create(CountTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x51410c
     * @note[short] MacOS (Intel): 0x5ea020
     * @note[short] Windows: 0x4232e0
     * @note[short] iOS: 0x1bcd64
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5145fc
     * @note[short] MacOS (Intel): 0x5ea610
     * @note[short] Windows: 0x419e10
     * @note[short] iOS: 0x1bd140
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5143b4
     * @note[short] MacOS (Intel): 0x5ea340
     * @note[short] Windows: 0x423490
     * @note[short] iOS: 0x1bd004
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x512f2c
     * @note[short] MacOS (Intel): 0x5e8c60
     * @note[short] Windows: 0x4223b0
     * @note[short] iOS: 0x1bbe84
     * @note[short] Android
     */
    bool init(CountTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x514050
     * @note[short] MacOS (Intel): 0x5e9f40
     * @note[short] Windows: 0x4237e0
     * @note[short] iOS: 0x1bcca8
     * @note[short] Android
     */
    void onCountType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x513fd8
     * @note[short] MacOS (Intel): 0x5e9eb0
     * @note[short] Windows: 0x419330
     * @note[short] iOS: 0x1bcc30
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x513b9c
     * @note[short] MacOS (Intel): 0x5e9a10
     * @note[short] Windows: 0x41c250
     * @note[short] iOS: 0x1bc9e8
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x513c2c
     * @note[short] MacOS (Intel): 0x5e9ac0
     * @note[short] Windows: 0x423450
     * @note[short] iOS: 0x1bca34
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x513af4
     * @note[short] MacOS (Intel): 0x5e9950
     * @note[short] Windows: 0x41c290
     * @note[short] iOS: 0x1bc994
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x513ed4
     * @note[short] MacOS (Intel): 0x5e9da0
     * @note[short] Windows: 0x419b80
     * @note[short] iOS: 0x1bcba0
     * @note[short] Android
     */
    void updateCountTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x5142b0
     * @note[short] MacOS (Intel): 0x5ea200
     * @note[short] Windows: 0x419c00
     * @note[short] iOS: 0x1bcf00
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x513ccc
     * @note[short] MacOS (Intel): 0x5e9b80
     * @note[short] Windows: 0x41c5a0
     * @note[short] iOS: 0x1bca80
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x514244
     * @note[short] MacOS (Intel): 0x5ea180
     * @note[short] Windows: 0x41c770
     * @note[short] iOS: 0x1bce94
     * @note[short] Android
     */
    void updateTargetCount();

    /**
     * @note[short] MacOS (ARM): 0x514330
     * @note[short] MacOS (Intel): 0x5ea2a0
     * @note[short] Windows: 0x423710
     * @note[short] iOS: 0x1bcf80
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x513dd0
     * @note[short] MacOS (Intel): 0x5e9c90
     * @note[short] Windows: 0x41c620
     * @note[short] iOS: 0x1bcb10
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
    int m_mode;
    CCMenuItemToggler* m_equalsToggler;
    CCMenuItemToggler* m_largerToggler;
    CCMenuItemToggler* m_smallerToggler;
};
