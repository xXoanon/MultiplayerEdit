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
#include "GJAccountRegisterDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountRegisterLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8463c
     * @note[short] Android: Out of line
     */
     AccountRegisterLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f9a48
     * @note[short] MacOS (Intel): 0x494fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x80ea8
     * @note[short] Android: Rebinded
     */
     ~AccountRegisterLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f9d04
     * @note[short] MacOS (Intel): 0x4953d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x80f80
     * @note[short] Android
     */
    static AccountRegisterLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3f9e24
     * @note[short] MacOS (Intel): 0x495550
     * @note[short] Windows: 0x78aa0
     * @note[short] iOS: 0x80ff4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3fc564
     * @note[short] MacOS (Intel): 0x497fc0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x8288c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3fc360
     * @note[short] MacOS (Intel): 0x497df0
     * @note[short] Windows: 0x7ac30
     * @note[short] iOS: 0x82748
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3fbf18
     * @note[short] MacOS (Intel): 0x497920
     * @note[short] Windows: 0x7a240
     * @note[short] iOS: 0x82618
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3fcd24
     * @note[short] MacOS (Intel): 0x498890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82e3c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fc59c
     * @note[short] MacOS (Intel): 0x498000
     * @note[short] Windows: 0x7ad90
     * @note[short] iOS: 0x828c4
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fcd2c
     * @note[short] MacOS (Intel): 0x4988b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82e44
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fcd34
     * @note[short] MacOS (Intel): 0x4988d0
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x82e4c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x3fce04
     * @note[short] MacOS (Intel): 0x498990
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x82eb8
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fcebc
     * @note[short] MacOS (Intel): 0x498a40
     * @note[short] Windows: 0x7b6b0
     * @note[short] iOS: 0x82f18
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fb77c
     * @note[short] MacOS (Intel): 0x4971e0
     * @note[short] Windows: 0x79cd0
     * @note[short] iOS: 0x82184
     * @note[short] Android
     */
    virtual void registerAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x3fb914
     * @note[short] MacOS (Intel): 0x497390
     * @note[short] Windows: 0x79ef0
     * @note[short] iOS: 0x822a8
     * @note[short] Android
     */
    virtual void registerAccountFailed(AccountError errorType);

    /**
     * @note[short] MacOS (ARM): 0x3fb4c4
     * @note[short] MacOS (Intel): 0x496f40
     * @note[short] Windows: 0x799d0
     * @note[short] iOS: 0x81ed4
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint position, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3fb67c
     * @note[short] MacOS (Intel): 0x4970f0
     * @note[short] Windows: 0x79ba0
     * @note[short] iOS: 0x82088
     * @note[short] Android: Rebinded
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, gd::string text, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fb588
     * @note[short] MacOS (Intel): 0x497000
     * @note[short] Windows: 0x79a90
     * @note[short] iOS: 0x81f98
     * @note[short] Android: Rebinded
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint position, gd::string text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3fc0ac
     * @note[short] MacOS (Intel): 0x497a80
     * @note[short] Windows: 0x7ac70
     * @note[short] iOS: 0x82690
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] MacOS (ARM): 0x3fbc28
     * @note[short] MacOS (Intel): 0x497640
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3facc8
     * @note[short] MacOS (Intel): 0x496610
     * @note[short] Windows: 0x7ac00
     * @note[short] iOS: 0x81a70
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fad6c
     * @note[short] MacOS (Intel): 0x4966a0
     * @note[short] Windows: 0x7a290
     * @note[short] iOS: 0x81ab4
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fbe2c
     * @note[short] MacOS (Intel): 0x497850
     * @note[short] Windows: 0x7a130
     * @note[short] iOS: 0x8252c
     * @note[short] Android
     */
    void resetLabel(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fbcfc
     * @note[short] MacOS (Intel): 0x497730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82450
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] MacOS (ARM): 0x3fc230
     * @note[short] MacOS (Intel): 0x497ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8270c
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3fc4ac
     * @note[short] MacOS (Intel): 0x497f20
     * @note[short] Windows: 0x7ace0
     * @note[short] iOS: 0x827d4
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x3fbaf8
     * @note[short] MacOS (Intel): 0x497540
     * @note[short] Windows: 0x79f30
     * @note[short] iOS: 0x822e4
     * @note[short] Android
     */
    void updateLabel(AccountError type);

    /**
     * @note[short] MacOS (ARM): 0x3fc170
     * @note[short] MacOS (Intel): 0x497b50
     * @note[short] Windows: 0x7b6c0
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool validEmail(gd::string email);

    /**
     * @note[short] MacOS (ARM): 0x3fc14c
     * @note[short] MacOS (Intel): 0x497b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool validPassword(gd::string password);

    /**
     * @note[short] MacOS (ARM): 0x3fc128
     * @note[short] MacOS (Intel): 0x497af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool validUser(gd::string username);
    CCTextInputNode* m_usernameField;
    CCTextInputNode* m_passwordField;
    CCTextInputNode* m_confirmPasswordField;
    CCTextInputNode* m_emailField;
    CCTextInputNode* m_verifyEmailField;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    cocos2d::CCLabelBMFont* m_confirmPasswordLabel;
    cocos2d::CCLabelBMFont* m_emailLabel;
    cocos2d::CCLabelBMFont* m_verifyEmailLabel;
    LoadingCircle* m_loadingCircle;
    bool m_lockInput;
};
