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

class WorldLevelPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "WorldLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(WorldLevelPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3462f4
     * @note[short] MacOS (Intel): 0x3c4af0
     * @note[short] Android
     */
    static WorldLevelPage* create(GJGameLevel* level, GJWorldNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3481c0
     * @note[short] MacOS (Intel): 0x3c6b70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x348074
     * @note[short] MacOS (Intel): 0x3c6a30
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x346da8
     * @note[short] MacOS (Intel): 0x3c5730
     * @note[short] Android
     */
    bool init(GJGameLevel* level, GJWorldNode* node);

    /**
     * @note[short] MacOS (ARM): 0x347d74
     * @note[short] MacOS (Intel): 0x3c6700
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x347dec
     * @note[short] MacOS (Intel): 0x3c6780
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x347db0
     * @note[short] MacOS (Intel): 0x3c6730
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x347dc0
     * @note[short] MacOS (Intel): 0x3c6750
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);
    GJWorldNode* m_worldNode;
    GJGameLevel* m_level;
};
