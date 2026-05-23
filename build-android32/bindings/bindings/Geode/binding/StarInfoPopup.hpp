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

class StarInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "StarInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StarInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6c7320
     * @note[short] MacOS (Intel): 0x7c1e20
     * @note[short] Windows: 0x3c8070
     * @note[short] iOS: 0x19d980
     * @note[short] Android
     */
    static StarInfoPopup* create(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x6c3ee0
     * @note[short] MacOS (Intel): 0x7be990
     * @note[short] Windows: 0x3c7ae0
     * @note[short] iOS: 0x19b6bc
     * @note[short] Android: Rebinded
     */
    static StarInfoPopup* createFromString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x6c4140
     * @note[short] MacOS (Intel): 0x7bec20
     * @note[short] Windows: 0x3c7dc0
     * @note[short] iOS: 0x19b86c
     * @note[short] Android: Rebinded
     */
    static StarInfoPopup* createFromStringMoons(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x6c7e1c
     * @note[short] MacOS (Intel): 0x7c28c0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x19e2dc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6c7478
     * @note[short] MacOS (Intel): 0x7c1fb0
     * @note[short] Windows: 0x3c81b0
     * @note[short] iOS: 0x19da9c
     * @note[short] Android
     */
    bool init(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x6c7de0
     * @note[short] MacOS (Intel): 0x7c2890
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x19e2a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
