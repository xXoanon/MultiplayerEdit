#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretGame01Layer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretGame01Layer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretGame01Layer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3e536c
     * @note[short] MacOS (Intel): 0x47ef60
     * @note[short] Android
     */
    static SecretGame01Layer* create();

    /**
     * @note[short] MacOS (ARM): 0x3e6b54
     * @note[short] MacOS (Intel): 0x4809d0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3e5da0
     * @note[short] MacOS (Intel): 0x47fb90
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3e697c
     * @note[short] MacOS (Intel): 0x480810
     * @note[short] Android
     */
    void didSelectCorrectObject(CCMenuItemSpriteExtra* button);

    /**
     * @note[short] MacOS (ARM): 0x3e618c
     * @note[short] MacOS (Intel): 0x47ff40
     * @note[short] Android
     */
    void gameStep01();

    /**
     * @note[short] MacOS (ARM): 0x3e63fc
     * @note[short] MacOS (Intel): 0x480210
     * @note[short] Android
     */
    void gameStep02();

    /**
     * @note[short] MacOS (ARM): 0x3e5f84
     * @note[short] MacOS (Intel): 0x47fd80
     * @note[short] Android
     */
    int getCountForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3e5fac
     * @note[short] MacOS (Intel): 0x47fdb0
     * @note[short] Android
     */
    gd::string getFrameForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3e5f60
     * @note[short] MacOS (Intel): 0x47fd50
     * @note[short] Android
     */
    int getRowsForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3e6080
     * @note[short] MacOS (Intel): 0x47fe40
     * @note[short] Android
     */
    int getTimeForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3e60a4
     * @note[short] MacOS (Intel): 0x47fe70
     * @note[short] Android
     */
    void onSelectButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e548c
     * @note[short] MacOS (Intel): 0x47f0b0
     * @note[short] Android
     */
    void resetGame();

    /**
     * @note[short] MacOS (ARM): 0x3e6544
     * @note[short] MacOS (Intel): 0x480370
     * @note[short] Android
     */
    void resetGameTimer();

    /**
     * @note[short] MacOS (ARM): 0x3e65bc
     * @note[short] MacOS (Intel): 0x480400
     * @note[short] Android
     */
    void scaleOutGame(bool won);

    /**
     * @note[short] MacOS (ARM): 0x3e65b0
     * @note[short] MacOS (Intel): 0x4803e0
     * @note[short] Android
     */
    void showGameOver();

    /**
     * @note[short] MacOS (ARM): 0x3e6968
     * @note[short] MacOS (Intel): 0x4807f0
     * @note[short] Android
     */
    void showGameWon();
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCArray* m_requiredObjects;
    cocos2d::CCMenu* m_mainMenu;
    int m_selectedObject;
    int m_gameDifficulty;
    bool m_gameActive;
    float m_timeElapsed;
    float m_gameTime;
    cocos2d::CCSprite* m_timeBarSprite;
};
