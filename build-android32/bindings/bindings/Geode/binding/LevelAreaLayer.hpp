#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaLayer();

    /**
     * @note[short] MacOS (ARM): 0x2198e4
     * @note[short] MacOS (Intel): 0x277440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3439f4
     * @note[short] Android: Rebinded
     */
     ~LevelAreaLayer();

    /**
     * @note[short] MacOS (ARM): 0x21aef8
     * @note[short] MacOS (Intel): 0x278bb0
     * @note[short] Windows: 0x2c5890
     * @note[short] iOS: 0x344b74
     * @note[short] Android
     */
    static void addTorch(cocos2d::CCNode* parent, cocos2d::CCPoint position, int fireType, float scale, int zOrder, bool noTorch, int colorType, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x219bac
     * @note[short] MacOS (Intel): 0x277810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x343ad4
     * @note[short] Android
     */
    static LevelAreaLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x219ae0
     * @note[short] MacOS (Intel): 0x277720
     * @note[short] Windows: 0x2c42c0
     * @note[short] iOS: 0x343a90
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x219c60
     * @note[short] MacOS (Intel): 0x2778e0
     * @note[short] Windows: 0x2c43d0
     * @note[short] iOS: 0x343b7c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x21be44
     * @note[short] MacOS (Intel): 0x279a80
     * @note[short] Windows: 0x2c63c0
     * @note[short] iOS: 0x34561c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21bbbc
     * @note[short] MacOS (Intel): 0x2797e0
     * @note[short] Windows: 0x2c55b0
     * @note[short] iOS: 0x345438
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x21bdf0
     * @note[short] MacOS (Intel): 0x279a30
     * @note[short] Windows: 0x2c6370
     * @note[short] iOS: 0x3455c8
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x21abdc
     * @note[short] MacOS (Intel): 0x278880
     * @note[short] Windows: 0x2c5f20
     * @note[short] iOS: 0x344864
     * @note[short] Android
     */
    void addGodRay(float startOpacity, float midOpacity, float endOpacity, float fadeDuration, float scaleY, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x21bbcc
     * @note[short] MacOS (Intel): 0x279800
     * @note[short] Windows: 0x2c5730
     * @note[short] iOS: 0x345448
     * @note[short] Android
     */
    void fadeInsideTower();

    /**
     * @note[short] MacOS (ARM): 0x21aa2c
     * @note[short] MacOS (Intel): 0x2786c0
     * @note[short] Windows: 0x2c62c0
     * @note[short] iOS: 0x3446c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21aa94
     * @note[short] MacOS (Intel): 0x278730
     * @note[short] Windows: 0x2c55c0
     * @note[short] iOS: 0x344728
     * @note[short] Android
     */
    void onClickDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21bc78
     * @note[short] MacOS (Intel): 0x2798a0
     * @note[short] Windows: 0x2c57e0
     * @note[short] iOS: 0x3454f0
     * @note[short] Android
     */
    bool onEnterTower();

    /**
     * @note[short] MacOS (ARM): 0x21b96c
     * @note[short] MacOS (Intel): 0x2795b0
     * @note[short] Windows: 0x2c5280
     * @note[short] iOS: 0x345278
     * @note[short] Android
     */
    void showDialog();
    cocos2d::CCSprite* m_towerSprite;
    cocos2d::CCArray* m_godRays;
    bool m_enteringTower;
    bool m_exiting;
};
