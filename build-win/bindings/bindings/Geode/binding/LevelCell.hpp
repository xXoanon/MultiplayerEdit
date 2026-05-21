#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f53dc
     * @note[short] MacOS (Intel): 0x24eb60
     * @note[short] Windows: 0xadf80
     * @note[short] iOS: 0x10c0b8
     * @note[short] Android: Rebinded
     */
     LevelCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1f52d4
     * @note[short] MacOS (Intel): 0x24ea50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10c024
     * @note[short] Android
     */
    static LevelCell* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1f5460
     * @note[short] MacOS (Intel): 0x24ec00
     * @note[short] Windows: 0xae030
     * @note[short] iOS: 0x10c13c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f87dc
     * @note[short] MacOS (Intel): 0x252290
     * @note[short] Windows: 0xb1a60
     * @note[short] iOS: 0x10f178
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f5dbc
     * @note[short] MacOS (Intel): 0x24f4e0
     * @note[short] Windows: 0xae230
     * @note[short] iOS: 0x10ca64
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1eb578
     * @note[short] MacOS (Intel): 0x244770
     * @note[short] Windows: 0xae050
     * @note[short] iOS: 0x102c10
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1f547c
     * @note[short] MacOS (Intel): 0x24ec30
     * @note[short] Windows: 0xb0d70
     * @note[short] iOS: 0x10c158
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1f8638
     * @note[short] MacOS (Intel): 0x252100
     * @note[short] Windows: 0xb1800
     * @note[short] iOS: 0x10f004
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f8620
     * @note[short] MacOS (Intel): 0x2520e0
     * @note[short] Windows: 0xae210
     * @note[short] iOS: 0x10efec
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f87a0
     * @note[short] MacOS (Intel): 0x252260
     * @note[short] Windows: 0xb1a20
     * @note[short] iOS: 0x10f13c
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1eb738
     * @note[short] MacOS (Intel): 0x244930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x102da4
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1f4f6c
     * @note[short] MacOS (Intel): 0x24e650
     * @note[short] Windows: 0xb1570
     * @note[short] iOS: 0x10be74
     * @note[short] Android
     */
    void updateCellMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x1f4f50
     * @note[short] MacOS (Intel): 0x24e620
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
