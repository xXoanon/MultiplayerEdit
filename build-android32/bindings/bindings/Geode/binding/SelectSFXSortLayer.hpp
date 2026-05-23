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

class SelectSFXSortLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSFXSortLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSFXSortLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectSFXSortLayer();

    /**
     * @note[short] MacOS (ARM): 0x3b1f00
     * @note[short] MacOS (Intel): 0x4407d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16a518
     * @note[short] Android
     */
    static SelectSFXSortLayer* create(AudioSortType sortType);

    /**
     * @note[short] MacOS (ARM): 0x3b2d58
     * @note[short] MacOS (Intel): 0x4416b0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x16b068
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3b2838
     * @note[short] MacOS (Intel): 0x4411b0
     * @note[short] Windows: 0x481030
     * @note[short] iOS: 0x16ab4c
     * @note[short] Android
     */
    bool init(AudioSortType sortType);

    /**
     * @note[short] MacOS (ARM): 0x3b2cb0
     * @note[short] MacOS (Intel): 0x441620
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x16afc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b2cec
     * @note[short] MacOS (Intel): 0x441650
     * @note[short] Windows: 0x4816b0
     * @note[short] iOS: 0x16affc
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    AudioSortType m_sortType;
    SelectSFXSortDelegate* m_delegate;
};
