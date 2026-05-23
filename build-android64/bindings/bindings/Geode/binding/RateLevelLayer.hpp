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

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4b61f8
     * @note[short] MacOS (Intel): 0x567830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5e44c
     * @note[short] Android: Rebinded
     */
     ~RateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4b641c
     * @note[short] MacOS (Intel): 0x567b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5e4f0
     * @note[short] Android
     */
    static RateLevelLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4b6d9c
     * @note[short] MacOS (Intel): 0x5684e0
     * @note[short] Windows: 0x3c9e70
     * @note[short] iOS: 0x5eaf4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4b6520
     * @note[short] MacOS (Intel): 0x567ca0
     * @note[short] Windows: 0x3c9780
     * @note[short] iOS: 0x5e5ac
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4b6cd8
     * @note[short] MacOS (Intel): 0x568440
     * @note[short] Windows: 0x3c9e30
     * @note[short] iOS: 0x5ea30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b6d34
     * @note[short] MacOS (Intel): 0x568490
     * @note[short] Windows: 0x3c9de0
     * @note[short] iOS: 0x5ea8c
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b6bbc
     * @note[short] MacOS (Intel): 0x568360
     * @note[short] Windows: 0x3c9c90
     * @note[short] iOS: 0x5e93c
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_difficulties;
    int m_levelID;
    int m_levelRate;
    RateLevelDelegate* m_delegate;
};
