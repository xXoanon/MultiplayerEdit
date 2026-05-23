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
#include "FLAlertLayerProtocol.hpp"
#include "GJPurchaseDelegate.hpp"

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x28fb60
     * @note[short] MacOS (Intel): 0x2feb40
     * @note[short] Windows: 0x2854b0
     * @note[short] iOS: 0x3b8684
     * @note[short] Android
     */
    static GJPathPage* create(int path, GJPathsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x293740
     * @note[short] MacOS (Intel): 0x302bb0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x3bb4a0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2935fc
     * @note[short] MacOS (Intel): 0x302a70
     * @note[short] Windows: 0x289040
     * @note[short] iOS: 0x3bb494
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x293778
     * @note[short] MacOS (Intel): 0x302bf0
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x3bb4d8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x291d44
     * @note[short] MacOS (Intel): 0x300ea0
     * @note[short] Windows: 0x287470
     * @note[short] iOS: 0x3ba374
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x290054
     * @note[short] MacOS (Intel): 0x2ff120
     * @note[short] Windows: 0x2855e0
     * @note[short] iOS: 0x3b8a0c
     * @note[short] Android
     */
    bool init(int path, GJPathsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x291d20
     * @note[short] MacOS (Intel): 0x300e70
     * @note[short] Windows: 0x287210
     * @note[short] iOS: 0x3ba350
     * @note[short] Android
     */
    void onActivatePath(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2919b8
     * @note[short] MacOS (Intel): 0x300b40
     * @note[short] Windows: 0x288fa0
     * @note[short] iOS: 0x3ba0ac
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x291a58
     * @note[short] MacOS (Intel): 0x300bd0
     * @note[short] Windows: 0x287280
     * @note[short] iOS: 0x3ba14c
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x291c10
     * @note[short] MacOS (Intel): 0x300d80
     * @note[short] Windows: 0x287480
     * @note[short] iOS: 0x3ba264
     * @note[short] Android
     */
    void onUnlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x291d48
     * @note[short] MacOS (Intel): 0x300eb0
     * @note[short] Windows: 0x287d30
     * @note[short] iOS: 0x3ba378
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2922f4
     * @note[short] MacOS (Intel): 0x301560
     * @note[short] Windows: 0x287660
     * @note[short] iOS: 0x3ba7a0
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x292bf0
     * @note[short] MacOS (Intel): 0x301ef0
     * @note[short] Windows: 0x288e70
     * @note[short] iOS: 0x3bae4c
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x2929a8
     * @note[short] MacOS (Intel): 0x301c00
     * @note[short] Windows: 0x288380
     * @note[short] iOS: 0x3bacf4
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x292d48
     * @note[short] MacOS (Intel): 0x302050
     * @note[short] Windows: 0x288600
     * @note[short] iOS: 0x3baed8
     * @note[short] Android
     */
    void unlockAnimationStep3();
    GJPathsLayer* m_pathsLayer;
    int m_pathNumber;
    bool m_animationPlaying;
    int m_dialogIndex;
};
