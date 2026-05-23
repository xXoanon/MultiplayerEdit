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

class SelectArtLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectArtLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2120dc
     * @note[short] MacOS (Intel): 0x26f170
     * @note[short] Windows: 0x322190
     * @note[short] iOS: 0x17c024
     * @note[short] Android
     */
    static SelectArtLayer* create(SelectArtType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x213294
     * @note[short] MacOS (Intel): 0x2705b0
     * @note[short] Windows: 0x3230c0
     * @note[short] iOS: 0x17cea8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21270c
     * @note[short] MacOS (Intel): 0x26f9a0
     * @note[short] Windows: 0x3222a0
     * @note[short] iOS: 0x17c3d8
     * @note[short] Android
     */
    bool init(SelectArtType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x21318c
     * @note[short] MacOS (Intel): 0x2704a0
     * @note[short] Windows: 0x323070
     * @note[short] iOS: 0x17cda0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2131ec
     * @note[short] MacOS (Intel): 0x2704f0
     * @note[short] Windows: 0x322fb0
     * @note[short] iOS: 0x17ce00
     * @note[short] Android
     */
    void onSelectCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2130a4
     * @note[short] MacOS (Intel): 0x2703d0
     * @note[short] Windows: 0x322ef0
     * @note[short] iOS: 0x17ccd0
     * @note[short] Android
     */
    void selectArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x212208
     * @note[short] MacOS (Intel): 0x26f2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17c104
     * @note[short] Android
     */
    void updateSelectedCustom(int idx);
    cocos2d::CCArray* m_artSprites;
    cocos2d::CCArray* m_lineSprites;
    int m_art;
    int m_line;
    SelectArtType m_type;
    SelectArtDelegate* m_delegate;
};
