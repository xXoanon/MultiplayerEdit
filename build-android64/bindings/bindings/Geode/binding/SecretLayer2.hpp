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

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x311a80
     * @note[short] Android: Out of line
     */
     SecretLayer2();

    /**
     * @note[short] MacOS (ARM): 0x400efc
     * @note[short] MacOS (Intel): 0x49cc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3095f4
     * @note[short] Android: Rebinded
     */
     ~SecretLayer2();

    /**
     * @note[short] MacOS (ARM): 0x4011bc
     * @note[short] MacOS (Intel): 0x49d070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3096ec
     * @note[short] Android
     */
    static SecretLayer2* create();

    /**
     * @note[short] MacOS (ARM): 0x401178
     * @note[short] MacOS (Intel): 0x49d030
     * @note[short] Windows: 0x3e2160
     * @note[short] iOS: 0x3096a8
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x4012a4
     * @note[short] MacOS (Intel): 0x49d1a0
     * @note[short] Windows: 0x3e22e0
     * @note[short] iOS: 0x309760
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x406e20
     * @note[short] MacOS (Intel): 0x4a3160
     * @note[short] Windows: 0x3e9910
     * @note[short] iOS: 0x30db94
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x406d34
     * @note[short] MacOS (Intel): 0x4a3070
     * @note[short] Windows: 0x3e9900
     * @note[short] iOS: 0x30db88
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x405cb8
     * @note[short] MacOS (Intel): 0x4a20f0
     * @note[short] Windows: 0x3e6d80
     * @note[short] iOS: 0x30d0d0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x405d98
     * @note[short] MacOS (Intel): 0x4a21c0
     * @note[short] Windows: 0x3e6ed0
     * @note[short] iOS: 0x30d1bc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x405ea8
     * @note[short] MacOS (Intel): 0x4a2290
     * @note[short] Windows: 0x3e6ed0
     * @note[short] iOS: 0x30d23c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x405cb0
     * @note[short] MacOS (Intel): 0x4a20d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30d0c8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x404858
     * @note[short] MacOS (Intel): 0x4a0c40
     * @note[short] Windows: 0x3e45c0
     * @note[short] iOS: 0x30c4d0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x406088
     * @note[short] MacOS (Intel): 0x4a2450
     * @note[short] Windows: 0x3e7bf0
     * @note[short] iOS: 0x30d378
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] MacOS (ARM): 0x405448
     * @note[short] MacOS (Intel): 0x4a18b0
     * @note[short] Windows: 0x3e8750
     * @note[short] iOS: 0x30cd70
     * @note[short] Android
     */
    gd::string getErrorMessage();

    /**
     * @note[short] MacOS (ARM): 0x402170
     * @note[short] MacOS (Intel): 0x49e0a0
     * @note[short] Windows: 0x3e7320
     * @note[short] iOS: 0x30a4c4
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x406788
     * @note[short] MacOS (Intel): 0x4a2b30
     * @note[short] Windows: 0x3e7500
     * @note[short] iOS: 0x30d604
     * @note[short] Android
     */
    gd::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x4020e4
     * @note[short] MacOS (Intel): 0x49e020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x402440
     * @note[short] MacOS (Intel): 0x49e3c0
     * @note[short] Windows: 0x3e9850
     * @note[short] iOS: 0x30a6ec
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x403910
     * @note[short] MacOS (Intel): 0x49fb10
     * @note[short] Windows: 0x3e4910
     * @note[short] iOS: 0x30b920
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x403b6c
     * @note[short] MacOS (Intel): 0x49fd40
     * @note[short] Windows: 0x3e4660
     * @note[short] iOS: 0x30baec
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4024b4
     * @note[short] MacOS (Intel): 0x49e430
     * @note[short] Windows: 0x3e5270
     * @note[short] iOS: 0x30a760
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4049f0
     * @note[short] MacOS (Intel): 0x4a0e10
     * @note[short] Windows: 0x3e93d0
     * @note[short] iOS: 0x30c580
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x405fb8
     * @note[short] MacOS (Intel): 0x4a2360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30d2bc
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x403d30
     * @note[short] MacOS (Intel): 0x49ff00
     * @note[short] Windows: 0x3e3910
     * @note[short] iOS: 0x30bc48
     * @note[short] Android
     */
    void showCompletedLevel();

    /**
     * @note[short] MacOS (ARM): 0x404744
     * @note[short] MacOS (Intel): 0x4a0b10
     * @note[short] Windows: 0x3e37a0
     * @note[short] iOS: 0x30c3c0
     * @note[short] Android
     */
    void showSecretLevel();

    /**
     * @note[short] MacOS (ARM): 0x40211c
     * @note[short] MacOS (Intel): 0x49e050
     * @note[short] Windows: 0x3e7290
     * @note[short] iOS: 0x30a474
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x4021e8
     * @note[short] MacOS (Intel): 0x49e130
     * @note[short] Windows: 0x3e6fa0
     * @note[short] iOS: 0x30a54c
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    bool m_exiting;
    int m_doorDialogIndex;
    CCMenuItemSpriteExtra* m_secretLevelButton;
    cocos2d::CCArray* m_secretLevelLabels;
    CCMenuItemSpriteExtra* m_secretDoorButton;
};
