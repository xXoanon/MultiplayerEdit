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

class LevelFeatureLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelFeatureLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelFeatureLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x45c50c
     * @note[short] MacOS (Intel): 0x504bd0
     * @note[short] Android
     */
    static LevelFeatureLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x45d0b8
     * @note[short] MacOS (Intel): 0x5057f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45c614
     * @note[short] MacOS (Intel): 0x504d10
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x45cd78
     * @note[short] MacOS (Intel): 0x5054c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45ce68
     * @note[short] MacOS (Intel): 0x5055a0
     * @note[short] Android
     */
    void onDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45cf14
     * @note[short] MacOS (Intel): 0x505650
     * @note[short] Android
     */
    void onDown2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45d00c
     * @note[short] MacOS (Intel): 0x505750
     * @note[short] Android
     */
    void onRemoveValues(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45ce14
     * @note[short] MacOS (Intel): 0x505550
     * @note[short] Android
     */
    void onSetEpicOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45cdb4
     * @note[short] MacOS (Intel): 0x5054f0
     * @note[short] Android
     */
    void onSetFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45d060
     * @note[short] MacOS (Intel): 0x5057a0
     * @note[short] Android
     */
    void onToggleEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45cec0
     * @note[short] MacOS (Intel): 0x505600
     * @note[short] Android
     */
    void onUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45cf6c
     * @note[short] MacOS (Intel): 0x5056b0
     * @note[short] Android
     */
    void onUp2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45cfc0
     * @note[short] MacOS (Intel): 0x505700
     * @note[short] Android
     */
    void updateStars();
    cocos2d::CCLabelBMFont* m_featureLabel;
    int m_levelID;
    int m_featurePosition;
    bool m_epicOnly;
    cocos2d::CCSprite* m_epicSprite;
};
