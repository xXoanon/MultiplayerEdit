#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfe73c
     * @note[short] Android: Out of line
     */
     CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): 0x53e904
     * @note[short] MacOS (Intel): 0x61a640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf97ac
     * @note[short] Android: Rebinded
     */
     ~CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): 0x53e9a4
     * @note[short] MacOS (Intel): 0x61a730
     * @note[short] Windows: 0xc8230
     * @note[short] iOS: 0xf984c
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);

    /**
     * @note[short] MacOS (ARM): 0x543e44
     * @note[short] MacOS (Intel): 0x620210
     * @note[short] Windows: 0xccc80
     * @note[short] iOS: 0xfdea4
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5440e8
     * @note[short] MacOS (Intel): 0x6204f0
     * @note[short] Windows: 0xcce10
     * @note[short] iOS: 0xfdf90
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x5443e4
     * @note[short] MacOS (Intel): 0x6207f0
     * @note[short] Windows: 0xccf00
     * @note[short] iOS: 0xfe104
     * @note[short] Android
     */
    virtual void downloadSongStarted(int id);

    /**
     * @note[short] MacOS (ARM): 0x544578
     * @note[short] MacOS (Intel): 0x620990
     * @note[short] Windows: 0xccf20
     * @note[short] iOS: 0xfe138
     * @note[short] Android
     */
    virtual void downloadSongFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x544854
     * @note[short] MacOS (Intel): 0x620c80
     * @note[short] Windows: 0xccfe0
     * @note[short] iOS: 0xfe31c
     * @note[short] Android
     */
    virtual void downloadSongFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x544a84
     * @note[short] MacOS (Intel): 0x620eb0
     * @note[short] Windows: 0xcd060
     * @note[short] iOS: 0xfe410
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x544a98
     * @note[short] MacOS (Intel): 0x620ee0
     * @note[short] Windows: 0xcd080
     * @note[short] iOS: 0xfe424
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x544e70
     * @note[short] MacOS (Intel): 0x621320
     * @note[short] Windows: 0xcd630
     * @note[short] iOS: 0xfe664
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x544eb8
     * @note[short] MacOS (Intel): 0x621380
     * @note[short] Windows: 0xcd660
     * @note[short] iOS: 0xfe6ac
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x542fe8
     * @note[short] MacOS (Intel): 0x61f330
     * @note[short] Windows: 0xcb4c0
     * @note[short] iOS: 0xfd4f4
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x544f54
     * @note[short] MacOS (Intel): 0x621420
     * @note[short] Windows: 0xcd9d0
     * @note[short] iOS: 0xfe6b8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x542590
     * @note[short] MacOS (Intel): 0x61e7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfcc84
     * @note[short] Android
     */
    void addExtraVisuals(bool newMusic, bool newLibraryMusic);

    /**
     * @note[short] MacOS (ARM): 0x5426d4
     * @note[short] MacOS (Intel): 0x61e910
     * @note[short] Windows: 0xca020
     * @note[short] iOS: 0xfcdb4
     * @note[short] Android
     */
    void deleteSong();

    /**
     * @note[short] MacOS (ARM): 0x5449f0
     * @note[short] MacOS (Intel): 0x620e30
     * @note[short] Windows: 0xcd560
     * @note[short] iOS: 0xfe384
     * @note[short] Android
     */
    void downloadAssetFailed(int id, GJAssetType type, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x54463c
     * @note[short] MacOS (Intel): 0x620a50
     * @note[short] Windows: 0xcd4a0
     * @note[short] iOS: 0xfe204
     * @note[short] Android
     */
    void downloadAssetFinished(int id, GJAssetType type);

    /**
     * @note[short] MacOS (ARM): 0x542f9c
     * @note[short] MacOS (Intel): 0x61f2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfd4a8
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x542a18
     * @note[short] MacOS (Intel): 0x61ec90
     * @note[short] Windows: 0xca9e0
     * @note[short] iOS: 0xfd0e0
     * @note[short] Android
     */
    void getSongInfoIfUnloaded();

    /**
     * @note[short] MacOS (ARM): 0x53eb08
     * @note[short] MacOS (Intel): 0x61a8f0
     * @note[short] Windows: 0xc8470
     * @note[short] iOS: 0xf9928
     * @note[short] Android
     */
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);

    /**
     * @note[short] MacOS (ARM): 0x53fdfc
     * @note[short] MacOS (Intel): 0x61bd00
     * @note[short] Windows: 0xcaaa0
     * @note[short] iOS: 0xfaa80
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53fe38
     * @note[short] MacOS (Intel): 0x61bd40
     * @note[short] Windows: 0xc9f00
     * @note[short] iOS: 0xfaabc
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53fbac
     * @note[short] MacOS (Intel): 0x61ba70
     * @note[short] Windows: 0xcabc0
     * @note[short] iOS: 0xfa8d8
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53ff78
     * @note[short] MacOS (Intel): 0x61be80
     * @note[short] Windows: 0xcab30
     * @note[short] iOS: 0xfabd8
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540ae8
     * @note[short] MacOS (Intel): 0x61cb90
     * @note[short] Windows: 0xc9c10
     * @note[short] iOS: 0xfb560
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540298
     * @note[short] MacOS (Intel): 0x61c1a0
     * @note[short] Windows: 0xca220
     * @note[short] iOS: 0xfae54
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540004
     * @note[short] MacOS (Intel): 0x61bf10
     * @note[short] Windows: 0xcaec0
     * @note[short] iOS: 0xfac64
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53ff18
     * @note[short] MacOS (Intel): 0x61be20
     * @note[short] Windows: 0xcae60
     * @note[short] iOS: 0xfab78
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540e50
     * @note[short] MacOS (Intel): 0x61cfc0
     * @note[short] Windows: 0xc9630
     * @note[short] iOS: 0xfb6bc
     * @note[short] Android
     */
    void positionInfoObjects();

    /**
     * @note[short] MacOS (ARM): 0x544bac
     * @note[short] MacOS (Intel): 0x621070
     * @note[short] Windows: 0xcd260
     * @note[short] iOS: 0xfe438
     * @note[short] Android
     */
    void processNextMultiAsset();

    /**
     * @note[short] MacOS (ARM): 0x542818
     * @note[short] MacOS (Intel): 0x61ea50
     * @note[short] Windows: 0xcd780
     * @note[short] iOS: 0xfceec
     * @note[short] Android
     */
    void showError(bool fast);

    /**
     * @note[short] MacOS (ARM): 0x542e14
     * @note[short] MacOS (Intel): 0x61f140
     * @note[short] Windows: 0xcada0
     * @note[short] iOS: 0xfd410
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] MacOS (ARM): 0x542400
     * @note[short] MacOS (Intel): 0x61e660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfcb48
     * @note[short] Android
     */
    void startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x542b7c
     * @note[short] MacOS (Intel): 0x61ede0
     * @note[short] Windows: 0xcd0a0
     * @note[short] iOS: 0xfd170
     * @note[short] Android
     */
    void startMultiAssetDownload();

    /**
     * @note[short] MacOS (ARM): 0x542b24
     * @note[short] MacOS (Intel): 0x61ed90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleUpdateButton(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x542ed8
     * @note[short] MacOS (Intel): 0x61f210
     * @note[short] Windows: 0xcb390
     * @note[short] iOS: 0xfd440
     * @note[short] Android
     */
    void updateDownloadProgress(float dt);

    /**
     * @note[short] MacOS (ARM): 0x544300
     * @note[short] MacOS (Intel): 0x620710
     * @note[short] Windows: 0xcd6b0
     * @note[short] iOS: 0xfe034
     * @note[short] Android
     */
    void updateError(GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x543034
     * @note[short] MacOS (Intel): 0x61f380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfd540
     * @note[short] Android
     */
    void updateLengthMod(float lengthMod);

    /**
     * @note[short] MacOS (ARM): 0x54384c
     * @note[short] MacOS (Intel): 0x61fb70
     * @note[short] Windows: 0xcc6a0
     * @note[short] iOS: 0xfd980
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool update);

    /**
     * @note[short] MacOS (ARM): 0x5424b4
     * @note[short] MacOS (Intel): 0x61e710
     * @note[short] Windows: 0xcb2a0
     * @note[short] iOS: 0xfcbac
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x54146c
     * @note[short] MacOS (Intel): 0x61d5f0
     * @note[short] Windows: 0xcb440
     * @note[short] iOS: 0xfbc80
     * @note[short] Android
     */
    void updateProgressBar(int progress);

    /**
     * @note[short] MacOS (ARM): 0x541588
     * @note[short] MacOS (Intel): 0x61d710
     * @note[short] Windows: 0xcb4f0
     * @note[short] iOS: 0xfbd64
     * @note[short] Android
     */
    void updateSongInfo();

    /**
     * @note[short] MacOS (ARM): 0x5414e4
     * @note[short] MacOS (Intel): 0x61d670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfbcf8
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* songInfo);

    /**
     * @note[short] MacOS (ARM): 0x54303c
     * @note[short] MacOS (Intel): 0x61f3a0
     * @note[short] Windows: 0xcc350
     * @note[short] iOS: 0xfd548
     * @note[short] Android: Rebinded
     */
    void updateWithMultiAssets(gd::string songList, gd::string sfxList, int bytes);

    /**
     * @note[short] MacOS (ARM): 0x543e30
     * @note[short] MacOS (Intel): 0x6201f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool verifySongID(int id);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    CCMenuItemSpriteExtra* m_infoBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_ncsLogo;
    cocos2d::extension::CCScale9Sprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_lengthMod;
    bool m_isInCell;
    SongPlaybackDelegate* m_playbackDelegate;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<GJAssetDownloadAction> m_undownloadedAssets;
    int m_totalBytes;
    gd::set<int> m_nextSongIDs;
};
