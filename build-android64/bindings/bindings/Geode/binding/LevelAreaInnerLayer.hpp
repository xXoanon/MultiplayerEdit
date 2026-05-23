#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaInnerLayer();

    /**
     * @note[short] MacOS (ARM): 0x21bf58
     * @note[short] MacOS (Intel): 0x279bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x345660
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x21bd10
     * @note[short] MacOS (Intel): 0x279920
     * @note[short] Windows: 0x2c63d0
     * @note[short] iOS: 0x34557c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x21ddb0
     * @note[short] MacOS (Intel): 0x27bb80
     * @note[short] Windows: 0x2c8750
     * @note[short] iOS: 0x346de8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21db84
     * @note[short] MacOS (Intel): 0x27b950
     * @note[short] Windows: 0x2c7ba0
     * @note[short] iOS: 0x346c40
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x21dd5c
     * @note[short] MacOS (Intel): 0x27bb30
     * @note[short] Windows: 0x2c8700
     * @note[short] iOS: 0x346d94
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x21c018
     * @note[short] MacOS (Intel): 0x279cd0
     * @note[short] Windows: 0x2c64e0
     * @note[short] iOS: 0x345714
     * @note[short] Android
     */
    bool init(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x21cde4
     * @note[short] MacOS (Intel): 0x27ab10
     * @note[short] Windows: 0x2c86a0
     * @note[short] iOS: 0x346240
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21ce34
     * @note[short] MacOS (Intel): 0x27ab60
     * @note[short] Windows: 0x2c81d0
     * @note[short] iOS: 0x346290
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d0ec
     * @note[short] MacOS (Intel): 0x27adf0
     * @note[short] Windows: 0x2c7c30
     * @note[short] iOS: 0x3464f8
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21cf68
     * @note[short] MacOS (Intel): 0x27ac90
     * @note[short] Windows: 0x2c74c0
     * @note[short] iOS: 0x3463bc
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d028
     * @note[short] MacOS (Intel): 0x27ad40
     * @note[short] Windows: 0x2c84c0
     * @note[short] iOS: 0x346454
     * @note[short] Android
     */
    void onOnlineVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21dc9c
     * @note[short] MacOS (Intel): 0x27ba60
     * @note[short] Windows: 0x2c8390
     * @note[short] iOS: 0x346cd4
     * @note[short] Android
     */
    bool playStep1();

    /**
     * @note[short] MacOS (ARM): 0x21d678
     * @note[short] MacOS (Intel): 0x27b3f0
     * @note[short] Windows: 0x2c75c0
     * @note[short] iOS: 0x3468c0
     * @note[short] Android
     */
    void showFloor1CompleteDialog();

    /**
     * @note[short] MacOS (ARM): 0x21d05c
     * @note[short] MacOS (Intel): 0x27ad80
     * @note[short] Windows: 0x2c8130
     * @note[short] iOS: 0x346488
     * @note[short] Android
     */
    void tryResumeTowerMusic();

    /**
     * @note[short] MacOS (ARM): 0x21db64
     * @note[short] MacOS (Intel): 0x27b930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();
    CCMenuItemSpriteExtra* m_nextFloorButton;
    bool m_enteringLevel;
    int m_levelID;
    bool m_exiting;
};
