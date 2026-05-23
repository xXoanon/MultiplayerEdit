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

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2f8d04
     * @note[short] MacOS (Intel): 0x36ee70
     * @note[short] Windows: 0x27b7b0
     * @note[short] iOS: 0x3064d4
     * @note[short] Android
     */
    static ItemInfoPopup* create(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2fc758
     * @note[short] MacOS (Intel): 0x372cb0
     * @note[short] Windows: 0x27d820
     * @note[short] iOS: 0x309234
     * @note[short] Android
     */
    static gd::string nameForUnlockType(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2fcb04
     * @note[short] MacOS (Intel): 0x372fe0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x3093a4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2fb558
     * @note[short] MacOS (Intel): 0x371990
     * @note[short] Windows: 0x27b8a0
     * @note[short] iOS: 0x3081a0
     * @note[short] Android
     */
    bool init(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2fcaa8
     * @note[short] MacOS (Intel): 0x372f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isUnlockedByDefault(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2fca6c
     * @note[short] MacOS (Intel): 0x372f50
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x309338
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fcad4
     * @note[short] MacOS (Intel): 0x372fb0
     * @note[short] Windows: 0x27d7f0
     * @note[short] iOS: 0x309374
     * @note[short] Android
     */
    void onCredit(cocos2d::CCObject* sender);
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};
