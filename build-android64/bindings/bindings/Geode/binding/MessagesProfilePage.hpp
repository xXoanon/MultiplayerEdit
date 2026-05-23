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
#include "MessageListDelegate.hpp"

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1d7064
     * @note[short] MacOS (Intel): 0x22d880
     * @note[short] Windows: 0x336570
     * @note[short] iOS: 0x1cbe90
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x1d899c
     * @note[short] MacOS (Intel): 0x22f380
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1cd2bc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1d8990
     * @note[short] MacOS (Intel): 0x22f350
     * @note[short] Windows: 0x337b70
     * @note[short] iOS: 0x1cd2b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1d8508
     * @note[short] MacOS (Intel): 0x22ef30
     * @note[short] Windows: 0x337910
     * @note[short] iOS: 0x1ccfe8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1d8598
     * @note[short] MacOS (Intel): 0x22efa0
     * @note[short] Windows: 0x13eee0
     * @note[short] iOS: 0x1cd078
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1d8620
     * @note[short] MacOS (Intel): 0x22f010
     * @note[short] Windows: 0x337940
     * @note[short] iOS: 0x1cd0e8
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1d87e0
     * @note[short] MacOS (Intel): 0x22f1c0
     * @note[short] Windows: 0x13f0a0
     * @note[short] iOS: 0x1cd1d0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1d8c40
     * @note[short] MacOS (Intel): 0x22f650
     * @note[short] Windows: 0x3381c0
     * @note[short] iOS: 0x1cd4a8
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* messages, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1d8d4c
     * @note[short] MacOS (Intel): 0x22f780
     * @note[short] Windows: 0x13f890
     * @note[short] iOS: 0x1cd5b4
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* key, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x1d8e78
     * @note[short] MacOS (Intel): 0x22f890
     * @note[short] Windows: 0x338310
     * @note[short] iOS: 0x1cd650
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x1d8eac
     * @note[short] MacOS (Intel): 0x22f8d0
     * @note[short] Windows: 0x338330
     * @note[short] iOS: 0x1cd684
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1d8334
     * @note[short] MacOS (Intel): 0x22ed40
     * @note[short] Windows: 0x337690
     * @note[short] iOS: 0x1cce3c
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x1d71a0
     * @note[short] MacOS (Intel): 0x22da30
     * @note[short] Windows: 0x336710
     * @note[short] iOS: 0x1cbf04
     * @note[short] Android
     */
    bool init(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x1d89d4
     * @note[short] MacOS (Intel): 0x22f3c0
     * @note[short] Windows: 0x13f140
     * @note[short] iOS: 0x1cd2f4
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1d7f74
     * @note[short] MacOS (Intel): 0x22e8f0
     * @note[short] Windows: 0x337c20
     * @note[short] iOS: 0x1ccc1c
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x1d7af8
     * @note[short] MacOS (Intel): 0x22e400
     * @note[short] Windows: 0x337ab0
     * @note[short] iOS: 0x1cc840
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7c88
     * @note[short] MacOS (Intel): 0x22e5b0
     * @note[short] Windows: 0x3373a0
     * @note[short] iOS: 0x1cc98c
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7f04
     * @note[short] MacOS (Intel): 0x22e860
     * @note[short] Windows: 0x3384d0
     * @note[short] iOS: 0x1ccbac
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7ef8
     * @note[short] MacOS (Intel): 0x22e840
     * @note[short] Windows: 0x3384e0
     * @note[short] iOS: 0x1ccba0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7bfc
     * @note[short] MacOS (Intel): 0x22e520
     * @note[short] Windows: 0x337310
     * @note[short] iOS: 0x1cc900
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7e54
     * @note[short] MacOS (Intel): 0x22e790
     * @note[short] Windows: 0x337130
     * @note[short] iOS: 0x1ccb08
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7f10
     * @note[short] MacOS (Intel): 0x22e880
     * @note[short] Windows: 0x337210
     * @note[short] iOS: 0x1ccbb8
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d8adc
     * @note[short] MacOS (Intel): 0x22f4e0
     * @note[short] Windows: 0x338030
     * @note[short] iOS: 0x1cd344
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* messages);

    /**
     * @note[short] MacOS (ARM): 0x1d8928
     * @note[short] MacOS (Intel): 0x22f2e0
     * @note[short] Windows: 0x337b80
     * @note[short] iOS: 0x1cd248
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] MacOS (ARM): 0x1d94b0
     * @note[short] MacOS (Intel): 0x22fe50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x1d944c
     * @note[short] MacOS (Intel): 0x22fdd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();
    bool m_sentMessages;
    gd::string m_messageKey;
    cocos2d::CCLabelBMFont* m_levelsLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    UploadActionPopup* m_actionPopup;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemToggler* m_toggleAllToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};
