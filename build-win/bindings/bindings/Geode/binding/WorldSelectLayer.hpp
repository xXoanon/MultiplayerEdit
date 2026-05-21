#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"

class WorldSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "WorldSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(WorldSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x343550
     * @note[short] MacOS (Intel): 0x3c1cc0
     * @note[short] Android
     */
    static WorldSelectLayer* create(int page);

    /**
     * @note[short] MacOS (ARM): 0x34346c
     * @note[short] MacOS (Intel): 0x3c1bb0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int page);

    /**
     * @note[short] MacOS (ARM): 0x345320
     * @note[short] MacOS (Intel): 0x3c3a70
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x345250
     * @note[short] MacOS (Intel): 0x3c39a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x345108
     * @note[short] MacOS (Intel): 0x3c38b0
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x344fc0
     * @note[short] MacOS (Intel): 0x3c37c0
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x345374
     * @note[short] MacOS (Intel): 0x3c3ac0
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x344314
     * @note[short] MacOS (Intel): 0x3c2b30
     * @note[short] Android
     */
    void animateInActiveIsland();

    /**
     * @note[short] MacOS (ARM): 0x345608
     * @note[short] MacOS (Intel): 0x3c3d70
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x345514
     * @note[short] MacOS (Intel): 0x3c3c60
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int page1, int page2, float progress);

    /**
     * @note[short] MacOS (ARM): 0x3443d8
     * @note[short] MacOS (Intel): 0x3c2be0
     * @note[short] Android
     */
    void goToPage(int page, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x343614
     * @note[short] MacOS (Intel): 0x3c1db0
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x343e70
     * @note[short] MacOS (Intel): 0x3c2640
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x344f5c
     * @note[short] MacOS (Intel): 0x3c3760
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x343de4
     * @note[short] MacOS (Intel): 0x3c2590
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x343e50
     * @note[short] MacOS (Intel): 0x3c2610
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x343e30
     * @note[short] MacOS (Intel): 0x3c25e0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x343ed4
     * @note[short] MacOS (Intel): 0x3c26a0
     * @note[short] Android
     */
    void setupWorlds();

    /**
     * @note[short] MacOS (ARM): 0x3444bc
     * @note[short] MacOS (Intel): 0x3c2cc0
     * @note[short] Android
     */
    void showCompleteDialog();

    /**
     * @note[short] MacOS (ARM): 0x344e64
     * @note[short] MacOS (Intel): 0x3c3660
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] MacOS (ARM): 0x344e4c
     * @note[short] MacOS (Intel): 0x3c3630
     * @note[short] Android
     */
    void unblockButtons();

    /**
     * @note[short] MacOS (ARM): 0x344270
     * @note[short] MacOS (Intel): 0x3c2ab0
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_background;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_arrowLeft;
    CCMenuItemSpriteExtra* m_arrowRight;
    bool m_cleanupSprites;
    bool m_enteringLevel;
    GJWorldNode* m_worldNode;
    bool m_buttonsLocked;
};
