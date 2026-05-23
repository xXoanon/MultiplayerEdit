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
#include "NumberInputDelegate.hpp"

class ShareLevelSettingsLayer : public FLAlertLayer, public NumberInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareLevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelSettingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x223594
     * @note[short] MacOS (Intel): 0x281640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276258
     * @note[short] Android
     */
    static ShareLevelSettingsLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x224ffc
     * @note[short] MacOS (Intel): 0x283370
     * @note[short] Windows: 0x491ea0
     * @note[short] iOS: 0x2779d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2242f4
     * @note[short] MacOS (Intel): 0x2825b0
     * @note[short] Windows: 0x4910e0
     * @note[short] iOS: 0x276eb0
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x224cf4
     * @note[short] MacOS (Intel): 0x283020
     * @note[short] Windows: 0x491e20
     * @note[short] iOS: 0x277798
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224d70
     * @note[short] MacOS (Intel): 0x2830a0
     * @note[short] Windows: 0x491b00
     * @note[short] iOS: 0x277814
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224f2c
     * @note[short] MacOS (Intel): 0x283290
     * @note[short] Windows: 0x491d20
     * @note[short] iOS: 0x277900
     * @note[short] Android
     */
    void onUnlistedFriendsOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224f40
     * @note[short] MacOS (Intel): 0x2832b0
     * @note[short] Windows: 0x491d40
     * @note[short] iOS: 0x277914
     * @note[short] Android
     */
    void updateSettingsState();
    cocos2d::CCLabelBMFont* m_passwordLabel;
    GJGameLevel* m_level;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
};
