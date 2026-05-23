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

class NumberInputLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NumberInputLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NumberInputLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f7134
     * @note[short] MacOS (Intel): 0x4922c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf8e44
     * @note[short] Android
     */
    static NumberInputLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3f7238
     * @note[short] MacOS (Intel): 0x492420
     * @note[short] Windows: 0x348400
     * @note[short] iOS: 0xf8f00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3f80d4
     * @note[short] MacOS (Intel): 0x493330
     * @note[short] Windows: 0x52dd0
     * @note[short] iOS: 0xf96ac
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f8058
     * @note[short] MacOS (Intel): 0x4932c0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0xf9630
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f7d24
     * @note[short] MacOS (Intel): 0x492fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf94e8
     * @note[short] Android
     */
    void deleteLast();

    /**
     * @note[short] MacOS (ARM): 0x3f7f40
     * @note[short] MacOS (Intel): 0x4931c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf95c0
     * @note[short] Android
     */
    void inputNumber(int num);

    /**
     * @note[short] MacOS (ARM): 0x3f7b98
     * @note[short] MacOS (Intel): 0x492e40
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0xf93a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f7ee8
     * @note[short] MacOS (Intel): 0x493170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf9568
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f7bd4
     * @note[short] MacOS (Intel): 0x492e70
     * @note[short] Windows: 0x3489b0
     * @note[short] iOS: 0xf93dc
     * @note[short] Android
     */
    void onNumber(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f7c6c
     * @note[short] MacOS (Intel): 0x492ef0
     * @note[short] Windows: 0x348b40
     * @note[short] iOS: 0xf943c
     * @note[short] Android
     */
    void updateNumberState();
    cocos2d::CCLabelBMFont* m_inputLabel;
    CCMenuItemSpriteExtra* m_okButton;
    int m_minimum;
    int m_maximum;
    gd::string m_inputString;
    NumberInputDelegate* m_delegate;
};
