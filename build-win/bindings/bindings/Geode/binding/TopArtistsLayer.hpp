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
#include "OnlineListDelegate.hpp"

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TopArtistsLayer();

    /**
     * @note[short] MacOS (ARM): 0x29f620
     * @note[short] MacOS (Intel): 0x310280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a45c4
     * @note[short] Android: Rebinded
     */
     ~TopArtistsLayer();

    /**
     * @note[short] MacOS (ARM): 0x29f91c
     * @note[short] MacOS (Intel): 0x310650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a4680
     * @note[short] Android
     */
    static TopArtistsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x29fa24
     * @note[short] MacOS (Intel): 0x3107b0
     * @note[short] Windows: 0x4cac10
     * @note[short] iOS: 0x1a4740
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2a034c
     * @note[short] MacOS (Intel): 0x311150
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1a4f88
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2a02d0
     * @note[short] MacOS (Intel): 0x3110e0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x1a4f0c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a0eb8
     * @note[short] MacOS (Intel): 0x311c90
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x1a55cc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2a038c
     * @note[short] MacOS (Intel): 0x3111a0
     * @note[short] Windows: 0x4cb3b0
     * @note[short] iOS: 0x1a4fc0
     * @note[short] Android
     */
    virtual void loadListFinished(cocos2d::CCArray* objects, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a0450
     * @note[short] MacOS (Intel): 0x311260
     * @note[short] Windows: 0x4cb410
     * @note[short] iOS: 0x1a5024
     * @note[short] Android
     */
    virtual void loadListFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a0478
     * @note[short] MacOS (Intel): 0x3112a0
     * @note[short] Windows: 0x4cb570
     * @note[short] iOS: 0x1a504c
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a0384
     * @note[short] MacOS (Intel): 0x311190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a0aec
     * @note[short] MacOS (Intel): 0x3118a0
     * @note[short] Windows: 0x4cb750
     * @note[short] iOS: 0x1a5388
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x2a0150
     * @note[short] MacOS (Intel): 0x310f30
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x1a4d8c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a0198
     * @note[short] MacOS (Intel): 0x310f80
     * @note[short] Windows: 0x4cbbc0
     * @note[short] iOS: 0x1a4dd4
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a018c
     * @note[short] MacOS (Intel): 0x310f60
     * @note[short] Windows: 0x4cbbd0
     * @note[short] iOS: 0x1a4dc8
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a01a4
     * @note[short] MacOS (Intel): 0x310fa0
     * @note[short] Windows: 0x4cb420
     * @note[short] iOS: 0x1a4de0
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* artists);

    /**
     * @note[short] MacOS (ARM): 0x2a0a64
     * @note[short] MacOS (Intel): 0x311800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a5300
     * @note[short] Android
     */
    void updateLevelsLabel();
    cocos2d::CCArray* m_topArtists;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    void* m_unkPtr;
    cocos2d::CCLabelBMFont* m_pageInfoLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_unkSize4;
    int m_page;
};
