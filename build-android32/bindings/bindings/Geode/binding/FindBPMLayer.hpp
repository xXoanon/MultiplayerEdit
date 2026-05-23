#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CreateGuidelinesLayer.hpp"

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)

    /**
     * @note[short] MacOS (ARM): 0x464aa8
     * @note[short] MacOS (Intel): 0x50d520
     * @note[short] Windows: 0x9b8b0
     * @note[short] iOS: 0x7e084
     * @note[short] Android
     */
    static FindBPMLayer* create(int songID);

    /**
     * @note[short] MacOS (ARM): 0x464f58
     * @note[short] MacOS (Intel): 0x50da80
     * @note[short] Windows: 0x9bea0
     * @note[short] iOS: 0x7e428
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x464dc4
     * @note[short] MacOS (Intel): 0x50d8f0
     * @note[short] Windows: 0x9bd10
     * @note[short] iOS: 0x7e2b4
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x464e60
     * @note[short] MacOS (Intel): 0x50d980
     * @note[short] Windows: 0x9bdb0
     * @note[short] iOS: 0x7e340
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x464f54
     * @note[short] MacOS (Intel): 0x50da70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7e424
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x464ce4
     * @note[short] MacOS (Intel): 0x50d7e0
     * @note[short] Windows: 0x9bad0
     * @note[short] iOS: 0x7e210
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x464d1c
     * @note[short] MacOS (Intel): 0x50d820
     * @note[short] Windows: 0x9bc90
     * @note[short] iOS: 0x7e248
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x464d88
     * @note[short] MacOS (Intel): 0x50d890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateBPM();

    /**
     * @note[short] MacOS (ARM): 0x464bcc
     * @note[short] MacOS (Intel): 0x50d6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7e0f8
     * @note[short] Android
     */
    bool init(int songID);
    int m_songID;
    cocos2d::CCLabelBMFont* m_bpmLabel;
    float m_startOffset;
    int m_beats;
    int m_beatsPerMinute;
};
