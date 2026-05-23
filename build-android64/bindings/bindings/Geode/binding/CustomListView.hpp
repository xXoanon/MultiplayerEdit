#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomListView.hpp"

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomListView();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float height, float width);

    /**
     * @note[short] MacOS (ARM): 0x1e7ea8
     * @note[short] MacOS (Intel): 0x240610
     * @note[short] Windows: 0xaa720
     * @note[short] iOS: 0x10062c
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x1e8934
     * @note[short] MacOS (Intel): 0x241820
     * @note[short] Windows: 0xab500
     * @note[short] iOS: 0x100e7c
     * @note[short] Android
     */
    static float getCellHeight(BoomListType type);

    /**
     * @note[short] MacOS (ARM): 0x1f43d4
     * @note[short] MacOS (Intel): 0x24d7d0
     * @note[short] Windows: 0xabcd0
     * @note[short] iOS: 0x10b59c
     * @note[short] Android
     */
    virtual void setupList(float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x1e7fb8
     * @note[short] MacOS (Intel): 0x240750
     * @note[short] Windows: 0xaa850
     * @note[short] iOS: 0x10073c
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x1e8ff4
     * @note[short] MacOS (Intel): 0x2422f0
     * @note[short] Windows: 0xab610
     * @note[short] iOS: 0x100ea4
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* cell, int index);

    /**
     * @note[short] MacOS (ARM): 0x1f4988
     * @note[short] MacOS (Intel): 0x24df90
     * @note[short] Windows: 0xac3a0
     * @note[short] iOS: 0x10badc
     * @note[short] Android
     */
    void reloadAll();
    int m_cellMode;
};
