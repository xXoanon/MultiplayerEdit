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

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f51a4
     * @note[short] MacOS (Intel): 0x24e870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     AchievementCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1f51e4
     * @note[short] MacOS (Intel): 0x24e8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10bf38
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f51ec
     * @note[short] MacOS (Intel): 0x24e8f0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x10bf40
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e9650
     * @note[short] MacOS (Intel): 0x242970
     * @note[short] Windows: 0xac860
     * @note[short] iOS: 0x1012cc
     * @note[short] Android
     */
    void loadFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x1eaad8
     * @note[short] MacOS (Intel): 0x243dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1021a8
     * @note[short] Android
     */
    void updateBGColor(int index);
};
