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

class SelectFontLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectFontLayer();

    /**
     * @note[short] MacOS (ARM): 0x239adc
     * @note[short] MacOS (Intel): 0x299ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d1b18
     * @note[short] Android: Rebinded
     */
     ~SelectFontLayer();

    /**
     * @note[short] MacOS (ARM): 0x239cf4
     * @note[short] MacOS (Intel): 0x299df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d1bb8
     * @note[short] Android
     */
    static SelectFontLayer* create(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x23a5a8
     * @note[short] MacOS (Intel): 0x29a700
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x2d23b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x239df8
     * @note[short] MacOS (Intel): 0x299f30
     * @note[short] Windows: 0x28e510
     * @note[short] iOS: 0x2d1c78
     * @note[short] Android
     */
    bool init(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x23a414
     * @note[short] MacOS (Intel): 0x29a540
     * @note[short] Windows: 0x28ed30
     * @note[short] iOS: 0x2d221c
     * @note[short] Android
     */
    void onChangeFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a3d8
     * @note[short] MacOS (Intel): 0x29a510
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x2d21e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a4a8
     * @note[short] MacOS (Intel): 0x29a5e0
     * @note[short] Windows: 0x28eb30
     * @note[short] iOS: 0x2d22b0
     * @note[short] Android
     */
    void updateFontLabel();
    int m_font;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCLabelBMFont* m_fontLabel;
};
