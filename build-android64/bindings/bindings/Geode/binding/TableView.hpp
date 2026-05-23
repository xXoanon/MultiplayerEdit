#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"
#include "CCScrollLayerExt.hpp"
#include "CCScrollLayerExtDelegate.hpp"

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)

    /**
     * @note[short] MacOS (ARM): 0x545330
     * @note[short] MacOS (Intel): 0x621820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe774
     * @note[short] Android: Rebinded
     */
     TableView(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x545458
     * @note[short] MacOS (Intel): 0x6219a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe89c
     * @note[short] Android: Rebinded
     */
     ~TableView();

    /**
     * @note[short] MacOS (ARM): 0x545278
     * @note[short] MacOS (Intel): 0x621760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe6c0
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* tvd, TableViewDataSource* tvds, TableViewCellDelegate* tvcd, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x54647c
     * @note[short] MacOS (Intel): 0x622af0
     * @note[short] Windows: 0x52e20
     * @note[short] iOS: 0x2ff414
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x546480
     * @note[short] MacOS (Intel): 0x622b00
     * @note[short] Windows: 0x75270
     * @note[short] iOS: 0x2ff418
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x5465fc
     * @note[short] MacOS (Intel): 0x622ca0
     * @note[short] Windows: 0x75280
     * @note[short] iOS: 0x2ff554
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x547050
     * @note[short] MacOS (Intel): 0x6237d0
     * @note[short] Windows: 0x75510
     * @note[short] iOS: 0x2ffd10
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x546e14
     * @note[short] MacOS (Intel): 0x6235a0
     * @note[short] Windows: 0x75430
     * @note[short] iOS: 0x2ffb94
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x546f88
     * @note[short] MacOS (Intel): 0x623720
     * @note[short] Windows: 0x75490
     * @note[short] iOS: 0x2ffcac
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x546484
     * @note[short] MacOS (Intel): 0x622b10
     * @note[short] Windows: 0x3e5f0
     * @note[short] iOS: 0x2ff41c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x547140
     * @note[short] MacOS (Intel): 0x6238c0
     * @note[short] Windows: 0x75ac0
     * @note[short] iOS: 0x2ffdd4
     * @note[short] Android
     */
    virtual void scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x547c9c
     * @note[short] MacOS (Intel): 0x6244c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3006dc
     * @note[short] Android
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x547ca4
     * @note[short] MacOS (Intel): 0x6244e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3006e4
     * @note[short] Android
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x547cac
     * @note[short] MacOS (Intel): 0x624500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3006ec
     * @note[short] Android
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x547cb4
     * @note[short] MacOS (Intel): 0x624520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3006f4
     * @note[short] Android
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x546520
     * @note[short] MacOS (Intel): 0x622bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ff4b8
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x545e8c
     * @note[short] MacOS (Intel): 0x6224b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    TableViewCell* cellForRowAtIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x545a78
     * @note[short] MacOS (Intel): 0x622030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2febc8
     * @note[short] Android
     */
    TableViewCell* cellForTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x547164
     * @note[short] MacOS (Intel): 0x623900
     * @note[short] Windows: 0x75ba0
     * @note[short] iOS: 0x2ffdf8
     * @note[short] Android
     */
    int checkBoundaryOfCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x54729c
     * @note[short] MacOS (Intel): 0x623a40
     * @note[short] Windows: 0x75cc0
     * @note[short] iOS: 0x2fff1c
     * @note[short] Android
     */
    int checkBoundaryOfCell(cocos2d::CCPoint& position, float height);

    /**
     * @note[short] MacOS (ARM): 0x5466a0
     * @note[short] MacOS (Intel): 0x622d60
     * @note[short] Windows: 0x75dc0
     * @note[short] iOS: 0x2ff5f8
     * @note[short] Android
     */
    void checkBoundaryOfContent(float dt);

    /**
     * @note[short] MacOS (ARM): 0x547918
     * @note[short] MacOS (Intel): 0x624110
     * @note[short] Windows: 0x76380
     * @note[short] iOS: 0x300444
     * @note[short] Android
     */
    void checkFirstCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x5473ac
     * @note[short] MacOS (Intel): 0x623b60
     * @note[short] Windows: 0x76630
     * @note[short] iOS: 0x300018
     * @note[short] Android
     */
    void checkLastCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x5464bc
     * @note[short] MacOS (Intel): 0x622b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ff454
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x545c20
     * @note[short] MacOS (Intel): 0x622210
     * @note[short] Windows: 0x74a80
     * @note[short] iOS: 0x2fed68
     * @note[short] Android
     */
    void deleteTableViewCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x545e84
     * @note[short] MacOS (Intel): 0x6224a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fef70
     * @note[short] Android
     */
    bool dequeueReusableCellWithIdentifier(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x545748
     * @note[short] MacOS (Intel): 0x621cf0
     * @note[short] Android
     */
    void initTableViewCells();

    /**
     * @note[short] MacOS (ARM): 0x5455f0
     * @note[short] MacOS (Intel): 0x621bc0
     * @note[short] Windows: 0x749e0
     * @note[short] iOS: 0x2fea20
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x545550
     * @note[short] MacOS (Intel): 0x621b30
     * @note[short] Windows: 0x74950
     * @note[short] iOS: 0x2fe994
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* path);

    /**
     * @note[short] MacOS (ARM): 0x545f24
     * @note[short] MacOS (Intel): 0x622540
     * @note[short] Windows: 0x74d30
     * @note[short] iOS: 0x2fef78
     * @note[short] Android
     */
    void reloadData();

    /**
     * @note[short] MacOS (ARM): 0x545694
     * @note[short] MacOS (Intel): 0x621c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2feab4
     * @note[short] Android
     */
    bool removeIndexPathFromPathAddedArray(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x545f20
     * @note[short] MacOS (Intel): 0x622530
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void scrollToIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x546e68
     * @note[short] MacOS (Intel): 0x6235f0
     * @note[short] Windows: 0x757d0
     * @note[short] iOS: 0x2ffbe8
     * @note[short] Android
     */
    void touchFinish(cocos2d::CCTouch* touch);
    bool m_scheduled;
    cocos2d::CCTouch* m_beginTouch;
    cocos2d::CCPoint m_beginLocation;
    cocos2d::CCPoint m_lastCellPos;
    cocos2d::CCPoint m_checkLocation;
    TableViewCell* m_touchedCell;
    bool m_touchMoved;
    bool m_isTouch;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_cellRemovedArray;
    cocos2d::CCArray* m_indexPathArray;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    bool m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
    bool m_idk2;
};
