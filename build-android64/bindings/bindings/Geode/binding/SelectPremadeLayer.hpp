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

class SelectPremadeLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectPremadeLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectPremadeLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectPremadeLayer();

    /**
     * @note[short] MacOS (ARM): 0x29983c
     * @note[short] MacOS (Intel): 0x309a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x62f60
     * @note[short] Android
     */
    static SelectPremadeLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x299c94
     * @note[short] MacOS (Intel): 0x309f80
     * @note[short] Windows: 0x406bb0
     * @note[short] iOS: 0x632d8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x29a1dc
     * @note[short] MacOS (Intel): 0x30a480
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x6377c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29a1a0
     * @note[short] MacOS (Intel): 0x30a450
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x63740
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a130
     * @note[short] MacOS (Intel): 0x30a3f0
     * @note[short] Windows: 0x4071c0
     * @note[short] iOS: 0x636d0
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);
    SelectPremadeDelegate* m_delegate;
};
