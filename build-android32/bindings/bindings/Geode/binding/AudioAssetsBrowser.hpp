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
#include "TableViewCellDelegate.hpp"
#include "MusicDownloadDelegate.hpp"

class AudioAssetsBrowser : public FLAlertLayer, public TableViewCellDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioAssetsBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioAssetsBrowser();

    /**
     * @note[short] MacOS (ARM): 0x6b9df4
     * @note[short] MacOS (Intel): 0x7b3be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d13d8
     * @note[short] Android: Rebinded
     */
     ~AudioAssetsBrowser();

    /**
     * @note[short] MacOS (ARM): 0x6b9ed4
     * @note[short] MacOS (Intel): 0x7b3d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d14b8
     * @note[short] Android: Rebinded
     */
    static AudioAssetsBrowser* create(gd::vector<int>& songIds, gd::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x6baebc
     * @note[short] MacOS (Intel): 0x7b4f50
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1d2358
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6bae40
     * @note[short] MacOS (Intel): 0x7b4ee0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x1d22dc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6badec
     * @note[short] MacOS (Intel): 0x7b4e00
     * @note[short] Windows: 0x83d20
     * @note[short] iOS: 0x1d2290
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x6badf8
     * @note[short] MacOS (Intel): 0x7b4e30
     * @note[short] Windows: 0x83da0
     * @note[short] iOS: 0x1d229c
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x6bae0c
     * @note[short] MacOS (Intel): 0x7b4e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d22ac
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x6bae1c
     * @note[short] MacOS (Intel): 0x7b4e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d22bc
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x6bae2c
     * @note[short] MacOS (Intel): 0x7b4eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d22cc
     * @note[short] Android
     */
    virtual int getCellDelegateType();

    /**
     * @note[short] MacOS (ARM): 0x6ba004
     * @note[short] MacOS (Intel): 0x7b3ee0
     * @note[short] Windows: 0x837b0
     * @note[short] iOS: 0x1d159c
     * @note[short] Android: Rebinded
     */
    bool init(gd::vector<int>& songIds, gd::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x6ba53c
     * @note[short] MacOS (Intel): 0x7b4450
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x1d1abc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ba578
     * @note[short] MacOS (Intel): 0x7b4480
     * @note[short] Windows: 0x83fc0
     * @note[short] iOS: 0x1d1af8
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6bae08
     * @note[short] MacOS (Intel): 0x7b4e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6babb8
     * @note[short] MacOS (Intel): 0x7b4ba0
     * @note[short] Windows: 0x83de0
     * @note[short] iOS: 0x1d2078
     * @note[short] Android
     */
    void setupList();

    /**
     * @note[short] MacOS (ARM): 0x6bad4c
     * @note[short] MacOS (Intel): 0x7b4d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d2208
     * @note[short] Android
     */
    void trySetupAudioBrowser();

    /**
     * @note[short] MacOS (ARM): 0x6bae3c
     * @note[short] MacOS (Intel): 0x7b4ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageLabel();
    cocos2d::CCArray* m_songInfoObjects;
    GJCommentListLayer* m_songList;
    cocos2d::CCLabelBMFont* m_pageIndicatorLabel;
    gd::vector<int> m_songsIds;
    gd::vector<int> m_sfxIds;
    LoadingCircleSprite* m_loadingCircle;
};
