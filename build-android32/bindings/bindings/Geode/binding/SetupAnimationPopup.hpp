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

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x353e04
     * @note[short] MacOS (Intel): 0x3d4540
     * @note[short] Windows: 0x408c30
     * @note[short] iOS: 0x3c3218
     * @note[short] Android
     */
    static SetupAnimationPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x354dc8
     * @note[short] MacOS (Intel): 0x3d56b0
     * @note[short] Windows: 0x409b50
     * @note[short] iOS: 0x3c3ed8
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x355134
     * @note[short] MacOS (Intel): 0x3d5ad0
     * @note[short] Windows: 0x40a100
     * @note[short] iOS: 0x3c418c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x354fa8
     * @note[short] MacOS (Intel): 0x3d58e0
     * @note[short] Windows: 0x409ce0
     * @note[short] iOS: 0x3c40b0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x353f94
     * @note[short] MacOS (Intel): 0x3d4780
     * @note[short] Windows: 0x408d60
     * @note[short] iOS: 0x3c32fc
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x354b20
     * @note[short] MacOS (Intel): 0x3d53d0
     * @note[short] Windows: 0x409c50
     * @note[short] iOS: 0x3c3d6c
     * @note[short] Android
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x354a78
     * @note[short] MacOS (Intel): 0x3d5310
     * @note[short] Windows: 0x409c90
     * @note[short] iOS: 0x3c3d18
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x354ea4
     * @note[short] MacOS (Intel): 0x3d57a0
     * @note[short] Windows: 0x40a060
     * @note[short] iOS: 0x3c3fac
     * @note[short] Android
     */
    void updateAnimationID();

    /**
     * @note[short] MacOS (ARM): 0x354cc4
     * @note[short] MacOS (Intel): 0x3d55a0
     * @note[short] Windows: 0x409f10
     * @note[short] iOS: 0x3c3e48
     * @note[short] Android
     */
    void updateAnimationTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x354f24
     * @note[short] MacOS (Intel): 0x3d5840
     * @note[short] Windows: 0x409f90
     * @note[short] iOS: 0x3c402c
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x354bc0
     * @note[short] MacOS (Intel): 0x3d5490
     * @note[short] Windows: 0x409e90
     * @note[short] iOS: 0x3c3db8
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_animationIDInput;
    int m_targetID;
    int m_animationID;
};
