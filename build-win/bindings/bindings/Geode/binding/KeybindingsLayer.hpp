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

class KeybindingsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "KeybindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x52ffd4
     * @note[short] MacOS (Intel): 0x609d50
     * @note[short] Windows: 0x2bf8a0
     * @note[short] Android
     */
    static KeybindingsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5300d8
     * @note[short] MacOS (Intel): 0x609e90
     * @note[short] Windows: 0x2bf990
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x531a48
     * @note[short] MacOS (Intel): 0x60b800
     * @note[short] Windows: 0x846a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5309b4
     * @note[short] MacOS (Intel): 0x60a740
     * @note[short] Windows: 0x2c02a0
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* addKeyPair(char const* action, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x531488
     * @note[short] MacOS (Intel): 0x60b280
     * @note[short] Windows: 0x2c0650
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x530cd0
     * @note[short] MacOS (Intel): 0x60aa70
     * @note[short] Windows: 0x2c08f0
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x531358
     * @note[short] MacOS (Intel): 0x60b160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x5317dc
     * @note[short] MacOS (Intel): 0x60b5c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] MacOS (ARM): 0x5310e0
     * @note[short] MacOS (Intel): 0x60aee0
     * @note[short] Windows: 0x2c0720
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x5317b4
     * @note[short] MacOS (Intel): 0x60b5a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x5312cc
     * @note[short] MacOS (Intel): 0x60b0d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x53178c
     * @note[short] MacOS (Intel): 0x60b580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x5315c8
     * @note[short] MacOS (Intel): 0x60b3a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x530c7c
     * @note[short] MacOS (Intel): 0x60aa00
     * @note[short] Windows: 0x84670
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53186c
     * @note[short] MacOS (Intel): 0x60b630
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x530cc4
     * @note[short] MacOS (Intel): 0x60aa50
     * @note[short] Windows: 0x2c08d0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x530cb8
     * @note[short] MacOS (Intel): 0x60aa30
     * @note[short] Windows: 0x2c08e0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x531804
     * @note[short] MacOS (Intel): 0x60b5e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5315a0
     * @note[short] MacOS (Intel): 0x60b380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);
    int m_page;
    int m_keyCount;
    int m_maxPage;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
};
