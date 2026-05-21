#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc83c
     * @note[short] Android: Out of line
     */
     GJScaleControl();

    /**
     * @note[short] MacOS (ARM): 0xa46c
     * @note[short] MacOS (Intel): 0xb980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c6ff4
     * @note[short] Android
     */
    static GJScaleControl* create();

    /**
     * @note[short] MacOS (ARM): 0x46d70
     * @note[short] MacOS (Intel): 0x51f80
     * @note[short] Windows: 0x129a70
     * @note[short] iOS: 0x3fac78
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x473a8
     * @note[short] MacOS (Intel): 0x52630
     * @note[short] Windows: 0x12a560
     * @note[short] iOS: 0x3fb20c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x47534
     * @note[short] MacOS (Intel): 0x52810
     * @note[short] Windows: 0x12a770
     * @note[short] iOS: 0x3fb398
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4796c
     * @note[short] MacOS (Intel): 0x52cc0
     * @note[short] Windows: 0x12ab90
     * @note[short] iOS: 0x3fb6e0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x47aa4
     * @note[short] MacOS (Intel): 0x52e20
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x3fb808
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x37138
     * @note[short] MacOS (Intel): 0x3ee10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] MacOS (ARM): 0x372a0
     * @note[short] MacOS (Intel): 0x3efe0
     * @note[short] Windows: 0x129f40
     * @note[short] iOS: 0x3ef3e8
     * @note[short] Android: Rebinded
     */
    void loadValues(GameObject* object, cocos2d::CCArray* objects, gd::unordered_map<int, GameObjectEditorState>& editorStates);

    /**
     * @note[short] MacOS (ARM): 0x47154
     * @note[short] MacOS (Intel): 0x52390
     * @note[short] Windows: 0x129eb0
     * @note[short] iOS: 0x3fb05c
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4732c
     * @note[short] MacOS (Intel): 0x52560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float scaleFromValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x47368
     * @note[short] MacOS (Intel): 0x525a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float skewFromValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x471c4
     * @note[short] MacOS (Intel): 0x523f0
     * @note[short] Windows: 0x12a550
     * @note[short] iOS: 0x3fb0cc
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x471f4
     * @note[short] MacOS (Intel): 0x52440
     * @note[short] Windows: 0x12acd0
     * @note[short] iOS: 0x3fb0d4
     * @note[short] Android
     */
    void updateLabelX(float value);

    /**
     * @note[short] MacOS (ARM): 0x472c4
     * @note[short] MacOS (Intel): 0x52500
     * @note[short] Windows: 0x12add0
     * @note[short] iOS: 0x3fb1a4
     * @note[short] Android
     */
    void updateLabelXY(float value);

    /**
     * @note[short] MacOS (ARM): 0x4725c
     * @note[short] MacOS (Intel): 0x524a0
     * @note[short] Windows: 0x12ad50
     * @note[short] iOS: 0x3fb13c
     * @note[short] Android
     */
    void updateLabelY(float value);

    /**
     * @note[short] MacOS (ARM): 0x47380
     * @note[short] MacOS (Intel): 0x525f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x471cc
     * @note[short] MacOS (Intel): 0x52400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromSkew(float value);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    int m_touchID;
    float m_valueX;
    float m_valueY;
    int m_unkSize4;
    float m_changedValueX;
    float m_changedValueY;
    bool m_scale1Lock;
    ScaleButtonType m_scaleButtonType;
    cocos2d::CCLabelBMFont* m_scaleXLabel;
    cocos2d::CCLabelBMFont* m_scaleYLabel;
    cocos2d::CCLabelBMFont* m_scaleLabel;
    GJScaleControlDelegate* m_delegate;
    float m_upperBound;
    float m_lowerBound;
    int m_senderTag;
    CCMenuItemSpriteExtra* m_scaleLockButton;
    bool m_scaleLocked;
};
