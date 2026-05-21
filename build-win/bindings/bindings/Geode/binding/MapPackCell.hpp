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

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f8aa8
     * @note[short] MacOS (Intel): 0x252670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10f2cc
     * @note[short] Android: Rebinded
     */
     MapPackCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1f8890
     * @note[short] MacOS (Intel): 0x252360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10f22c
     * @note[short] Android: Rebinded
     */
     ~MapPackCell();

    /**
     * @note[short] MacOS (ARM): 0x1f8b34
     * @note[short] MacOS (Intel): 0x252730
     * @note[short] Windows: 0xb1c00
     * @note[short] iOS: 0x10f334
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f8ff0
     * @note[short] MacOS (Intel): 0x252be0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x10f720
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1eb7b8
     * @note[short] MacOS (Intel): 0x244990
     * @note[short] Windows: 0xb1c60
     * @note[short] iOS: 0x102e24
     * @note[short] Android
     */
    void loadFromMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x1f8d2c
     * @note[short] MacOS (Intel): 0x252930
     * @note[short] Windows: 0xb28a0
     * @note[short] iOS: 0x10f478
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f8b7c
     * @note[short] MacOS (Intel): 0x252780
     * @note[short] Windows: 0xb2780
     * @note[short] iOS: 0x10f37c
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f8da8
     * @note[short] MacOS (Intel): 0x2529b0
     * @note[short] Windows: 0xb2950
     * @note[short] iOS: 0x10f4f4
     * @note[short] Android
     */
    void playCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0x1f4f10
     * @note[short] MacOS (Intel): 0x24e5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadCell();

    /**
     * @note[short] MacOS (ARM): 0x1ec2a4
     * @note[short] MacOS (Intel): 0x2454f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1038f0
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJMapPack* m_mapPack;
    CCMenuItemSpriteExtra* m_viewButton;
    CCMenuItemSpriteExtra* m_rewardButton;
    cocos2d::CCArray* m_rewardLabels;
    cocos2d::CCArray* m_rewardSprites;
};
