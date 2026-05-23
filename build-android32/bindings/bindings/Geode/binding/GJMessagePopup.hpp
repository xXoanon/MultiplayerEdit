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
#include "DownloadMessageDelegate.hpp"

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x245794
     * @note[short] MacOS (Intel): 0x2a6b40
     * @note[short] Windows: 0x297370
     * @note[short] iOS: 0x2da1bc
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x246ff4
     * @note[short] MacOS (Intel): 0x2a84a0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x2db6b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x247070
     * @note[short] MacOS (Intel): 0x2a8510
     * @note[short] Windows: 0x298b10
     * @note[short] iOS: 0x2db730
     * @note[short] Android
     */
    virtual void downloadMessageFinished(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x247138
     * @note[short] MacOS (Intel): 0x2a85d0
     * @note[short] Windows: 0x298b60
     * @note[short] iOS: 0x2db7a4
     * @note[short] Android
     */
    virtual void downloadMessageFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x2471e8
     * @note[short] MacOS (Intel): 0x2a8670
     * @note[short] Windows: 0x298ba0
     * @note[short] iOS: 0x2db84c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x2473d0
     * @note[short] MacOS (Intel): 0x2a8840
     * @note[short] Windows: 0x298d30
     * @note[short] iOS: 0x2db970
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x247540
     * @note[short] MacOS (Intel): 0x2a8990
     * @note[short] Windows: 0x298e00
     * @note[short] iOS: 0x2dba10
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x24766c
     * @note[short] MacOS (Intel): 0x2a8a90
     * @note[short] Windows: 0x298e80
     * @note[short] iOS: 0x2dbaac
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x246f78
     * @note[short] MacOS (Intel): 0x2a8430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2db620
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x2458bc
     * @note[short] MacOS (Intel): 0x2a6cc0
     * @note[short] Windows: 0x2974b0
     * @note[short] iOS: 0x2da29c
     * @note[short] Android
     */
    bool init(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x24626c
     * @note[short] MacOS (Intel): 0x2a7680
     * @note[short] Windows: 0x297dc0
     * @note[short] iOS: 0x2dabe0
     * @note[short] Android
     */
    void loadFromGJMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x246a78
     * @note[short] MacOS (Intel): 0x2a7ee0
     * @note[short] Windows: 0x2988e0
     * @note[short] iOS: 0x2db340
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x246230
     * @note[short] MacOS (Intel): 0x2a7650
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x2daba4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x246d34
     * @note[short] MacOS (Intel): 0x2a8180
     * @note[short] Windows: 0x298750
     * @note[short] iOS: 0x2db4d0
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24683c
     * @note[short] MacOS (Intel): 0x2a7c90
     * @note[short] Windows: 0x298410
     * @note[short] iOS: 0x2db0f8
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);
    bool m_actionSuccess;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJUserMessage* m_message;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    UploadActionPopup* m_uploadPopup;
};
