#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"

class TableViewCell : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "TableViewCell";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TableViewCell, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x54a32c
     * @note[short] MacOS (Intel): 0x626e10
     * @note[short] Windows: 0x76b00
     * @note[short] iOS: 0x33c9c
     * @note[short] Android: Rebinded
     */
     TableViewCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x54a51c
     * @note[short] MacOS (Intel): 0x627070
     * @note[short] Windows: 0x76d60
     * @note[short] iOS: 0x33e04
     * @note[short] Android: Rebinded
     */
     ~TableViewCell();

    /**
     * @note[short] MacOS (ARM): 0x54a7ac
     * @note[short] MacOS (Intel): 0x6273a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33eac
     * @note[short] Android
     */
    void updateVisibility();
    void* m_unknown;
    TableView* m_tableView;
    CCIndexPath m_indexPath;
    void* m_unknown2;
    gd::string m_cellIdentifier;
    float m_width;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
    BoomListType m_listType;
};
