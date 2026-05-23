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
#include "FLAlertLayerProtocol.hpp"
#include "SliderDelegate.hpp"

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x533730
     * @note[short] MacOS (Intel): 0x60db70
     * @note[short] Windows: 0x338700
     * @note[short] iOS: 0x3c0e20
     * @note[short] Android
     */
    static MusicBrowser* create(int songID, GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x534a98
     * @note[short] MacOS (Intel): 0x60eff0
     * @note[short] Windows: 0x339480
     * @note[short] iOS: 0x3c2014
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x535a14
     * @note[short] MacOS (Intel): 0x6100c0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x3c2ba0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5358f8
     * @note[short] MacOS (Intel): 0x60ff90
     * @note[short] Windows: 0x33ab60
     * @note[short] iOS: 0x3c2b94
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x535318
     * @note[short] MacOS (Intel): 0x60f930
     * @note[short] Windows: 0x339d80
     * @note[short] iOS: 0x3c2774
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x5353e0
     * @note[short] MacOS (Intel): 0x60fa30
     * @note[short] Windows: 0x339df0
     * @note[short] iOS: 0x3c279c
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x534c14
     * @note[short] MacOS (Intel): 0x60f170
     * @note[short] Windows: 0x339ac0
     * @note[short] iOS: 0x3c2190
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x535670
     * @note[short] MacOS (Intel): 0x60fce0
     * @note[short] Windows: 0x33a8d0
     * @note[short] iOS: 0x3c29f4
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x535608
     * @note[short] MacOS (Intel): 0x60fc60
     * @note[short] Windows: 0x33a620
     * @note[short] iOS: 0x3c298c
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x535660
     * @note[short] MacOS (Intel): 0x60fcc0
     * @note[short] Windows: 0x33a650
     * @note[short] iOS: 0x3c29e4
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x535830
     * @note[short] MacOS (Intel): 0x60fef0
     * @note[short] Windows: 0x33aa70
     * @note[short] iOS: 0x3c2b24
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x533890
     * @note[short] MacOS (Intel): 0x60dd60
     * @note[short] Windows: 0x3388b0
     * @note[short] iOS: 0x3c0ea4
     * @note[short] Android
     */
    bool init(int songID, GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x534738
     * @note[short] MacOS (Intel): 0x60ec80
     * @note[short] Windows: 0x33a9e0
     * @note[short] iOS: 0x3c1cc8
     * @note[short] Android
     */
    void onArtistFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53468c
     * @note[short] MacOS (Intel): 0x60ebc0
     * @note[short] Windows: 0x33a710
     * @note[short] iOS: 0x3c1c1c
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x534360
     * @note[short] MacOS (Intel): 0x60e900
     * @note[short] Windows: 0x33aad0
     * @note[short] iOS: 0x3c1930
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5343ec
     * @note[short] MacOS (Intel): 0x60e990
     * @note[short] Windows: 0x33a660
     * @note[short] iOS: 0x3c19bc
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x534be0
     * @note[short] MacOS (Intel): 0x60f140
     * @note[short] Windows: 0x339a60
     * @note[short] iOS: 0x3c215c
     * @note[short] Android
     */
    void onPlaybackControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5344ec
     * @note[short] MacOS (Intel): 0x60ea90
     * @note[short] Windows: 0x33a780
     * @note[short] iOS: 0x3c1abc
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5346d8
     * @note[short] MacOS (Intel): 0x60ec20
     * @note[short] Windows: 0x33a970
     * @note[short] iOS: 0x3c1c68
     * @note[short] Android
     */
    void onTagFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53448c
     * @note[short] MacOS (Intel): 0x60ea20
     * @note[short] Windows: 0x339be0
     * @note[short] iOS: 0x3c1a5c
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x534d60
     * @note[short] MacOS (Intel): 0x60f2e0
     * @note[short] Windows: 0x339f20
     * @note[short] iOS: 0x3c22a4
     * @note[short] Android
     */
    void setupList(MusicSearchResult* result);

    /**
     * @note[short] MacOS (ARM): 0x534c94
     * @note[short] MacOS (Intel): 0x60f200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c2210
     * @note[short] Android
     */
    void setupMusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5347a8
     * @note[short] MacOS (Intel): 0x60ecf0
     * @note[short] Windows: 0x339780
     * @note[short] iOS: 0x3c1d34
     * @note[short] Android
     */
    void setupSongControls();

    /**
     * @note[short] MacOS (ARM): 0x534bd8
     * @note[short] MacOS (Intel): 0x60f130
     * @note[short] Windows: 0x12a550
     * @note[short] iOS: 0x3c2154
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x534a34
     * @note[short] MacOS (Intel): 0x60ef80
     * @note[short] Windows: 0x339c40
     * @note[short] iOS: 0x3c1fb8
     * @note[short] Android
     */
    void trySetupMusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5354f4
     * @note[short] MacOS (Intel): 0x60fb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c2888
     * @note[short] Android
     */
    void updatePageLabel();
    GJSongType m_songType;
    MusicSearchResult* m_searchResult;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    CCMenuItemSpriteExtra* m_tagFilterButton;
    CCMenuItemSpriteExtra* m_artistFilterButton;
    LoadingCircleSprite* m_circleSprite;
    int m_songID;
    int m_libraryVersion;
    bool m_gettingURL;
    bool m_selectedCell;
    MusicBrowserDelegate* m_delegate;
    Slider* m_playSlider;
    cocos2d::CCLabelBMFont* m_playLabel;
    CCMenuItemSpriteExtra* m_playButton;
    bool m_autoUpdating;
};
