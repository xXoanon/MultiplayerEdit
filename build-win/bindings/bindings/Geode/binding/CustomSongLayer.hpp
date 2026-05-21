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
#include "GJDropDownLayerDelegate.hpp"
#include "MusicBrowserDelegate.hpp"

class CustomSongLayer : public FLAlertLayer, public TextInputDelegate, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomSongLayer();

    /**
     * @note[short] MacOS (ARM): 0x1c022c
     * @note[short] MacOS (Intel): 0x214b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x143988
     * @note[short] Android
     */
    static CustomSongLayer* create(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1c19d8
     * @note[short] MacOS (Intel): 0x216400
     * @note[short] Windows: 0xc4480
     * @note[short] iOS: 0x144d1c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c1ac4
     * @note[short] MacOS (Intel): 0x2164f0
     * @note[short] Windows: 0xc4490
     * @note[short] iOS: 0x144d28
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1c14a8
     * @note[short] MacOS (Intel): 0x215e90
     * @note[short] Windows: 0xc3e30
     * @note[short] iOS: 0x1449f8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1c1428
     * @note[short] MacOS (Intel): 0x215e30
     * @note[short] Windows: 0xc3d80
     * @note[short] iOS: 0x1449c0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1c13a8
     * @note[short] MacOS (Intel): 0x215dd0
     * @note[short] Windows: 0xc3d80
     * @note[short] iOS: 0x144988
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1c14c8
     * @note[short] MacOS (Intel): 0x215eb0
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x144a18
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x1c1598
     * @note[short] MacOS (Intel): 0x215f70
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x144a84
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1c1848
     * @note[short] MacOS (Intel): 0x2162a0
     * @note[short] Windows: 0xc4210
     * @note[short] iOS: 0x144c4c
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1c1910
     * @note[short] MacOS (Intel): 0x216350
     * @note[short] Windows: 0xc42e0
     * @note[short] iOS: 0x144cb4
     * @note[short] Android
     */
    virtual void musicBrowserClosed(MusicBrowser* browser);

    /**
     * @note[short] MacOS (ARM): 0x1c0348
     * @note[short] MacOS (Intel): 0x214c80
     * @note[short] Windows: 0xc2c20
     * @note[short] iOS: 0x143a5c
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1c0ec0
     * @note[short] MacOS (Intel): 0x2158b0
     * @note[short] Windows: 0xc43b0
     * @note[short] iOS: 0x1445a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c1018
     * @note[short] MacOS (Intel): 0x215a10
     * @note[short] Windows: 0xc4120
     * @note[short] iOS: 0x1446f8
     * @note[short] Android
     */
    void onCreateLines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c0fb4
     * @note[short] MacOS (Intel): 0x2159a0
     * @note[short] Windows: 0xc3ec0
     * @note[short] iOS: 0x144694
     * @note[short] Android
     */
    void onMusicBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c0f98
     * @note[short] MacOS (Intel): 0x215980
     * @note[short] Windows: 0xc3f20
     * @note[short] iOS: 0x144678
     * @note[short] Android
     */
    void onNCSBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c0ffc
     * @note[short] MacOS (Intel): 0x2159f0
     * @note[short] Windows: 0xc4020
     * @note[short] iOS: 0x1446dc
     * @note[short] Android
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c1054
     * @note[short] MacOS (Intel): 0x215a50
     * @note[short] Windows: 0xc38a0
     * @note[short] iOS: 0x144734
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c1074
     * @note[short] MacOS (Intel): 0x215a70
     * @note[short] Windows: 0xc39a0
     * @note[short] iOS: 0x144754
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c0f34
     * @note[short] MacOS (Intel): 0x215920
     * @note[short] Windows: 0xc3e40
     * @note[short] iOS: 0x144614
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c11f0
     * @note[short] MacOS (Intel): 0x215be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14483c
     * @note[short] Android
     */
    void showNewgroundsMessage();
    CustomSongDelegate* m_songDelegate;
    CCTextInputNode* m_songIDInput;
    CustomSongWidget* m_songWidget;
    CustomSongLayerDelegate* m_delegate;
};
