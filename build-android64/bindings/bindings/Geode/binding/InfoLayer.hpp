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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6b47d0
     * @note[short] MacOS (Intel): 0x7ae1d0
     * @note[short] Windows: 0x2ba8d0
     * @note[short] iOS: 0x34f890
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* level, GJUserScore* score, GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x6b84ac
     * @note[short] MacOS (Intel): 0x7b23d0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x352b38
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6b83c0
     * @note[short] MacOS (Intel): 0x7b22c0
     * @note[short] Windows: 0x2be210
     * @note[short] iOS: 0x352b2c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6b931c
     * @note[short] MacOS (Intel): 0x7b3250
     * @note[short] Windows: 0x2bf6a0
     * @note[short] iOS: 0x353354
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6b85ec
     * @note[short] MacOS (Intel): 0x7b2530
     * @note[short] Windows: 0x2beb50
     * @note[short] iOS: 0x352bc0
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* comments, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6b86d0
     * @note[short] MacOS (Intel): 0x7b2600
     * @note[short] Windows: 0x2bebc0
     * @note[short] iOS: 0x352c30
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6b877c
     * @note[short] MacOS (Intel): 0x7b26a0
     * @note[short] Windows: 0x2bec10
     * @note[short] iOS: 0x352c8c
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6b8f44
     * @note[short] MacOS (Intel): 0x7b2e00
     * @note[short] Windows: 0x2bef50
     * @note[short] iOS: 0x353084
     * @note[short] Android
     */
    virtual void commentUploadFinished(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x6b9050
     * @note[short] MacOS (Intel): 0x7b2f50
     * @note[short] Windows: 0x2bf020
     * @note[short] iOS: 0x353114
     * @note[short] Android
     */
    virtual void commentUploadFailed(int parentID, CommentError errorType);

    /**
     * @note[short] MacOS (ARM): 0x6b8dd4
     * @note[short] MacOS (Intel): 0x7b2c70
     * @note[short] Windows: 0x2bee00
     * @note[short] iOS: 0x352fc4
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x6b8188
     * @note[short] MacOS (Intel): 0x7b2070
     * @note[short] Windows: 0x2bd3b0
     * @note[short] iOS: 0x352a38
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x6b6dac
     * @note[short] MacOS (Intel): 0x7b0bb0
     * @note[short] Windows: 0x2bce50
     * @note[short] iOS: 0x351a34
     * @note[short] Android
     */
    void confirmReport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b7fe8
     * @note[short] MacOS (Intel): 0x7b1ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getAccountID();

    /**
     * @note[short] MacOS (ARM): 0x6b704c
     * @note[short] MacOS (Intel): 0x7b0e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getID();

    /**
     * @note[short] MacOS (ARM): 0x6b7fa8
     * @note[short] MacOS (Intel): 0x7b1e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getRealID();

    /**
     * @note[short] MacOS (ARM): 0x6b7124
     * @note[short] MacOS (Intel): 0x7b0f50
     * @note[short] Windows: 0x2bc9b0
     * @note[short] iOS: 0x351c8c
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x6b4920
     * @note[short] MacOS (Intel): 0x7ae380
     * @note[short] Windows: 0x2baa70
     * @note[short] iOS: 0x34f994
     * @note[short] Android
     */
    bool init(GJGameLevel* level, GJUserScore* score, GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x6b84e4
     * @note[short] MacOS (Intel): 0x7b2410
     * @note[short] Windows: 0x2be220
     * @note[short] iOS: 0x352b70
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6b7480
     * @note[short] MacOS (Intel): 0x7b1290
     * @note[short] Windows: 0x2be350
     * @note[short] iOS: 0x351f28
     * @note[short] Android
     */
    void loadPage(int page, bool noSetup);

    /**
     * @note[short] MacOS (ARM): 0x6b7090
     * @note[short] MacOS (Intel): 0x7b0e90
     * @note[short] Windows: 0x2be190
     * @note[short] iOS: 0x351bf8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b69a8
     * @note[short] MacOS (Intel): 0x7b0760
     * @note[short] Windows: 0x2bd5f0
     * @note[short] iOS: 0x351720
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b8018
     * @note[short] MacOS (Intel): 0x7b1f20
     * @note[short] Windows: 0x2bd270
     * @note[short] iOS: 0x3528ec
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b7474
     * @note[short] MacOS (Intel): 0x7b1280
     * @note[short] Windows: 0x2bdba0
     * @note[short] iOS: 0x351f1c
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b79b0
     * @note[short] MacOS (Intel): 0x7b1860
     * @note[short] Windows: 0x2bdbb0
     * @note[short] iOS: 0x3523c8
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b6620
     * @note[short] MacOS (Intel): 0x7b03c0
     * @note[short] Windows: 0x2bd4d0
     * @note[short] iOS: 0x351418
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b7114
     * @note[short] MacOS (Intel): 0x7b0f30
     * @note[short] Windows: 0x2bef30
     * @note[short] iOS: 0x351c7c
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b6874
     * @note[short] MacOS (Intel): 0x7b0610
     * @note[short] Windows: 0x2bd530
     * @note[short] iOS: 0x351660
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b7104
     * @note[short] MacOS (Intel): 0x7b0f10
     * @note[short] Windows: 0x2bef40
     * @note[short] iOS: 0x351c6c
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b7ef8
     * @note[short] MacOS (Intel): 0x7b1dd0
     * @note[short] Windows: 0x2bccf0
     * @note[short] iOS: 0x35283c
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b828c
     * @note[short] MacOS (Intel): 0x7b2170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b915c
     * @note[short] MacOS (Intel): 0x7b3070
     * @note[short] Windows: 0x2bf2c0
     * @note[short] iOS: 0x3531e8
     * @note[short] Android
     */
    void reloadWindow();

    /**
     * @note[short] MacOS (ARM): 0x6b77dc
     * @note[short] MacOS (Intel): 0x7b1650
     * @note[short] Windows: 0x2be8c0
     * @note[short] iOS: 0x3521f4
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* comments);

    /**
     * @note[short] MacOS (ARM): 0x6b6678
     * @note[short] MacOS (Intel): 0x7b0410
     * @note[short] Windows: 0x2bcaf0
     * @note[short] iOS: 0x351468
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x6b7208
     * @note[short] MacOS (Intel): 0x7b1030
     * @note[short] Windows: 0x2bf4e0
     * @note[short] iOS: 0x351d70
     * @note[short] Android
     */
    void toggleCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b72e8
     * @note[short] MacOS (Intel): 0x7b1110
     * @note[short] Windows: 0x2bf170
     * @note[short] iOS: 0x351dcc
     * @note[short] Android
     */
    void toggleExtendedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b7318
     * @note[short] MacOS (Intel): 0x7b1140
     * @note[short] Windows: 0x2bf1d0
     * @note[short] iOS: 0x351dfc
     * @note[short] Android
     */
    void toggleSmallCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b73d0
     * @note[short] MacOS (Intel): 0x7b11d0
     * @note[short] Windows: 0x2bf5a0
     * @note[short] iOS: 0x351e78
     * @note[short] Android
     */
    void updateCommentModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x6b8d64
     * @note[short] MacOS (Intel): 0x7b2bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x352f54
     * @note[short] Android
     */
    void updateLevelsLabel();
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    gd::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
