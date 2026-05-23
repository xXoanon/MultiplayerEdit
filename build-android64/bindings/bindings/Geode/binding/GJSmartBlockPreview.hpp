#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SmartPrefabResult.hpp"

class GJSmartBlockPreview : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreview";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreview, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x39b134
     * @note[short] MacOS (Intel): 0x4287f0
     * @note[short] Windows: 0x2b59d0
     * @note[short] iOS: 0x888c
     * @note[short] Android: Rebinded
     */
    static GJSmartBlockPreview* create(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x39becc
     * @note[short] MacOS (Intel): 0x429530
     * @note[short] Windows: 0x2b6770
     * @note[short] iOS: 0x93e4
     * @note[short] Android
     */
    void addChance(int count, int total);

    /**
     * @note[short] MacOS (ARM): 0x39bdf4
     * @note[short] MacOS (Intel): 0x429450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9340
     * @note[short] Android
     */
    void addCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x39bc14
     * @note[short] MacOS (Intel): 0x429280
     * @note[short] Windows: 0x2b65f0
     * @note[short] iOS: 0x9164
     * @note[short] Android: Rebinded
     */
    void addPreview(gd::string key, gd::string data, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x39b5f0
     * @note[short] MacOS (Intel): 0x428c70
     * @note[short] Windows: 0x2b5da0
     * @note[short] iOS: 0x8c9c
     * @note[short] Android
     */
    cocos2d::CCArray* addTemplateGuide(SmartPrefabResult result, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x39b2e4
     * @note[short] MacOS (Intel): 0x428970
     * @note[short] Windows: 0x2b5b10
     * @note[short] iOS: 0x89ec
     * @note[short] Android: Rebinded
     */
    void addTemplateGuide(gd::string key, int type);

    /**
     * @note[short] MacOS (ARM): 0x39bda0
     * @note[short] MacOS (Intel): 0x429400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x92f0
     * @note[short] Android
     */
    void createInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x39b270
     * @note[short] MacOS (Intel): 0x428900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8978
     * @note[short] Android: Rebinded
     */
    bool init(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x39c088
     * @note[short] MacOS (Intel): 0x4296f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9550
     * @note[short] Android
     */
    void toggleSelectItem(bool selected);
    gd::string m_prefabKey;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_selectSprite;
    bool m_selected;
};
