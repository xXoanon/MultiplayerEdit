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

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fe30c
     * @note[short] MacOS (Intel): 0x258e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     SmartTemplateCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fe350
     * @note[short] MacOS (Intel): 0x258ee0
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x112c50
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fe40c
     * @note[short] MacOS (Intel): 0x258fb0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x112d00
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f3ff0
     * @note[short] MacOS (Intel): 0x24d3e0
     * @note[short] Windows: 0xbe5e0
     * @note[short] iOS: 0x10b1bc
     * @note[short] Android
     */
    void loadFromObject(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x1fe35c
     * @note[short] MacOS (Intel): 0x258f00
     * @note[short] Windows: 0xbeac0
     * @note[short] iOS: 0x112c5c
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f4304
     * @note[short] MacOS (Intel): 0x24d720
     * @note[short] Windows: 0xbe9d0
     * @note[short] iOS: 0x10b4cc
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJSmartTemplate* m_smartTemplate;
};
