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

class SetupCameraEdgePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraEdgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraEdgePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4d34c0
     * @note[short] MacOS (Intel): 0x587e80
     * @note[short] Windows: 0x412b60
     * @note[short] iOS: 0x239d5c
     * @note[short] Android
     */
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d453c
     * @note[short] MacOS (Intel): 0x589120
     * @note[short] Windows: 0x4139d0
     * @note[short] iOS: 0x23ab54
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4d4774
     * @note[short] MacOS (Intel): 0x5893c0
     * @note[short] Windows: 0x413ec0
     * @note[short] iOS: 0x23ad2c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d469c
     * @note[short] MacOS (Intel): 0x5892b0
     * @note[short] Windows: 0x413c80
     * @note[short] iOS: 0x23acac
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4d3650
     * @note[short] MacOS (Intel): 0x5880c0
     * @note[short] Windows: 0x412c90
     * @note[short] iOS: 0x239e40
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d43d0
     * @note[short] MacOS (Intel): 0x588f50
     * @note[short] Windows: 0x413ad0
     * @note[short] iOS: 0x23aa34
     * @note[short] Android
     */
    void onCameraEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d4224
     * @note[short] MacOS (Intel): 0x588d80
     * @note[short] Windows: 0x413c30
     * @note[short] iOS: 0x23a950
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d44c0
     * @note[short] MacOS (Intel): 0x589080
     * @note[short] Windows: 0x413c00
     * @note[short] iOS: 0x23ab24
     * @note[short] Android
     */
    void onUnlockEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d4618
     * @note[short] MacOS (Intel): 0x589210
     * @note[short] Windows: 0x413df0
     * @note[short] iOS: 0x23ac28
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x4d42cc
     * @note[short] MacOS (Intel): 0x588e40
     * @note[short] Windows: 0x413d70
     * @note[short] iOS: 0x23a9a4
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    int m_targetID;
    int m_edgeDirection;
    cocos2d::CCArray* m_directionToggles;
};
