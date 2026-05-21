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

class SetupCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x31b330
     * @note[short] MacOS (Intel): 0x3951e0
     * @note[short] Windows: 0x4181f0
     * @note[short] iOS: 0x22f4dc
     * @note[short] Android
     */
    static SetupCollisionTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x31c8cc
     * @note[short] MacOS (Intel): 0x3969d0
     * @note[short] Windows: 0x4191a0
     * @note[short] iOS: 0x2306cc
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x31ce14
     * @note[short] MacOS (Intel): 0x397040
     * @note[short] Windows: 0x419e10
     * @note[short] iOS: 0x230ad0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31cbd0
     * @note[short] MacOS (Intel): 0x396d70
     * @note[short] Windows: 0x419790
     * @note[short] iOS: 0x230994
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x31b4c8
     * @note[short] MacOS (Intel): 0x395430
     * @note[short] Windows: 0x418330
     * @note[short] iOS: 0x22f5c8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x31c608
     * @note[short] MacOS (Intel): 0x3966e0
     * @note[short] Windows: 0x419630
     * @note[short] iOS: 0x230430
     * @note[short] Android
     */
    void onActivateOnExit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c590
     * @note[short] MacOS (Intel): 0x396650
     * @note[short] Windows: 0x419330
     * @note[short] iOS: 0x2303b8
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c0ec
     * @note[short] MacOS (Intel): 0x396150
     * @note[short] Windows: 0x4196c0
     * @note[short] iOS: 0x230120
     * @note[short] Android
     */
    void onItemID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c04c
     * @note[short] MacOS (Intel): 0x396090
     * @note[short] Windows: 0x419700
     * @note[short] iOS: 0x2300d4
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c18c
     * @note[short] MacOS (Intel): 0x396210
     * @note[short] Windows: 0x419740
     * @note[short] iOS: 0x23016c
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c680
     * @note[short] MacOS (Intel): 0x396770
     * @note[short] Windows: 0x4193c0
     * @note[short] iOS: 0x2304a8
     * @note[short] Android
     */
    void onTargetP1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c73c
     * @note[short] MacOS (Intel): 0x396830
     * @note[short] Windows: 0x419480
     * @note[short] iOS: 0x230550
     * @note[short] Android
     */
    void onTargetP2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c7f8
     * @note[short] MacOS (Intel): 0x3968f0
     * @note[short] Windows: 0x419540
     * @note[short] iOS: 0x2305f8
     * @note[short] Android
     */
    void onTargetPP(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31cacc
     * @note[short] MacOS (Intel): 0x396c30
     * @note[short] Windows: 0x419c00
     * @note[short] iOS: 0x230890
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x31ca4c
     * @note[short] MacOS (Intel): 0x396b90
     * @note[short] Windows: 0x419ca0
     * @note[short] iOS: 0x230810
     * @note[short] Android
     */
    void updateItemID2();

    /**
     * @note[short] MacOS (ARM): 0x31c374
     * @note[short] MacOS (Intel): 0x396420
     * @note[short] Windows: 0x419ae0
     * @note[short] iOS: 0x230288
     * @note[short] Android
     */
    void updateItemID2InputLabel();

    /**
     * @note[short] MacOS (ARM): 0x31c234
     * @note[short] MacOS (Intel): 0x3962d0
     * @note[short] Windows: 0x419a10
     * @note[short] iOS: 0x2301c0
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x31cb4c
     * @note[short] MacOS (Intel): 0x396cd0
     * @note[short] Windows: 0x419d40
     * @note[short] iOS: 0x230910
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x31c48c
     * @note[short] MacOS (Intel): 0x396540
     * @note[short] Windows: 0x419b80
     * @note[short] iOS: 0x230328
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_blockAInput;
    CCTextInputNode* m_blockBInput;
    CCTextInputNode* m_targetIDInput;
    int m_blockAID;
    int m_blockBID;
    int m_targetID;
    bool m_activateGroup;
    bool m_triggerOnExit;
    bool m_targetP1;
    bool m_targetP2;
    bool m_targetPP;
};
