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

class SetupTouchTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTouchTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTouchTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x255b90
     * @note[short] MacOS (Intel): 0x2b8470
     * @note[short] Windows: 0x463bf0
     * @note[short] iOS: 0x24b028
     * @note[short] Android
     */
    static SetupTouchTogglePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x256c38
     * @note[short] MacOS (Intel): 0x2b9720
     * @note[short] Windows: 0x464960
     * @note[short] iOS: 0x24be2c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x256ef4
     * @note[short] MacOS (Intel): 0x2b9a60
     * @note[short] Windows: 0x464e90
     * @note[short] iOS: 0x24c06c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x256e00
     * @note[short] MacOS (Intel): 0x2b9940
     * @note[short] Windows: 0x464d70
     * @note[short] iOS: 0x24bfd0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x255d30
     * @note[short] MacOS (Intel): 0x2b86d0
     * @note[short] Windows: 0x463d30
     * @note[short] iOS: 0x24b0ac
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x256b8c
     * @note[short] MacOS (Intel): 0x2b9650
     * @note[short] Windows: 0x464cb0
     * @note[short] iOS: 0x24bd80
     * @note[short] Android
     */
    void onControlMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x256b14
     * @note[short] MacOS (Intel): 0x2b95c0
     * @note[short] Windows: 0x464b50
     * @note[short] iOS: 0x24bd08
     * @note[short] Android
     */
    void onDualTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2569e4
     * @note[short] MacOS (Intel): 0x2b9460
     * @note[short] Windows: 0x464ac0
     * @note[short] iOS: 0x24bbd8
     * @note[short] Android
     */
    void onHoldMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x256838
     * @note[short] MacOS (Intel): 0x2b9290
     * @note[short] Windows: 0x413c30
     * @note[short] iOS: 0x24baf4
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x256a5c
     * @note[short] MacOS (Intel): 0x2b94f0
     * @note[short] Windows: 0x464be0
     * @note[short] iOS: 0x24bc50
     * @note[short] Android
     */
    void onTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x256d7c
     * @note[short] MacOS (Intel): 0x2b98a0
     * @note[short] Windows: 0x413df0
     * @note[short] iOS: 0x24bf4c
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x2568e0
     * @note[short] MacOS (Intel): 0x2b9350
     * @note[short] Windows: 0x413d70
     * @note[short] iOS: 0x24bb48
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    int m_groupID;
    bool m_holdMode;
    int m_toggleMode;
    int m_playerMode;
    CCMenuItemToggler* m_toggleOnToggler;
    CCMenuItemToggler* m_toggleOffToggler;
    bool m_dualMode;
    CCMenuItemToggler* m_p1OnlyToggler;
    CCMenuItemToggler* m_p2OnlyToggler;
};
