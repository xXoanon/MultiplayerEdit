#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TableViewCellDelegate.hpp"

class GJSongBrowser : public GJDropDownLayer, public FLAlertLayerProtocol, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "GJSongBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSongBrowser, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x526dbc
     * @note[short] MacOS (Intel): 0x5fe940
     * @note[short] Windows: 0x2b7170
     * @note[short] iOS: 0x26584c
     * @note[short] Android
     */
    static GJSongBrowser* create();

    /**
     * @note[short] MacOS (ARM): 0x5270a8
     * @note[short] MacOS (Intel): 0x5fed50
     * @note[short] Windows: 0x2b72f0
     * @note[short] iOS: 0x265974
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x527354
     * @note[short] MacOS (Intel): 0x5ff020
     * @note[short] Windows: 0x2b73f0
     * @note[short] iOS: 0x265b54
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x527320
     * @note[short] MacOS (Intel): 0x5feff0
     * @note[short] Windows: 0x2b7330
     * @note[short] iOS: 0x265b20
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x52787c
     * @note[short] MacOS (Intel): 0x5ff5a0
     * @note[short] Windows: 0x2b7b30
     * @note[short] iOS: 0x266088
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x527938
     * @note[short] MacOS (Intel): 0x5ff680
     * @note[short] Windows: 0x2b7c30
     * @note[short] iOS: 0x266144
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x527998
     * @note[short] MacOS (Intel): 0x5ff6f0
     * @note[short] Windows: 0x2b7c60
     * @note[short] iOS: 0x2661a4
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x5270e8
     * @note[short] MacOS (Intel): 0x5fed80
     * @note[short] Windows: 0x2b7770
     * @note[short] iOS: 0x2659b4
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x52767c
     * @note[short] MacOS (Intel): 0x5ff3b0
     * @note[short] Windows: 0x2b7a20
     * @note[short] iOS: 0x265eb0
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x527670
     * @note[short] MacOS (Intel): 0x5ff390
     * @note[short] Windows: 0x2b7a00
     * @note[short] iOS: 0x265ea4
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x527664
     * @note[short] MacOS (Intel): 0x5ff370
     * @note[short] Windows: 0x2b7a10
     * @note[short] iOS: 0x265e98
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5277e0
     * @note[short] MacOS (Intel): 0x5ff510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x265fec
     * @note[short] Android
     */
    void setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx);

    /**
     * @note[short] MacOS (ARM): 0x527758
     * @note[short] MacOS (Intel): 0x5ff480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x265f64
     * @note[short] Android
     */
    void setupSongBrowser(cocos2d::CCArray* songs);
    int m_page;
    int m_songID;
    bool m_selected;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCPoint m_unk298;
    cocos2d::CCArray* m_downloadedSongs;
    CustomListView* m_listView;
};
