#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "LevelManagerDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x4bee48
     * @note[short] MacOS (Intel): 0x571090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1be4d0
     * @note[short] Android: Rebinded
     */
     ~GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x4bef7c
     * @note[short] MacOS (Intel): 0x571260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1be604
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4bef30
     * @note[short] MacOS (Intel): 0x571220
     * @note[short] Windows: 0x1f8ae0
     * @note[short] iOS: 0x1be5b8
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4c1388
     * @note[short] MacOS (Intel): 0x573800
     * @note[short] Windows: 0x1fb030
     * @note[short] iOS: 0x1c04f0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x4c0c7c
     * @note[short] MacOS (Intel): 0x573160
     * @note[short] Windows: 0x1fa760
     * @note[short] iOS: 0x1bffbc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4c0da8
     * @note[short] MacOS (Intel): 0x573290
     * @note[short] Windows: 0x1fafc0
     * @note[short] iOS: 0x1c0008
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x4c0bdc
     * @note[short] MacOS (Intel): 0x5730c0
     * @note[short] Windows: 0x1fa660
     * @note[short] iOS: 0x1bff1c
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x4c0b3c
     * @note[short] MacOS (Intel): 0x573020
     * @note[short] Windows: 0x1fa660
     * @note[short] iOS: 0x1bfe7c
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x4c010c
     * @note[short] MacOS (Intel): 0x572550
     * @note[short] Windows: 0x1f99f0
     * @note[short] iOS: 0x1bf684
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* gauntlets, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x4c02b4
     * @note[short] MacOS (Intel): 0x572720
     * @note[short] Windows: 0x1f9bb0
     * @note[short] iOS: 0x1bf79c
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x4c0a40
     * @note[short] MacOS (Intel): 0x572f20
     * @note[short] Windows: 0x1fa4f0
     * @note[short] iOS: 0x1bfd84
     * @note[short] Android
     */
    void goToPage(int page, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x4bf054
     * @note[short] MacOS (Intel): 0x571380
     * @note[short] Windows: 0x1f8c30
     * @note[short] iOS: 0x1be670
     * @note[short] Android
     */
    bool init(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4bfa8c
     * @note[short] MacOS (Intel): 0x571e90
     * @note[short] Windows: 0x1fa6a0
     * @note[short] iOS: 0x1bf088
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bfb00
     * @note[short] MacOS (Intel): 0x571f00
     * @note[short] Windows: 0x1f9790
     * @note[short] iOS: 0x1bf104
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bfa78
     * @note[short] MacOS (Intel): 0x571e70
     * @note[short] Windows: 0x1fa4b0
     * @note[short] iOS: 0x1bf074
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c04d0
     * @note[short] MacOS (Intel): 0x572960
     * @note[short] Windows: 0x1fa770
     * @note[short] iOS: 0x1bf900
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bfa64
     * @note[short] MacOS (Intel): 0x571e50
     * @note[short] Windows: 0x1fa4d0
     * @note[short] iOS: 0x1bf060
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bfbbc
     * @note[short] MacOS (Intel): 0x571fb0
     * @note[short] Windows: 0x1f98d0
     * @note[short] iOS: 0x1bf19c
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c0e1c
     * @note[short] MacOS (Intel): 0x5732f0
     * @note[short] Windows: 0x1fb080
     * @note[short] iOS: 0x1c0078
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] MacOS (ARM): 0x4bfc64
     * @note[short] MacOS (Intel): 0x572070
     * @note[short] Windows: 0x1f9d30
     * @note[short] iOS: 0x1bf244
     * @note[short] Android
     */
    void setupGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4c1250
     * @note[short] MacOS (Intel): 0x5736c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showUnlockGauntlet();

    /**
     * @note[short] MacOS (ARM): 0x4c0b34
     * @note[short] MacOS (Intel): 0x573010
     * @note[short] Windows: 0x1fa650
     * @note[short] iOS: 0x1bfe74
     * @note[short] Android
     */
    void unblockPlay();

    /**
     * @note[short] MacOS (ARM): 0x4c17ac
     * @note[short] MacOS (Intel): 0x573bd0
     * @note[short] Windows: 0x1fc0e0
     * @note[short] iOS: 0x1c08a8
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x4c14c8
     * @note[short] MacOS (Intel): 0x573940
     * @note[short] Windows: 0x1fb660
     * @note[short] iOS: 0x1c0630
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x4c17e8
     * @note[short] MacOS (Intel): 0x573c20
     * @note[short] Windows: 0x1fba00
     * @note[short] iOS: 0x1c08e4
     * @note[short] Android
     */
    void unlockAnimationStep3();

    /**
     * @note[short] MacOS (ARM): 0x4c00bc
     * @note[short] MacOS (Intel): 0x572500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_backgroundSprite;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    bool m_exiting;
    bool m_playing;
    TextArea* m_tryAgainText;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCDictionary* m_gauntlets;
    bool m_playBlocked;
    int m_gauntletID;
    bool m_videoPlaying;
    bool m_locked;
};
