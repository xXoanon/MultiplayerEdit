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

class LevelListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fe728
     * @note[short] MacOS (Intel): 0x2593f0
     * @note[short] Windows: 0xbec30
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     LevelListCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fe4b8
     * @note[short] MacOS (Intel): 0x259080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x112dac
     * @note[short] Android: Rebinded
     */
     ~LevelListCell();

    /**
     * @note[short] MacOS (ARM): 0x1fe68c
     * @note[short] MacOS (Intel): 0x259320
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static LevelListCell* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fe770
     * @note[short] MacOS (Intel): 0x259470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x112e40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fe888
     * @note[short] MacOS (Intel): 0x2595b0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x112f58
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ec324
     * @note[short] MacOS (Intel): 0x245550
     * @note[short] Windows: 0xbecb0
     * @note[short] iOS: 0x103970
     * @note[short] Android
     */
    void loadFromList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x1fe778
     * @note[short] MacOS (Intel): 0x259480
     * @note[short] Windows: 0xc00e0
     * @note[short] iOS: 0x112e48
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fe878
     * @note[short] MacOS (Intel): 0x259590
     * @note[short] Windows: 0xc01f0
     * @note[short] iOS: 0x112f48
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fe844
     * @note[short] MacOS (Intel): 0x259560
     * @note[short] Windows: 0xc0210
     * @note[short] iOS: 0x112f14
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ed87c
     * @note[short] MacOS (Intel): 0x246a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x104e08
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJLevelList* m_levelList;
    bool m_addingLevel;
};
