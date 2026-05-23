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

class MoreVideoOptionsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreVideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreVideoOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a80e8
     * @note[short] MacOS (Intel): 0x7a0c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf1344
     * @note[short] Android: Rebinded
     */
     ~MoreVideoOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a7c3c
     * @note[short] MacOS (Intel): 0x7a0730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf1074
     * @note[short] Android
     */
    static MoreVideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6a8378
     * @note[short] MacOS (Intel): 0x7a0ff0
     * @note[short] Windows: 0x378c20
     * @note[short] iOS: 0xf13fc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6aa3a4
     * @note[short] MacOS (Intel): 0x7a3130
     * @note[short] Windows: 0x37b540
     * @note[short] iOS: 0xf284c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6a87b4
     * @note[short] MacOS (Intel): 0x7a1470
     * @note[short] Windows: 0x379720
     * @note[short] iOS: 0xf1814
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x6a9fd8
     * @note[short] MacOS (Intel): 0x7a2d90
     * @note[short] Windows: 0x379d80
     * @note[short] iOS: 0xf273c
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a8d80
     * @note[short] MacOS (Intel): 0x7a1a90
     * @note[short] Windows: 0x37a1a0
     * @note[short] iOS: 0xf1c24
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a9ae0
     * @note[short] MacOS (Intel): 0x7a28a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf2498
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a9dd4
     * @note[short] MacOS (Intel): 0x7a2ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] MacOS (ARM): 0x6a9280
     * @note[short] MacOS (Intel): 0x7a2000
     * @note[short] Windows: 0x379fe0
     * @note[short] iOS: 0xf1f90
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6aa140
     * @note[short] MacOS (Intel): 0x7a2ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a9190
     * @note[short] MacOS (Intel): 0x7a1f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf1ea0
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x6aa118
     * @note[short] MacOS (Intel): 0x7a2eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6a9c10
     * @note[short] MacOS (Intel): 0x7a29c0
     * @note[short] Windows: 0x379e50
     * @note[short] iOS: 0xf2544
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6aa1f0
     * @note[short] MacOS (Intel): 0x7a2f90
     * @note[short] Windows: 0x37b020
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onApplyFPS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a8d10
     * @note[short] MacOS (Intel): 0x7a1a00
     * @note[short] Windows: 0x37b4f0
     * @note[short] iOS: 0xf1bb4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a9dfc
     * @note[short] MacOS (Intel): 0x7a2bc0
     * @note[short] Windows: 0x37b310
     * @note[short] iOS: 0xf2638
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a8d74
     * @note[short] MacOS (Intel): 0x7a1a70
     * @note[short] Windows: 0x37a180
     * @note[short] iOS: 0xf1c18
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a8d68
     * @note[short] MacOS (Intel): 0x7a1a50
     * @note[short] Windows: 0x37a190
     * @note[short] iOS: 0xf1c0c
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a9458
     * @note[short] MacOS (Intel): 0x7a21f0
     * @note[short] Windows: 0x37a5b0
     * @note[short] iOS: 0xf2098
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6aa0f0
     * @note[short] MacOS (Intel): 0x7a2e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6aa168
     * @note[short] MacOS (Intel): 0x7a2ef0
     * @note[short] Windows: 0x37af50
     * @note[short] iOS: 0xf27c4
     * @note[short] Android
     */
    void updateFPSButtons();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCTextInputNode* m_fpsInput;
    cocos2d::CCArray* m_fpsNodes;
};
