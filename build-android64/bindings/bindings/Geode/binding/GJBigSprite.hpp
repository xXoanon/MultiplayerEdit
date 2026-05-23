#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJBigSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x20bf60
     * @note[short] MacOS (Intel): 0x268680
     * @note[short] Android
     */
    static GJBigSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x20d524
     * @note[short] MacOS (Intel): 0x269e40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x20d9c4
     * @note[short] MacOS (Intel): 0x26a3d0
     * @note[short] Android
     */
    void finishedLoadingSpriteAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x20d934
     * @note[short] MacOS (Intel): 0x26a350
     * @note[short] Android: Rebinded
     */
    void loadSpriteAsync(gd::string filename, int index);

    /**
     * @note[short] MacOS (ARM): 0x20c9d4
     * @note[short] MacOS (Intel): 0x269180
     * @note[short] Android
     */
    void unloadAll();

    /**
     * @note[short] MacOS (ARM): 0x20d8cc
     * @note[short] MacOS (Intel): 0x26a2f0
     * @note[short] Android: Rebinded
     */
    void unloadSprite(gd::string filename, int index);

    /**
     * @note[short] MacOS (ARM): 0x20bff0
     * @note[short] MacOS (Intel): 0x268700
     * @note[short] Android
     */
    void updateSpriteVisibility();
    gd::vector<bool> m_spritesLoaded;
    cocos2d::CCArray* m_spriteNodes;
    float m_scaleX;
    float m_scaleY;
    bool m_loadSprites;
    bool m_unloadingAll;
};
