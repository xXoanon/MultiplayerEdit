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
#include "FLAlertLayerProtocol.hpp"
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "UserInfoDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "LeaderboardManagerDelegate.hpp"

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6be344
     * @note[short] MacOS (Intel): 0x7b8570
     * @note[short] Windows: 0x3be660
     * @note[short] iOS: 0x1969a4
     * @note[short] Android
     */
    static ProfilePage* create(int accountID, bool ownProfile);

    /**
     * @note[short] MacOS (ARM): 0x6c63dc
     * @note[short] MacOS (Intel): 0x7c0f60
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x19cd58
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6c4dcc
     * @note[short] MacOS (Intel): 0x7bf920
     * @note[short] Windows: 0x3c5120
     * @note[short] iOS: 0x19c0ec
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6c4ffc
     * @note[short] MacOS (Intel): 0x7bfba0
     * @note[short] Windows: 0x3c53b0
     * @note[short] iOS: 0x19c234
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6c4840
     * @note[short] MacOS (Intel): 0x7bf3d0
     * @note[short] Windows: 0x3c4af0
     * @note[short] iOS: 0x19bd68
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x6c4ec0
     * @note[short] MacOS (Intel): 0x7bfa30
     * @note[short] Windows: 0x3c5270
     * @note[short] iOS: 0x19c0f8
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x6c4f54
     * @note[short] MacOS (Intel): 0x7bfb00
     * @note[short] Windows: 0x3c5360
     * @note[short] iOS: 0x19c18c
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x6c52dc
     * @note[short] MacOS (Intel): 0x7bfec0
     * @note[short] Windows: 0x3c5ee0
     * @note[short] iOS: 0x19c370
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x6c568c
     * @note[short] MacOS (Intel): 0x7c02b0
     * @note[short] Windows: 0x3c5fd0
     * @note[short] iOS: 0x19c5d8
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x6c575c
     * @note[short] MacOS (Intel): 0x7c0370
     * @note[short] Windows: 0x3c6020
     * @note[short] iOS: 0x19c644
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x6c5970
     * @note[short] MacOS (Intel): 0x7c0580
     * @note[short] Windows: 0x3c6630
     * @note[short] iOS: 0x19c764
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* comments, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6c5a7c
     * @note[short] MacOS (Intel): 0x7c0670
     * @note[short] Windows: 0x3c66b0
     * @note[short] iOS: 0x19c7e8
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6c5b50
     * @note[short] MacOS (Intel): 0x7c0740
     * @note[short] Windows: 0x3c6710
     * @note[short] iOS: 0x19c858
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6c60fc
     * @note[short] MacOS (Intel): 0x7c0c70
     * @note[short] Windows: 0x3c6910
     * @note[short] iOS: 0x19cb20
     * @note[short] Android
     */
    virtual void commentUploadFinished(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x6c619c
     * @note[short] MacOS (Intel): 0x7c0d00
     * @note[short] Windows: 0x3c6960
     * @note[short] iOS: 0x19cb78
     * @note[short] Android
     */
    virtual void commentUploadFailed(int parentID, CommentError errorType);

    /**
     * @note[short] MacOS (ARM): 0x6c6274
     * @note[short] MacOS (Intel): 0x7c0dd0
     * @note[short] Windows: 0x3c6a80
     * @note[short] iOS: 0x19cc28
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x6c49f4
     * @note[short] MacOS (Intel): 0x7bf5b0
     * @note[short] Windows: 0x3c4de0
     * @note[short] iOS: 0x19bee4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x6c4a7c
     * @note[short] MacOS (Intel): 0x7bf630
     * @note[short] Windows: 0x3c4e30
     * @note[short] iOS: 0x19bf54
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x6c4c6c
     * @note[short] MacOS (Intel): 0x7bf800
     * @note[short] Windows: 0x3c4ff0
     * @note[short] iOS: 0x19c068
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x6c4788
     * @note[short] MacOS (Intel): 0x7bf2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19bcbc
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x6be4b4
     * @note[short] MacOS (Intel): 0x7b8780
     * @note[short] Windows: 0x3be840
     * @note[short] iOS: 0x196a28
     * @note[short] Android
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] MacOS (ARM): 0x6c5868
     * @note[short] MacOS (Intel): 0x7c0460
     * @note[short] Windows: 0x3c60a0
     * @note[short] iOS: 0x19c6c8
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6beef8
     * @note[short] MacOS (Intel): 0x7b9230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isOnWatchlist(int id);

    /**
     * @note[short] MacOS (ARM): 0x6c5390
     * @note[short] MacOS (Intel): 0x7bff70
     * @note[short] Windows: 0x3c61d0
     * @note[short] iOS: 0x19c424
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6bf784
     * @note[short] MacOS (Intel): 0x7b9b40
     * @note[short] Windows: 0x3bfe80
     * @note[short] iOS: 0x197c74
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x6c3448
     * @note[short] MacOS (Intel): 0x7bded0
     * @note[short] Windows: 0x3c42d0
     * @note[short] iOS: 0x19b088
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6bef00
     * @note[short] MacOS (Intel): 0x7b9240
     * @note[short] Windows: 0x3c50a0
     * @note[short] iOS: 0x197460
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3cfc
     * @note[short] MacOS (Intel): 0x7be7d0
     * @note[short] Windows: 0x3c3d20
     * @note[short] iOS: 0x19b564
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c267c
     * @note[short] MacOS (Intel): 0x7bcf60
     * @note[short] Windows: 0x3c3c90
     * @note[short] iOS: 0x19a660
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c2da0
     * @note[short] MacOS (Intel): 0x7bd7e0
     * @note[short] Windows: 0x3c32b0
     * @note[short] iOS: 0x19abd0
     * @note[short] Android
     */
    void onCopyName(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6bf170
     * @note[short] MacOS (Intel): 0x7b94c0
     * @note[short] Windows: 0x3c4520
     * @note[short] iOS: 0x1976cc
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c30ec
     * @note[short] MacOS (Intel): 0x7bdb30
     * @note[short] Windows: 0x3c3ee0
     * @note[short] iOS: 0x19ae20
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3bc4
     * @note[short] MacOS (Intel): 0x7be690
     * @note[short] Windows: 0x3c5e80
     * @note[short] iOS: 0x19b4fc
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c26b4
     * @note[short] MacOS (Intel): 0x7bcfa0
     * @note[short] Windows: 0x3c34e0
     * @note[short] iOS: 0x19a698
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3b38
     * @note[short] MacOS (Intel): 0x7be600
     * @note[short] Windows: 0x3c5e50
     * @note[short] iOS: 0x19b4d8
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c37ac
     * @note[short] MacOS (Intel): 0x7be240
     * @note[short] Windows: 0x3c3980
     * @note[short] iOS: 0x19b238
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3978
     * @note[short] MacOS (Intel): 0x7be420
     * @note[short] Windows: 0x3c3b30
     * @note[short] iOS: 0x19b37c
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c4834
     * @note[short] MacOS (Intel): 0x7bf3b0
     * @note[short] Windows: 0x3c68f0
     * @note[short] iOS: 0x19bd5c
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c4828
     * @note[short] MacOS (Intel): 0x7bf390
     * @note[short] Windows: 0x3c6900
     * @note[short] iOS: 0x19bd50
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3c50
     * @note[short] MacOS (Intel): 0x7be720
     * @note[short] Windows: 0x3c5eb0
     * @note[short] iOS: 0x19b520
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c2fe0
     * @note[short] MacOS (Intel): 0x7bda20
     * @note[short] Windows: 0x3c3cd0
     * @note[short] iOS: 0x19add0
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c3cdc
     * @note[short] MacOS (Intel): 0x7be7b0
     * @note[short] Windows: 0x3c5ce0
     * @note[short] iOS: 0x19b544
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c21b4
     * @note[short] MacOS (Intel): 0x7bcb40
     * @note[short] Windows: 0x3c5510
     * @note[short] iOS: 0x19a290
     * @note[short] Android
     */
    void onSocialPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c1df4
     * @note[short] MacOS (Intel): 0x7bc760
     * @note[short] Windows: 0x3c30e0
     * @note[short] iOS: 0x199f08
     * @note[short] Android
     */
    void onStatInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6bf3c8
     * @note[short] MacOS (Intel): 0x7b9740
     * @note[short] Windows: 0x3bf7f0
     * @note[short] iOS: 0x1978bc
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6bef78
     * @note[short] MacOS (Intel): 0x7b92c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1974d8
     * @note[short] Android
     */
    void setupComments();

    /**
     * @note[short] MacOS (ARM): 0x6bf640
     * @note[short] MacOS (Intel): 0x7b99f0
     * @note[short] Windows: 0x3c64c0
     * @note[short] iOS: 0x197b30
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* comments);

    /**
     * @note[short] MacOS (ARM): 0x6c46b8
     * @note[short] MacOS (Intel): 0x7bf210
     * @note[short] Windows: 0x3c5130
     * @note[short] iOS: 0x19bc24
     * @note[short] Android
     */
    void showNoAccountError();

    /**
     * @note[short] MacOS (ARM): 0x6c5150
     * @note[short] MacOS (Intel): 0x7bfce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleMainPageVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x6c20f4
     * @note[short] MacOS (Intel): 0x7bca90
     * @note[short] Windows: 0x3c3030
     * @note[short] iOS: 0x19a1dc
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6c60f8
     * @note[short] MacOS (Intel): 0x7c0c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x6c5280
     * @note[short] MacOS (Intel): 0x7bfe30
     * @note[short] Windows: 0x3c6880
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    gd::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    bool m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    UploadActionPopup* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
    int m_unk2;
};
