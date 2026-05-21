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

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPromoPopup();

    /**
     * @note[short] MacOS (ARM): 0x253cd8
     * @note[short] MacOS (Intel): 0x2b62e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5120
     * @note[short] Android: Rebinded
     */
    static GJPromoPopup* create(gd::string filename);

    /**
     * @note[short] MacOS (ARM): 0x2540f4
     * @note[short] MacOS (Intel): 0x2b6760
     * @note[short] Windows: 0x2a4f50
     * @note[short] iOS: 0x2e54e0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x254204
     * @note[short] MacOS (Intel): 0x2b6870
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x2e5520
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x254134
     * @note[short] MacOS (Intel): 0x2b67a0
     * @note[short] Windows: 0x285450
     * @note[short] iOS: 0x2e5514
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x25423c
     * @note[short] MacOS (Intel): 0x2b68b0
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x2e5558
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x253e48
     * @note[short] MacOS (Intel): 0x2b6480
     * @note[short] Windows: 0x2a4c50
     * @note[short] iOS: 0x2e5238
     * @note[short] Android: Rebinded
     */
    bool init(gd::string filename);

    /**
     * @note[short] MacOS (ARM): 0x25408c
     * @note[short] MacOS (Intel): 0x2b6700
     * @note[short] Windows: 0x2853f0
     * @note[short] iOS: 0x2e5478
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    gd::string m_promoFrame;
};
