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

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fba04
     * @note[short] MacOS (Intel): 0x255dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJLevelScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fba48
     * @note[short] MacOS (Intel): 0x255e30
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x1113f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fba8c
     * @note[short] MacOS (Intel): 0x255e80
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x111434
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f18d0
     * @note[short] MacOS (Intel): 0x24ad00
     * @note[short] Windows: 0xba0a0
     * @note[short] iOS: 0x108c54
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1fba54
     * @note[short] MacOS (Intel): 0x255e50
     * @note[short] Windows: 0xbab20
     * @note[short] iOS: 0x1113fc
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f1850
     * @note[short] MacOS (Intel): 0x24aca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x108bd4
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_userScore;
};
