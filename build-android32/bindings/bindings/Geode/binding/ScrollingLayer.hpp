#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x633af0
     * @note[short] MacOS (Intel): 0x720e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8d08
     * @note[short] Android: Out of line
     */
     ScrollingLayer();

    /**
     * @note[short] MacOS (ARM): 0x633410
     * @note[short] MacOS (Intel): 0x720630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b87b0
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x63369c
     * @note[short] MacOS (Intel): 0x7208f0
     * @note[short] Windows: 0x70f10
     * @note[short] iOS: 0x1b89dc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x633740
     * @note[short] MacOS (Intel): 0x7209c0
     * @note[short] Windows: 0x70fd0
     * @note[short] iOS: 0x1b8a80
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x633854
     * @note[short] MacOS (Intel): 0x720b10
     * @note[short] Windows: 0x71020
     * @note[short] iOS: 0x1b8b08
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6339ac
     * @note[short] MacOS (Intel): 0x720cb0
     * @note[short] Windows: 0x71110
     * @note[short] iOS: 0x1b8bc4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x633a9c
     * @note[short] MacOS (Intel): 0x720dd0
     * @note[short] Windows: 0x71220
     * @note[short] iOS: 0x1b8cb4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x633ad4
     * @note[short] MacOS (Intel): 0x720e10
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x1b8cec
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6335e0
     * @note[short] MacOS (Intel): 0x720800
     * @note[short] Windows: 0x70e20
     * @note[short] iOS: 0x1b8920
     * @note[short] Android
     */
    cocos2d::CCRect getViewRect();

    /**
     * @note[short] MacOS (ARM): 0x633524
     * @note[short] MacOS (Intel): 0x720740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8864
     * @note[short] Android
     */
    bool init(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x63381c
     * @note[short] MacOS (Intel): 0x720ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8ad0
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint offset);
    cocos2d::CCPoint m_position;
    cocos2d::CCSize m_size;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_startOffset;
    float m_scrollFactor;
    int m_touchID;
    cocos2d::CCLayer* m_contentLayer;
    cocos2d::CCLayer* m_parentLayer;
};
