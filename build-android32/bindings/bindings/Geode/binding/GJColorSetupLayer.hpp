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
#include "ColorSelectDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJColorSetupLayer : public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJColorSetupLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1b7114
     * @note[short] MacOS (Intel): 0x20b3d0
     * @note[short] Windows: 0x255f50
     * @note[short] iOS: 0x18dbec
     * @note[short] Android
     */
    static GJColorSetupLayer* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1b7d6c
     * @note[short] MacOS (Intel): 0x20c0f0
     * @note[short] Windows: 0x256d70
     * @note[short] iOS: 0x18e628
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1b7d60
     * @note[short] MacOS (Intel): 0x20c0c0
     * @note[short] Windows: 0x256ca0
     * @note[short] iOS: 0x18e61c
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x1b7240
     * @note[short] MacOS (Intel): 0x20b560
     * @note[short] Windows: 0x256090
     * @note[short] iOS: 0x18dc60
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1b7bf4
     * @note[short] MacOS (Intel): 0x20bf60
     * @note[short] Windows: 0x256d20
     * @note[short] iOS: 0x18e4c4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1b78fc
     * @note[short] MacOS (Intel): 0x20bc70
     * @note[short] Windows: 0x256bd0
     * @note[short] iOS: 0x18e2c0
     * @note[short] Android
     */
    void onColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1b7b5c
     * @note[short] MacOS (Intel): 0x20bec0
     * @note[short] Windows: 0x256b80
     * @note[short] iOS: 0x18e46c
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1b7c54
     * @note[short] MacOS (Intel): 0x20bfb0
     * @note[short] Windows: 0x256cb0
     * @note[short] iOS: 0x18e524
     * @note[short] Android
     */
    void showPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x1b7cb8
     * @note[short] MacOS (Intel): 0x20c020
     * @note[short] Windows: 0x256a10
     * @note[short] iOS: 0x18e588
     * @note[short] Android
     */
    void updateSpriteColor(ColorChannelSprite* sprite, cocos2d::CCLabelBMFont* label, int id);

    /**
     * @note[short] MacOS (ARM): 0x1b79c4
     * @note[short] MacOS (Intel): 0x20bd30
     * @note[short] Windows: 0x2568f0
     * @note[short] iOS: 0x18e34c
     * @note[short] Android
     */
    void updateSpriteColors();
    LevelSettingsObject* m_settingsObject;
    cocos2d::CCDictionary* m_unk290;
    cocos2d::CCDictionary* m_unk298;
    cocos2d::CCArray* m_colorLabels;
    cocos2d::CCArray* m_colorSprites;
    int m_page;
    int m_colorsPerPage;
    int m_totalPages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_closeOnSelect;
    ColorSetupDelegate* m_delegate;
    int m_colorID;
};
