#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CountTriggerAction {
public:
    static constexpr auto CLASS_NAME = "CountTriggerAction";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CountTriggerAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CountTriggerAction(int targetID, int targetCount, bool activateGroup, bool multiActivate, int itemID, int previousCount, gd::vector<int> const& remapKeys, int uniqueID, int controlID);
    bool m_disabled;
    int m_previousCount;
    int m_targetCount;
    int m_targetGroupID;
    bool m_activateGroup;
    int m_triggerUniqueID;
    int m_controlID;
    int m_itemID;
    bool m_multiActivate;
    gd::vector<int> m_remapKeys;
};
