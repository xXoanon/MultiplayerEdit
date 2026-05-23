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

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GradientTriggerObject();

    /**
     * @note[short] MacOS (ARM): 0x15adcc
     * @note[short] MacOS (Intel): 0x19b420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37a7b0
     * @note[short] Android
     */
    static GradientTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x15aea8
     * @note[short] MacOS (Intel): 0x19b500
     * @note[short] Windows: 0x499220
     * @note[short] iOS: 0x37a880
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15c254
     * @note[short] MacOS (Intel): 0x19ceb0
     * @note[short] Windows: 0x4998b0
     * @note[short] iOS: 0x37ae24
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15aefc
     * @note[short] MacOS (Intel): 0x19b560
     * @note[short] Windows: 0x4992a0
     * @note[short] iOS: 0x37a8d4
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    int m_blendingLayer;
    int m_blendingMode;
    int m_gradientID;
    int m_upBottomLeftID;
    int m_downBottomRightID;
    int m_leftTopLeftID;
    int m_rightTopRightID;
    bool m_vertexMode;
    bool m_disable;
    bool m_disableAll;
    float m_previewOpacity;
};
