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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateDemonLayer();

    /**
     * @note[short] MacOS (ARM): 0x22525c
     * @note[short] MacOS (Intel): 0x283640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x426170
     * @note[short] Android: Rebinded
     */
     ~RateDemonLayer();

    /**
     * @note[short] MacOS (ARM): 0x2254f8
     * @note[short] MacOS (Intel): 0x283a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x426240
     * @note[short] Android
     */
    static RateDemonLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x226260
     * @note[short] MacOS (Intel): 0x284740
     * @note[short] Windows: 0x3c9660
     * @note[short] iOS: 0x426b24
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x225e9c
     * @note[short] MacOS (Intel): 0x284400
     * @note[short] Windows: 0x3c9440
     * @note[short] iOS: 0x426974
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x225fec
     * @note[short] MacOS (Intel): 0x2844f0
     * @note[short] Windows: 0x3c94d0
     * @note[short] iOS: 0x426a08
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x22616c
     * @note[short] MacOS (Intel): 0x284660
     * @note[short] Windows: 0x3c95a0
     * @note[short] iOS: 0x426aa4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x225618
     * @note[short] MacOS (Intel): 0x283b90
     * @note[short] Windows: 0x3c8b50
     * @note[short] iOS: 0x426318
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x225d14
     * @note[short] MacOS (Intel): 0x284280
     * @note[short] Windows: 0x3c9620
     * @note[short] iOS: 0x426810
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x225d70
     * @note[short] MacOS (Intel): 0x2842d0
     * @note[short] Windows: 0x3c92a0
     * @note[short] iOS: 0x42686c
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x225c08
     * @note[short] MacOS (Intel): 0x284190
     * @note[short] Windows: 0x3c9120
     * @note[short] iOS: 0x426714
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_levelID;
    int m_demonRate;
    bool m_moderator;
    UploadActionPopup* m_popup;
    RateLevelDelegate* m_delegate;
};
