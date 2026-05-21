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

class SelectSettingLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSettingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSettingLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2119a8
     * @note[short] MacOS (Intel): 0x26e990
     * @note[short] Windows: 0x323110
     * @note[short] iOS: 0x17bb88
     * @note[short] Android
     */
    static SelectSettingLayer* create(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x213b58
     * @note[short] MacOS (Intel): 0x270f70
     * @note[short] Windows: 0x323970
     * @note[short] iOS: 0x17d474
     * @note[short] Android
     */
    static gd::string frameForItem(SelectSettingType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x21173c
     * @note[short] MacOS (Intel): 0x26e630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17b9fc
     * @note[short] Android
     */
    static gd::string frameForValue(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x213ebc
     * @note[short] MacOS (Intel): 0x271280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int idxToValue(SelectSettingType type, int idx);

    /**
     * @note[short] MacOS (ARM): 0x213b2c
     * @note[short] MacOS (Intel): 0x270f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int valueToIdx(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x213ee8
     * @note[short] MacOS (Intel): 0x2712b0
     * @note[short] Windows: 0x323f10
     * @note[short] iOS: 0x17d5f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x211c5c
     * @note[short] MacOS (Intel): 0x26ec70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17bdc8
     * @note[short] Android
     */
    gd::string getSelectedFrame();

    /**
     * @note[short] MacOS (ARM): 0x211c2c
     * @note[short] MacOS (Intel): 0x26ec40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17bd98
     * @note[short] Android
     */
    int getSelectedValue();

    /**
     * @note[short] MacOS (ARM): 0x213580
     * @note[short] MacOS (Intel): 0x270990
     * @note[short] Windows: 0x323220
     * @note[short] iOS: 0x17cf58
     * @note[short] Android
     */
    bool init(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x213e5c
     * @note[short] MacOS (Intel): 0x271230
     * @note[short] Windows: 0x323ec0
     * @note[short] iOS: 0x17d594
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x213d84
     * @note[short] MacOS (Intel): 0x271180
     * @note[short] Windows: 0x323e10
     * @note[short] iOS: 0x17d4d4
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_settingSprites;
    int m_settingID;
    SelectSettingType m_type;
    SelectSettingDelegate* m_delegate;
};
