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

class OptionsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "OptionsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fa630
     * @note[short] MacOS (Intel): 0x254560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1106cc
     * @note[short] Android: Rebinded
     */
     OptionsCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1eaf1c
     * @note[short] MacOS (Intel): 0x2441b0
     * @note[short] Windows: 0xb5170
     * @note[short] iOS: 0x1025dc
     * @note[short] Android
     */
    void loadFromObject(OptionsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1fa69c
     * @note[short] MacOS (Intel): 0x2545f0
     * @note[short] Windows: 0xb5510
     * @note[short] iOS: 0x110738
     * @note[short] Android
     */
    void onToggleOption(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1eb2f4
     * @note[short] MacOS (Intel): 0x244540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x102990
     * @note[short] Android
     */
    void updateBGColor(int index);
    OptionsObject* m_optionsObject;
};
