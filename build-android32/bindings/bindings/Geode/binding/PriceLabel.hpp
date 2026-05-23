#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PriceLabel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PriceLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PriceLabel, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x41f6f8
     * @note[short] MacOS (Intel): 0x4bf7e0
     * @note[short] Android
     */
    static PriceLabel* create(int price);

    /**
     * @note[short] MacOS (ARM): 0x41f81c
     * @note[short] MacOS (Intel): 0x4bf900
     * @note[short] Android
     */
    bool init(int price);

    /**
     * @note[short] MacOS (ARM): 0x41fa38
     * @note[short] MacOS (Intel): 0x4bfb40
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x41fa90
     * @note[short] MacOS (Intel): 0x4bfb90
     * @note[short] Android
     */
    void setOpacity(float opacity);

    /**
     * @note[short] MacOS (ARM): 0x41f904
     * @note[short] MacOS (Intel): 0x4bf9e0
     * @note[short] Android
     */
    void setPrice(int price);
    cocos2d::CCLabelBMFont* m_priceLabel;
    cocos2d::CCSprite* m_coinSprite;
};
