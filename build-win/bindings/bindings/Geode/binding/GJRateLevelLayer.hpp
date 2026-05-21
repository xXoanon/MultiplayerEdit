#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "LevelRateInfoDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJRateLevelLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public LevelRateInfoDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateLevelLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x45fcbc
     * @note[short] MacOS (Intel): 0x5080b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b2d1c
     * @note[short] Android: Out of line
     */
     GJRateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x45d134
     * @note[short] MacOS (Intel): 0x505860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0b64
     * @note[short] Android: Rebinded
     */
     ~GJRateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x45d26c
     * @note[short] MacOS (Intel): 0x505a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0c90
     * @note[short] Android
     */
    static GJRateLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x45fc98
     * @note[short] MacOS (Intel): 0x508070
     * @note[short] Windows: 0x2f6ec0
     * @note[short] iOS: 0x1b2cf8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45fc94
     * @note[short] MacOS (Intel): 0x508060
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x1b2cf4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45e33c
     * @note[short] MacOS (Intel): 0x506800
     * @note[short] Windows: 0x2f54d0
     * @note[short] iOS: 0x1b18d8
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f924
     * @note[short] MacOS (Intel): 0x507dc0
     * @note[short] Windows: 0x2f6ce0
     * @note[short] iOS: 0x1b2b1c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x45fa7c
     * @note[short] MacOS (Intel): 0x507ed0
     * @note[short] Windows: 0x2f6d80
     * @note[short] iOS: 0x1b2bb4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x45fbf4
     * @note[short] MacOS (Intel): 0x507fc0
     * @note[short] Windows: 0x2f6e60
     * @note[short] iOS: 0x1b2c54
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x45f7f8
     * @note[short] MacOS (Intel): 0x507c80
     * @note[short] Windows: 0x2f6c20
     * @note[short] iOS: 0x1b2a00
     * @note[short] Android: Rebinded
     */
    virtual void rateInfoFinished(int id, gd::string info);

    /**
     * @note[short] MacOS (ARM): 0x45f8c4
     * @note[short] MacOS (Intel): 0x507d50
     * @note[short] Windows: 0x2f6cb0
     * @note[short] iOS: 0x1b2abc
     * @note[short] Android
     */
    virtual void rateInfoFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x45e508
     * @note[short] MacOS (Intel): 0x5069e0
     * @note[short] Windows: 0x2f5750
     * @note[short] iOS: 0x1b1a78
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x45f4c0
     * @note[short] MacOS (Intel): 0x507970
     * @note[short] Windows: 0x2f6540
     * @note[short] iOS: 0x1b26cc
     * @note[short] Android: Rebinded
     */
    void createStatPillar(int width, int height, int count, cocos2d::ccColor3B innerColor, cocos2d::ccColor3B outerColor, cocos2d::CCPoint position, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x45dfd4
     * @note[short] MacOS (Intel): 0x506490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b1590
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int stars, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x45d2ec
     * @note[short] MacOS (Intel): 0x505ac0
     * @note[short] Windows: 0x2f4920
     * @note[short] iOS: 0x1b0d04
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x45e210
     * @note[short] MacOS (Intel): 0x5066b0
     * @note[short] Windows: 0x2f5920
     * @note[short] iOS: 0x1b17bc
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45e260
     * @note[short] MacOS (Intel): 0x506710
     * @note[short] Windows: 0x2f6ab0
     * @note[short] iOS: 0x1b180c
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45df7c
     * @note[short] MacOS (Intel): 0x506440
     * @note[short] Windows: 0x2f58b0
     * @note[short] iOS: 0x1b1538
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45e09c
     * @note[short] MacOS (Intel): 0x506560
     * @note[short] Windows: 0x2f68c0
     * @note[short] iOS: 0x1b1658
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45e5f0
     * @note[short] MacOS (Intel): 0x506af0
     * @note[short] Windows: 0x2f5980
     * @note[short] iOS: 0x1b1b50
     * @note[short] Android: Rebinded
     */
    void setupRateInfo(gd::string info);
    GJGameLevel* m_level;
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_starButtons;
    int m_stars;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_uploadPopup;
    GJDifficultySprite* m_difficultySprite;
    GJFeatureState m_featureState;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCPoint m_center;
};
