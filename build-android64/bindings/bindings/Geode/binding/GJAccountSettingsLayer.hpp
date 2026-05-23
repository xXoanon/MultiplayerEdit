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
#include "TextInputDelegate.hpp"

class GJAccountSettingsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJAccountSettingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x23e640
     * @note[short] MacOS (Intel): 0x29f020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d505c
     * @note[short] Android: Rebinded
     */
     ~GJAccountSettingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x23e71c
     * @note[short] MacOS (Intel): 0x29f190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d5138
     * @note[short] Android
     */
    static GJAccountSettingsLayer* create(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x241fe4
     * @note[short] MacOS (Intel): 0x2a2eb0
     * @note[short] Windows: 0x294530
     * @note[short] iOS: 0x2d78d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24110c
     * @note[short] MacOS (Intel): 0x2a1e90
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x2d6f9c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x2411dc
     * @note[short] MacOS (Intel): 0x2a1f50
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x2d7008
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x241294
     * @note[short] MacOS (Intel): 0x2a2000
     * @note[short] Windows: 0x293ed0
     * @note[short] iOS: 0x2d7068
     * @note[short] Android
     */
    void closeAccInputNodes(cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x24054c
     * @note[short] MacOS (Intel): 0x2a1220
     * @note[short] Windows: 0x293ae0
     * @note[short] iOS: 0x2d67b4
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float width, float scale);

    /**
     * @note[short] MacOS (ARM): 0x23e838
     * @note[short] MacOS (Intel): 0x29f310
     * @note[short] Windows: 0x2921e0
     * @note[short] iOS: 0x2d5218
     * @note[short] Android
     */
    bool init(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x2408f0
     * @note[short] MacOS (Intel): 0x2a1590
     * @note[short] Windows: 0x294030
     * @note[short] iOS: 0x2d6b58
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24085c
     * @note[short] MacOS (Intel): 0x2a1500
     * @note[short] Windows: 0x293e30
     * @note[short] iOS: 0x2d6ac4
     * @note[short] Android
     */
    void onCommentSetting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2407c8
     * @note[short] MacOS (Intel): 0x2a1470
     * @note[short] Windows: 0x293d90
     * @note[short] iOS: 0x2d6a30
     * @note[short] Android
     */
    void onFriendRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240734
     * @note[short] MacOS (Intel): 0x2a13e0
     * @note[short] Windows: 0x293cf0
     * @note[short] iOS: 0x2d699c
     * @note[short] Android
     */
    void onMessageSetting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240938
     * @note[short] MacOS (Intel): 0x2a15d0
     * @note[short] Windows: 0x294070
     * @note[short] iOS: 0x2d6ba0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24187c
     * @note[short] MacOS (Intel): 0x2a26e0
     * @note[short] Windows: 0x294250
     * @note[short] iOS: 0x2d74e8
     * @note[short] Android
     */
    void updateScoreValues();
    int m_accountID;
    int m_messageStatus;
    int m_friendStatus;
    int m_commentHistoryStatus;
    cocos2d::CCArray* m_inputs;
    gd::map<int, gd::string> m_links;
    cocos2d::CCArray* m_messageSettings;
    cocos2d::CCArray* m_friendRequestSettings;
    cocos2d::CCArray* m_commentSettings;
};
