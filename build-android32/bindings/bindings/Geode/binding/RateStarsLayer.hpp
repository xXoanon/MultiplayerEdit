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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x22c494
     * @note[short] MacOS (Intel): 0x28b7a0
     * @note[short] Windows: 0x3ca000
     * @note[short] iOS: 0x80138
     * @note[short] Android
     */
    static RateStarsLayer* create(int levelID, bool platformer, bool moderator);

    /**
     * @note[short] MacOS (ARM): 0x22d780
     * @note[short] MacOS (Intel): 0x28cad0
     * @note[short] Windows: 0x3caef0
     * @note[short] iOS: 0x80cb8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22d3ec
     * @note[short] MacOS (Intel): 0x28c790
     * @note[short] Windows: 0x3cacf0
     * @note[short] iOS: 0x80b18
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x22d52c
     * @note[short] MacOS (Intel): 0x28c880
     * @note[short] Windows: 0x3cad70
     * @note[short] iOS: 0x80ba4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x22d68c
     * @note[short] MacOS (Intel): 0x28c9f0
     * @note[short] Windows: 0x3cae30
     * @note[short] iOS: 0x80c38
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x22cfb4
     * @note[short] MacOS (Intel): 0x28c360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int stars, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x22c5dc
     * @note[short] MacOS (Intel): 0x28b930
     * @note[short] Windows: 0x3ca150
     * @note[short] iOS: 0x801c4
     * @note[short] Android
     */
    bool init(int levelID, bool platformer, bool moderator);

    /**
     * @note[short] MacOS (ARM): 0x22d264
     * @note[short] MacOS (Intel): 0x28c600
     * @note[short] Windows: 0x3caeb0
     * @note[short] iOS: 0x8099c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22d208
     * @note[short] MacOS (Intel): 0x28c5b0
     * @note[short] Windows: 0x3ca8e0
     * @note[short] iOS: 0x80984
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22d394
     * @note[short] MacOS (Intel): 0x28c740
     * @note[short] Windows: 0x3cab00
     * @note[short] iOS: 0x809f8
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22d1f0
     * @note[short] MacOS (Intel): 0x28c580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22d07c
     * @note[short] MacOS (Intel): 0x28c430
     * @note[short] Windows: 0x3ca910
     * @note[short] iOS: 0x80820
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    bool m_uploadFinished;
    bool m_moderator;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_buttons;
    int m_levelID;
    int m_starsRate;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_popup;
    GJDifficultySprite* m_difficultySprite;
    int m_featureState;
    RateLevelDelegate* m_delegate;
};
