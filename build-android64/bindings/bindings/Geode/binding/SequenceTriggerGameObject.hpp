#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SequenceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17c134
     * @note[short] MacOS (Intel): 0x1c44b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38a120
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x17c228
     * @note[short] MacOS (Intel): 0x1c45c0
     * @note[short] Windows: 0x4b4820
     * @note[short] iOS: 0x38a208
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x17c278
     * @note[short] MacOS (Intel): 0x1c4610
     * @note[short] Windows: 0x4b4840
     * @note[short] iOS: 0x38a258
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x17c444
     * @note[short] MacOS (Intel): 0x1c47e0
     * @note[short] Windows: 0x4b4870
     * @note[short] iOS: 0x38a284
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17c928
     * @note[short] MacOS (Intel): 0x1c4d40
     * @note[short] Windows: 0x4b4c90
     * @note[short] iOS: 0x38a534
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x17cd94
     * @note[short] MacOS (Intel): 0x1c51c0
     * @note[short] Windows: 0x4b4fc0
     * @note[short] iOS: 0x38a87c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x17dd3c
     * @note[short] MacOS (Intel): 0x1c65e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38ae7c
     * @note[short] Android
     */
    void addCount(int index, int count);

    /**
     * @note[short] MacOS (ARM): 0x17db38
     * @note[short] MacOS (Intel): 0x1c6380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38ac88
     * @note[short] Android
     */
    void addTarget(int groupID, int count);

    /**
     * @note[short] MacOS (ARM): 0x17dcc0
     * @note[short] MacOS (Intel): 0x1c6560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38ae04
     * @note[short] Android
     */
    void deleteTarget(int index);

    /**
     * @note[short] MacOS (ARM): 0x17dc44
     * @note[short] MacOS (Intel): 0x1c64e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38ad90
     * @note[short] Android
     */
    bool reorderTarget(int index, bool left);

    /**
     * @note[short] MacOS (ARM): 0x17c310
     * @note[short] MacOS (Intel): 0x1c46f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSequenceTotalCount();
    SequenceTriggerState m_sequenceState;
    float m_minInt;
    int m_sequenceMode;
    int m_resetMode;
    float m_reset;
    int m_sequenceTotalCount;
    bool m_uniqueRemap;
};
