#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc7b8
     * @note[short] Android: Out of line
     */
     GJRotationControl();

    /**
     * @note[short] MacOS (ARM): 0xa2e0
     * @note[short] MacOS (Intel): 0xb7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c6f24
     * @note[short] Android
     */
    static GJRotationControl* create();

    /**
     * @note[short] MacOS (ARM): 0x46780
     * @note[short] MacOS (Intel): 0x51910
     * @note[short] Windows: 0x129590
     * @note[short] iOS: 0x3fa848
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x46d08
     * @note[short] MacOS (Intel): 0x51f10
     * @note[short] Windows: 0x1299f0
     * @note[short] iOS: 0x3fac10
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x469d0
     * @note[short] MacOS (Intel): 0x51b80
     * @note[short] Windows: 0x129730
     * @note[short] iOS: 0x3faa48
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46ad0
     * @note[short] MacOS (Intel): 0x51ca0
     * @note[short] Windows: 0x129830
     * @note[short] iOS: 0x3fab44
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46bf4
     * @note[short] MacOS (Intel): 0x51e00
     * @note[short] Windows: 0x1299d0
     * @note[short] iOS: 0x3fabc0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46cec
     * @note[short] MacOS (Intel): 0x51ed0
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x3fabf4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x43948
     * @note[short] MacOS (Intel): 0x4e490
     * @note[short] Windows: 0x1296b0
     * @note[short] iOS: 0x3f809c
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] MacOS (ARM): 0x46868
     * @note[short] MacOS (Intel): 0x51a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fa8fc
     * @note[short] Android
     */
    void setAngle(float angle);

    /**
     * @note[short] MacOS (ARM): 0x468e4
     * @note[short] MacOS (Intel): 0x51a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fa974
     * @note[short] Android
     */
    void updateSliderPosition(cocos2d::CCPoint position);
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_controlPosition;
    cocos2d::CCSprite* m_controlSprite;
    float m_startingRotation;
    float m_currentRotation;
    int m_touchID;
    GJRotationControlDelegate* m_delegate;
};
