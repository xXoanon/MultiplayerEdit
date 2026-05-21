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

class ListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ListCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x29c91c
     * @note[short] MacOS (Intel): 0x30d2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     ListCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x29c914
     * @note[short] MacOS (Intel): 0x30d2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d05f8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x29c960
     * @note[short] MacOS (Intel): 0x30d350
     * @note[short] Windows: 0x3c730
     * @note[short] iOS: 0x1d0600
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x29c904
     * @note[short] MacOS (Intel): 0x30d280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void loadFromObject(cocos2d::CCObject* object, int id, int page, int index);

    /**
     * @note[short] MacOS (ARM): 0x29c95c
     * @note[short] MacOS (Intel): 0x30d340
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    int m_unk230;
};
