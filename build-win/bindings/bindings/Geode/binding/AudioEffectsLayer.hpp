#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AudioEffectsLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AudioEffectsLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioEffectsLayer();

    /**
     * @note[short] MacOS (ARM): 0x411028
     * @note[short] MacOS (Intel): 0x4aeed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c4248
     * @note[short] Android: Rebinded
     */
     ~AudioEffectsLayer();

    /**
     * @note[short] MacOS (ARM): 0x411290
     * @note[short] MacOS (Intel): 0x4af250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c42f8
     * @note[short] Android: Rebinded
     */
    static AudioEffectsLayer* create(gd::string audioString);

    /**
     * @note[short] MacOS (ARM): 0x411cfc
     * @note[short] MacOS (Intel): 0x4afc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c4a10
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x411bd4
     * @note[short] MacOS (Intel): 0x4afb50
     * @note[short] Windows: 0x85000
     * @note[short] iOS: 0x3c4920
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4119a8
     * @note[short] MacOS (Intel): 0x4af950
     * @note[short] Windows: 0x84dd0
     * @note[short] iOS: 0x3c470c
     * @note[short] Android
     */
    void audioStep(float dt);

    /**
     * @note[short] MacOS (ARM): 0x411d00
     * @note[short] MacOS (Intel): 0x4afc80
     * @note[short] Android
     */
    cocos2d::CCSprite* getBGSquare();

    /**
     * @note[short] MacOS (ARM): 0x411bc8
     * @note[short] MacOS (Intel): 0x4afb40
     * @note[short] Windows: 0x85170
     * @note[short] iOS: 0x3c4914
     * @note[short] Android
     */
    void goingDown();

    /**
     * @note[short] MacOS (ARM): 0x4113c8
     * @note[short] MacOS (Intel): 0x4af3a0
     * @note[short] Windows: 0x84be0
     * @note[short] iOS: 0x3c4418
     * @note[short] Android: Rebinded
     */
    bool init(gd::string audioString);

    /**
     * @note[short] MacOS (ARM): 0x411960
     * @note[short] MacOS (Intel): 0x4af8f0
     * @note[short] Windows: 0x84d70
     * @note[short] iOS: 0x3c46c4
     * @note[short] Android
     */
    void resetAudioVars();

    /**
     * @note[short] MacOS (ARM): 0x411a64
     * @note[short] MacOS (Intel): 0x4afa20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c47c8
     * @note[short] Android
     */
    void triggerEffect(float pulse);
    cocos2d::CCSpriteBatchNode* m_batchNode;
    cocos2d::CCArray* m_unk1bc;
    cocos2d::CCArray* m_unk1c0;
    float m_timeElapsed;
    float m_audioPulseMod;
    bool m_goingDown;
    float m_audioScale;
    bool m_unk1d4;
};
