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

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x187b1c
     * @note[short] MacOS (Intel): 0x1d2d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38e9f4
     * @note[short] Android
     */
    static SpawnTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x187c00
     * @note[short] MacOS (Intel): 0x1d2e10
     * @note[short] Windows: 0x4b9080
     * @note[short] iOS: 0x38eacc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x187dec
     * @note[short] MacOS (Intel): 0x1d3100
     * @note[short] Windows: 0x4b91f0
     * @note[short] iOS: 0x38ebe8
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1883b8
     * @note[short] MacOS (Intel): 0x1d3640
     * @note[short] Windows: 0x4b9560
     * @note[short] iOS: 0x38efa0
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18873c
     * @note[short] MacOS (Intel): 0x1d3a70
     * @note[short] Windows: 0x4b98a0
     * @note[short] iOS: 0x38f2ec
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x187ef8
     * @note[short] MacOS (Intel): 0x1d3240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38ec8c
     * @note[short] Android
     */
    void addRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x188100
     * @note[short] MacOS (Intel): 0x1d3450
     * @note[short] Windows: 0x4b9310
     * @note[short] iOS: 0x38ee48
     * @note[short] Android
     */
    void changeRemap(int oldID, int newID, bool reverse);

    /**
     * @note[short] MacOS (ARM): 0x187e90
     * @note[short] MacOS (Intel): 0x1d31c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ChanceObject* getRemapWithSource(int id);

    /**
     * @note[short] MacOS (ARM): 0x187ec4
     * @note[short] MacOS (Intel): 0x1d3200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ChanceObject* getRemapWithTarget(int id);

    /**
     * @note[short] MacOS (ARM): 0x188060
     * @note[short] MacOS (Intel): 0x1d33c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38edb8
     * @note[short] Android
     */
    void removeRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x187c50
     * @note[short] MacOS (Intel): 0x1d2e60
     * @note[short] Windows: 0x4b90f0
     * @note[short] iOS: 0x38eb1c
     * @note[short] Android: Rebinded
     */
    void updateRemapKeys(gd::vector<int> const& remapKeys);
    gd::vector<ChanceObject> m_remapObjects;
    int m_remapKey;
    gd::vector<int> m_remapKeys;
    double m_currentDelay;
    float m_spawnDelay;
    float m_delayRange;
    bool m_resetRemap;
};
