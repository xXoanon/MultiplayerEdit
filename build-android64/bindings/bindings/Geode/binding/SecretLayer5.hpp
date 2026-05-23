#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DialogDelegate.hpp"
#include "GJOnlineRewardDelegate.hpp"

class SecretLayer5 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate, public GJOnlineRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer5";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer5, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x76ff0
     * @note[short] Android: Out of line
     */
     SecretLayer5();

    /**
     * @note[short] MacOS (ARM): 0x3e0918
     * @note[short] MacOS (Intel): 0x479d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x73e10
     * @note[short] Android: Rebinded
     */
     ~SecretLayer5();

    /**
     * @note[short] MacOS (ARM): 0x3e0a54
     * @note[short] MacOS (Intel): 0x479ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x73f3c
     * @note[short] Android
     */
    static SecretLayer5* create();

    /**
     * @note[short] MacOS (ARM): 0x3e0a10
     * @note[short] MacOS (Intel): 0x479eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x73ef8
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3e0b60
     * @note[short] MacOS (Intel): 0x47a040
     * @note[short] Windows: 0x3f4030
     * @note[short] iOS: 0x73fb0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3e4db8
     * @note[short] MacOS (Intel): 0x47e910
     * @note[short] Windows: 0x3e9910
     * @note[short] iOS: 0x76f9c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x3e2d50
     * @note[short] MacOS (Intel): 0x47c680
     * @note[short] Windows: 0x3f5740
     * @note[short] iOS: 0x75bfc
     * @note[short] Android
     */
    virtual void updateTweenActionInt(float value, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3e4cac
     * @note[short] MacOS (Intel): 0x47e820
     * @note[short] Windows: 0x3f8000
     * @note[short] iOS: 0x76f90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3e4974
     * @note[short] MacOS (Intel): 0x47e580
     * @note[short] Windows: 0x3f7350
     * @note[short] iOS: 0x76da4
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3e4a54
     * @note[short] MacOS (Intel): 0x47e650
     * @note[short] Windows: 0x3f74a0
     * @note[short] iOS: 0x76e90
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3e4b64
     * @note[short] MacOS (Intel): 0x47e720
     * @note[short] Windows: 0x3f74a0
     * @note[short] iOS: 0x76f10
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3e496c
     * @note[short] MacOS (Intel): 0x47e560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x76d9c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3e4964
     * @note[short] MacOS (Intel): 0x47e540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x76d94
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3e3ed0
     * @note[short] MacOS (Intel): 0x47d940
     * @note[short] Windows: 0x3f6a20
     * @note[short] iOS: 0x76b70
     * @note[short] Android: Rebinded
     */
    virtual void onlineRewardStatusFinished(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x3e4040
     * @note[short] MacOS (Intel): 0x47da90
     * @note[short] Windows: 0x3f6b90
     * @note[short] iOS: 0x76cc8
     * @note[short] Android
     */
    virtual void onlineRewardStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x3e2a40
     * @note[short] MacOS (Intel): 0x47c320
     * @note[short] Windows: 0x3f53d0
     * @note[short] iOS: 0x75910
     * @note[short] Android
     */
    void animateHead();

    /**
     * @note[short] MacOS (ARM): 0x3e3c58
     * @note[short] MacOS (Intel): 0x47d6e0
     * @note[short] Windows: 0x3f6800
     * @note[short] iOS: 0x769a8
     * @note[short] Android
     */
    void claimOnlineReward();

    /**
     * @note[short] MacOS (ARM): 0x3e28b0
     * @note[short] MacOS (Intel): 0x47c190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x75798
     * @note[short] Android
     */
    void fadeInMessage();

    /**
     * @note[short] MacOS (ARM): 0x3e281c
     * @note[short] MacOS (Intel): 0x47c110
     * @note[short] Windows: 0x3f51d0
     * @note[short] iOS: 0x7571c
     * @note[short] Android
     */
    void fadeInSubmitMessage();

    /**
     * @note[short] MacOS (ARM): 0x3e2a18
     * @note[short] MacOS (Intel): 0x47c2f0
     * @note[short] Windows: 0x3f53a0
     * @note[short] iOS: 0x758f0
     * @note[short] Android
     */
    void fadeOutMessage();

    /**
     * @note[short] MacOS (ARM): 0x3e2d64
     * @note[short] MacOS (Intel): 0x47c6a0
     * @note[short] Windows: 0x3f5790
     * @note[short] iOS: 0x75c10
     * @note[short] Android
     */
    void finishLoadingState();

    /**
     * @note[short] MacOS (ARM): 0x3e1a50
     * @note[short] MacOS (Intel): 0x47b130
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x3e2d78
     * @note[short] MacOS (Intel): 0x47c6c0
     * @note[short] Windows: 0x3f57b0
     * @note[short] iOS: 0x75c24
     * @note[short] Android
     */
    void handleSecretResponse();

    /**
     * @note[short] MacOS (ARM): 0x3e40d8
     * @note[short] MacOS (Intel): 0x47db30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x76d1c
     * @note[short] Android
     */
    void hideTextInput();

    /**
     * @note[short] MacOS (ARM): 0x3e270c
     * @note[short] MacOS (Intel): 0x47bfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7566c
     * @note[short] Android
     */
    void incrementChatIdx();

    /**
     * @note[short] MacOS (ARM): 0x3e4c74
     * @note[short] MacOS (Intel): 0x47e7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3e1cbc
     * @note[short] MacOS (Intel): 0x47b3e0
     * @note[short] Windows: 0x3f7f80
     * @note[short] iOS: 0x74e5c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e1d40
     * @note[short] MacOS (Intel): 0x47b450
     * @note[short] Windows: 0x3f6c30
     * @note[short] iOS: 0x74edc
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e3bc4
     * @note[short] MacOS (Intel): 0x47d660
     * @note[short] Windows: 0x3f6770
     * @note[short] iOS: 0x76928
     * @note[short] Android
     */
    void playWinSFX();

    /**
     * @note[short] MacOS (ARM): 0x3e4150
     * @note[short] MacOS (Intel): 0x47dbb0
     * @note[short] Android
     */
    void showDialog(int index);

    /**
     * @note[short] MacOS (ARM): 0x3e3678
     * @note[short] MacOS (Intel): 0x47d080
     * @note[short] Windows: 0x3f5810
     * @note[short] iOS: 0x76434
     * @note[short] Android
     */
    void showFailAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3e2200
     * @note[short] MacOS (Intel): 0x47ba10
     * @note[short] Windows: 0x3f7860
     * @note[short] iOS: 0x752dc
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] MacOS (ARM): 0x3e2e30
     * @note[short] MacOS (Intel): 0x47c780
     * @note[short] Windows: 0x3f5dd0
     * @note[short] iOS: 0x75c90
     * @note[short] Android
     */
    void showSuccessAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3e3b58
     * @note[short] MacOS (Intel): 0x47d5f0
     * @note[short] Windows: 0x3f6bd0
     * @note[short] iOS: 0x768c0
     * @note[short] Android
     */
    void showTextInput();

    /**
     * @note[short] MacOS (ARM): 0x3e3e60
     * @note[short] MacOS (Intel): 0x47d8d0
     * @note[short] Windows: 0x3f6a10
     * @note[short] iOS: 0x76b68
     * @note[short] Android
     */
    void unlockUI();

    /**
     * @note[short] MacOS (ARM): 0x3e19fc
     * @note[short] MacOS (Intel): 0x47b0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x74c6c
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x3e1a64
     * @note[short] MacOS (Intel): 0x47b150
     * @note[short] Windows: 0x3f7570
     * @note[short] iOS: 0x74cbc
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_textInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_wraithButton;
    bool m_exiting;
    void* m_unk1f0;
    cocos2d::CCArray* m_torchFires;
    bool m_loading;
    int m_rewardStatus;
    gd::string m_chestID;
    bool m_uiLocked;
    CCSpriteWithHue* m_wraithSprite;
    CCSpriteGrayscale* m_wraithGraySprite;
    cocos2d::CCSprite* m_eyesSprite;
    cocos2d::CCSprite* m_background;
    cocos2d::CCSprite* m_lockSprite;
    gd::vector<int> m_soundEffects;
    int m_chatIndex;
    cocos2d::extension::CCScale9Sprite* m_inputBackground;
    LoadingCircleSprite* m_circleSprite;
    TextArea* m_messageArea;
};
