#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ListButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ListButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonBar, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x369648
     * @note[short] MacOS (Intel): 0x3efd20
     * @note[short] Windows: 0x6ada0
     * @note[short] iOS: 0x167c20
     * @note[short] Android
     */
    static ListButtonBar* create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType);

    /**
     * @note[short] MacOS (ARM): 0x369d3c
     * @note[short] MacOS (Intel): 0x3f0470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] MacOS (ARM): 0x369d48
     * @note[short] MacOS (Intel): 0x3f0490
     * @note[short] Windows: 0x6b3b0
     * @note[short] iOS: 0x16822c
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x36972c
     * @note[short] MacOS (Intel): 0x3efdf0
     * @note[short] Windows: 0x6aeb0
     * @note[short] iOS: 0x167d04
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType);

    /**
     * @note[short] MacOS (ARM): 0x369c34
     * @note[short] MacOS (Intel): 0x3f0340
     * @note[short] Windows: 0x6b460
     * @note[short] iOS: 0x16820c
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x369cc0
     * @note[short] MacOS (Intel): 0x3f03e0
     * @note[short] Windows: 0x6b440
     * @note[short] iOS: 0x16821c
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pages;
    ListButtonBarDelegate* m_delegate;
    bool m_useMoveAnimation;
};
