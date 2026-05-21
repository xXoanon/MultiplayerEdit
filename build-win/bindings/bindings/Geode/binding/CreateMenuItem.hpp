#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class CreateMenuItem : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "CreateMenuItem";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateMenuItem, CCMenuItemSpriteExtra)

    /**
     * @note[short] MacOS (ARM): 0x2bf9c
     * @note[short] MacOS (Intel): 0x2ee40
     * @note[short] Windows: 0x1294b0
     * @note[short] iOS: 0x3e7360
     * @note[short] Android
     */
    static CreateMenuItem* create(cocos2d::CCNode* normal, cocos2d::CCNode* selected, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler selector);

    /**
     * @note[short] MacOS (ARM): 0x4677c
     * @note[short] MacOS (Intel): 0x51900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* normal, cocos2d::CCNode* selected, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler selector);
    gd::string m_spriteFileName;
    int m_objectID;
    int m_pageIndex;
    int m_tabIndex;
};
