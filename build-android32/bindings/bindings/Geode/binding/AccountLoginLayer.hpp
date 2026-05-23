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
#include "GJAccountLoginDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLoginLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLoginLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLoginLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3fcff8
     * @note[short] MacOS (Intel): 0x498c10
     * @note[short] Windows: 0x7b770
     * @note[short] iOS: 0x83030
     * @note[short] Android: Rebinded
     */
    static AccountLoginLayer* create(gd::string username);

    /**
     * @note[short] MacOS (ARM): 0x3feea4
     * @note[short] MacOS (Intel): 0x49ab30
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x84474
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3fed54
     * @note[short] MacOS (Intel): 0x49a9f0
     * @note[short] Windows: 0x7cff0
     * @note[short] iOS: 0x84388
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3feb40
     * @note[short] MacOS (Intel): 0x49a830
     * @note[short] Windows: 0x7cba0
     * @note[short] iOS: 0x84290
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3ff070
     * @note[short] MacOS (Intel): 0x49acd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8462c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3feedc
     * @note[short] MacOS (Intel): 0x49ab70
     * @note[short] Windows: 0x7d0c0
     * @note[short] iOS: 0x844ac
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3ff078
     * @note[short] MacOS (Intel): 0x49acf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x84634
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fe47c
     * @note[short] MacOS (Intel): 0x49a1a0
     * @note[short] Windows: 0x7c790
     * @note[short] iOS: 0x83ea0
     * @note[short] Android
     */
    virtual void loginAccountFinished(int accountID, int userID);

    /**
     * @note[short] MacOS (ARM): 0x3fe7ec
     * @note[short] MacOS (Intel): 0x49a520
     * @note[short] Windows: 0x7c9e0
     * @note[short] iOS: 0x840ac
     * @note[short] Android
     */
    virtual void loginAccountFailed(AccountError errorType);

    /**
     * @note[short] MacOS (ARM): 0x3fe19c
     * @note[short] MacOS (Intel): 0x499ee0
     * @note[short] Windows: 0x7c500
     * @note[short] iOS: 0x83bc8
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3fe348
     * @note[short] MacOS (Intel): 0x49a080
     * @note[short] Windows: 0x7c6a0
     * @note[short] iOS: 0x83d70
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, char const* text, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fe260
     * @note[short] MacOS (Intel): 0x499fa0
     * @note[short] Windows: 0x7c5c0
     * @note[short] iOS: 0x83c8c
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3fec5c
     * @note[short] MacOS (Intel): 0x49a910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] MacOS (ARM): 0x3fe754
     * @note[short] MacOS (Intel): 0x49a470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3fd184
     * @note[short] MacOS (Intel): 0x498df0
     * @note[short] Windows: 0x7b910
     * @note[short] iOS: 0x83168
     * @note[short] Android: Rebinded
     */
    bool init(gd::string username);

    /**
     * @note[short] MacOS (ARM): 0x3fdd28
     * @note[short] MacOS (Intel): 0x499a90
     * @note[short] Windows: 0x7cfa0
     * @note[short] iOS: 0x838ac
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fe458
     * @note[short] MacOS (Intel): 0x49a180
     * @note[short] Windows: 0x7c4e0
     * @note[short] iOS: 0x83e7c
     * @note[short] Android
     */
    void onForgotPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fe434
     * @note[short] MacOS (Intel): 0x49a160
     * @note[short] Windows: 0x7c4c0
     * @note[short] iOS: 0x83e58
     * @note[short] Android
     */
    void onForgotUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fdd90
     * @note[short] MacOS (Intel): 0x499af0
     * @note[short] Windows: 0x7cc10
     * @note[short] iOS: 0x83914
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3feac4
     * @note[short] MacOS (Intel): 0x49a7d0
     * @note[short] Windows: 0x7cb20
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetLabel(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fea4c
     * @note[short] MacOS (Intel): 0x49a760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x84218
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] MacOS (ARM): 0x3fec9c
     * @note[short] MacOS (Intel): 0x49a950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x84328
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3fee28
     * @note[short] MacOS (Intel): 0x49aac0
     * @note[short] Windows: 0x7d050
     * @note[short] iOS: 0x843f8
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x3fe954
     * @note[short] MacOS (Intel): 0x49a670
     * @note[short] Windows: 0x7ca20
     * @note[short] iOS: 0x840e8
     * @note[short] Android
     */
    void updateLabel(AccountError type);
    CCTextInputNode* m_usernameInput;
    CCTextInputNode* m_passwordInput;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    LoadingCircle* m_loadingCircle;
    gd::string m_username;
    gd::string m_password;
};
