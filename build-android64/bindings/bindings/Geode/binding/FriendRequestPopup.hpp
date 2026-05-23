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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x243b00
     * @note[short] MacOS (Intel): 0x2a4dc0
     * @note[short] Windows: 0x2959d0
     * @note[short] iOS: 0x2d8b2c
     * @note[short] Android
     */
    static FriendRequestPopup* create(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x244fb8
     * @note[short] MacOS (Intel): 0x2a6320
     * @note[short] Windows: 0x296fb0
     * @note[short] iOS: 0x2d9de0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x245094
     * @note[short] MacOS (Intel): 0x2a6410
     * @note[short] Windows: 0x296fc0
     * @note[short] iOS: 0x2d9dec
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x245288
     * @note[short] MacOS (Intel): 0x2a65e0
     * @note[short] Windows: 0x297170
     * @note[short] iOS: 0x2d9f1c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x2453f0
     * @note[short] MacOS (Intel): 0x2a6730
     * @note[short] Windows: 0x297230
     * @note[short] iOS: 0x2d9fb4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x245574
     * @note[short] MacOS (Intel): 0x2a68a0
     * @note[short] Windows: 0x297290
     * @note[short] iOS: 0x2da030
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x244f3c
     * @note[short] MacOS (Intel): 0x2a62b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d9d4c
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x243c20
     * @note[short] MacOS (Intel): 0x2a4f30
     * @note[short] Windows: 0x295b10
     * @note[short] iOS: 0x2d8c04
     * @note[short] Android
     */
    bool init(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x2442a0
     * @note[short] MacOS (Intel): 0x2a5560
     * @note[short] Windows: 0x296180
     * @note[short] iOS: 0x2d9238
     * @note[short] Android
     */
    void loadFromGJFriendRequest(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x244b20
     * @note[short] MacOS (Intel): 0x2a5e90
     * @note[short] Windows: 0x296b40
     * @note[short] iOS: 0x2d9aa4
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x244c9c
     * @note[short] MacOS (Intel): 0x2a6030
     * @note[short] Windows: 0x296d50
     * @note[short] iOS: 0x2d9bd8
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x244234
     * @note[short] MacOS (Intel): 0x2a54f0
     * @note[short] Windows: 0x296aa0
     * @note[short] iOS: 0x2d91cc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x244bdc
     * @note[short] MacOS (Intel): 0x2a5f60
     * @note[short] Windows: 0x296c50
     * @note[short] iOS: 0x2d9b3c
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);
    void* m_unk;
    GJFriendRequest* m_request;
    LoadingCircle* m_circle;
    CCMenuItemSpriteExtra* m_closeBtn;
    UploadActionPopup* m_popup;
};
