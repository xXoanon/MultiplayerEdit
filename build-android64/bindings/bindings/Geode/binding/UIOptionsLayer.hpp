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

class UIOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x24fda4
     * @note[short] MacOS (Intel): 0x2b1c00
     * @note[short] Windows: 0x2a0ca0
     * @note[short] iOS: 0x2e2040
     * @note[short] Android
     */
    static UIOptionsLayer* create(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x25278c
     * @note[short] MacOS (Intel): 0x2b4db0
     * @note[short] Windows: 0x2a3d00
     * @note[short] iOS: 0x2e44d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x252950
     * @note[short] MacOS (Intel): 0x2b4ef0
     * @note[short] Windows: 0x2a3e50
     * @note[short] iOS: 0x2e4604
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x252b3c
     * @note[short] MacOS (Intel): 0x2b5000
     * @note[short] Windows: 0x2a3f80
     * @note[short] iOS: 0x2e46ec
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x252c74
     * @note[short] MacOS (Intel): 0x2b5140
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x2e4730
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x252c90
     * @note[short] MacOS (Intel): 0x2b5180
     * @note[short] Windows: 0x9b7d0
     * @note[short] iOS: 0x2e474c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2521b8
     * @note[short] MacOS (Intel): 0x2b4660
     * @note[short] Windows: 0x2a2de0
     * @note[short] iOS: 0x2e4048
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x252308
     * @note[short] MacOS (Intel): 0x2b47f0
     * @note[short] Windows: 0x2a31e0
     * @note[short] iOS: 0x2e4198
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x252568
     * @note[short] MacOS (Intel): 0x2b4b10
     * @note[short] Windows: 0x2a3960
     * @note[short] iOS: 0x2e4370
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x25276c
     * @note[short] MacOS (Intel): 0x2b4d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJUINode* getNode(int type);

    /**
     * @note[short] MacOS (ARM): 0x2505c8
     * @note[short] MacOS (Intel): 0x2b2620
     * @note[short] Windows: 0x2a0de0
     * @note[short] iOS: 0x2e274c
     * @note[short] Android
     */
    bool init(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x251e40
     * @note[short] MacOS (Intel): 0x2b4270
     * @note[short] Windows: 0x2a30d0
     * @note[short] iOS: 0x2e3da0
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x251eb0
     * @note[short] MacOS (Intel): 0x2b42e0
     * @note[short] Windows: 0x2a2cb0
     * @note[short] iOS: 0x2e3e10
     * @note[short] Android
     */
    void onSaveLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x251ecc
     * @note[short] MacOS (Intel): 0x2b4300
     * @note[short] Windows: 0x2a2af0
     * @note[short] iOS: 0x2e3e2c
     * @note[short] Android
     */
    void toggleUIGroup(int group);
    bool m_dual;
    GJUINode* m_uiNode1;
    GJUINode* m_uiNode2;
    GJUINode* m_uiNode3;
    GJUINode* m_uiNode4;
    cocos2d::CCLabelBMFont* m_nameLabel;
    int m_activeUIGroup;
};
