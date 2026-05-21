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

class SelectListIconLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectListIconLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectListIconLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectListIconLayer();

    /**
     * @note[short] MacOS (ARM): 0x2ec2c8
     * @note[short] MacOS (Intel): 0x3610a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x247888
     * @note[short] Android: Rebinded
     */
     ~SelectListIconLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eb698
     * @note[short] MacOS (Intel): 0x360450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x246ecc
     * @note[short] Android
     */
    static SelectListIconLayer* create(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2ecb84
     * @note[short] MacOS (Intel): 0x3619e0
     * @note[short] Windows: 0x309ad0
     * @note[short] iOS: 0x247f08
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2ec4ec
     * @note[short] MacOS (Intel): 0x3613d0
     * @note[short] Windows: 0x3091e0
     * @note[short] iOS: 0x24792c
     * @note[short] Android
     */
    bool init(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2ecb2c
     * @note[short] MacOS (Intel): 0x361990
     * @note[short] Windows: 0x309a90
     * @note[short] iOS: 0x247eb0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eca34
     * @note[short] MacOS (Intel): 0x3618d0
     * @note[short] Windows: 0x3099d0
     * @note[short] iOS: 0x247dd0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_difficulties;
    int m_currentDifficulty;
    SelectListIconDelegate* m_delegate;
};
