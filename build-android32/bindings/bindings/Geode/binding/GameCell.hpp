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

class GameCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GameCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x29c9e0
     * @note[short] MacOS (Intel): 0x30d3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GameCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x29ca2c
     * @note[short] MacOS (Intel): 0x30d470
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x1d0680
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x29cb00
     * @note[short] MacOS (Intel): 0x30d530
     * @note[short] Windows: 0x3cc30
     * @note[short] iOS: 0x1d06c4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x29c5ec
     * @note[short] MacOS (Intel): 0x30cf40
     * @note[short] Windows: 0x3c840
     * @note[short] iOS: 0x1d033c
     * @note[short] Android: Rebinded
     */
    void loadFromString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x29ca38
     * @note[short] MacOS (Intel): 0x30d490
     * @note[short] Windows: 0x3cc00
     * @note[short] iOS: 0x1d068c
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29ca84
     * @note[short] MacOS (Intel): 0x30d4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    void* m_unk230;
    gd::string m_gameLink;
};
