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

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3564fc
     * @note[short] Android: Out of line
     */
     SecretLayer4();

    /**
     * @note[short] MacOS (ARM): 0x3339ec
     * @note[short] MacOS (Intel): 0x3b07c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x353cc4
     * @note[short] Android: Rebinded
     */
     ~SecretLayer4();

    /**
     * @note[short] MacOS (ARM): 0x333c68
     * @note[short] MacOS (Intel): 0x3b0b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x353db0
     * @note[short] Android
     */
    static SecretLayer4* create();

    /**
     * @note[short] MacOS (ARM): 0x333c24
     * @note[short] MacOS (Intel): 0x3b0b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x353d6c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x333d40
     * @note[short] MacOS (Intel): 0x3b0c80
     * @note[short] Windows: 0x3efb20
     * @note[short] iOS: 0x353e24
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x337fb8
     * @note[short] MacOS (Intel): 0x3b5140
     * @note[short] Windows: 0x3e9910
     * @note[short] iOS: 0x3564a8
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x337ec4
     * @note[short] MacOS (Intel): 0x3b5050
     * @note[short] Windows: 0x3f3720
     * @note[short] iOS: 0x35649c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x336f30
     * @note[short] MacOS (Intel): 0x3b4160
     * @note[short] Windows: 0x3e6d80
     * @note[short] iOS: 0x355e20
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x337010
     * @note[short] MacOS (Intel): 0x3b4230
     * @note[short] Windows: 0x3e6ed0
     * @note[short] iOS: 0x355f0c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x337120
     * @note[short] MacOS (Intel): 0x3b4300
     * @note[short] Windows: 0x3e6ed0
     * @note[short] iOS: 0x355f8c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x336f28
     * @note[short] MacOS (Intel): 0x3b4140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x355e18
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3366b8
     * @note[short] MacOS (Intel): 0x3b3900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x355ab8
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x337300
     * @note[short] MacOS (Intel): 0x3b44c0
     * @note[short] Windows: 0x3f2e00
     * @note[short] iOS: 0x3560c8
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] MacOS (ARM): 0x3366c0
     * @note[short] MacOS (Intel): 0x3b3920
     * @note[short] Windows: 0x3e8750
     * @note[short] iOS: 0x355ac0
     * @note[short] Android
     */
    gd::string getErrorMessage();

    /**
     * @note[short] MacOS (ARM): 0x334dec
     * @note[short] MacOS (Intel): 0x3b1d70
     * @note[short] Windows: 0x3f2260
     * @note[short] iOS: 0x354c04
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x337764
     * @note[short] MacOS (Intel): 0x3b48e0
     * @note[short] Windows: 0x3f2440
     * @note[short] iOS: 0x356148
     * @note[short] Android
     */
    gd::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x334974
     * @note[short] MacOS (Intel): 0x3b18b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3350bc
     * @note[short] MacOS (Intel): 0x3b2090
     * @note[short] Windows: 0x3f3670
     * @note[short] iOS: 0x354e2c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x335dc0
     * @note[short] MacOS (Intel): 0x3b2eb0
     * @note[short] Windows: 0x3f0be0
     * @note[short] iOS: 0x3559d4
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x335134
     * @note[short] MacOS (Intel): 0x3b2100
     * @note[short] Windows: 0x3f0d50
     * @note[short] iOS: 0x354ea4
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x337ae0
     * @note[short] MacOS (Intel): 0x3b4c30
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x337230
     * @note[short] MacOS (Intel): 0x3b43d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35600c
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x335ea4
     * @note[short] MacOS (Intel): 0x3b2f70
     * @note[short] Android
     */
    void showDialog(int index);

    /**
     * @note[short] MacOS (ARM): 0x3349ac
     * @note[short] MacOS (Intel): 0x3b18e0
     * @note[short] Windows: 0x3f2860
     * @note[short] iOS: 0x3548d8
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] MacOS (ARM): 0x334d98
     * @note[short] MacOS (Intel): 0x3b1d20
     * @note[short] Windows: 0x3e7290
     * @note[short] iOS: 0x354bb4
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x334e64
     * @note[short] MacOS (Intel): 0x3b1e00
     * @note[short] Windows: 0x3e6fa0
     * @note[short] iOS: 0x354c8c
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
};
