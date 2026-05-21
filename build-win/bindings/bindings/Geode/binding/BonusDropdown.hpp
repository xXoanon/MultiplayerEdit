#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BonusDropdown : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "BonusDropdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BonusDropdown, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3f8170
     * @note[short] MacOS (Intel): 0x4933d0
     * @note[short] Android: Rebinded
     */
    static BonusDropdown* create(gd::string text, int price);

    /**
     * @note[short] MacOS (ARM): 0x3f8248
     * @note[short] MacOS (Intel): 0x4934b0
     * @note[short] Android: Rebinded
     */
    bool init(gd::string text, int price);

    /**
     * @note[short] MacOS (ARM): 0x3f84fc
     * @note[short] MacOS (Intel): 0x493750
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    float m_yPosition;
    cocos2d::CCScene* m_scene;
};
