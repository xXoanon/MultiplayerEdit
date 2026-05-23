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

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2b2cf8
     * @note[short] MacOS (Intel): 0x325450
     * @note[short] Windows: 0x2aeb90
     * @note[short] iOS: 0x14c384
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2b5858
     * @note[short] MacOS (Intel): 0x328610
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x14e568
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2b4d4c
     * @note[short] MacOS (Intel): 0x3279f0
     * @note[short] Windows: 0x2aec80
     * @note[short] iOS: 0x14db7c
     * @note[short] Android
     */
    bool init(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2b57a8
     * @note[short] MacOS (Intel): 0x328570
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x14e4b8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b57e4
     * @note[short] MacOS (Intel): 0x3285a0
     * @note[short] Windows: 0x2afb30
     * @note[short] iOS: 0x14e4f4
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);
    GJStoreItem* m_storeItem;
    GJPurchaseDelegate* m_delegate;
};
