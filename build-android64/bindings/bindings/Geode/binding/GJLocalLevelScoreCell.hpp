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

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fb8cc
     * @note[short] MacOS (Intel): 0x255bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJLocalLevelScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fb910
     * @note[short] MacOS (Intel): 0x255c40
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x111300
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fb91c
     * @note[short] MacOS (Intel): 0x255c60
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x11130c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f22a8
     * @note[short] MacOS (Intel): 0x24b700
     * @note[short] Windows: 0xb9ca0
     * @note[short] iOS: 0x109540
     * @note[short] Android
     */
    void loadFromScore(GJLocalScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1f251c
     * @note[short] MacOS (Intel): 0x24b930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x109794
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJLocalScore* m_localScore;
};
