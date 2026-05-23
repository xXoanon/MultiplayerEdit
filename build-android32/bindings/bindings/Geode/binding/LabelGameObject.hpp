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

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LabelGameObject();

    /**
     * @note[short] MacOS (ARM): 0x178db4
     * @note[short] MacOS (Intel): 0x1c0de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38890c
     * @note[short] Android
     */
    static LabelGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x178e84
     * @note[short] MacOS (Intel): 0x1c0ed0
     * @note[short] Windows: 0x4b3450
     * @note[short] iOS: 0x3889d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x179288
     * @note[short] MacOS (Intel): 0x1c12d0
     * @note[short] Windows: 0x4b37b0
     * @note[short] iOS: 0x388cf0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x178eb4
     * @note[short] MacOS (Intel): 0x1c0f00
     * @note[short] Windows: 0x4b3490
     * @note[short] iOS: 0x388a00
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x179b04
     * @note[short] MacOS (Intel): 0x1c1c40
     * @note[short] Windows: 0x4b3ca0
     * @note[short] iOS: 0x389354
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x17a79c
     * @note[short] MacOS (Intel): 0x1c2c00
     * @note[short] Windows: 0x4b40c0
     * @note[short] iOS: 0x389710
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1798c0
     * @note[short] MacOS (Intel): 0x1c19d0
     * @note[short] Windows: 0x4b3ae0
     * @note[short] iOS: 0x38918c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x179b5c
     * @note[short] MacOS (Intel): 0x1c1ca0
     * @note[short] Windows: 0x4b3d10
     * @note[short] iOS: 0x3893ac
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x179abc
     * @note[short] MacOS (Intel): 0x1c1bf0
     * @note[short] Windows: 0x4b3c50
     * @note[short] iOS: 0x38930c
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x17930c
     * @note[short] MacOS (Intel): 0x1c1350
     * @note[short] Windows: 0x4b3870
     * @note[short] iOS: 0x388d74
     * @note[short] Android
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): 0x1a1fa0
     * @note[short] MacOS (Intel): 0x1f3cb0
     * @note[short] Windows: 0x496010
     * @note[short] iOS: 0x39958c
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x178fac
     * @note[short] MacOS (Intel): 0x1c0fc0
     * @note[short] Windows: 0x4b3530
     * @note[short] iOS: 0x388ae0
     * @note[short] Android: Rebinded
     */
    void createLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x179254
     * @note[short] MacOS (Intel): 0x1c12a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388cbc
     * @note[short] Android: Rebinded
     */
    void queueUpdateLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x1790bc
     * @note[short] MacOS (Intel): 0x1c10e0
     * @note[short] Windows: 0x4b36d0
     * @note[short] iOS: 0x388bac
     * @note[short] Android
     */
    void removeLabel();

    /**
     * @note[short] MacOS (ARM): 0x17a794
     * @note[short] MacOS (Intel): 0x1c2bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockLabelColor();

    /**
     * @note[short] MacOS (ARM): 0x179724
     * @note[short] MacOS (Intel): 0x1c1870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLabel(float value);

    /**
     * @note[short] MacOS (ARM): 0x1796c4
     * @note[short] MacOS (Intel): 0x1c1810
     * @note[short] Windows: 0x4b3a50
     * @note[short] iOS: 0x389074
     * @note[short] Android: Rebinded
     */
    void updateLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x1791e4
     * @note[short] MacOS (Intel): 0x1c1220
     * @note[short] Windows: 0x4b37f0
     * @note[short] iOS: 0x388c4c
     * @note[short] Android
     */
    void updateLabelAlign(int alignment);

    /**
     * @note[short] MacOS (ARM): 0x1797cc
     * @note[short] MacOS (Intel): 0x1c1900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3890c4
     * @note[short] Android
     */
    void updateLabelIfDirty();

    /**
     * @note[short] MacOS (ARM): 0x179320
     * @note[short] MacOS (Intel): 0x1c1370
     * @note[short] Windows: 0x4b3890
     * @note[short] iOS: 0x388d88
     * @note[short] Android
     */
    void updatePreviewLabel();
    cocos2d::CCLabelBMFont* m_label;
    bool m_labelDirty;
    gd::string m_labelString;
    bool m_labelColorLocked;
    int m_alignment;
    bool m_showSecondsOnly;
    int m_shownSpecial;
    bool m_isTimeCounter;
    int m_kerning;
    bool m_updateLabel;
};
