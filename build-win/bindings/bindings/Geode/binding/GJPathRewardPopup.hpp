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

class GJPathRewardPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPathRewardPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathRewardPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPathRewardPopup();

    /**
     * @note[short] MacOS (ARM): 0x28fc8c
     * @note[short] MacOS (Intel): 0x2fecc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b8764
     * @note[short] Android
     */
    static GJPathRewardPopup* create(int path);

    /**
     * @note[short] MacOS (ARM): 0x294194
     * @note[short] MacOS (Intel): 0x3035a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bbdfc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29412c
     * @note[short] MacOS (Intel): 0x303540
     * @note[short] Windows: 0x2853f0
     * @note[short] iOS: 0x3bbd94
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x293b34
     * @note[short] MacOS (Intel): 0x302f80
     * @note[short] Windows: 0x289f20
     * @note[short] iOS: 0x3bb7f0
     * @note[short] Android
     */
    bool init(int path);

    /**
     * @note[short] MacOS (ARM): 0x293fd0
     * @note[short] MacOS (Intel): 0x303410
     * @note[short] Windows: 0x28a400
     * @note[short] iOS: 0x3bbc84
     * @note[short] Android
     */
    void onClaim(cocos2d::CCObject* sender);
    int m_pathNumber;
};
