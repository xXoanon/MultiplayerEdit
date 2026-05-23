#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelDownloadDelegate.hpp"
#include "LevelUpdateDelegate.hpp"
#include "RateLevelDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "LevelDeleteDelegate.hpp"
#include "NumberInputDelegate.hpp"
#include "SetIDPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2aebc
     * @note[short] Android: Out of line
     */
     LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x259774
     * @note[short] MacOS (Intel): 0x2bd020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24128
     * @note[short] Android: Rebinded
     */
     ~LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x259920
     * @note[short] MacOS (Intel): 0x2bd290
     * @note[short] Windows: 0x2f7110
     * @note[short] iOS: 0x242c4
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x2598c4
     * @note[short] MacOS (Intel): 0x2bd240
     * @note[short] Windows: 0x2f70c0
     * @note[short] iOS: 0x24268
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x261140
     * @note[short] MacOS (Intel): 0x2c4e20
     * @note[short] Windows: 0x300820
     * @note[short] iOS: 0x2ae40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x26114c
     * @note[short] MacOS (Intel): 0x2c4e50
     * @note[short] Windows: 0x300830
     * @note[short] iOS: 0x2ae4c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x260930
     * @note[short] MacOS (Intel): 0x2c4620
     * @note[short] Windows: 0x2fd690
     * @note[short] iOS: 0x2a860
     * @note[short] Android
     */
    virtual void numberInputClosed(NumberInputLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x25ee7c
     * @note[short] MacOS (Intel): 0x2c2ab0
     * @note[short] Windows: 0x2f99e0
     * @note[short] iOS: 0x29234
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x25fbac
     * @note[short] MacOS (Intel): 0x2c3850
     * @note[short] Windows: 0x2fba60
     * @note[short] iOS: 0x29e54
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x25fe6c
     * @note[short] MacOS (Intel): 0x2c3b40
     * @note[short] Windows: 0x2fbdd0
     * @note[short] iOS: 0x2a0d0
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x25ff50
     * @note[short] MacOS (Intel): 0x2c3c30
     * @note[short] Windows: 0x2fbf00
     * @note[short] iOS: 0x2a190
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* level, UpdateResponse response);

    /**
     * @note[short] MacOS (ARM): 0x260158
     * @note[short] MacOS (Intel): 0x2c3e20
     * @note[short] Windows: 0x2fc060
     * @note[short] iOS: 0x2a2b0
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x260240
     * @note[short] MacOS (Intel): 0x2c3f20
     * @note[short] Windows: 0x2fc190
     * @note[short] iOS: 0x2a374
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x260338
     * @note[short] MacOS (Intel): 0x2c4030
     * @note[short] Windows: 0x2fc2d0
     * @note[short] iOS: 0x2a444
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x260e28
     * @note[short] MacOS (Intel): 0x2c4b10
     * @note[short] Windows: 0x2fe710
     * @note[short] iOS: 0x2ac64
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] MacOS (ARM): 0x260e34
     * @note[short] MacOS (Intel): 0x2c4b40
     * @note[short] Windows: 0x2fe990
     * @note[short] iOS: 0x2ac70
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x260f58
     * @note[short] MacOS (Intel): 0x2c4c50
     * @note[short] Windows: 0x300260
     * @note[short] iOS: 0x2ace0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x25efd4
     * @note[short] MacOS (Intel): 0x2c2bd0
     * @note[short] Windows: 0x2f9bd0
     * @note[short] iOS: 0x2935c
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x260528
     * @note[short] MacOS (Intel): 0x2c4210
     * @note[short] Windows: 0x2fc410
     * @note[short] iOS: 0x2a5c8
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x25e468
     * @note[short] MacOS (Intel): 0x2c2080
     * @note[short] Windows: 0x2fd860
     * @note[short] iOS: 0x28a1c
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25db80
     * @note[short] MacOS (Intel): 0x2c1790
     * @note[short] Windows: 0x2fd9d0
     * @note[short] iOS: 0x28280
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ebcc
     * @note[short] MacOS (Intel): 0x2c2810
     * @note[short] Windows: 0x2ff2f0
     * @note[short] iOS: 0x29004
     * @note[short] Android
     */
    void confirmMoveToBottom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25eaec
     * @note[short] MacOS (Intel): 0x2c2730
     * @note[short] Windows: 0x2ff1b0
     * @note[short] iOS: 0x28f48
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25e22c
     * @note[short] MacOS (Intel): 0x2c1e80
     * @note[short] Windows: 0x2fdb10
     * @note[short] iOS: 0x28854
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25c42c
     * @note[short] MacOS (Intel): 0x2bffd0
     * @note[short] Windows: 0x2f9fa0
     * @note[short] iOS: 0x26c7c
     * @note[short] Android
     */
    void downloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x260ebc
     * @note[short] MacOS (Intel): 0x2c4bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x260ea8
     * @note[short] MacOS (Intel): 0x2c4ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x259a7c
     * @note[short] MacOS (Intel): 0x2bd470
     * @note[short] Windows: 0x2f7340
     * @note[short] iOS: 0x24348
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x2606a0
     * @note[short] MacOS (Intel): 0x2c4380
     * @note[short] Windows: 0x2fd260
     * @note[short] iOS: 0x2a740
     * @note[short] Android
     */
    void loadLevelStep();

    /**
     * @note[short] MacOS (ARM): 0x25ee24
     * @note[short] MacOS (Intel): 0x2c2a50
     * @note[short] Windows: 0x2f9990
     * @note[short] iOS: 0x291fc
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25e6d4
     * @note[short] MacOS (Intel): 0x2c22d0
     * @note[short] Windows: 0x300730
     * @note[short] iOS: 0x28c14
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260afc
     * @note[short] MacOS (Intel): 0x2c47b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a9dc
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260c40
     * @note[short] MacOS (Intel): 0x2c4920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2aab8
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ea74
     * @note[short] MacOS (Intel): 0x2c26b0
     * @note[short] Windows: 0x2f9c60
     * @note[short] iOS: 0x28ed0
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ea28
     * @note[short] MacOS (Intel): 0x2c2660
     * @note[short] Windows: 0x2f9de0
     * @note[short] iOS: 0x28e84
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25dd68
     * @note[short] MacOS (Intel): 0x2c1970
     * @note[short] Windows: 0x2fd3c0
     * @note[short] iOS: 0x283c4
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25e758
     * @note[short] MacOS (Intel): 0x2c2350
     * @note[short] Windows: 0x2fef60
     * @note[short] iOS: 0x28c98
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25dd9c
     * @note[short] MacOS (Intel): 0x2c19a0
     * @note[short] Windows: 0x2f9d00
     * @note[short] iOS: 0x283f8
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ecb0
     * @note[short] MacOS (Intel): 0x2c28f0
     * @note[short] Windows: 0x2fee10
     * @note[short] iOS: 0x290c0
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25de00
     * @note[short] MacOS (Intel): 0x2c1a10
     * @note[short] Windows: 0x2fe8a0
     * @note[short] iOS: 0x2845c
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260c8c
     * @note[short] MacOS (Intel): 0x2c4970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ab04
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25bc5c
     * @note[short] MacOS (Intel): 0x2bf860
     * @note[short] Windows: 0x2fc430
     * @note[short] iOS: 0x26560
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2607c0
     * @note[short] MacOS (Intel): 0x2c44b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260ce8
     * @note[short] MacOS (Intel): 0x2c49e0
     * @note[short] Windows: 0x2fdf40
     * @note[short] iOS: 0x2ab60
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25dfc0
     * @note[short] MacOS (Intel): 0x2c1bf0
     * @note[short] Windows: 0x2fe720
     * @note[short] iOS: 0x285fc
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25de70
     * @note[short] MacOS (Intel): 0x2c1a90
     * @note[short] Windows: 0x2fe220
     * @note[short] iOS: 0x284cc
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25e1a8
     * @note[short] MacOS (Intel): 0x2c1e00
     * @note[short] Windows: 0x2fe4e0
     * @note[short] iOS: 0x287e0
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ed70
     * @note[short] MacOS (Intel): 0x2c29b0
     * @note[short] Windows: 0x2f9b30
     * @note[short] iOS: 0x2915c
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25dc6c
     * @note[short] MacOS (Intel): 0x2c1870
     * @note[short] Windows: 0x2fecd0
     * @note[short] iOS: 0x2833c
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25bbec
     * @note[short] MacOS (Intel): 0x2bf7e0
     * @note[short] Windows: 0x2feeb0
     * @note[short] iOS: 0x264e8
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260550
     * @note[short] MacOS (Intel): 0x2c4230
     * @note[short] Windows: 0x2fd0b0
     * @note[short] iOS: 0x2a5f0
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x260614
     * @note[short] MacOS (Intel): 0x2c42f0
     * @note[short] Windows: 0x2fd190
     * @note[short] iOS: 0x2a6b4
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x260750
     * @note[short] MacOS (Intel): 0x2c4430
     * @note[short] Windows: 0x2fd310
     * @note[short] iOS: 0x2a7f0
     * @note[short] Android
     */
    void playStep4();

    /**
     * @note[short] MacOS (ARM): 0x25c510
     * @note[short] MacOS (Intel): 0x2c00d0
     * @note[short] Windows: 0x2fae10
     * @note[short] iOS: 0x26d60
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x25d068
     * @note[short] MacOS (Intel): 0x2c0d10
     * @note[short] Windows: 0x2fa2d0
     * @note[short] iOS: 0x2783c
     * @note[short] Android
     */
    void setupPlatformerStats();

    /**
     * @note[short] MacOS (ARM): 0x25d408
     * @note[short] MacOS (Intel): 0x2c1050
     * @note[short] Windows: 0x2fa700
     * @note[short] iOS: 0x27b98
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] MacOS (ARM): 0x25f0d4
     * @note[short] MacOS (Intel): 0x2c2cd0
     * @note[short] Windows: 0x2f9e70
     * @note[short] iOS: 0x293e0
     * @note[short] Android
     */
    bool shouldDownloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x260430
     * @note[short] MacOS (Intel): 0x2c4140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a514
     * @note[short] Android
     */
    void showSongWarning();

    /**
     * @note[short] MacOS (ARM): 0x25ffc0
     * @note[short] MacOS (Intel): 0x2c3c90
     * @note[short] Windows: 0x2fbf70
     * @note[short] iOS: 0x2a200
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse type);

    /**
     * @note[short] MacOS (ARM): 0x25e598
     * @note[short] MacOS (Intel): 0x2c21b0
     * @note[short] Windows: 0x2fd400
     * @note[short] iOS: 0x28b08
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ee5c
     * @note[short] MacOS (Intel): 0x2c2a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] MacOS (ARM): 0x25f178
     * @note[short] MacOS (Intel): 0x2c2d70
     * @note[short] Windows: 0x2ff420
     * @note[short] iOS: 0x294a4
     * @note[short] Android
     */
    void updateLabelValues();

    /**
     * @note[short] MacOS (ARM): 0x25e010
     * @note[short] MacOS (Intel): 0x2c1c50
     * @note[short] Windows: 0x2fea00
     * @note[short] iOS: 0x28648
     * @note[short] Android
     */
    void updateSideButtons();
    bool m_isBusy;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_exactLengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    GJLevelType m_levelType;
    bool m_noUpdateAlert;
    bool m_enterTransitionFinished;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    float m_iconOffset;
    cocos2d::CCPoint m_basePosition;
    float m_baseStarsY;
    bool m_challenge;
    cocos2d::CCScene* m_playScene;
    cocos2d::CCSprite* m_playSprite;
    cocos2d::CCProgressTimer* m_progressTimer;
    CustomSongWidget* m_songWidget;
};
