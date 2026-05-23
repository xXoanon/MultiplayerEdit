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

class DemonInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6c67d4
     * @note[short] MacOS (Intel): 0x7c1290
     * @note[short] Windows: 0x3c7050
     * @note[short] iOS: 0x19cf10
     * @note[short] Android
     */
    static DemonInfoPopup* create(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x6c4378
     * @note[short] MacOS (Intel): 0x7bee70
     * @note[short] Windows: 0x3c6c80
     * @note[short] iOS: 0x19b9fc
     * @note[short] Android: Rebinded
     */
    static DemonInfoPopup* createFromString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x6c72a4
     * @note[short] MacOS (Intel): 0x7c1db0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x19d904
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6c6930
     * @note[short] MacOS (Intel): 0x7c1420
     * @note[short] Windows: 0x3c71b0
     * @note[short] iOS: 0x19d030
     * @note[short] Android
     */
    bool init(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x6c7268
     * @note[short] MacOS (Intel): 0x7c1d80
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x19d8c8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
