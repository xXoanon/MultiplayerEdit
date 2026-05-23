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

class NCSInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NCSInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NCSInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NCSInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x1c1650
     * @note[short] MacOS (Intel): 0x216020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x144ae4
     * @note[short] Android
     */
    static NCSInfoLayer* create(CustomSongLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1c3d2c
     * @note[short] MacOS (Intel): 0x218860
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x146ce4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c35c4
     * @note[short] MacOS (Intel): 0x2180d0
     * @note[short] Windows: 0xc63e0
     * @note[short] iOS: 0x146608
     * @note[short] Android
     */
    bool init(CustomSongLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1c3cf0
     * @note[short] MacOS (Intel): 0x218830
     * @note[short] Windows: 0x84670
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3c20
     * @note[short] MacOS (Intel): 0x218760
     * @note[short] Windows: 0xc6c30
     * @note[short] iOS: 0x146c14
     * @note[short] Android
     */
    void onLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3c84
     * @note[short] MacOS (Intel): 0x2187d0
     * @note[short] Windows: 0xc6bd0
     * @note[short] iOS: 0x146c78
     * @note[short] Android
     */
    void onNCS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3ca8
     * @note[short] MacOS (Intel): 0x2187f0
     * @note[short] Windows: 0xc6bf0
     * @note[short] iOS: 0x146c9c
     * @note[short] Android
     */
    void onNCSIO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3ccc
     * @note[short] MacOS (Intel): 0x218810
     * @note[short] Windows: 0xc6c10
     * @note[short] iOS: 0x146cc0
     * @note[short] Android
     */
    void onNCSUsage(cocos2d::CCObject* sender);
    CustomSongLayer* m_songLayer;
};
