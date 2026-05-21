#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJMPDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TextInputDelegate.hpp"

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3f881c
     * @note[short] MacOS (Intel): 0x493ba0
     * @note[short] Android
     */
    static MPLobbyLayer* create(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f872c
     * @note[short] MacOS (Intel): 0x493a60
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f8c9c
     * @note[short] MacOS (Intel): 0x494030
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f93cc
     * @note[short] MacOS (Intel): 0x494830
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f8dfc
     * @note[short] MacOS (Intel): 0x4941b0
     * @note[short] Android
     */
    virtual void joinLobbyFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x3f9210
     * @note[short] MacOS (Intel): 0x494660
     * @note[short] Android
     */
    virtual void joinLobbyFailed(int id, GJMPErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x3f9108
     * @note[short] MacOS (Intel): 0x494510
     * @note[short] Android
     */
    virtual void updateComments();

    /**
     * @note[short] MacOS (ARM): 0x3f91f8
     * @note[short] MacOS (Intel): 0x494640
     * @note[short] Android
     */
    virtual void didUploadMPComment(int id);

    /**
     * @note[short] MacOS (ARM): 0x3f9324
     * @note[short] MacOS (Intel): 0x494760
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f932c
     * @note[short] MacOS (Intel): 0x494780
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f9334
     * @note[short] MacOS (Intel): 0x4947a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f93f0
     * @note[short] MacOS (Intel): 0x494870
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f933c
     * @note[short] MacOS (Intel): 0x4947c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f93f8
     * @note[short] MacOS (Intel): 0x494890
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3f9620
     * @note[short] MacOS (Intel): 0x494ab0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3f97d8
     * @note[short] MacOS (Intel): 0x494c60
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x3f88f4
     * @note[short] MacOS (Intel): 0x493cc0
     * @note[short] Android
     */
    bool init(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f8c58
     * @note[short] MacOS (Intel): 0x493ff0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f897c
     * @note[short] MacOS (Intel): 0x493d50
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f8a78
     * @note[short] MacOS (Intel): 0x493e50
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f8a7c
     * @note[short] MacOS (Intel): 0x493e60
     * @note[short] Android
     */
    void onBtn3(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f8a80
     * @note[short] MacOS (Intel): 0x493e70
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f894c
     * @note[short] MacOS (Intel): 0x493d20
     * @note[short] Android
     */
    void onUpdateLobby();

    /**
     * @note[short] MacOS (ARM): 0x3f8b74
     * @note[short] MacOS (Intel): 0x493f10
     * @note[short] Android
     */
    void postComment();

    /**
     * @note[short] MacOS (ARM): 0x3f8d28
     * @note[short] MacOS (Intel): 0x4940c0
     * @note[short] Android
     */
    void tryExitLobby();

    /**
     * @note[short] MacOS (ARM): 0x3f88f8
     * @note[short] MacOS (Intel): 0x493cd0
     * @note[short] Android
     */
    void updateLobby(float delay);
    int m_lobbyID;
    cocos2d::CCLabelBMFont* m_lobbyLabel;
    UploadActionPopup* m_uploadPopup;
    GJCommentListLayer* m_listLayer;
    CCTextInputNode* m_commentInput;
    float m_lobbyDelay;
    bool m_awaitingLobby;
    bool m_lobbyJoined;
};
