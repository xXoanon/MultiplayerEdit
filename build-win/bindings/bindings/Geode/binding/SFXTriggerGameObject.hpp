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

class SFXTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x496310
     * @note[short] iOS: 0x399b58
     * @note[short] Android: Out of line
     */
     SFXTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18074c
     * @note[short] MacOS (Intel): 0x1c9b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38bfcc
     * @note[short] Android
     */
    static SFXTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x184ea0
     * @note[short] MacOS (Intel): 0x1cfa40
     * @note[short] Windows: 0x4b7b20
     * @note[short] iOS: 0x38d2c4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x180914
     * @note[short] MacOS (Intel): 0x1c9d90
     * @note[short] Windows: 0x4b65c0
     * @note[short] iOS: 0x38c0b8
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1808f4
     * @note[short] MacOS (Intel): 0x1c9d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38c098
     * @note[short] Android
     */
    int getSFXRefID();

    /**
     * @note[short] MacOS (ARM): 0x1808c0
     * @note[short] MacOS (Intel): 0x1c9d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38c064
     * @note[short] Android
     */
    int getUniqueSFXID();

    /**
     * @note[short] MacOS (ARM): 0x180878
     * @note[short] MacOS (Intel): 0x1c9cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    gd::string m_soundPath;
    int m_soundID;
    float m_pitch;
    int m_speed;
    int m_pitchIndex;
    float m_volume;
    int m_start;
    int m_fadeIn;
    int m_end;
    int m_fadeOut;
    bool m_reverb;
    bool m_fastFourierTransform;
    bool m_loop;
    bool m_stopLoop;
    bool m_dontReset;
    bool m_unique;
    bool m_override;
    int m_sfxUniqueID;
    float m_volumeNear;
    float m_volumeMedium;
    float m_volumeFar;
    int m_minDistNear;
    int m_minDistMedium;
    int m_minDistFar;
    int m_proximityMode;
    bool m_cameraDistance;
    bool m_preload;
    bool m_ignoreVolumeTest;
    float m_minInterval;
    int m_sfxGroup;
    bool m_stop;
    bool m_changeSpeed;
    bool m_changeVolume;
    int m_groupID;
    int m_unk788;
    FMODReverbPreset m_reverbPreset;
    bool m_reverbEnabled;
    float m_soundDuration;
    bool m_applyDisabled;
    int m_speedVariance;
    int m_pitchVariance;
    float m_volumeVariance;
    bool m_pitchSteps;
};
