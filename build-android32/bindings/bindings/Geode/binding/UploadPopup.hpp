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
#include "LevelUploadDelegate.hpp"

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadPopup();

    /**
     * @note[short] MacOS (ARM): 0x223818
     * @note[short] MacOS (Intel): 0x281940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27644c
     * @note[short] Android: Rebinded
     */
     ~UploadPopup();

    /**
     * @note[short] MacOS (ARM): 0x223694
     * @note[short] MacOS (Intel): 0x281780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276310
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2242b0
     * @note[short] MacOS (Intel): 0x282500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276e70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x224250
     * @note[short] MacOS (Intel): 0x282490
     * @note[short] Windows: 0x30bc70
     * @note[short] iOS: 0x276e10
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x223e20
     * @note[short] MacOS (Intel): 0x282030
     * @note[short] Windows: 0x490bf0
     * @note[short] iOS: 0x276a14
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x224058
     * @note[short] MacOS (Intel): 0x282280
     * @note[short] Windows: 0x490dc0
     * @note[short] iOS: 0x276c3c
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2238fc
     * @note[short] MacOS (Intel): 0x281aa0
     * @note[short] Windows: 0x490620
     * @note[short] iOS: 0x276520
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x223dd4
     * @note[short] MacOS (Intel): 0x281fe0
     * @note[short] Windows: 0x491090
     * @note[short] iOS: 0x2769c8
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22420c
     * @note[short] MacOS (Intel): 0x282440
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x276dcc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223fd0
     * @note[short] MacOS (Intel): 0x2821e0
     * @note[short] Windows: 0x490fa0
     * @note[short] iOS: 0x276bb4
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
    GJGameLevel* m_level;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};
