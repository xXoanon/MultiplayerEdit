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

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4ca7b0
     * @note[short] MacOS (Intel): 0x57e010
     * @note[short] Windows: 0x46aa40
     * @note[short] iOS: 0x40b844
     * @note[short] Android
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4cce08
     * @note[short] MacOS (Intel): 0x580890
     * @note[short] Windows: 0x46d250
     * @note[short] iOS: 0x40d5e8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4ccc28
     * @note[short] MacOS (Intel): 0x5806b0
     * @note[short] Windows: 0x46cfb0
     * @note[short] iOS: 0x40d428
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ca93c
     * @note[short] MacOS (Intel): 0x57e250
     * @note[short] Windows: 0x46ab60
     * @note[short] iOS: 0x40b920
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4cb928
     * @note[short] MacOS (Intel): 0x57f4d0
     * @note[short] Windows: 0x46bd50
     * @note[short] iOS: 0x40c7dc
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4cbbf4
     * @note[short] MacOS (Intel): 0x57f7a0
     * @note[short] Windows: 0x46c420
     * @note[short] iOS: 0x40c9d0
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] MacOS (ARM): 0x4cb9e8
     * @note[short] MacOS (Intel): 0x57f5a0
     * @note[short] Windows: 0x46c1c0
     * @note[short] iOS: 0x40c89c
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
