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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x1a7b4c
     * @note[short] MacOS (Intel): 0x1fa290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe8ba8
     * @note[short] Android: Rebinded
     */
     ~EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x1a7d60
     * @note[short] MacOS (Intel): 0x1fa5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xe8cec
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1a7c5c
     * @note[short] MacOS (Intel): 0x1fa450
     * @note[short] Windows: 0xd52b0
     * @note[short] iOS: 0xe8ca0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1abc68
     * @note[short] MacOS (Intel): 0x1fe600
     * @note[short] Windows: 0xd9aa0
     * @note[short] iOS: 0xec484
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1abc74
     * @note[short] MacOS (Intel): 0x1fe630
     * @note[short] Windows: 0xd9ab0
     * @note[short] iOS: 0xec490
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x1abb68
     * @note[short] MacOS (Intel): 0x1fe500
     * @note[short] Windows: 0xd9580
     * @note[short] iOS: 0xec400
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x1ab7b4
     * @note[short] MacOS (Intel): 0x1fe120
     * @note[short] Windows: 0xd8c40
     * @note[short] iOS: 0xec098
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1aafe4
     * @note[short] MacOS (Intel): 0x1fd960
     * @note[short] Windows: 0xd7af0
     * @note[short] iOS: 0xeba90
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1aaca0
     * @note[short] MacOS (Intel): 0x1fd5f0
     * @note[short] Windows: 0xd74f0
     * @note[short] iOS: 0xeb800
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1ab0f4
     * @note[short] MacOS (Intel): 0x1fda40
     * @note[short] Windows: 0xd7c60
     * @note[short] iOS: 0xebba0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1abcf8
     * @note[short] MacOS (Intel): 0x1fe6d0
     * @note[short] Windows: 0xd9b20
     * @note[short] iOS: 0xec500
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1abea8
     * @note[short] MacOS (Intel): 0x1fe870
     * @note[short] Windows: 0xd9c60
     * @note[short] iOS: 0xec5f4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1abca8
     * @note[short] MacOS (Intel): 0x1fe680
     * @note[short] Windows: 0xd9ae0
     * @note[short] iOS: 0xec4b0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1aac44
     * @note[short] MacOS (Intel): 0x1fd590
     * @note[short] Windows: 0xd7490
     * @note[short] iOS: 0xeb7a4
     * @note[short] Android
     */
    void closeTextInputs();

    /**
     * @note[short] MacOS (ARM): 0x1aa490
     * @note[short] MacOS (Intel): 0x1fcdf0
     * @note[short] Windows: 0xd92a0
     * @note[short] iOS: 0xeb1cc
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa2d0
     * @note[short] MacOS (Intel): 0x1fcc30
     * @note[short] Windows: 0xd8b00
     * @note[short] iOS: 0xeb064
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa568
     * @note[short] MacOS (Intel): 0x1fcec0
     * @note[short] Windows: 0xd93c0
     * @note[short] iOS: 0xeb280
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a7e44
     * @note[short] MacOS (Intel): 0x1fa6e0
     * @note[short] Windows: 0xd5440
     * @note[short] iOS: 0xe8dc4
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1aa738
     * @note[short] MacOS (Intel): 0x1fd090
     * @note[short] Windows: 0xd9610
     * @note[short] iOS: 0xeb410
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aba64
     * @note[short] MacOS (Intel): 0x1fe3c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xec320
     * @note[short] Android
     */
    void onClone();

    /**
     * @note[short] MacOS (ARM): 0x1ab774
     * @note[short] MacOS (Intel): 0x1fe0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xec058
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x1a9398
     * @note[short] MacOS (Intel): 0x1fbcd0
     * @note[short] Windows: 0xd82b0
     * @note[short] iOS: 0xea240
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aab64
     * @note[short] MacOS (Intel): 0x1fd4b0
     * @note[short] Windows: 0xd6810
     * @note[short] iOS: 0xeb6e8
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa3b8
     * @note[short] MacOS (Intel): 0x1fcd20
     * @note[short] Windows: 0xd9180
     * @note[short] iOS: 0xeb118
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa8a4
     * @note[short] MacOS (Intel): 0x1fd210
     * @note[short] Windows: 0xd6a30
     * @note[short] iOS: 0xeb534
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa6f4
     * @note[short] MacOS (Intel): 0x1fd040
     * @note[short] Windows: 0xd6980
     * @note[short] iOS: 0xeb3cc
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aac24
     * @note[short] MacOS (Intel): 0x1fd570
     * @note[short] Windows: 0xd6a00
     * @note[short] iOS: 0xeb784
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abb3c
     * @note[short] MacOS (Intel): 0x1fe4b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoveToTop();

    /**
     * @note[short] MacOS (ARM): 0x1a94d0
     * @note[short] MacOS (Intel): 0x1fbe30
     * @note[short] Windows: 0xd7e50
     * @note[short] iOS: 0xea340
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa648
     * @note[short] MacOS (Intel): 0x1fcfa0
     * @note[short] Windows: 0xd94f0
     * @note[short] iOS: 0xeb334
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a9618
     * @note[short] MacOS (Intel): 0x1fbf70
     * @note[short] Windows: 0xd8450
     * @note[short] iOS: 0xea448
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ab6e4
     * @note[short] MacOS (Intel): 0x1fe040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa1f0
     * @note[short] MacOS (Intel): 0x1fcb50
     * @note[short] Windows: 0xd8180
     * @note[short] iOS: 0xeafb0
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ab5d0
     * @note[short] MacOS (Intel): 0x1fdf30
     * @note[short] Windows: 0xd8010
     * @note[short] iOS: 0xebf44
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x1ab694
     * @note[short] MacOS (Intel): 0x1fdff0
     * @note[short] Windows: 0xd80f0
     * @note[short] iOS: 0xec008
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x1a99d0
     * @note[short] MacOS (Intel): 0x1fc3b0
     * @note[short] Windows: 0xd6c50
     * @note[short] iOS: 0xea778
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x1a9394
     * @note[short] MacOS (Intel): 0x1fbcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDescText(char const* text);

    /**
     * @note[short] MacOS (ARM): 0x1ab29c
     * @note[short] MacOS (Intel): 0x1fdbc0
     * @note[short] Windows: 0xd97c0
     * @note[short] iOS: 0xebc94
     * @note[short] Android
     */
    void verifyLevelName();
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_textInputs;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_exiting;
    GJLevelType m_levelType;
    gd::string m_levelName;
    UploadActionPopup* m_descriptionPopup;
};
