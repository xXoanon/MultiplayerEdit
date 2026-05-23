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

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x31453c
     * @note[short] MacOS (Intel): 0x38da50
     * @note[short] Windows: 0x43d220
     * @note[short] iOS: 0x2e53c
     * @note[short] Android
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x315954
     * @note[short] MacOS (Intel): 0x38f120
     * @note[short] Windows: 0x43dde0
     * @note[short] iOS: 0x2f4a0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31594c
     * @note[short] MacOS (Intel): 0x38f100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f498
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3159c0
     * @note[short] MacOS (Intel): 0x38f190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f50c
     * @note[short] Android
     */
    void addChance(int id, int chance);

    /**
     * @note[short] MacOS (ARM): 0x315a60
     * @note[short] MacOS (Intel): 0x38f230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f59c
     * @note[short] Android
     */
    void addChanceToObject(RandTriggerGameObject* object, int id, int chance);

    /**
     * @note[short] MacOS (ARM): 0x315e5c
     * @note[short] MacOS (Intel): 0x38f670
     * @note[short] Windows: 0x43e820
     * @note[short] iOS: 0x2f88c
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3146d8
     * @note[short] MacOS (Intel): 0x38dc90
     * @note[short] Windows: 0x43d360
     * @note[short] iOS: 0x2e62c
     * @note[short] Android
     */
    bool init(RandTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x314fe0
     * @note[short] MacOS (Intel): 0x38e620
     * @note[short] Windows: 0x43ea60
     * @note[short] iOS: 0x2ee54
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x315d9c
     * @note[short] MacOS (Intel): 0x38f5b0
     * @note[short] Windows: 0x43e990
     * @note[short] iOS: 0x2f7cc
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x315bac
     * @note[short] MacOS (Intel): 0x38f3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f6c4
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x315d04
     * @note[short] MacOS (Intel): 0x38f520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f748
     * @note[short] Android
     */
    void removeGroupIDFromObject(RandTriggerGameObject* object, int id);

    /**
     * @note[short] MacOS (ARM): 0x3150d4
     * @note[short] MacOS (Intel): 0x38e6e0
     * @note[short] Windows: 0x43dea0
     * @note[short] iOS: 0x2ef20
     * @note[short] Android
     */
    void updateGroupIDButtons();
    bool m_performedAction;
    cocos2d::CCArray* m_groupButtons;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_chanceInput;
    int m_groupToRemove;
    bool m_removingGroup;
};
