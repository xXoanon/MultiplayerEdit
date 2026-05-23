#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class GJSpecialColorSelect : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpecialColorSelect, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x549474
     * @note[short] MacOS (Intel): 0x625f00
     * @note[short] Windows: 0x2b7d30
     * @note[short] iOS: 0x1aecc8
     * @note[short] Android
     */
    static GJSpecialColorSelect* create(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type);

    /**
     * @note[short] MacOS (ARM): 0x549fc4
     * @note[short] MacOS (Intel): 0x626aa0
     * @note[short] Windows: 0x2b8a80
     * @note[short] iOS: 0x1af550
     * @note[short] Android
     */
    static const char* textForColorIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x54a20c
     * @note[short] MacOS (Intel): 0x626cf0
     * @note[short] Windows: 0x2b8a30
     * @note[short] iOS: 0x1af678
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x54a0c8
     * @note[short] MacOS (Intel): 0x626bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x54a158
     * @note[short] MacOS (Intel): 0x626c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1af5c4
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x549594
     * @note[short] MacOS (Intel): 0x626070
     * @note[short] Windows: 0x2b7e40
     * @note[short] iOS: 0x1aed9c
     * @note[short] Android
     */
    bool init(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type);

    /**
     * @note[short] MacOS (ARM): 0x549f68
     * @note[short] MacOS (Intel): 0x626a50
     * @note[short] Windows: 0x2b89e0
     * @note[short] iOS: 0x1af4f4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x549fec
     * @note[short] MacOS (Intel): 0x626ad0
     * @note[short] Windows: 0x2b8900
     * @note[short] iOS: 0x1af578
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
    GJSpecialColorSelectDelegate* m_delegate;
    int m_colorID;
    cocos2d::CCArray* m_buttonSprites;
};
