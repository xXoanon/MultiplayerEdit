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

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x28d270
     * @note[short] iOS: 0x17e110
     * @note[short] Android: Out of line
     */
     GJOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x23b330
     * @note[short] MacOS (Intel): 0x29b6d0
     * @note[short] Windows: 0x28f990
     * @note[short] iOS: 0x2d2e80
     * @note[short] Android: Rebinded
     */
     ~GJOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x23b608
     * @note[short] MacOS (Intel): 0x29bb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJOptionsLayer* create(int background);

    /**
     * @note[short] MacOS (ARM): 0x23bebc
     * @note[short] MacOS (Intel): 0x29c570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d34c4
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x1f5ce0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggleGV(gd::string variable);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggle(int toggle);

    /**
     * @note[short] MacOS (ARM): 0x23bec0
     * @note[short] MacOS (Intel): 0x29c580
     * @note[short] Windows: 0x28fda0
     * @note[short] iOS: 0x2d34c8
     * @note[short] Android
     */
    void addGVToggle(char const* title, char const* variable, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x23c490
     * @note[short] MacOS (Intel): 0x29cbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d3910
     * @note[short] Android
     */
    void addToggle(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x23c000
     * @note[short] MacOS (Intel): 0x29c6b0
     * @note[short] Windows: 0x28fee0
     * @note[short] iOS: 0x2d3594
     * @note[short] Android
     */
    void addToggleInternal(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x23cddc
     * @note[short] MacOS (Intel): 0x29d4f0
     * @note[short] Windows: 0x290420
     * @note[short] iOS: 0x2d3eb0
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x23ba88
     * @note[short] MacOS (Intel): 0x29c0d0
     * @note[short] Windows: 0x290940
     * @note[short] iOS: 0x2d3248
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x23c8e4
     * @note[short] MacOS (Intel): 0x29d000
     * @note[short] Windows: 0x2904f0
     * @note[short] iOS: 0x2d3c0c
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x23cbd8
     * @note[short] MacOS (Intel): 0x29d300
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] MacOS (ARM): 0x23b7a0
     * @note[short] MacOS (Intel): 0x29bd70
     * @note[short] Windows: 0x28fa60
     * @note[short] iOS: 0x2d2f50
     * @note[short] Android
     */
    bool init(int background);

    /**
     * @note[short] MacOS (ARM): 0x23c588
     * @note[short] MacOS (Intel): 0x29ccc0
     * @note[short] Windows: 0x290780
     * @note[short] iOS: 0x2d3a08
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x23cf44
     * @note[short] MacOS (Intel): 0x29d630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x23c494
     * @note[short] MacOS (Intel): 0x29cbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d3914
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x23cf1c
     * @note[short] MacOS (Intel): 0x29d610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x23ca14
     * @note[short] MacOS (Intel): 0x29d120
     * @note[short] Windows: 0x2905f0
     * @note[short] iOS: 0x2d3cb8
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x23be98
     * @note[short] MacOS (Intel): 0x29c540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] MacOS (ARM): 0x23cc00
     * @note[short] MacOS (Intel): 0x29d320
     * @note[short] Windows: 0x290e60
     * @note[short] iOS: 0x2d3dac
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23ba7c
     * @note[short] MacOS (Intel): 0x29c0b0
     * @note[short] Windows: 0x290920
     * @note[short] iOS: 0x2d323c
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23ba70
     * @note[short] MacOS (Intel): 0x29c090
     * @note[short] Windows: 0x290930
     * @note[short] iOS: 0x2d3230
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c760
     * @note[short] MacOS (Intel): 0x29ceb0
     * @note[short] Windows: 0x290d50
     * @note[short] iOS: 0x2d3b10
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23cef4
     * @note[short] MacOS (Intel): 0x29d5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);
    float m_gap;
    int m_page;
    int m_togglesPerPage;
    int m_toggleCount;
    int m_maxPage;
    float m_maxLabelScale;
    float m_maxLabelWidth;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    float m_offset;
};
