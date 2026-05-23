#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6a2d04
     * @note[short] MacOS (Intel): 0x79b3a0
     * @note[short] Windows: 0x376a40
     * @note[short] iOS: 0xed4ac
     * @note[short] Android
     */
    static VideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6a669c
     * @note[short] MacOS (Intel): 0x79f020
     * @note[short] Windows: 0x376b60
     * @note[short] iOS: 0xefc88
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6a8034
     * @note[short] MacOS (Intel): 0x7a0b70
     * @note[short] Windows: 0x3789d0
     * @note[short] iOS: 0xf1338
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6a74d8
     * @note[short] MacOS (Intel): 0x79ff50
     * @note[short] Windows: 0x3789e0
     * @note[short] iOS: 0xf0a18
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float scale, float width, bool center, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x6a7c20
     * @note[short] MacOS (Intel): 0x7a0710
     * @note[short] Windows: 0x377ea0
     * @note[short] iOS: 0xf1058
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a78b4
     * @note[short] MacOS (Intel): 0x7a0370
     * @note[short] Windows: 0x378490
     * @note[short] iOS: 0xf0d2c
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a7744
     * @note[short] MacOS (Intel): 0x7a01a0
     * @note[short] Windows: 0x377ff0
     * @note[short] iOS: 0xf0c84
     * @note[short] Android
     */
    void onBorderless(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a7754
     * @note[short] MacOS (Intel): 0x7a01c0
     * @note[short] Windows: 0x378010
     * @note[short] iOS: 0xf0c94
     * @note[short] Android
     */
    void onBorderlessFix(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a785c
     * @note[short] MacOS (Intel): 0x7a0310
     * @note[short] Windows: 0x378950
     * @note[short] iOS: 0xf0cd4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a7734
     * @note[short] MacOS (Intel): 0x7a0180
     * @note[short] Windows: 0x377fd0
     * @note[short] iOS: 0xf0c74
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a7f50
     * @note[short] MacOS (Intel): 0x7a0ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a7770
     * @note[short] MacOS (Intel): 0x7a01f0
     * @note[short] Windows: 0x378110
     * @note[short] iOS: 0xf0cb0
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a7764
     * @note[short] MacOS (Intel): 0x7a01d0
     * @note[short] Windows: 0x378100
     * @note[short] iOS: 0xf0ca4
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a77ec
     * @note[short] MacOS (Intel): 0x7a0290
     * @note[short] Windows: 0x378040
     * @note[short] iOS: 0xf0cc8
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a777c
     * @note[short] MacOS (Intel): 0x7a0210
     * @note[short] Windows: 0x378030
     * @note[short] iOS: 0xf0cbc
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6a8004
     * @note[short] MacOS (Intel): 0x7a0b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x6a7d50
     * @note[short] MacOS (Intel): 0x7a0890
     * @note[short] Windows: 0x378230
     * @note[short] iOS: 0xf1138
     * @note[short] Android
     */
    void toggleResolution();

    /**
     * @note[short] MacOS (ARM): 0x6a7b60
     * @note[short] MacOS (Intel): 0x7a0640
     * @note[short] Windows: 0x378120
     * @note[short] iOS: 0xf0f98
     * @note[short] Android
     */
    void updateResolution(int resolution);

    /**
     * @note[short] MacOS (ARM): 0x6a7af4
     * @note[short] MacOS (Intel): 0x7a05d0
     * @note[short] Windows: 0x378050
     * @note[short] iOS: 0xf0f2c
     * @note[short] Android
     */
    void updateTextureQuality(int quality);
    CCMenuItemSpriteExtra* m_prevResolutionBtn;
    CCMenuItemSpriteExtra* m_nextResolutionBtn;
    cocos2d::CCLabelBMFont* m_windowedResolutionLabel;
    cocos2d::CCLabelBMFont* m_selectedResolutionLabel;
    cocos2d::CCLabelBMFont* m_qualityLabel;
    int m_textureQuality;
    cocos2d::CCArray* m_availableResolutions;
    CCMenuItemToggler* m_borderlessToggle;
    cocos2d::CCLabelBMFont* m_borderlessLabel;
    CCMenuItemToggler* m_fixToggle;
    cocos2d::CCLabelBMFont* m_fixLabel;
    bool m_fullscreen;
    bool m_borderless;
    bool m_fix;
    int m_currentResolution;
};
