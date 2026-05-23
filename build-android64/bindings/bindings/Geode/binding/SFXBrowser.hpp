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
#include "MusicDownloadDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "SelectSFXSortDelegate.hpp"

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b0e4
     * @note[short] Android: Out of line
     */
     SFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3afdac
     * @note[short] MacOS (Intel): 0x43e310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x168724
     * @note[short] Android: Rebinded
     */
     ~SFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3afe88
     * @note[short] MacOS (Intel): 0x43e490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x168800
     * @note[short] Android
     */
    static SFXBrowser* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x3b251c
     * @note[short] MacOS (Intel): 0x440e90
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x16a890
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3b246c
     * @note[short] MacOS (Intel): 0x440df0
     * @note[short] Windows: 0x480cd0
     * @note[short] iOS: 0x16a884
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3b1bc8
     * @note[short] MacOS (Intel): 0x440450
     * @note[short] Windows: 0x47f840
     * @note[short] iOS: 0x16a2b8
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x3b1c90
     * @note[short] MacOS (Intel): 0x440550
     * @note[short] Windows: 0x47f8e0
     * @note[short] iOS: 0x16a2e0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x3b2000
     * @note[short] MacOS (Intel): 0x440920
     * @note[short] Windows: 0x480400
     * @note[short] iOS: 0x16a5d0
     * @note[short] Android
     */
    virtual void sortSelectClosed(SelectSFXSortLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3b2230
     * @note[short] MacOS (Intel): 0x440b80
     * @note[short] Windows: 0x4806e0
     * @note[short] iOS: 0x16a75c
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x3b22dc
     * @note[short] MacOS (Intel): 0x440c40
     * @note[short] Windows: 0x480780
     * @note[short] iOS: 0x16a7b8
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x3b244c
     * @note[short] MacOS (Intel): 0x440db0
     * @note[short] Windows: 0x480880
     * @note[short] iOS: 0x16a864
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x3b245c
     * @note[short] MacOS (Intel): 0x440dd0
     * @note[short] Windows: 0x480890
     * @note[short] iOS: 0x16a874
     * @note[short] Android
     */
    virtual bool shouldSnapToSelected();

    /**
     * @note[short] MacOS (ARM): 0x3affcc
     * @note[short] MacOS (Intel): 0x43e650
     * @note[short] Windows: 0x47e690
     * @note[short] iOS: 0x168874
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x3b11cc
     * @note[short] MacOS (Intel): 0x43f940
     * @note[short] Windows: 0x480500
     * @note[short] iOS: 0x169a24
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b0d80
     * @note[short] MacOS (Intel): 0x43f510
     * @note[short] Windows: 0x480c90
     * @note[short] iOS: 0x1695f4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b1044
     * @note[short] MacOS (Intel): 0x43f7e0
     * @note[short] Windows: 0x480200
     * @note[short] iOS: 0x1698b4
     * @note[short] Android
     */
    void onCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b0dd8
     * @note[short] MacOS (Intel): 0x43f560
     * @note[short] Windows: 0x480b40
     * @note[short] iOS: 0x16964c
     * @note[short] Android
     */
    void onExitFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b0e80
     * @note[short] MacOS (Intel): 0x43f620
     * @note[short] Windows: 0x4808a0
     * @note[short] iOS: 0x1696f4
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b1110
     * @note[short] MacOS (Intel): 0x43f890
     * @note[short] Windows: 0x480570
     * @note[short] iOS: 0x169968
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b0fa4
     * @note[short] MacOS (Intel): 0x43f730
     * @note[short] Windows: 0x4802c0
     * @note[short] iOS: 0x169818
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b0fe8
     * @note[short] MacOS (Intel): 0x43f780
     * @note[short] Windows: 0x480460
     * @note[short] iOS: 0x169858
     * @note[short] Android
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b0f44
     * @note[short] MacOS (Intel): 0x43f6c0
     * @note[short] Windows: 0x47f590
     * @note[short] iOS: 0x1697b8
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b13a4
     * @note[short] MacOS (Intel): 0x43fb40
     * @note[short] Windows: 0x47fa20
     * @note[short] iOS: 0x169bb0
     * @note[short] Android
     */
    void setupList(SFXSearchResult* result);

    /**
     * @note[short] MacOS (ARM): 0x3b1288
     * @note[short] MacOS (Intel): 0x43fa10
     * @note[short] Windows: 0x47f650
     * @note[short] iOS: 0x169ad8
     * @note[short] Android
     */
    void setupSFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3b1224
     * @note[short] MacOS (Intel): 0x43f9a0
     * @note[short] Windows: 0x47f5f0
     * @note[short] iOS: 0x169a7c
     * @note[short] Android
     */
    void trySetupSFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3b1da0
     * @note[short] MacOS (Intel): 0x440680
     * @note[short] Windows: 0x480970
     * @note[short] iOS: 0x16a3cc
     * @note[short] Android
     */
    void updatePageLabel();
    SFXSearchResult* m_searchResult;
    cocos2d::CCArray* m_sfxObjects;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_pathLabel;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_searchLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_backButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    LoadingCircleSprite* m_circleSprite;
    int m_sfxID;
    int m_libraryVersion;
    int m_cellAmount;
    bool m_gettingURL;
    bool m_selectedCell;
    bool m_snapToSelected;
    bool m_compactMode;
    AudioSortType m_sortType;
    SFXBrowserDelegate* m_delegate;
    bool m_autoUpdating;
};
