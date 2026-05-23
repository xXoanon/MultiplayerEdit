#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x328258
     * @note[short] MacOS (Intel): 0x3a3690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d6e70
     * @note[short] Android: Rebinded
     */
     ~LoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x3271fc
     * @note[short] MacOS (Intel): 0x3a25b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d5f40
     * @note[short] Android
     */
    static LoadingLayer* create(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x327124
     * @note[short] MacOS (Intel): 0x3a24b0
     * @note[short] Windows: 0x32e3b0
     * @note[short] iOS: 0x1d5efc
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x327a3c
     * @note[short] MacOS (Intel): 0x3a2e00
     * @note[short] Windows: 0x32f7f0
     * @note[short] iOS: 0x1d66c8
     * @note[short] Android
     */
    const char* getLoadingString();

    /**
     * @note[short] MacOS (ARM): 0x3272bc
     * @note[short] MacOS (Intel): 0x3a2690
     * @note[short] Windows: 0x32e4c0
     * @note[short] iOS: 0x1d5ff4
     * @note[short] Android
     */
    bool init(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x327b18
     * @note[short] MacOS (Intel): 0x3a2ec0
     * @note[short] Windows: 0x32ed60
     * @note[short] iOS: 0x1d67a4
     * @note[short] Android
     */
    void loadAssets();

    /**
     * @note[short] MacOS (ARM): 0x328224
     * @note[short] MacOS (Intel): 0x3a3660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d6e3c
     * @note[short] Android
     */
    void loadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x327aac
     * @note[short] MacOS (Intel): 0x3a2e60
     * @note[short] Windows: 0x32ece0
     * @note[short] iOS: 0x1d6738
     * @note[short] Android
     */
    void updateProgress(int progress);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
