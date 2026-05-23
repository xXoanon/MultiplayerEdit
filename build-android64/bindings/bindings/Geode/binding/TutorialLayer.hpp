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

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x438cb0
     * @note[short] MacOS (Intel): 0x4dc5a0
     * @note[short] Windows: 0x4cbc90
     * @note[short] iOS: 0x1bd24c
     * @note[short] Android
     */
    static TutorialLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x438db4
     * @note[short] MacOS (Intel): 0x4dc6f0
     * @note[short] Windows: 0x4cbda0
     * @note[short] iOS: 0x1bd308
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x439848
     * @note[short] MacOS (Intel): 0x4dd120
     * @note[short] Windows: 0x4cc9c0
     * @note[short] iOS: 0x1bdc00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x439384
     * @note[short] MacOS (Intel): 0x4dcc70
     * @note[short] Windows: 0x4cc310
     * @note[short] iOS: 0x1bd7f8
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x43923c
     * @note[short] MacOS (Intel): 0x4dcb50
     * @note[short] Windows: 0x4cc940
     * @note[short] iOS: 0x1bd788
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4392d0
     * @note[short] MacOS (Intel): 0x4dcbd0
     * @note[short] Windows: 0x4cc2f0
     * @note[short] iOS: 0x1bd7e0
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4397fc
     * @note[short] MacOS (Intel): 0x4dd0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bdbb4
     * @note[short] Android
     */
    void removeTutorialTexture();
    cocos2d::CCLayer* m_tutorialLayer;
    int m_page;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_exitButton;
};
