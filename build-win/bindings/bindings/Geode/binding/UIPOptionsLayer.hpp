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

class UIPOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIPOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIPOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x2559ac
     * @note[short] MacOS (Intel): 0x2b8170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e6934
     * @note[short] Android: Out of line
     */
     UIPOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x24ff28
     * @note[short] MacOS (Intel): 0x2b1e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e211c
     * @note[short] Android
     */
    static UIPOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x254b74
     * @note[short] MacOS (Intel): 0x2b70f0
     * @note[short] Windows: 0x2a5830
     * @note[short] iOS: 0x2e5c88
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x255268
     * @note[short] MacOS (Intel): 0x2b7840
     * @note[short] Windows: 0x2a61a0
     * @note[short] iOS: 0x2e6360
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x255384
     * @note[short] MacOS (Intel): 0x2b7960
     * @note[short] Windows: 0x2a62b0
     * @note[short] iOS: 0x2e6428
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2554e0
     * @note[short] MacOS (Intel): 0x2b7ad0
     * @note[short] Windows: 0x2a6360
     * @note[short] iOS: 0x2e64dc
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x255518
     * @note[short] MacOS (Intel): 0x2b7b10
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x2e6514
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x255534
     * @note[short] MacOS (Intel): 0x2b7b50
     * @note[short] Windows: 0x9b7d0
     * @note[short] iOS: 0x2e6530
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2550b0
     * @note[short] MacOS (Intel): 0x2b7660
     * @note[short] Windows: 0x2a5e40
     * @note[short] iOS: 0x2e61a8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x255120
     * @note[short] MacOS (Intel): 0x2b76e0
     * @note[short] Windows: 0x2a6040
     * @note[short] iOS: 0x2e6218
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2551d4
     * @note[short] MacOS (Intel): 0x2b77b0
     * @note[short] Windows: 0x2a6140
     * @note[short] iOS: 0x2e62cc
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x2551f8
     * @note[short] MacOS (Intel): 0x2b77d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e62f0
     * @note[short] Android
     */
    cocos2d::CCRect getTouchRect();

    /**
     * @note[short] MacOS (ARM): 0x255008
     * @note[short] MacOS (Intel): 0x2b75b0
     * @note[short] Windows: 0x2a5f20
     * @note[short] iOS: 0x2e6100
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
    int m_touchID;
    cocos2d::CCNode* m_practiceNode;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchDelta;
};
