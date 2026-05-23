#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x32bce4
     * @note[short] MacOS (Intel): 0x3a7590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12ca08
     * @note[short] Android: Rebinded
     */
     BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x32a7dc
     * @note[short] MacOS (Intel): 0x3a5eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12bcc0
     * @note[short] Android: Rebinded
     */
     ~BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x3298e8
     * @note[short] MacOS (Intel): 0x3a4f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12b2ec
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int offset, bool looped);

    /**
     * @note[short] MacOS (ARM): 0x32951c
     * @note[short] MacOS (Intel): 0x3a4b80
     * @note[short] Windows: 0x3d0a0
     * @note[short] iOS: 0x12afb4
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x32ab78
     * @note[short] MacOS (Intel): 0x3a6340
     * @note[short] Windows: 0x3dc20
     * @note[short] iOS: 0x12bf1c
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x32b680
     * @note[short] MacOS (Intel): 0x3a6e70
     * @note[short] Windows: 0x3e760
     * @note[short] iOS: 0x12c510
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x32b75c
     * @note[short] MacOS (Intel): 0x3a6f70
     * @note[short] Windows: 0x3e820
     * @note[short] iOS: 0x12c5dc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x32ba28
     * @note[short] MacOS (Intel): 0x3a7290
     * @note[short] Windows: 0x3eb60
     * @note[short] iOS: 0x12c804
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x32b4c4
     * @note[short] MacOS (Intel): 0x3a6ca0
     * @note[short] Windows: 0x3e680
     * @note[short] iOS: 0x12c4c0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x32b34c
     * @note[short] MacOS (Intel): 0x3a6b10
     * @note[short] Windows: 0x3e5f0
     * @note[short] iOS: 0x12c388
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x32b118
     * @note[short] MacOS (Intel): 0x3a68d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* page);

    /**
     * @note[short] MacOS (ARM): 0x32b188
     * @note[short] MacOS (Intel): 0x3a6950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* page, int index);

    /**
     * @note[short] MacOS (ARM): 0x32b3e8
     * @note[short] MacOS (Intel): 0x3a6bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12c424
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x32b384
     * @note[short] MacOS (Intel): 0x3a6b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12c3c0
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x32a774
     * @note[short] MacOS (Intel): 0x3a5e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12bc50
     * @note[short] Android
     */
    cocos2d::CCLayer* getPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32aaa4
     * @note[short] MacOS (Intel): 0x3a6270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12be48
     * @note[short] Android
     */
    int getRelativePageForNum(int page);

    /**
     * @note[short] MacOS (ARM): 0x32a724
     * @note[short] MacOS (Intel): 0x3a5de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativePosForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32a414
     * @note[short] MacOS (Intel): 0x3a5ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12ba2c
     * @note[short] Android
     */
    int getTotalPages();

    /**
     * @note[short] MacOS (ARM): 0x3295d4
     * @note[short] MacOS (Intel): 0x3a4c10
     * @note[short] Windows: 0x3d280
     * @note[short] iOS: 0x12b058
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x32ad8c
     * @note[short] MacOS (Intel): 0x3a6530
     * @note[short] Windows: 0x3de10
     * @note[short] iOS: 0x12c008
     * @note[short] Android
     */
    void instantMoveToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32ae64
     * @note[short] MacOS (Intel): 0x3a6610
     * @note[short] Windows: 0x3def0
     * @note[short] iOS: 0x12c0e0
     * @note[short] Android
     */
    void moveToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32abfc
     * @note[short] MacOS (Intel): 0x3a63a0
     * @note[short] Windows: 0x3dc80
     * @note[short] iOS: 0x12bf7c
     * @note[short] Android
     */
    void moveToPageEnded();

    /**
     * @note[short] MacOS (ARM): 0x32a9cc
     * @note[short] MacOS (Intel): 0x3a61a0
     * @note[short] Windows: 0x3dd10
     * @note[short] iOS: 0x12bd70
     * @note[short] Android
     */
    int pageNumberForPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x32ad38
     * @note[short] MacOS (Intel): 0x3a64e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint positionForPageWithNumber(int page);

    /**
     * @note[short] MacOS (ARM): 0x32b0c0
     * @note[short] MacOS (Intel): 0x3a6870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12c334
     * @note[short] Android
     */
    void quickUpdate();

    /**
     * @note[short] MacOS (ARM): 0x32b1f0
     * @note[short] MacOS (Intel): 0x3a69c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removePage(cocos2d::CCLayer* page);

    /**
     * @note[short] MacOS (ARM): 0x32b284
     * @note[short] MacOS (Intel): 0x3a6a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removePageWithNumber(int page);

    /**
     * @note[short] MacOS (ARM): 0x329b7c
     * @note[short] MacOS (Intel): 0x3a51f0
     * @note[short] Windows: 0x3e0b0
     * @note[short] iOS: 0x12b4d4
     * @note[short] Android
     */
    void repositionPagesLooped();

    /**
     * @note[short] MacOS (ARM): 0x32b008
     * @note[short] MacOS (Intel): 0x3a67c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12c27c
     * @note[short] Android
     */
    void selectPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32a6bc
     * @note[short] MacOS (Intel): 0x3a5d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12bbe8
     * @note[short] Android
     */
    void setDotScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x329a34
     * @note[short] MacOS (Intel): 0x3a50a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12b394
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x32a1cc
     * @note[short] MacOS (Intel): 0x3a5860
     * @note[short] Windows: 0x3d5f0
     * @note[short] iOS: 0x12b7e4
     * @note[short] Android
     */
    void setupDynamicScrolling(cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x32ab0c
     * @note[short] MacOS (Intel): 0x3a62d0
     * @note[short] Windows: 0x3dbb0
     * @note[short] iOS: 0x12beb0
     * @note[short] Android
     */
    void togglePageIndicators(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x32a430
     * @note[short] MacOS (Intel): 0x3a5ad0
     * @note[short] Windows: 0x3d9b0
     * @note[short] iOS: 0x12ba48
     * @note[short] Android
     */
    void updateDots(float dt);

    /**
     * @note[short] MacOS (ARM): 0x329a5c
     * @note[short] MacOS (Intel): 0x3a50d0
     * @note[short] Windows: 0x3d890
     * @note[short] iOS: 0x12b3bc
     * @note[short] Android
     */
    void updatePages();
    cocos2d::CCArray* m_dots;
    int m_slowPage;
    float m_touchX;
    float m_touchQuotient;
    bool m_looped;
    DynamicScrollDelegate* m_dynamicDelegate;
    cocos2d::CCArray* m_dynamicObjects;
    bool m_dynamic;
    int m_touchType;
    bool m_ignoreTouchCancel;
    cocos2d::CCTouch* m_touch;
    cocos2d::CCArray* m_pages;
    double m_touchTime;
    cocos2d::CCPoint m_position;
    ExtendedLayer* m_extendedLayer;
    cocos2d::CCRect m_rect;
    float m_unkFloat1;
    float m_maxSpeed;
    float m_minSpeed;
    float m_unkFloat2;
    BoomScrollLayerDelegate* m_delegate;
    bool m_pageMoving;
    bool m_pagesInvisible;
    float m_minimumTouchLengthToSlide;
    float m_minimumTouchLengthToChangePage;
    float m_width;
    bool m_cancelAndStealTouch;
    bool m_dotsVisible;
    cocos2d::CCPoint m_dotPosition;
    cocos2d::ccColor4B m_selectedPageColor;
    cocos2d::ccColor4B m_normalPageColor;
    int m_page;
    float m_pageOffset;
    void* m_unkPtr;
    bool m_doVisit;
    cocos2d::CCRect m_clippingRect;
};
