#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"

class FindObjectPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e6830
     * @note[short] Android: Out of line
     */
     FindObjectPopup();

    /**
     * @note[short] MacOS (ARM): 0x24bb10
     * @note[short] MacOS (Intel): 0x2ad5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dec88
     * @note[short] Android
     */
    static FindObjectPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x24bc2c
     * @note[short] MacOS (Intel): 0x2ad760
     * @note[short] Windows: 0x29c410
     * @note[short] iOS: 0x2decfc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x24bd4c
     * @note[short] MacOS (Intel): 0x2ad840
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFindObjectID(cocos2d::CCObject* sender);
    bool m_unknownBool;
};
