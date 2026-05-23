#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x23d244
     * @note[short] MacOS (Intel): 0x29daa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d3f70
     * @note[short] Android
     */
    static EditorOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x23d3e0
     * @note[short] MacOS (Intel): 0x29dd00
     * @note[short] Windows: 0x291040
     * @note[short] iOS: 0x2d4050
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x23ddfc
     * @note[short] MacOS (Intel): 0x29e6f0
     * @note[short] Windows: 0x291a90
     * @note[short] iOS: 0x2d4a68
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23d3fc
     * @note[short] MacOS (Intel): 0x29dd30
     * @note[short] Windows: 0x291070
     * @note[short] iOS: 0x2d406c
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x23dd7c
     * @note[short] MacOS (Intel): 0x29e680
     * @note[short] Windows: 0x291a00
     * @note[short] iOS: 0x2d49e8
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23dcf4
     * @note[short] MacOS (Intel): 0x29e600
     * @note[short] Windows: 0x291970
     * @note[short] iOS: 0x2d4960
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
    int m_buttonsPerRow;
    int m_buttonRows;
    cocos2d::CCLabelBMFont* m_buttonsPerRowLabel;
    cocos2d::CCLabelBMFont* m_buttonRowsLabel;
};
