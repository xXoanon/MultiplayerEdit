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

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LikeItemLayer();

    /**
     * @note[short] MacOS (ARM): 0x5217c4
     * @note[short] MacOS (Intel): 0x5f8bf0
     * @note[short] Windows: 0x32dd60
     * @note[short] iOS: 0x24cabc
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType type, int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x521e4c
     * @note[short] MacOS (Intel): 0x5f92e0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x24d008
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5218f0
     * @note[short] MacOS (Intel): 0x5f8d60
     * @note[short] Windows: 0x32de60
     * @note[short] iOS: 0x24cb94
     * @note[short] Android
     */
    bool init(LikeItemType type, int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x521ca4
     * @note[short] MacOS (Intel): 0x5f9130
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x24cf40
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x521d58
     * @note[short] MacOS (Intel): 0x5f91e0
     * @note[short] Windows: 0x32e240
     * @note[short] iOS: 0x24cf84
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x521ce0
     * @note[short] MacOS (Intel): 0x5f9160
     * @note[short] Windows: 0x32e230
     * @note[short] iOS: 0x24cf7c
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x521dd0
     * @note[short] MacOS (Intel): 0x5f9260
     * @note[short] Windows: 0x32e250
     * @note[short] iOS: 0x24cf8c
     * @note[short] Android
     */
    void triggerLike(bool isLiked);
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};
