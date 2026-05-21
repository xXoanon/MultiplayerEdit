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
#include "GooglePlayDelegate.hpp"
#include "GJDropDownLayerDelegate.hpp"

class MoreOptionsLayer : public FLAlertLayer, public TextInputDelegate, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf3954
     * @note[short] Android: Out of line
     */
     MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a2f9c
     * @note[short] MacOS (Intel): 0x79b670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xed5fc
     * @note[short] Android: Rebinded
     */
     ~MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a2bd8
     * @note[short] MacOS (Intel): 0x79b220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xed438
     * @note[short] Android
     */
    static MoreOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6a3090
     * @note[short] MacOS (Intel): 0x79b7f0
     * @note[short] Windows: 0x373740
     * @note[short] iOS: 0xed6e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6a6254
     * @note[short] MacOS (Intel): 0x79eac0
     * @note[short] Windows: 0x376a00
     * @note[short] iOS: 0xefa7c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6a6260
     * @note[short] MacOS (Intel): 0x79eaf0
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0xefa88
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x6a6330
     * @note[short] MacOS (Intel): 0x79ebb0
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0xefaf4
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x6a63e8
     * @note[short] MacOS (Intel): 0x79ec60
     * @note[short] Windows: 0x376a10
     * @note[short] iOS: 0xefb54
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x6a6128
     * @note[short] MacOS (Intel): 0x79e940
     * @note[short] Windows: 0x376560
     * @note[short] iOS: 0xef9a0
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x6a43e8
     * @note[short] MacOS (Intel): 0x79cb50
     * @note[short] Windows: 0x374b80
     * @note[short] iOS: 0xee858
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x6a5f98
     * @note[short] MacOS (Intel): 0x79e7e0
     * @note[short] Windows: 0x3751e0
     * @note[short] iOS: 0xef918
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a4f08
     * @note[short] MacOS (Intel): 0x79d6e0
     * @note[short] Windows: 0x375600
     * @note[short] iOS: 0xeef04
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a5c64
     * @note[short] MacOS (Intel): 0x79e4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xef768
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a5d94
     * @note[short] MacOS (Intel): 0x79e5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] MacOS (ARM): 0x6a54b4
     * @note[short] MacOS (Intel): 0x79dce0
     * @note[short] Windows: 0x375440
     * @note[short] iOS: 0xef2ec
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a6100
     * @note[short] MacOS (Intel): 0x79e920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a53c8
     * @note[short] MacOS (Intel): 0x79dbe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xef200
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a60d8
     * @note[short] MacOS (Intel): 0x79e900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a496c
     * @note[short] MacOS (Intel): 0x79d120
     * @note[short] Windows: 0x3752b0
     * @note[short] iOS: 0xeebfc
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a4934
     * @note[short] MacOS (Intel): 0x79d0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] MacOS (ARM): 0x6a4e44
     * @note[short] MacOS (Intel): 0x79d600
     * @note[short] Windows: 0x3768a0
     * @note[short] iOS: 0xeee40
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4b88
     * @note[short] MacOS (Intel): 0x79d360
     * @note[short] Windows: 0x376410
     * @note[short] iOS: 0xeed48
     * @note[short] Android
     */
    void onFMODDebug(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4d0c
     * @note[short] MacOS (Intel): 0x79d4b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4d68
     * @note[short] MacOS (Intel): 0x79d510
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a5dbc
     * @note[short] MacOS (Intel): 0x79e610
     * @note[short] Windows: 0x3766c0
     * @note[short] iOS: 0xef814
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a53ac
     * @note[short] MacOS (Intel): 0x79dbc0
     * @note[short] Windows: 0xdcf70
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4efc
     * @note[short] MacOS (Intel): 0x79d6c0
     * @note[short] Windows: 0x3755e0
     * @note[short] iOS: 0xeeef8
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4e28
     * @note[short] MacOS (Intel): 0x79d5e0
     * @note[short] Windows: 0x3765b0
     * @note[short] iOS: 0xeee24
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4ef0
     * @note[short] MacOS (Intel): 0x79d6a0
     * @note[short] Windows: 0x3755f0
     * @note[short] iOS: 0xeeeec
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a4b30
     * @note[short] MacOS (Intel): 0x79d300
     * @note[short] Windows: 0x3763a0
     * @note[short] iOS: 0xeecf0
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a568c
     * @note[short] MacOS (Intel): 0x79ded0
     * @note[short] Windows: 0x375ba0
     * @note[short] iOS: 0xef3f4
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a60b0
     * @note[short] MacOS (Intel): 0x79e8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a4de0
     * @note[short] MacOS (Intel): 0x79d590
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGP();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_variables;
    cocos2d::CCDictionary* m_objects;
    CCMenuItemSpriteExtra* m_leftBtn;
    CCMenuItemSpriteExtra* m_rightBtn;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_gpSignInBtn;
    CCMenuItemSpriteExtra* m_gpSignOutBtn;
    cocos2d::CCLabelBMFont* m_categoryLabel;
};
