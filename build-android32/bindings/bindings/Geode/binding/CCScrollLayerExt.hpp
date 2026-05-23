#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCContentLayer.hpp"

class CCScrollLayerExt : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCScrollLayerExt, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3a07e4
     * @note[short] MacOS (Intel): 0x42de60
     * @note[short] Windows: 0x46ac0
     * @note[short] iOS: 0x300760
     * @note[short] Android: Rebinded
     */
     CCScrollLayerExt(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x3a0fb4
     * @note[short] MacOS (Intel): 0x42e610
     * @note[short] Windows: 0x47100
     * @note[short] iOS: 0x300e34
     * @note[short] Android: Rebinded
     */
     ~CCScrollLayerExt();

    /**
     * @note[short] MacOS (ARM): 0x3a1a3c
     * @note[short] MacOS (Intel): 0x42f1f0
     * @note[short] Windows: 0x47b40
     * @note[short] iOS: 0x301734
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3a1440
     * @note[short] MacOS (Intel): 0x42eb90
     * @note[short] Windows: 0x475f0
     * @note[short] iOS: 0x30116c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a17fc
     * @note[short] MacOS (Intel): 0x42efb0
     * @note[short] Windows: 0x479c0
     * @note[short] iOS: 0x301508
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a1558
     * @note[short] MacOS (Intel): 0x42ecb0
     * @note[short] Windows: 0x47710
     * @note[short] iOS: 0x301274
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a1798
     * @note[short] MacOS (Intel): 0x42ef50
     * @note[short] Windows: 0x47990
     * @note[short] iOS: 0x3014a4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a1408
     * @note[short] MacOS (Intel): 0x42eb50
     * @note[short] Windows: 0x475a0
     * @note[short] iOS: 0x301134
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3a1b64
     * @note[short] MacOS (Intel): 0x42f2f0
     * @note[short] Windows: 0x47c70
     * @note[short] iOS: 0x301830
     * @note[short] Android
     */
    virtual void preVisitWithClippingRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x3a1bf8
     * @note[short] MacOS (Intel): 0x42f370
     * @note[short] Windows: 0x47d10
     * @note[short] iOS: 0x3018c4
     * @note[short] Android
     */
    virtual void postVisit();

    /**
     * @note[short] MacOS (ARM): 0x3a117c
     * @note[short] MacOS (Intel): 0x42e8a0
     * @note[short] Windows: 0x47170
     * @note[short] iOS: 0x300ec4
     * @note[short] Android
     */
    void constraintContent();

    /**
     * @note[short] MacOS (ARM): 0x3a1184
     * @note[short] MacOS (Intel): 0x42e8b0
     * @note[short] Windows: 0x47180
     * @note[short] iOS: 0x300ecc
     * @note[short] Android
     */
    void doConstraintContent(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x3a0e18
     * @note[short] MacOS (Intel): 0x42e480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x300cec
     * @note[short] Android
     */
    float getMaxY();

    /**
     * @note[short] MacOS (ARM): 0x3a0e20
     * @note[short] MacOS (Intel): 0x42e490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMinY();

    /**
     * @note[short] MacOS (ARM): 0x3a0f1c
     * @note[short] MacOS (Intel): 0x42e580
     * @note[short] Windows: 0x47070
     * @note[short] iOS: 0x300d9c
     * @note[short] Android
     */
    void moveToTop();

    /**
     * @note[short] MacOS (ARM): 0x3a0e74
     * @note[short] MacOS (Intel): 0x42e4e0
     * @note[short] Windows: 0x46fd0
     * @note[short] iOS: 0x300cf4
     * @note[short] Android
     */
    void moveToTopWithOffset(float offset);

    /**
     * @note[short] MacOS (ARM): 0x3a1314
     * @note[short] MacOS (Intel): 0x42ea50
     * @note[short] Windows: 0x47330
     * @note[short] iOS: 0x301054
     * @note[short] Android
     */
    void scrollingEnd();

    /**
     * @note[short] MacOS (ARM): 0x3a1974
     * @note[short] MacOS (Intel): 0x42f130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30166c
     * @note[short] Android
     */
    void scrollLayer(float offset);

    /**
     * @note[short] MacOS (ARM): 0x3a135c
     * @note[short] MacOS (Intel): 0x42eaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setContentLayerSize(cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3a136c
     * @note[short] MacOS (Intel): 0x42eac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30109c
     * @note[short] Android
     */
    void setContentOffset(cocos2d::CCPoint offset, bool animate);

    /**
     * @note[short] MacOS (ARM): 0x3a0bcc
     * @note[short] MacOS (Intel): 0x42e220
     * @note[short] Windows: 0x47370
     * @note[short] iOS: 0x300ac8
     * @note[short] Android
     */
    void updateIndicators(float dt);
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
};
