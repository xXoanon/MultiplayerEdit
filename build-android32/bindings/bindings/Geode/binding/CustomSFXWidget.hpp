#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSFXWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSFXWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x50d408
     * @note[short] MacOS (Intel): 0x5e2900
     * @note[short] Windows: 0xc0640
     * @note[short] iOS: 0x2efb44
     * @note[short] Android
     */
    static CustomSFXWidget* create(SFXInfoObject* object, CustomSFXDelegate* delegate, bool showDelete, bool showPlay, bool showDownload, bool noBackground, bool compactMode);

    /**
     * @note[short] MacOS (ARM): 0x50f568
     * @note[short] MacOS (Intel): 0x5e4b90
     * @note[short] Windows: 0xc2600
     * @note[short] iOS: 0x2f16a4
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x50f608
     * @note[short] MacOS (Intel): 0x5e4c40
     * @note[short] Windows: 0xc2680
     * @note[short] iOS: 0x2f16fc
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x50f540
     * @note[short] MacOS (Intel): 0x5e4b20
     * @note[short] Windows: 0xc1f50
     * @note[short] iOS: 0x2f1690
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x50f860
     * @note[short] MacOS (Intel): 0x5e4e60
     * @note[short] Windows: 0xc2780
     * @note[short] iOS: 0x2f17f0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x50f090
     * @note[short] MacOS (Intel): 0x5e4660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f1354
     * @note[short] Android
     */
    void deleteSFX();

    /**
     * @note[short] MacOS (ARM): 0x50f48c
     * @note[short] MacOS (Intel): 0x5e4a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f1654
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x50e850
     * @note[short] MacOS (Intel): 0x5e3e20
     * @note[short] Windows: 0xc1910
     * @note[short] iOS: 0x2f0c64
     * @note[short] Android
     */
    void hideLoadingArt();

    /**
     * @note[short] MacOS (ARM): 0x50d500
     * @note[short] MacOS (Intel): 0x5e2a20
     * @note[short] Windows: 0xc0780
     * @note[short] iOS: 0x2efc3c
     * @note[short] Android
     */
    bool init(SFXInfoObject* object, CustomSFXDelegate* delegate, bool showDelete, bool showPlay, bool showDownload, bool noBackground, bool compactMode);

    /**
     * @note[short] MacOS (ARM): 0x50e500
     * @note[short] MacOS (Intel): 0x5e3ad0
     * @note[short] Windows: 0xc19a0
     * @note[short] iOS: 0x2f09ec
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50e53c
     * @note[short] MacOS (Intel): 0x5e3b10
     * @note[short] Windows: 0xc1670
     * @note[short] iOS: 0x2f0a28
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50e3bc
     * @note[short] MacOS (Intel): 0x5e3970
     * @note[short] Windows: 0xc1a30
     * @note[short] iOS: 0x2f0938
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50e63c
     * @note[short] MacOS (Intel): 0x5e3c20
     * @note[short] Windows: 0xc1c00
     * @note[short] iOS: 0x2f0b04
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50e61c
     * @note[short] MacOS (Intel): 0x5e3bf0
     * @note[short] Windows: 0xc1be0
     * @note[short] iOS: 0x2f0ae4
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50f19c
     * @note[short] MacOS (Intel): 0x5e4760
     * @note[short] Windows: 0xc17b0
     * @note[short] iOS: 0x2f144c
     * @note[short] Android
     */
    void showLoadingArt();

    /**
     * @note[short] MacOS (ARM): 0x50f310
     * @note[short] MacOS (Intel): 0x5e48e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f15bc
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] MacOS (ARM): 0x50efe4
     * @note[short] MacOS (Intel): 0x5e45b0
     * @note[short] Windows: 0xc1b30
     * @note[short] iOS: 0x2f12fc
     * @note[short] Android
     */
    void startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x50f3c8
     * @note[short] MacOS (Intel): 0x5e49a0
     * @note[short] Windows: 0xc1e20
     * @note[short] iOS: 0x2f15ec
     * @note[short] Android
     */
    void updateDownloadProgress(float dt);

    /**
     * @note[short] MacOS (ARM): 0x50f6d4
     * @note[short] MacOS (Intel): 0x5e4d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f1738
     * @note[short] Android
     */
    void updateError(GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x50f54c
     * @note[short] MacOS (Intel): 0x5e4b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f169c
     * @note[short] Android
     */
    void updateLengthMod(float mod);

    /**
     * @note[short] MacOS (ARM): 0x50f08c
     * @note[short] MacOS (Intel): 0x5e4650
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x50e7d8
     * @note[short] MacOS (Intel): 0x5e3da0
     * @note[short] Windows: 0xc1ed0
     * @note[short] iOS: 0x2f0bec
     * @note[short] Android
     */
    void updateProgressBar(int progress);

    /**
     * @note[short] MacOS (ARM): 0x50e970
     * @note[short] MacOS (Intel): 0x5e3f40
     * @note[short] Windows: 0xc1f60
     * @note[short] iOS: 0x2f0d48
     * @note[short] Android
     */
    void updateSFXInfo();

    /**
     * @note[short] MacOS (ARM): 0x50e8e4
     * @note[short] MacOS (Intel): 0x5e3eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f0cf4
     * @note[short] Android
     */
    void updateSFXObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x50f554
     * @note[short] MacOS (Intel): 0x5e4b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool verifySFXID(int id);
    SFXInfoObject* m_sfxObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadButton;
    CCMenuItemSpriteExtra* m_cancelButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_playButton;
    CCMenuItemSpriteExtra* m_deleteButton;
    cocos2d::CCSprite* m_progressOutlineSprite;
    cocos2d::CCSprite* m_progressBarSprite;
    cocos2d::CCSprite* m_clockSprite;
    CustomSFXDelegate* m_delegate;
    bool m_showDelete;
    bool m_showPlay;
    bool m_showDownload;
    bool m_showCancel;
    bool m_compactMode;
    int m_sfxID;
    float m_lengthMod;
};
