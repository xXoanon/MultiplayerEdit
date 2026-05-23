#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"

class SetLevelOrderPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "SetLevelOrderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetLevelOrderPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249f78
     * @note[short] Android: Out of line
     */
     SetLevelOrderPopup();

    /**
     * @note[short] MacOS (ARM): 0x2eab0c
     * @note[short] MacOS (Intel): 0x35f7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24662c
     * @note[short] Android
     */
    static SetLevelOrderPopup* create(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2ebf44
     * @note[short] MacOS (Intel): 0x360d70
     * @note[short] Windows: 0x308ed0
     * @note[short] iOS: 0x247538
     * @note[short] Android
     */
    bool init(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2ec270
     * @note[short] MacOS (Intel): 0x361060
     * @note[short] Windows: 0x3091a0
     * @note[short] iOS: 0x247840
     * @note[short] Android
     */
    void onOrderButton(cocos2d::CCObject* sender);
    int m_levelID;
};
