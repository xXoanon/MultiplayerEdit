#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SFXTriggerGameObject.hpp"

class SongTriggerGameObject : public SFXTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SongTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongTriggerGameObject, SFXTriggerGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x185b54
     * @note[short] MacOS (Intel): 0x1d0870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38dc88
     * @note[short] Android
     */
    static SongTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x186424
     * @note[short] MacOS (Intel): 0x1d1370
     * @note[short] Windows: 0x4b8750
     * @note[short] iOS: 0x38df98
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x185cd4
     * @note[short] MacOS (Intel): 0x1d0a40
     * @note[short] Windows: 0x4b84f0
     * @note[short] iOS: 0x38dd48
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x185c8c
     * @note[short] MacOS (Intel): 0x1d09f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_unk7a9;
    bool m_prep;
    bool m_loadPrep;
    int m_songChannel;
};
