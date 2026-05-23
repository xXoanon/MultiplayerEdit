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
#include "UploadMessageDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJWriteMessagePopup : public FLAlertLayer, public TextInputDelegate, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJWriteMessagePopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x246e2c
     * @note[short] MacOS (Intel): 0x2a8280
     * @note[short] Windows: 0x2990b0
     * @note[short] iOS: 0x2db59c
     * @note[short] Android
     */
    static GJWriteMessagePopup* create(int accountID, int messageID);

    /**
     * @note[short] MacOS (ARM): 0x248d3c
     * @note[short] MacOS (Intel): 0x2aa370
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x2dcff0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x248d28
     * @note[short] MacOS (Intel): 0x2aa340
     * @note[short] Windows: 0x29a730
     * @note[short] iOS: 0x2dcfdc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x248d90
     * @note[short] MacOS (Intel): 0x2aa3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dd044
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x248d74
     * @note[short] MacOS (Intel): 0x2aa3b0
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x2dd028
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x248d98
     * @note[short] MacOS (Intel): 0x2aa410
     * @note[short] Windows: 0x29a740
     * @note[short] iOS: 0x2dd04c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x249408
     * @note[short] MacOS (Intel): 0x2aaac0
     * @note[short] Windows: 0x29ad20
     * @note[short] iOS: 0x2dd478
     * @note[short] Android
     */
    virtual void uploadMessageFinished(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x2494e8
     * @note[short] MacOS (Intel): 0x2aab80
     * @note[short] Windows: 0x29ada0
     * @note[short] iOS: 0x2dd508
     * @note[short] Android
     */
    virtual void uploadMessageFailed(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x249628
     * @note[short] MacOS (Intel): 0x2aacb0
     * @note[short] Windows: 0x29ae50
     * @note[short] iOS: 0x2dd58c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x2497bc
     * @note[short] MacOS (Intel): 0x2aae00
     * @note[short] Windows: 0x29aef0
     * @note[short] iOS: 0x2dd60c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2498dc
     * @note[short] MacOS (Intel): 0x2aaee0
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x2dd6a0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x2499ac
     * @note[short] MacOS (Intel): 0x2aafa0
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x2dd70c
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x248b68
     * @note[short] MacOS (Intel): 0x2aa170
     * @note[short] Windows: 0x29a550
     * @note[short] iOS: 0x2dce34
     * @note[short] Android
     */
    void closeMessagePopup(bool fullExit);

    /**
     * @note[short] MacOS (ARM): 0x2478a0
     * @note[short] MacOS (Intel): 0x2a8d70
     * @note[short] Windows: 0x299240
     * @note[short] iOS: 0x2dbc90
     * @note[short] Android
     */
    bool init(int accountID, int messageID);

    /**
     * @note[short] MacOS (ARM): 0x248a74
     * @note[short] MacOS (Intel): 0x2aa080
     * @note[short] Windows: 0x29a3b0
     * @note[short] iOS: 0x2dcd64
     * @note[short] Android
     */
    void onClearBody(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24865c
     * @note[short] MacOS (Intel): 0x2a9c30
     * @note[short] Windows: 0x29a540
     * @note[short] iOS: 0x2dc9ac
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x248664
     * @note[short] MacOS (Intel): 0x2a9c40
     * @note[short] Windows: 0x29a0e0
     * @note[short] iOS: 0x2dc9b4
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2489d8
     * @note[short] MacOS (Intel): 0x2aa000
     * @note[short] Windows: 0x29a920
     * @note[short] iOS: 0x2dccd8
     * @note[short] Android: Rebinded
     */
    void updateBody(gd::string body);

    /**
     * @note[short] MacOS (ARM): 0x2492e4
     * @note[short] MacOS (Intel): 0x2aa9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dd364
     * @note[short] Android
     */
    void updateCharCountLabel(int type);

    /**
     * @note[short] MacOS (ARM): 0x24893c
     * @note[short] MacOS (Intel): 0x2a9f80
     * @note[short] Windows: 0x29a8c0
     * @note[short] iOS: 0x2dcc4c
     * @note[short] Android: Rebinded
     */
    void updateSubject(gd::string subject);

    /**
     * @note[short] MacOS (ARM): 0x249080
     * @note[short] MacOS (Intel): 0x2aa720
     * @note[short] Windows: 0x29a990
     * @note[short] iOS: 0x2dd170
     * @note[short] Android: Rebinded
     */
    void updateText(gd::string text, int type);
    int m_unk298;
    int m_messageID;
    int m_accountID;
    CCTextInputNode* m_messageInput;
    CCTextInputNode* m_subjectInput;
    gd::string m_messageText;
    gd::string m_subjectText;
    cocos2d::CCLabelBMFont* m_messageCountLabel;
    cocos2d::CCLabelBMFont* m_subjectCountLabel;
    UploadActionPopup* m_uploadPopup;
    bool m_uploadSuccess;
};
