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

class ShareListLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareListLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2ecc34
     * @note[short] MacOS (Intel): 0x361a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x247f14
     * @note[short] Android: Rebinded
     */
     ~ShareListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eb7c4
     * @note[short] MacOS (Intel): 0x3605f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x246fb0
     * @note[short] Android
     */
    static ShareListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2ee444
     * @note[short] MacOS (Intel): 0x3634f0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x2492b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2ece58
     * @note[short] MacOS (Intel): 0x361db0
     * @note[short] Windows: 0x309b20
     * @note[short] iOS: 0x247fb8
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2edf74
     * @note[short] MacOS (Intel): 0x363010
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x248f04
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee0c8
     * @note[short] MacOS (Intel): 0x363140
     * @note[short] Windows: 0x30acc0
     * @note[short] iOS: 0x249030
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2edfb0
     * @note[short] MacOS (Intel): 0x363040
     * @note[short] Windows: 0x30af80
     * @note[short] iOS: 0x248f40
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee184
     * @note[short] MacOS (Intel): 0x3631f0
     * @note[short] Windows: 0x30ae30
     * @note[short] iOS: 0x2490c8
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee280
     * @note[short] MacOS (Intel): 0x3632e0
     * @note[short] Windows: 0x30aea0
     * @note[short] iOS: 0x249138
     * @note[short] Android
     */
    void updateUnlistedF();
    GJLevelList* m_list;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
};
