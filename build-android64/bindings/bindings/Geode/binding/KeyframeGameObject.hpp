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

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeyframeGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17dd88
     * @note[short] MacOS (Intel): 0x1c6630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38aec8
     * @note[short] Android: Rebinded
     */
     ~KeyframeGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17de70
     * @note[short] MacOS (Intel): 0x1c6750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38af2c
     * @note[short] Android
     */
    static KeyframeGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x17df60
     * @note[short] MacOS (Intel): 0x1c6850
     * @note[short] Windows: 0x4b5430
     * @note[short] iOS: 0x38afd8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x17e24c
     * @note[short] MacOS (Intel): 0x1c6b30
     * @note[short] Windows: 0x4b56f0
     * @note[short] iOS: 0x38b29c
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x17e388
     * @note[short] MacOS (Intel): 0x1c6c90
     * @note[short] Windows: 0x4b57b0
     * @note[short] iOS: 0x38b340
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x17e810
     * @note[short] MacOS (Intel): 0x1c7220
     * @note[short] Windows: 0x4b5bf0
     * @note[short] iOS: 0x38b740
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x17dfc4
     * @note[short] MacOS (Intel): 0x1c68c0
     * @note[short] Windows: 0x4b54c0
     * @note[short] iOS: 0x38b03c
     * @note[short] Android
     */
    void updateShadowObjects(GJBaseGameLayer* layer, EditorUI* ui);
    cocos2d::CCArray* m_shadowObjects;
    cocos2d::CCSprite* m_previewSprite;
    int m_keyframeGroup;
    int m_keyframeIndex;
    bool m_referenceOnly;
    bool m_proximity;
    bool m_curve;
    bool m_closeLoop;
    int m_timeMode;
    float m_unk760;
    float m_spawnDelay;
    bool m_previewArt;
    bool m_keyframeActive;
    bool m_autoLayer;
    int m_direction;
    int m_revolutions;
    float m_lineOpacity;
};
