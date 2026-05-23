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

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f9214
     * @note[short] MacOS (Intel): 0x252e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     StatsCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1f9254
     * @note[short] MacOS (Intel): 0x252eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10f8c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f9e50
     * @note[short] MacOS (Intel): 0x253980
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x110038
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f925c
     * @note[short] MacOS (Intel): 0x252ec0
     * @note[short] Windows: 0xb3010
     * @note[short] iOS: 0x10f8d0
     * @note[short] Android
     */
    const char* getTitleFromKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1ed8fc
     * @note[short] MacOS (Intel): 0x246aa0
     * @note[short] Windows: 0xb2db0
     * @note[short] iOS: 0x104e88
     * @note[short] Android
     */
    void loadFromObject(StatsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1edc00
     * @note[short] MacOS (Intel): 0x246d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x105180
     * @note[short] Android
     */
    void updateBGColor(int index);
};
