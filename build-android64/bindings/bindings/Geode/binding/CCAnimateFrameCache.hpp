#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimateFrameCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCAnimateFrameCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimateFrameCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCAnimateFrameCache* get();

    /**
     * @note[short] MacOS (ARM): 0x4b90fc
     * @note[short] MacOS (Intel): 0x56add0
     * @note[short] Windows: 0x414c0
     * @note[short] iOS: 0x1b0274
     * @note[short] Android
     */
    static CCAnimateFrameCache* sharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4b9300
     * @note[short] MacOS (Intel): 0x56b010
     * @note[short] Android
     */
    void addCustomSpriteFramesWithFile(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4ba54c
     * @note[short] MacOS (Intel): 0x56c330
     * @note[short] Windows: 0x416e0
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(DS_Dictionary* dict, char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4b9ea0
     * @note[short] MacOS (Intel): 0x56bc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0390
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(cocos2d::CCDictionary* dict, char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4ba2f0
     * @note[short] MacOS (Intel): 0x56c0d0
     * @note[short] Windows: 0x41550
     * @note[short] iOS: 0x1b0588
     * @note[short] Android
     */
    cocos2d::CCDictionary* addSpriteFramesWithFile(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4b9190
     * @note[short] MacOS (Intel): 0x56ae70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b02e0
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x4b91d4
     * @note[short] MacOS (Intel): 0x56aec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void purgeSharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4baca0
     * @note[short] MacOS (Intel): 0x56caa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b06b8
     * @note[short] Android
     */
    void removeSpriteFrames();

    /**
     * @note[short] MacOS (ARM): 0x4bacd0
     * @note[short] MacOS (Intel): 0x56cad0
     * @note[short] Windows: 0x41cb0
     * @note[short] iOS: 0x1b06e8
     * @note[short] Android
     */
    cocos2d::CCArray* spriteFrameByName(char const* name);
    cocos2d::CCDictionary* m_animateFrames;
    cocos2d::CCDictionary* m_unk040;
    cocos2d::CCDictionary* m_animateDescriptions;
};
