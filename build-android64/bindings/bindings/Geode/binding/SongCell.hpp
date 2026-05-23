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

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f9fb0
     * @note[short] MacOS (Intel): 0x253b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     SongCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1f9ff4
     * @note[short] MacOS (Intel): 0x253bd0
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x110188
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fa024
     * @note[short] MacOS (Intel): 0x253c10
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x1101b8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1edc6c
     * @note[short] MacOS (Intel): 0x246da0
     * @note[short] Windows: 0xb4110
     * @note[short] iOS: 0x1051e0
     * @note[short] Android
     */
    void loadFromObject(SongObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1fa000
     * @note[short] MacOS (Intel): 0x253bf0
     * @note[short] Windows: 0xb4520
     * @note[short] iOS: 0x110194
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ee0b0
     * @note[short] MacOS (Intel): 0x247180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x105610
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongObject* m_songObject;
};
