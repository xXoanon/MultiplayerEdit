#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x423d0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCBlockLayer();

    /**
     * @note[short] MacOS (ARM): 0x46e290
     * @note[short] MacOS (Intel): 0x5179c0
     * @note[short] Windows: 0x424a0
     * @note[short] iOS: 0x86190
     * @note[short] Android: Rebinded
     */
     ~CCBlockLayer();

    /**
     * @note[short] MacOS (ARM): 0x46e52c
     * @note[short] MacOS (Intel): 0x517d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCBlockLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x46e5e4
     * @note[short] MacOS (Intel): 0x517e10
     * @note[short] Windows: 0x42550
     * @note[short] iOS: 0x8624c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x46e864
     * @note[short] MacOS (Intel): 0x5180c0
     * @note[short] Windows: 0x42760
     * @note[short] iOS: 0x864a8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x46e8a0
     * @note[short] MacOS (Intel): 0x5180f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x864e4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46e8c0
     * @note[short] MacOS (Intel): 0x518150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86504
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46e8b0
     * @note[short] MacOS (Intel): 0x518110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x864f4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46e8b8
     * @note[short] MacOS (Intel): 0x518130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x864fc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46e744
     * @note[short] MacOS (Intel): 0x517f80
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x86388
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x46e77c
     * @note[short] MacOS (Intel): 0x517fc0
     * @note[short] Windows: 0x42690
     * @note[short] iOS: 0x863c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x46e700
     * @note[short] MacOS (Intel): 0x517f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86344
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x46e70c
     * @note[short] MacOS (Intel): 0x517f50
     * @note[short] Windows: 0x42610
     * @note[short] iOS: 0x86350
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x46e798
     * @note[short] MacOS (Intel): 0x517ff0
     * @note[short] Windows: 0x426b0
     * @note[short] iOS: 0x863dc
     * @note[short] Android
     */
    virtual void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x46e7e4
     * @note[short] MacOS (Intel): 0x518030
     * @note[short] Windows: 0x426f0
     * @note[short] iOS: 0x86428
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x46e7f0
     * @note[short] MacOS (Intel): 0x518040
     * @note[short] Windows: 0x42700
     * @note[short] iOS: 0x86434
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x46e800
     * @note[short] MacOS (Intel): 0x518060
     * @note[short] Windows: 0x42710
     * @note[short] iOS: 0x86444
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x46e810
     * @note[short] MacOS (Intel): 0x518080
     * @note[short] Windows: 0x42720
     * @note[short] iOS: 0x86454
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x46e7fc
     * @note[short] MacOS (Intel): 0x518050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86440
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x46e704
     * @note[short] MacOS (Intel): 0x517f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86348
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x46e708
     * @note[short] MacOS (Intel): 0x517f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8634c
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x46e8c8
     * @note[short] MacOS (Intel): 0x518170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8650c
     * @note[short] Android
     */
    void decrementForcePrio();

    /**
     * @note[short] MacOS (ARM): 0x46e6b8
     * @note[short] MacOS (Intel): 0x517ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x862fc
     * @note[short] Android
     */
    void incrementForcePrio();
    bool m_closeOnHide;
    bool m_forcePrioRegistered;
};
