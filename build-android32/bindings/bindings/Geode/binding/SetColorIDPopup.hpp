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
#include "GJSpecialColorSelectDelegate.hpp"

class SetColorIDPopup : public SetIDPopup, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetColorIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetColorIDPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e67b0
     * @note[short] Android: Out of line
     */
     SetColorIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x24b390
     * @note[short] MacOS (Intel): 0x2accd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2de8a0
     * @note[short] Android
     */
    static SetColorIDPopup* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x24b774
     * @note[short] MacOS (Intel): 0x2ad110
     * @note[short] Windows: 0x29c350
     * @note[short] iOS: 0x2deb58
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x24b4b8
     * @note[short] MacOS (Intel): 0x2ace50
     * @note[short] Windows: 0x29c100
     * @note[short] iOS: 0x2de914
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x24b710
     * @note[short] MacOS (Intel): 0x2ad0c0
     * @note[short] Windows: 0x29c2e0
     * @note[short] iOS: 0x2deaf4
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
};
