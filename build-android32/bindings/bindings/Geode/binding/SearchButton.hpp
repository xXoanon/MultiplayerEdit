#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SearchButton : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SearchButton";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SearchButton, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x54dbac
     * @note[short] MacOS (Intel): 0x62a8e0
     * @note[short] Windows: 0x312880
     * @note[short] iOS: 0x53794
     * @note[short] Android
     */
    static SearchButton* create(char const* background, char const* label, float scale, char const* icon);

    /**
     * @note[short] MacOS (ARM): 0x54fd2c
     * @note[short] MacOS (Intel): 0x62ca60
     * @note[short] Windows: 0x312950
     * @note[short] iOS: 0x55198
     * @note[short] Android
     */
    bool init(char const* background, char const* label, float scale, char const* icon);
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_icon;
};
