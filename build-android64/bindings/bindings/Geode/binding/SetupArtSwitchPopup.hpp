#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"
#include "SelectArtDelegate.hpp"

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4d12b8
     * @note[short] MacOS (Intel): 0x585680
     * @note[short] Windows: 0x471780
     * @note[short] iOS: 0x410cf0
     * @note[short] Android
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4d1a80
     * @note[short] MacOS (Intel): 0x585f20
     * @note[short] Windows: 0x472440
     * @note[short] iOS: 0x4112f4
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4d1458
     * @note[short] MacOS (Intel): 0x5858e0
     * @note[short] Windows: 0x471a40
     * @note[short] iOS: 0x410de0
     * @note[short] Android
     */
    bool init(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4d1a38
     * @note[short] MacOS (Intel): 0x585ed0
     * @note[short] Windows: 0x4723f0
     * @note[short] iOS: 0x4112ac
     * @note[short] Android
     */
    void onArt(cocos2d::CCObject* sender);
    SelectArtType m_artType;
    cocos2d::CCSprite* m_artSprite;
};
