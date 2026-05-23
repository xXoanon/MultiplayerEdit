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

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer();

    /**
     * @note[short] MacOS (ARM): 0x522f34
     * @note[short] MacOS (Intel): 0x5fa460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bcf40
     * @note[short] Android: Rebinded
     */
     ~SecretLayer();

    /**
     * @note[short] MacOS (ARM): 0x523230
     * @note[short] MacOS (Intel): 0x5fa8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bd024
     * @note[short] Android
     */
    static SecretLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x523144
     * @note[short] MacOS (Intel): 0x5fa790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bcfe0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x523304
     * @note[short] MacOS (Intel): 0x5fa9b0
     * @note[short] Windows: 0x3dca70
     * @note[short] iOS: 0x3bd0ec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x526c80
     * @note[short] MacOS (Intel): 0x5fe800
     * @note[short] Windows: 0x3e1f20
     * @note[short] iOS: 0x3c0060
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x525e4c
     * @note[short] MacOS (Intel): 0x5fd8d0
     * @note[short] Windows: 0x3df820
     * @note[short] iOS: 0x3bf2d0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x525f2c
     * @note[short] MacOS (Intel): 0x5fd9a0
     * @note[short] Windows: 0x3df970
     * @note[short] iOS: 0x3bf3bc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x52603c
     * @note[short] MacOS (Intel): 0x5fda70
     * @note[short] Windows: 0x3df970
     * @note[short] iOS: 0x3bf43c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x525e44
     * @note[short] MacOS (Intel): 0x5fd8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf2c8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5257f8
     * @note[short] MacOS (Intel): 0x5fd290
     * @note[short] Windows: 0x3e0d20
     * @note[short] iOS: 0x3bf248
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] MacOS (ARM): 0x523ed8
     * @note[short] MacOS (Intel): 0x5fb5d0
     * @note[short] Windows: 0x3dfdc0
     * @note[short] iOS: 0x3bdb58
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x52621c
     * @note[short] MacOS (Intel): 0x5fdc30
     * @note[short] Windows: 0x3dffb0
     * @note[short] iOS: 0x3bf578
     * @note[short] Android
     */
    gd::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x523e4c
     * @note[short] MacOS (Intel): 0x5fb550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x5241c8
     * @note[short] MacOS (Intel): 0x5fb8f0
     * @note[short] Windows: 0x3e1e80
     * @note[short] iOS: 0x3bdd8c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x524234
     * @note[short] MacOS (Intel): 0x5fb960
     * @note[short] Windows: 0x3dddb0
     * @note[short] iOS: 0x3bddf8
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x525414
     * @note[short] MacOS (Intel): 0x5fce70
     * @note[short] Windows: 0x3e1a00
     * @note[short] iOS: 0x3bee6c
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x52614c
     * @note[short] MacOS (Intel): 0x5fdb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf4bc
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x523e84
     * @note[short] MacOS (Intel): 0x5fb580
     * @note[short] Windows: 0x3dfd30
     * @note[short] iOS: 0x3bdb08
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x523f70
     * @note[short] MacOS (Intel): 0x5fb660
     * @note[short] Windows: 0x3dfa40
     * @note[short] iOS: 0x3bdbec
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_doomedIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    int m_threadTag;
};
