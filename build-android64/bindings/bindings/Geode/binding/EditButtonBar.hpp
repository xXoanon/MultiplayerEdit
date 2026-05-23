#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x50c89c
     * @note[short] MacOS (Intel): 0x5e1c20
     * @note[short] Windows: 0xd4470
     * @note[short] iOS: 0x420d48
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] MacOS (ARM): 0x50d0f4
     * @note[short] MacOS (Intel): 0x5e2540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x421508
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] MacOS (ARM): 0x50d100
     * @note[short] MacOS (Intel): 0x5e2560
     * @note[short] Windows: 0xd4ef0
     * @note[short] iOS: 0x421514
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x50c998
     * @note[short] MacOS (Intel): 0x5e1d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x420e10
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] MacOS (ARM): 0x50ca44
     * @note[short] MacOS (Intel): 0x5e1dc0
     * @note[short] Windows: 0xd45d0
     * @note[short] iOS: 0x420ebc
     * @note[short] Android
     */
    void loadFromItems(cocos2d::CCArray* objects, int rows, int columns, bool keepPage);

    /**
     * @note[short] MacOS (ARM): 0x50d070
     * @note[short] MacOS (Intel): 0x5e24a0
     * @note[short] Windows: 0xd4fc0
     * @note[short] iOS: 0x4214e8
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50d0b8
     * @note[short] MacOS (Intel): 0x5e24f0
     * @note[short] Windows: 0xd4f50
     * @note[short] iOS: 0x4214f8
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50cf74
     * @note[short] MacOS (Intel): 0x5e2390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4213ec
     * @note[short] Android
     */
    void reloadItems(int rowCount, int columnCount);
    cocos2d::CCPoint m_position;
    int m_tabIndex;
    bool m_hasCreateItems;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
};
