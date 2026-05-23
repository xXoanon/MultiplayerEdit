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

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DemonFilterSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x552198
     * @note[short] MacOS (Intel): 0x62f1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5716c
     * @note[short] Android: Rebinded
     */
     ~DemonFilterSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x54ebb8
     * @note[short] MacOS (Intel): 0x62b8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x545a4
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5523bc
     * @note[short] MacOS (Intel): 0x62f510
     * @note[short] Windows: 0x317950
     * @note[short] iOS: 0x57210
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5529ac
     * @note[short] MacOS (Intel): 0x62faf0
     * @note[short] Windows: 0x3180a0
     * @note[short] iOS: 0x57770
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x55294c
     * @note[short] MacOS (Intel): 0x62faa0
     * @note[short] Windows: 0x318050
     * @note[short] iOS: 0x57710
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x552884
     * @note[short] MacOS (Intel): 0x62f9e0
     * @note[short] Windows: 0x317f90
     * @note[short] iOS: 0x57648
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_currentDemon;
    DemonFilterDelegate* m_delegate;
};
