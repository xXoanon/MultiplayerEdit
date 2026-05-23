#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SmartPrefabResult.hpp"
#include "FLAlertLayer.hpp"

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x456730
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartTemplateLayer();

    /**
     * @note[short] MacOS (ARM): 0x443464
     * @note[short] MacOS (Intel): 0x4e8b20
     * @note[short] Windows: 0x459d20
     * @note[short] iOS: 0x71394
     * @note[short] Android: Rebinded
     */
     ~BrowseSmartTemplateLayer();

    /**
     * @note[short] MacOS (ARM): 0x442ed4
     * @note[short] MacOS (Intel): 0x4e8590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x70f04
     * @note[short] Android
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter);

    /**
     * @note[short] MacOS (ARM): 0x445004
     * @note[short] MacOS (Intel): 0x4ea970
     * @note[short] Windows: 0x45b3e0
     * @note[short] iOS: 0x72988
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x445028
     * @note[short] MacOS (Intel): 0x4ea9b0
     * @note[short] Windows: 0x45b400
     * @note[short] iOS: 0x729ac
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x444a0c
     * @note[short] MacOS (Intel): 0x4ea380
     * @note[short] Windows: 0x45a850
     * @note[short] iOS: 0x72428
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x44406c
     * @note[short] MacOS (Intel): 0x4e99d0
     * @note[short] Windows: 0x45a450
     * @note[short] iOS: 0x71c94
     * @note[short] Android
     */
    void addPrefabMenuItem(SmartPrefabResult result, int index);

    /**
     * @note[short] MacOS (ARM): 0x443d4c
     * @note[short] MacOS (Intel): 0x4e9690
     * @note[short] Windows: 0x45a8e0
     * @note[short] iOS: 0x7196c
     * @note[short] Android
     */
    void baseSetup();

    /**
     * @note[short] MacOS (ARM): 0x444afc
     * @note[short] MacOS (Intel): 0x4ea450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x72500
     * @note[short] Android
     */
    void createDots();

    /**
     * @note[short] MacOS (ARM): 0x444d50
     * @note[short] MacOS (Intel): 0x4ea6b0
     * @note[short] Windows: 0x45b000
     * @note[short] iOS: 0x7274c
     * @note[short] Android: Rebinded
     */
    void createPrefab(gd::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x444510
     * @note[short] MacOS (Intel): 0x4e9ef0
     * @note[short] Windows: 0x45ae90
     * @note[short] iOS: 0x720a4
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x443684
     * @note[short] MacOS (Intel): 0x4e8e50
     * @note[short] Windows: 0x459de0
     * @note[short] iOS: 0x71450
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter);

    /**
     * @note[short] MacOS (ARM): 0x444a88
     * @note[short] MacOS (Intel): 0x4ea400
     * @note[short] Windows: 0x45b390
     * @note[short] iOS: 0x724a0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x444e10
     * @note[short] MacOS (Intel): 0x4ea760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x727f8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4446e4
     * @note[short] MacOS (Intel): 0x4ea0e0
     * @note[short] Windows: 0x45b0d0
     * @note[short] iOS: 0x721e4
     * @note[short] Android
     */
    void onTemplateObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x444bdc
     * @note[short] MacOS (Intel): 0x4ea520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x725dc
     * @note[short] Android
     */
    void updateDots();
    GJSmartTemplate* m_template;
    cocos2d::CCArray* m_pages;
    int m_page;
    cocos2d::CCNode* m_nextPageBtn;
    cocos2d::CCNode* m_prevPageBtn;
    cocos2d::CCArray* m_dotsArray;
};
