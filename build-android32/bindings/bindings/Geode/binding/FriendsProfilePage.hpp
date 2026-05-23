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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x577cd0
     * @note[short] MacOS (Intel): 0x657a70
     * @note[short] Windows: 0x13fc50
     * @note[short] iOS: 0x1d8cb0
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x578bf8
     * @note[short] MacOS (Intel): 0x658ab0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1d9a34
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x578bec
     * @note[short] MacOS (Intel): 0x658a80
     * @note[short] Windows: 0x140ce0
     * @note[short] iOS: 0x1d9a28
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x57888c
     * @note[short] MacOS (Intel): 0x658710
     * @note[short] Windows: 0x140810
     * @note[short] iOS: 0x1d97e0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x57899c
     * @note[short] MacOS (Intel): 0x658850
     * @note[short] Windows: 0x140960
     * @note[short] iOS: 0x1d98ec
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType type, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x578ac4
     * @note[short] MacOS (Intel): 0x658950
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x1d9984
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x578ae0
     * @note[short] MacOS (Intel): 0x658990
     * @note[short] Windows: 0x1409d0
     * @note[short] iOS: 0x1d99a0
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x577df8
     * @note[short] MacOS (Intel): 0x657c00
     * @note[short] Windows: 0x13fda0
     * @note[short] iOS: 0x1d8d90
     * @note[short] Android
     */
    bool init(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x578518
     * @note[short] MacOS (Intel): 0x658390
     * @note[short] Windows: 0x140b90
     * @note[short] iOS: 0x1d94a0
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x578460
     * @note[short] MacOS (Intel): 0x6582d0
     * @note[short] Windows: 0x140c20
     * @note[short] iOS: 0x1d93e8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5785a4
     * @note[short] MacOS (Intel): 0x658420
     * @note[short] Windows: 0x140a70
     * @note[short] iOS: 0x1d952c
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x578608
     * @note[short] MacOS (Intel): 0x658490
     * @note[short] Windows: 0x1404b0
     * @note[short] iOS: 0x1d9590
     * @note[short] Android
     */
    void setupUsersBrowser(cocos2d::CCArray* users, UserListType type);
    UserListType m_type;
    cocos2d::CCLabelBMFont* m_noInternet;
    cocos2d::CCLabelBMFont* m_totalFriends;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    void* m_unk532;
    cocos2d::CCArray* m_users;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
