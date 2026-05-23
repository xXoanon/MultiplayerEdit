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
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x3a3fe4
     * @note[short] MacOS (Intel): 0x431b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x401898
     * @note[short] Android
     */
    static LevelSelectLayer* create(int page);

    /**
     * @note[short] MacOS (ARM): 0x3a3efc
     * @note[short] MacOS (Intel): 0x4319f0
     * @note[short] Windows: 0x3182c0
     * @note[short] iOS: 0x40184c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int page);

    /**
     * @note[short] MacOS (ARM): 0x3a6ad4
     * @note[short] MacOS (Intel): 0x4346e0
     * @note[short] Windows: 0x319a80
     * @note[short] iOS: 0x403824
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3a6b68
     * @note[short] MacOS (Intel): 0x434780
     * @note[short] Windows: 0x319ad0
     * @note[short] iOS: 0x403830
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3a4de4
     * @note[short] MacOS (Intel): 0x432a80
     * @note[short] Windows: 0x319200
     * @note[short] iOS: 0x4023b4
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* layer, cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3a664c
     * @note[short] MacOS (Intel): 0x434240
     * @note[short] Windows: 0x319270
     * @note[short] iOS: 0x403518
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x3a6a44
     * @note[short] MacOS (Intel): 0x434660
     * @note[short] Windows: 0x319590
     * @note[short] iOS: 0x403798
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3a67a0
     * @note[short] MacOS (Intel): 0x4343b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x403668
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int page1, int page2, float progress);

    /**
     * @note[short] MacOS (ARM): 0x3a40ac
     * @note[short] MacOS (Intel): 0x431c00
     * @note[short] Windows: 0x3183f0
     * @note[short] iOS: 0x401954
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x3a4d60
     * @note[short] MacOS (Intel): 0x4329f0
     * @note[short] Windows: 0x319a30
     * @note[short] iOS: 0x402350
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4ca8
     * @note[short] MacOS (Intel): 0x432940
     * @note[short] Windows: 0x3191b0
     * @note[short] iOS: 0x402298
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4da8
     * @note[short] MacOS (Intel): 0x432a40
     * @note[short] Windows: 0x319bb0
     * @note[short] iOS: 0x402398
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4d30
     * @note[short] MacOS (Intel): 0x4329c0
     * @note[short] Windows: 0x319930
     * @note[short] iOS: 0x402320
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6c60
     * @note[short] MacOS (Intel): 0x434930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4038f8
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4d00
     * @note[short] MacOS (Intel): 0x432990
     * @note[short] Windows: 0x3199b0
     * @note[short] iOS: 0x4022f0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4dc4
     * @note[short] MacOS (Intel): 0x432a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();
    float m_width;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    BoomScrollLayer* m_scrollLayer;
    int m_unknown;
    int m_scrolls;
    bool m_masterDetectiveUnlocked;
};
