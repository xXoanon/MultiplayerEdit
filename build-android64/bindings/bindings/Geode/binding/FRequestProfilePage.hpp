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
#include "FriendRequestDelegate.hpp"

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6984d4
     * @note[short] MacOS (Intel): 0x78fc20
     * @note[short] Windows: 0x13d8d0
     * @note[short] iOS: 0x1b5f30
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x699b64
     * @note[short] MacOS (Intel): 0x7914d0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1b721c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x699b58
     * @note[short] MacOS (Intel): 0x7914a0
     * @note[short] Windows: 0x13eed0
     * @note[short] iOS: 0x1b7210
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x699a60
     * @note[short] MacOS (Intel): 0x7913c0
     * @note[short] Windows: 0x13ecb0
     * @note[short] iOS: 0x1b7118
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x699b9c
     * @note[short] MacOS (Intel): 0x791510
     * @note[short] Windows: 0x13eee0
     * @note[short] iOS: 0x1b7254
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x699c24
     * @note[short] MacOS (Intel): 0x791580
     * @note[short] Windows: 0x13ef30
     * @note[short] iOS: 0x1b72c4
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x699de4
     * @note[short] MacOS (Intel): 0x791730
     * @note[short] Windows: 0x13f0a0
     * @note[short] iOS: 0x1b73ac
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x69a1a8
     * @note[short] MacOS (Intel): 0x791af0
     * @note[short] Windows: 0x13f810
     * @note[short] iOS: 0x1b75e8
     * @note[short] Android
     */
    virtual void loadFRequestsFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x69a2b4
     * @note[short] MacOS (Intel): 0x791be0
     * @note[short] Windows: 0x13f890
     * @note[short] iOS: 0x1b766c
     * @note[short] Android
     */
    virtual void loadFRequestsFailed(char const* key, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x69a414
     * @note[short] MacOS (Intel): 0x791d30
     * @note[short] Windows: 0x13f930
     * @note[short] iOS: 0x1b773c
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x69a3e0
     * @note[short] MacOS (Intel): 0x791cf0
     * @note[short] Windows: 0x13f910
     * @note[short] iOS: 0x1b7708
     * @note[short] Android
     */
    virtual void forceReloadRequests(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x699890
     * @note[short] MacOS (Intel): 0x7911e0
     * @note[short] Windows: 0x13ea40
     * @note[short] iOS: 0x1b6f84
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x69860c
     * @note[short] MacOS (Intel): 0x78fdd0
     * @note[short] Windows: 0x13da70
     * @note[short] iOS: 0x1b5fa4
     * @note[short] Android
     */
    bool init(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x699f2c
     * @note[short] MacOS (Intel): 0x791850
     * @note[short] Windows: 0x13f140
     * @note[short] iOS: 0x1b7424
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6994dc
     * @note[short] MacOS (Intel): 0x790da0
     * @note[short] Windows: 0x13f270
     * @note[short] iOS: 0x1b6d70
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x699014
     * @note[short] MacOS (Intel): 0x790840
     * @note[short] Windows: 0x13ed70
     * @note[short] iOS: 0x1b698c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6991f0
     * @note[short] MacOS (Intel): 0x790a60
     * @note[short] Windows: 0x13e750
     * @note[short] iOS: 0x1b6ae0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69946c
     * @note[short] MacOS (Intel): 0x790d10
     * @note[short] Windows: 0x13fac0
     * @note[short] iOS: 0x1b6d00
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x699460
     * @note[short] MacOS (Intel): 0x790cf0
     * @note[short] Windows: 0x13fad0
     * @note[short] iOS: 0x1b6cf4
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x699118
     * @note[short] MacOS (Intel): 0x790960
     * @note[short] Windows: 0x13ece0
     * @note[short] iOS: 0x1b6a4c
     * @note[short] Android
     */
    void onSentRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6993bc
     * @note[short] MacOS (Intel): 0x790c40
     * @note[short] Windows: 0x13e570
     * @note[short] iOS: 0x1b6c5c
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x699478
     * @note[short] MacOS (Intel): 0x790d30
     * @note[short] Windows: 0x13e650
     * @note[short] iOS: 0x1b6d0c
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69a034
     * @note[short] MacOS (Intel): 0x791970
     * @note[short] Windows: 0x13f670
     * @note[short] iOS: 0x1b7474
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* scores);

    /**
     * @note[short] MacOS (ARM): 0x699af0
     * @note[short] MacOS (Intel): 0x791430
     * @note[short] Windows: 0x13ee30
     * @note[short] iOS: 0x1b71a8
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] MacOS (ARM): 0x69a9b4
     * @note[short] MacOS (Intel): 0x792230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x69a9b8
     * @note[short] MacOS (Intel): 0x792240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();
    bool m_sent;
    gd::string m_key;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    UploadActionPopup* m_uploadPopup;
    void* m_unk2e8;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};
