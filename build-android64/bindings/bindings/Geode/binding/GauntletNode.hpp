#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletNode();

    /**
     * @note[short] MacOS (ARM): 0x4c0420
     * @note[short] MacOS (Intel): 0x5728b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bf874
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4c3690
     * @note[short] MacOS (Intel): 0x575ab0
     * @note[short] Windows: 0x1fde00
     * @note[short] iOS: 0x1c25c0
     * @note[short] Android
     */
    static gd::string frameForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x4c3660
     * @note[short] MacOS (Intel): 0x575a70
     * @note[short] Windows: 0x1ff190
     * @note[short] iOS: 0x1c2590
     * @note[short] Android
     */
    static gd::string nameForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x4c1d08
     * @note[short] MacOS (Intel): 0x574100
     * @note[short] Windows: 0x1fc240
     * @note[short] iOS: 0x1c0d4c
     * @note[short] Android
     */
    void generateNode();

    /**
     * @note[short] MacOS (ARM): 0x4c1cb4
     * @note[short] MacOS (Intel): 0x5740b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c0cf8
     * @note[short] Android
     */
    bool init(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4c0d68
     * @note[short] MacOS (Intel): 0x573250
     * @note[short] Windows: 0x1fddc0
     * @note[short] iOS: 0x1bffc8
     * @note[short] Android
     */
    void onClaimReward();

    /**
     * @note[short] MacOS (ARM): 0x4c1270
     * @note[short] MacOS (Intel): 0x5736f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c03dc
     * @note[short] Android
     */
    void onUnlock();

    /**
     * @note[short] MacOS (ARM): 0x4c13dc
     * @note[short] MacOS (Intel): 0x573850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c0544
     * @note[short] Android
     */
    void showUnlockAnimation();
    cocos2d::CCNode* m_gauntletInfoNode;
    cocos2d::CCNode* m_rewardNode;
    cocos2d::ccColor3B m_labelColor;
    cocos2d::ccColor3B m_backgroundColor;
    GJMapPack* m_gauntlet;
    bool m_locked;
};
