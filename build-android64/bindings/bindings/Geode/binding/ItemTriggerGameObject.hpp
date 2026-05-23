#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class ItemTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ItemTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ItemTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19621c
     * @note[short] MacOS (Intel): 0x1e5180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x394b60
     * @note[short] Android
     */
    static ItemTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x196354
     * @note[short] MacOS (Intel): 0x1e52e0
     * @note[short] Windows: 0x4bfcb0
     * @note[short] iOS: 0x394c44
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x19638c
     * @note[short] MacOS (Intel): 0x1e5320
     * @note[short] Windows: 0x4bfcf0
     * @note[short] iOS: 0x394c7c
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x199df4
     * @note[short] MacOS (Intel): 0x1ea130
     * @note[short] Windows: 0x4c0dd0
     * @note[short] iOS: 0x395bc8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1964cc
     * @note[short] MacOS (Intel): 0x1e5450
     * @note[short] Windows: 0x4bfe50
     * @note[short] iOS: 0x394d64
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x19630c
     * @note[short] MacOS (Intel): 0x1e5290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_item1Mode;
    int m_item2Mode;
    int m_targetItemMode;
    float m_mod1;
    float m_mod2;
    int m_resultType1;
    int m_resultType2;
    int m_resultType3;
    float m_tolerance;
    int m_roundType1;
    int m_roundType2;
    int m_signType1;
    int m_signType2;
    bool m_persistent;
    bool m_targetAll;
    bool m_reset;
    bool m_timer;
};
