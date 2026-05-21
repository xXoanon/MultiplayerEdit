#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceObject.hpp"
#include "EffectGameObject.hpp"

class ChanceTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ChanceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChanceTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChanceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1746bc
     * @note[short] MacOS (Intel): 0x1bb5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool containsTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x17a970
     * @note[short] MacOS (Intel): 0x1c2df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x389790
     * @note[short] Android
     */
    void editChanceObject(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x17ac40
     * @note[short] MacOS (Intel): 0x1c2e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3897bc
     * @note[short] Android: Rebinded
     */
    void getTargetIDs(gd::vector<int>& ids);

    /**
     * @note[short] MacOS (ARM): 0x17a7a4
     * @note[short] MacOS (Intel): 0x1c2c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x17a7ec
     * @note[short] MacOS (Intel): 0x1c2c70
     * @note[short] Windows: 0x4b40d0
     * @note[short] iOS: 0x389718
     * @note[short] Android: Rebinded
     */
    void remapChanceObjects(gd::unordered_map<int, int> const* remap);

    /**
     * @note[short] MacOS (ARM): 0x17a8ec
     * @note[short] MacOS (Intel): 0x1c2dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x389770
     * @note[short] Android
     */
    void revertChanceRemap();
    gd::vector<ChanceObject> m_chanceObjects;
};
