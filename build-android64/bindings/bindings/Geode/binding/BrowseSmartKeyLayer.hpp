#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BrowseSmartTemplateLayer.hpp"

class BrowseSmartKeyLayer : public BrowseSmartTemplateLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartKeyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartKeyLayer, BrowseSmartTemplateLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartKeyLayer();

    /**
     * @note[short] MacOS (ARM): 0x444e68
     * @note[short] MacOS (Intel): 0x4ea7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x72850
     * @note[short] Android: Rebinded
     */
    static BrowseSmartKeyLayer* create(GJSmartTemplate* smartTemplate, gd::string prefabKey);

    /**
     * @note[short] MacOS (ARM): 0x446468
     * @note[short] MacOS (Intel): 0x4ebf60
     * @note[short] Windows: 0x45c550
     * @note[short] iOS: 0x73aec
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x445fe0
     * @note[short] MacOS (Intel): 0x4ebad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7374c
     * @note[short] Android
     */
    void addChanceToSelected(int chance, bool zero);

    /**
     * @note[short] MacOS (ARM): 0x445c2c
     * @note[short] MacOS (Intel): 0x4eb7a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7344c
     * @note[short] Android
     */
    void createTemplateObjects();

    /**
     * @note[short] MacOS (ARM): 0x445e5c
     * @note[short] MacOS (Intel): 0x4eb940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x735e4
     * @note[short] Android
     */
    void deletedSelectedItems();

    /**
     * @note[short] MacOS (ARM): 0x4461c4
     * @note[short] MacOS (Intel): 0x4ebcb0
     * @note[short] Windows: 0x45c270
     * @note[short] iOS: 0x73878
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSelectedBlocks();

    /**
     * @note[short] MacOS (ARM): 0x44519c
     * @note[short] MacOS (Intel): 0x4eabe0
     * @note[short] Windows: 0x45b470
     * @note[short] iOS: 0x72a84
     * @note[short] Android: Rebinded
     */
    bool init(GJSmartTemplate* smartTemplate, gd::string prefabKey);

    /**
     * @note[short] MacOS (ARM): 0x445b88
     * @note[short] MacOS (Intel): 0x4eb710
     * @note[short] Windows: 0x45be50
     * @note[short] iOS: 0x733b0
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x445b5c
     * @note[short] MacOS (Intel): 0x4eb6e0
     * @note[short] Windows: 0x45c470
     * @note[short] iOS: 0x73384
     * @note[short] Android
     */
    void onPrefabObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x44628c
     * @note[short] MacOS (Intel): 0x4ebd80
     * @note[short] Windows: 0x45c340
     * @note[short] iOS: 0x73934
     * @note[short] Android
     */
    void updateChanceValues();
    gd::string m_prefabKey;
    int m_templatePage;
};
