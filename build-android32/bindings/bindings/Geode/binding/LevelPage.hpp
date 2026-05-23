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

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x405c74
     * @note[short] Android: Out of line
     */
     LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x3a749c
     * @note[short] MacOS (Intel): 0x435210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x403e1c
     * @note[short] Android: Rebinded
     */
     ~LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x3a4bcc
     * @note[short] MacOS (Intel): 0x432840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40222c
     * @note[short] Android
     */
    static LevelPage* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x3a9610
     * @note[short] MacOS (Intel): 0x437640
     * @note[short] Windows: 0x31e290
     * @note[short] iOS: 0x405b0c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a9710
     * @note[short] MacOS (Intel): 0x437760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x405c10
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a9718
     * @note[short] MacOS (Intel): 0x437780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x405c18
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a9720
     * @note[short] MacOS (Intel): 0x4377a0
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x405c20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3a973c
     * @note[short] MacOS (Intel): 0x4377e0
     * @note[short] Windows: 0x9b7d0
     * @note[short] iOS: 0x405c3c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3a9348
     * @note[short] MacOS (Intel): 0x437390
     * @note[short] Windows: 0x31d7a0
     * @note[short] iOS: 0x4058e4
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3a6434
     * @note[short] MacOS (Intel): 0x434020
     * @note[short] Windows: 0x31c3a0
     * @note[short] iOS: 0x403378
     * @note[short] Android
     */
    void addSecretCoin();

    /**
     * @note[short] MacOS (ARM): 0x3a866c
     * @note[short] MacOS (Intel): 0x436570
     * @note[short] Windows: 0x31cab0
     * @note[short] iOS: 0x404d88
     * @note[short] Android
     */
    void addSecretDoor();

    /**
     * @note[short] MacOS (ARM): 0x3a7568
     * @note[short] MacOS (Intel): 0x435370
     * @note[short] Windows: 0x319c20
     * @note[short] iOS: 0x403ee8
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x3a6fa4
     * @note[short] MacOS (Intel): 0x434c80
     * @note[short] Windows: 0x31ddf0
     * @note[short] iOS: 0x403b34
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a87d8
     * @note[short] MacOS (Intel): 0x4366e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6c94
     * @note[short] MacOS (Intel): 0x434980
     * @note[short] Windows: 0x31d880
     * @note[short] iOS: 0x40392c
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a8c74
     * @note[short] MacOS (Intel): 0x436b90
     * @note[short] Windows: 0x31ccc0
     * @note[short] iOS: 0x405324
     * @note[short] Android
     */
    void onSecretDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a8120
     * @note[short] MacOS (Intel): 0x435fd0
     * @note[short] Windows: 0x31bce0
     * @note[short] iOS: 0x4049a4
     * @note[short] Android
     */
    void onTheTower(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a883c
     * @note[short] MacOS (Intel): 0x436740
     * @note[short] Windows: 0x31c5e0
     * @note[short] iOS: 0x404ef4
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x3a9498
     * @note[short] MacOS (Intel): 0x4374b0
     * @note[short] Windows: 0x31dc10
     * @note[short] iOS: 0x405994
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x3a955c
     * @note[short] MacOS (Intel): 0x437570
     * @note[short] Windows: 0x31dcf0
     * @note[short] iOS: 0x405a58
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x3a4e60
     * @note[short] MacOS (Intel): 0x432af0
     * @note[short] Windows: 0x31a8b0
     * @note[short] iOS: 0x402430
     * @note[short] Android
     */
    void updateDynamicPage(GJGameLevel* level);
    bool m_isBusy;
    GJGameLevel* m_level;
    cocos2d::CCMenu* m_levelMenu;
    cocos2d::extension::CCScale9Sprite* m_levelDisplay;
    cocos2d::CCLabelBMFont* m_normalProgressLabel;
    cocos2d::CCLabelBMFont* m_practiceProgressLabel;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    float m_progressWidth;
    cocos2d::CCSprite* m_normalProgressBar;
    cocos2d::CCSprite* m_practiceProgressBar;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSize m_levelDisplaySize;
    cocos2d::CCArray* m_coins;
    cocos2d::CCArray* m_dynamicObjects;
    cocos2d::CCArray* m_levelObjects;
    cocos2d::CCArray* m_progressObjects;
    GameObject* m_coinObject;
    cocos2d::CCSprite* m_secretDoor;
};
