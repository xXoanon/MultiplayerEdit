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
#include "FLAlertLayerProtocol.hpp"

class NewgroundsInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NewgroundsInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewgroundsInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NewgroundsInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x1c1750
     * @note[short] MacOS (Intel): 0x216160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x144b9c
     * @note[short] Android
     */
    static NewgroundsInfoLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x1c2a3c
     * @note[short] MacOS (Intel): 0x217580
     * @note[short] Windows: 0xc5650
     * @note[short] iOS: 0x145b24
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1c3548
     * @note[short] MacOS (Intel): 0x218060
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x14658c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c34f0
     * @note[short] MacOS (Intel): 0x218000
     * @note[short] Windows: 0xc63b0
     * @note[short] iOS: 0x146534
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c3288
     * @note[short] MacOS (Intel): 0x217e00
     * @note[short] Windows: 0xc5f90
     * @note[short] iOS: 0x14635c
     * @note[short] Android
     */
    void onArtists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3328
     * @note[short] MacOS (Intel): 0x217e90
     * @note[short] Windows: 0xc6250
     * @note[short] iOS: 0x1463fc
     * @note[short] Android
     */
    void onChanges(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c324c
     * @note[short] MacOS (Intel): 0x217dd0
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x146320
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c32e0
     * @note[short] MacOS (Intel): 0x217e50
     * @note[short] Windows: 0xc60e0
     * @note[short] iOS: 0x1463b4
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3408
     * @note[short] MacOS (Intel): 0x217f50
     * @note[short] Windows: 0xc6100
     * @note[short] iOS: 0x14649c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c32bc
     * @note[short] MacOS (Intel): 0x217e30
     * @note[short] Windows: 0xc5f7a
     * @note[short] iOS: 0x146390
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3304
     * @note[short] MacOS (Intel): 0x217e70
     * @note[short] Windows: 0xc60c0
     * @note[short] iOS: 0x1463d8
     * @note[short] Android
     */
    void onSupporter(cocos2d::CCObject* sender);
};
