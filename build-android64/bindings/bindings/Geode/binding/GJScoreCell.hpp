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
#include "FLAlertLayerProtocol.hpp"

class GJScoreCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fb4f4
     * @note[short] MacOS (Intel): 0x255730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fb540
     * @note[short] MacOS (Intel): 0x2557b0
     * @note[short] Windows: 0xb4680
     * @note[short] iOS: 0x111078
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fb7e4
     * @note[short] MacOS (Intel): 0x255a70
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x11121c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fb71c
     * @note[short] MacOS (Intel): 0x2559b0
     * @note[short] Windows: 0xb9bb0
     * @note[short] iOS: 0x1111c4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1f03bc
     * @note[short] MacOS (Intel): 0x249740
     * @note[short] Windows: 0xb8490
     * @note[short] iOS: 0x1077fc
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1fb714
     * @note[short] MacOS (Intel): 0x255990
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onBan(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fb718
     * @note[short] MacOS (Intel): 0x2559a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fb7bc
     * @note[short] MacOS (Intel): 0x255a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoreLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fb54c
     * @note[short] MacOS (Intel): 0x2557d0
     * @note[short] Windows: 0xb9a30
     * @note[short] iOS: 0x111084
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f033c
     * @note[short] MacOS (Intel): 0x2496e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10777c
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_score;
};
