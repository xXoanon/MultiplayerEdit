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
#include "TextInputDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class ShareCommentLayer : public FLAlertLayer, public TextInputDelegate, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x50a620
     * @note[short] MacOS (Intel): 0x5df7e0
     * @note[short] Windows: 0x48ce10
     * @note[short] iOS: 0x1d4504
     * @note[short] Android: Rebinded
     */
    static ShareCommentLayer* create(gd::string title, int charLimit, CommentType type, int ID, gd::string desc);

    /**
     * @note[short] MacOS (ARM): 0x50bf60
     * @note[short] MacOS (Intel): 0x5e1370
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1d59ac
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x50beb8
     * @note[short] MacOS (Intel): 0x5e12c0
     * @note[short] Windows: 0x48e650
     * @note[short] iOS: 0x1d5904
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x50c114
     * @note[short] MacOS (Intel): 0x5e1520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d5aac
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x50bf98
     * @note[short] MacOS (Intel): 0x5e13b0
     * @note[short] Windows: 0x48e6a0
     * @note[short] iOS: 0x1d59e4
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x50c11c
     * @note[short] MacOS (Intel): 0x5e1540
     * @note[short] Windows: 0x48e7e0
     * @note[short] iOS: 0x1d5ab4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x50c398
     * @note[short] MacOS (Intel): 0x5e17a0
     * @note[short] Windows: 0x48ea30
     * @note[short] iOS: 0x1d5c6c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x50c4d0
     * @note[short] MacOS (Intel): 0x5e18a0
     * @note[short] Windows: 0x48eac0
     * @note[short] iOS: 0x1d5cfc
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x50c630
     * @note[short] MacOS (Intel): 0x5e19c0
     * @note[short] Windows: 0x48eb70
     * @note[short] iOS: 0x1d5d80
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x50a84c
     * @note[short] MacOS (Intel): 0x5dfa80
     * @note[short] Windows: 0x48d020
     * @note[short] iOS: 0x1d4654
     * @note[short] Android: Rebinded
     */
    bool init(gd::string title, int charLimit, CommentType type, int ID, gd::string desc);

    /**
     * @note[short] MacOS (ARM): 0x50b9e4
     * @note[short] MacOS (Intel): 0x5e0dd0
     * @note[short] Windows: 0x48e100
     * @note[short] iOS: 0x1d5460
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50ba9c
     * @note[short] MacOS (Intel): 0x5e0e70
     * @note[short] Windows: 0x48e610
     * @note[short] iOS: 0x1d551c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50b848
     * @note[short] MacOS (Intel): 0x5e0c40
     * @note[short] Windows: 0x48e170
     * @note[short] iOS: 0x1d5390
     * @note[short] Android
     */
    void onPercent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50baf0
     * @note[short] MacOS (Intel): 0x5e0ec0
     * @note[short] Windows: 0x48e270
     * @note[short] iOS: 0x1d5570
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50c28c
     * @note[short] MacOS (Intel): 0x5e1690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d5b70
     * @note[short] Android
     */
    void updateCharCountLabel();

    /**
     * @note[short] MacOS (ARM): 0x50be90
     * @note[short] MacOS (Intel): 0x5e1290
     * @note[short] Windows: 0x48e900
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void updateDescText(gd::string desc);

    /**
     * @note[short] MacOS (ARM): 0x50b918
     * @note[short] MacOS (Intel): 0x5e0d10
     * @note[short] Windows: 0x48e190
     * @note[short] iOS: 0x1d53a0
     * @note[short] Android
     */
    void updatePercentLabel();
    int m_charLimit;
    int m_itemID;
    CommentType m_commentType;
    CCTextInputNode* m_commentInput;
    gd::string m_descText;
    gd::string m_placeholderText;
    cocos2d::CCLabelBMFont* m_charCountLabel;
    cocos2d::CCLabelBMFont* m_percentLabel;
    UploadActionPopup* m_uploadPopup;
    bool m_uploadSuccess;
    bool m_percentEnabled;
    int m_percent;
    ShareCommentDelegate* m_delegate;
};
