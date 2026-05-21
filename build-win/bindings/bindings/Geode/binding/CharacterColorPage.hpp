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

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CharacterColorPage();

    /**
     * @note[short] MacOS (ARM): 0x57c6c4
     * @note[short] MacOS (Intel): 0x65c8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x128b5c
     * @note[short] Android: Rebinded
     */
     ~CharacterColorPage();

    /**
     * @note[short] MacOS (ARM): 0x57c78c
     * @note[short] MacOS (Intel): 0x65ca40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x128c24
     * @note[short] Android
     */
    static CharacterColorPage* create();

    /**
     * @note[short] MacOS (ARM): 0x57c894
     * @note[short] MacOS (Intel): 0x65cba0
     * @note[short] Windows: 0x87f80
     * @note[short] iOS: 0x128ce4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x57e748
     * @note[short] MacOS (Intel): 0x65ea70
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x12a560
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x57e69c
     * @note[short] MacOS (Intel): 0x65e9d0
     * @note[short] Windows: 0x8a7f0
     * @note[short] iOS: 0x12a504
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x57e510
     * @note[short] MacOS (Intel): 0x65e840
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x12a38c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x57e438
     * @note[short] MacOS (Intel): 0x65e790
     * @note[short] Windows: 0x89490
     * @note[short] iOS: 0x12a2cc
     * @note[short] Android
     */
    int activeColorForMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x57e4a8
     * @note[short] MacOS (Intel): 0x65e7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12a328
     * @note[short] Android
     */
    bool checkColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x57e188
     * @note[short] MacOS (Intel): 0x65e4b0
     * @note[short] Windows: 0x8a0a0
     * @note[short] iOS: 0x12a088
     * @note[short] Android
     */
    int colorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x57d898
     * @note[short] MacOS (Intel): 0x65db80
     * @note[short] Windows: 0x88ea0
     * @note[short] iOS: 0x1299d8
     * @note[short] Android
     */
    void createColorMenu();

    /**
     * @note[short] MacOS (ARM): 0x57e698
     * @note[short] MacOS (Intel): 0x65e9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x57e3e4
     * @note[short] MacOS (Intel): 0x65e720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12a280
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x57d450
     * @note[short] MacOS (Intel): 0x65d760
     * @note[short] Windows: 0x8a7b0
     * @note[short] iOS: 0x129600
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57d56c
     * @note[short] MacOS (Intel): 0x65d860
     * @note[short] Windows: 0x895a0
     * @note[short] iOS: 0x129718
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57e1a8
     * @note[short] MacOS (Intel): 0x65e4d0
     * @note[short] Windows: 0x89db0
     * @note[short] iOS: 0x12a0a8
     * @note[short] Android
     */
    void onPlayerColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57dc70
     * @note[short] MacOS (Intel): 0x65df60
     * @note[short] Windows: 0x88df0
     * @note[short] iOS: 0x129d30
     * @note[short] Android
     */
    void toggleGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57e134
     * @note[short] MacOS (Intel): 0x65e460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGlowItems(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x57d4a4
     * @note[short] MacOS (Intel): 0x65d7b0
     * @note[short] Windows: 0x88cd0
     * @note[short] iOS: 0x129654
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57dca8
     * @note[short] MacOS (Intel): 0x65dfa0
     * @note[short] Windows: 0x89840
     * @note[short] iOS: 0x129d68
     * @note[short] Android
     */
    void updateColorMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x57d758
     * @note[short] MacOS (Intel): 0x65da20
     * @note[short] Windows: 0x8a590
     * @note[short] iOS: 0x12989c
     * @note[short] Android
     */
    void updateIconColors();
    int m_colorMode;
    float m_height;
    float m_width;
    cocos2d::CCArray* m_playerObjects;
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCDictionary* m_colorButtons;
    cocos2d::CCArray* m_cursors;
    CharacterColorDelegate* m_delegate;
    CCMenuItemToggler* m_glowToggler;
    cocos2d::CCLabelBMFont* m_glowLabel;
};
