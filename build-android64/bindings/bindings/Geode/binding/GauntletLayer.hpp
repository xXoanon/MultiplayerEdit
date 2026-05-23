#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletLayer();

    /**
     * @note[short] MacOS (ARM): 0x318880
     * @note[short] MacOS (Intel): 0x3924c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x232178
     * @note[short] Android: Rebinded
     */
     ~GauntletLayer();

    /**
     * @note[short] MacOS (ARM): 0x318c44
     * @note[short] MacOS (Intel): 0x3929c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23227c
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x318b5c
     * @note[short] MacOS (Intel): 0x3928b0
     * @note[short] Windows: 0x1f5df0
     * @note[short] iOS: 0x232230
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x31ad94
     * @note[short] MacOS (Intel): 0x394c20
     * @note[short] Windows: 0x1f8460
     * @note[short] iOS: 0x233edc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x31a27c
     * @note[short] MacOS (Intel): 0x3941d0
     * @note[short] Windows: 0x1f6930
     * @note[short] iOS: 0x23383c
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x31a410
     * @note[short] MacOS (Intel): 0x394370
     * @note[short] Windows: 0x1f6b40
     * @note[short] iOS: 0x233910
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x318d0c
     * @note[short] MacOS (Intel): 0x392aa0
     * @note[short] Windows: 0x1f6140
     * @note[short] iOS: 0x232338
     * @note[short] Android
     */
    bool init(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x319368
     * @note[short] MacOS (Intel): 0x393100
     * @note[short] Windows: 0x1f8410
     * @note[short] iOS: 0x232958
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31a6cc
     * @note[short] MacOS (Intel): 0x3945e0
     * @note[short] Windows: 0x1f7d90
     * @note[short] iOS: 0x233aa0
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3193b0
     * @note[short] MacOS (Intel): 0x393150
     * @note[short] Windows: 0x1f6d40
     * @note[short] iOS: 0x2329a0
     * @note[short] Android
     */
    void setupGauntlet(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x31a710
     * @note[short] MacOS (Intel): 0x394620
     * @note[short] Windows: 0x1f7e00
     * @note[short] iOS: 0x233ae4
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_levels;
    LoadingCircle* m_loadingCircle;
    GauntletType m_gauntletType;
    cocos2d::CCSprite* m_backgroundSprite;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_activeItemButton;
    cocos2d::CCArray* m_activeObjects;
    TextArea* m_tryAgainText;
};
