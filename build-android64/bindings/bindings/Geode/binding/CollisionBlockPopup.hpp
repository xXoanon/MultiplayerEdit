#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class CollisionBlockPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "CollisionBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CollisionBlockPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x227480
     * @note[short] MacOS (Intel): 0x285c00
     * @note[short] Windows: 0x8a920
     * @note[short] iOS: 0x84b38
     * @note[short] Android
     */
    static CollisionBlockPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2289c8
     * @note[short] MacOS (Intel): 0x2872c0
     * @note[short] Windows: 0x8bbe0
     * @note[short] iOS: 0x859f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22897c
     * @note[short] MacOS (Intel): 0x287260
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0x859a4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x228820
     * @note[short] MacOS (Intel): 0x2870b0
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x85908
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x22883c
     * @note[short] MacOS (Intel): 0x2870f0
     * @note[short] Windows: 0x8b860
     * @note[short] iOS: 0x85924
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2289d4
     * @note[short] MacOS (Intel): 0x2872f0
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x859fc
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x228aa4
     * @note[short] MacOS (Intel): 0x2873b0
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x85a68
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x22852c
     * @note[short] MacOS (Intel): 0x286dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x227f38
     * @note[short] MacOS (Intel): 0x286740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8550c
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2275a8
     * @note[short] MacOS (Intel): 0x285d60
     * @note[short] Windows: 0x8aa40
     * @note[short] iOS: 0x84c14
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x227ff0
     * @note[short] MacOS (Intel): 0x286810
     * @note[short] Windows: 0x8bb40
     * @note[short] iOS: 0x855c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228444
     * @note[short] MacOS (Intel): 0x286cd0
     * @note[short] Windows: 0x8b5a0
     * @note[short] iOS: 0x85794
     * @note[short] Android
     */
    void onDynamicBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228228
     * @note[short] MacOS (Intel): 0x286a90
     * @note[short] Windows: 0x8b650
     * @note[short] iOS: 0x856b0
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2280c0
     * @note[short] MacOS (Intel): 0x2868f0
     * @note[short] Windows: 0x8b6a0
     * @note[short] iOS: 0x85634
     * @note[short] Android
     */
    void onNextItemID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228728
     * @note[short] MacOS (Intel): 0x286f90
     * @note[short] Windows: 0x8b950
     * @note[short] iOS: 0x85810
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x2287a0
     * @note[short] MacOS (Intel): 0x287010
     * @note[short] Windows: 0x8ba50
     * @note[short] iOS: 0x85888
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x228340
     * @note[short] MacOS (Intel): 0x286bc0
     * @note[short] Windows: 0x8b9d0
     * @note[short] iOS: 0x85704
     * @note[short] Android
     */
    void updateTextInputLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    CCTextInputNode* m_blockIDInput;
    int m_blockID;
    bool m_dynamicBlock;
    bool m_disableDelegate;
};
