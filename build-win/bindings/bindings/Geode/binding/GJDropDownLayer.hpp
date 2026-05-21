#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x7d230
     * @note[short] iOS: 0x653a4
     * @note[short] Android: Out of line
     */
     GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x512178
     * @note[short] MacOS (Intel): 0x5e7be0
     * @note[short] Windows: 0x256dd0
     * @note[short] iOS: 0x3b2144
     * @note[short] Android: Rebinded
     */
     ~GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x5128f8
     * @note[short] MacOS (Intel): 0x5e8480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title);

    /**
     * @note[short] MacOS (ARM): 0x5123d8
     * @note[short] MacOS (Intel): 0x5e7f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title, float height, bool noBack);

    /**
     * @note[short] MacOS (ARM): 0x512c94
     * @note[short] MacOS (Intel): 0x5e8870
     * @note[short] Windows: 0x42760
     * @note[short] iOS: 0x3b2978
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x512cd0
     * @note[short] MacOS (Intel): 0x5e88a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b29b4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x512cf0
     * @note[short] MacOS (Intel): 0x5e8900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b29d4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x512ce0
     * @note[short] MacOS (Intel): 0x5e88c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b29c4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x512ce8
     * @note[short] MacOS (Intel): 0x5e88e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b29cc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x51297c
     * @note[short] MacOS (Intel): 0x5e8540
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x3b2660
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5129b4
     * @note[short] MacOS (Intel): 0x5e8580
     * @note[short] Windows: 0x257300
     * @note[short] iOS: 0x3b2698
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x512918
     * @note[short] MacOS (Intel): 0x5e84c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b25fc
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x512944
     * @note[short] MacOS (Intel): 0x5e8510
     * @note[short] Windows: 0x42610
     * @note[short] iOS: 0x3b2628
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x5129d8
     * @note[short] MacOS (Intel): 0x5e85c0
     * @note[short] Windows: 0x257320
     * @note[short] iOS: 0x3b26bc
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x512a24
     * @note[short] MacOS (Intel): 0x5e8600
     * @note[short] Windows: 0x257360
     * @note[short] iOS: 0x3b2708
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x512b28
     * @note[short] MacOS (Intel): 0x5e8700
     * @note[short] Windows: 0x2574b0
     * @note[short] iOS: 0x3b280c
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x512c30
     * @note[short] MacOS (Intel): 0x5e8810
     * @note[short] Windows: 0x42710
     * @note[short] iOS: 0x3b2914
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x512c40
     * @note[short] MacOS (Intel): 0x5e8830
     * @note[short] Windows: 0x257600
     * @note[short] iOS: 0x3b2924
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x512c2c
     * @note[short] MacOS (Intel): 0x5e8800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2910
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x51291c
     * @note[short] MacOS (Intel): 0x5e84d0
     * @note[short] Windows: 0x2572c0
     * @note[short] iOS: 0x3b2600
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x512930
     * @note[short] MacOS (Intel): 0x5e84f0
     * @note[short] Windows: 0x2572e0
     * @note[short] iOS: 0x3b2614
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x512908
     * @note[short] MacOS (Intel): 0x5e84a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b25ec
     * @note[short] Android
     */
    bool init(char const* title);

    /**
     * @note[short] MacOS (ARM): 0x5124fc
     * @note[short] MacOS (Intel): 0x5e8080
     * @note[short] Windows: 0x256e80
     * @note[short] iOS: 0x3b21f4
     * @note[short] Android
     */
    bool init(char const* title, float height, bool noBack);
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_closeOnHide;
    GJDropDownLayerDelegate* m_delegate;
    bool m_fastMenu;
};
