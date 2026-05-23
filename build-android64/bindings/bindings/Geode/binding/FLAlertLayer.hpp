#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x51720
     * @note[short] iOS: 0xa900
     * @note[short] Android: Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): 0x3ff0e4
     * @note[short] MacOS (Intel): 0x49ad70
     * @note[short] Windows: 0x51850
     * @note[short] iOS: 0x2abc10
     * @note[short] Android: Rebinded
     */
     ~FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2);

    /**
     * @note[short] MacOS (ARM): 0x3ff604
     * @note[short] MacOS (Intel): 0x49b380
     * @note[short] Windows: 0x51900
     * @note[short] iOS: 0x2abeb4
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width);

    /**
     * @note[short] MacOS (ARM): 0x3ff45c
     * @note[short] MacOS (Intel): 0x49b1b0
     * @note[short] Windows: 0x519b0
     * @note[short] iOS: 0x2abd8c
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] MacOS (ARM): 0x400970
     * @note[short] MacOS (Intel): 0x49c710
     * @note[short] Windows: 0x52e20
     * @note[short] iOS: 0x2acf74
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x400448
     * @note[short] MacOS (Intel): 0x49c250
     * @note[short] Windows: 0x52a70
     * @note[short] iOS: 0x2acb40
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4006fc
     * @note[short] MacOS (Intel): 0x49c4a0
     * @note[short] Windows: 0x52bc0
     * @note[short] iOS: 0x2acd38
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4005a0
     * @note[short] MacOS (Intel): 0x49c370
     * @note[short] Windows: 0x52b10
     * @note[short] iOS: 0x2acbf8
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x400664
     * @note[short] MacOS (Intel): 0x49c420
     * @note[short] Windows: 0x52b80
     * @note[short] iOS: 0x2accbc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x400938
     * @note[short] MacOS (Intel): 0x49c6d0
     * @note[short] Windows: 0x52dd0
     * @note[short] iOS: 0x2acf3c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x400328
     * @note[short] MacOS (Intel): 0x49c130
     * @note[short] Windows: 0x528f0
     * @note[short] iOS: 0x2acadc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x400288
     * @note[short] MacOS (Intel): 0x49c080
     * @note[short] Windows: 0x52870
     * @note[short] iOS: 0x2acaa8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x400794
     * @note[short] MacOS (Intel): 0x49c520
     * @note[short] Windows: 0x52c00
     * @note[short] iOS: 0x2acdb4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x400180
     * @note[short] MacOS (Intel): 0x49bf70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ac9a0
     * @note[short] Android
     */
    void incrementForcePrio();

    /**
     * @note[short] MacOS (ARM): 0x4000ac
     * @note[short] MacOS (Intel): 0x49bea0
     * @note[short] Windows: 0x51ac0
     * @note[short] iOS: 0x2ac8f0
     * @note[short] Android
     */
    bool init(int opacity);

    /**
     * @note[short] MacOS (ARM): 0x3ff6ec
     * @note[short] MacOS (Intel): 0x49b440
     * @note[short] Windows: 0x51bd0
     * @note[short] iOS: 0x2abf7c
     * @note[short] Android: Rebinded
     */
    bool init(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] MacOS (ARM): 0x4001c8
     * @note[short] MacOS (Intel): 0x49bfc0
     * @note[short] Windows: 0x529b0
     * @note[short] iOS: 0x2ac9e8
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x400228
     * @note[short] MacOS (Intel): 0x49c020
     * @note[short] Windows: 0x52a10
     * @note[short] iOS: 0x2aca48
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
};
