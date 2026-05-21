#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x69d8e0
     * @note[short] MacOS (Intel): 0x795660
     * @note[short] Windows: 0x6e400
     * @note[short] iOS: 0x24d0e8
     * @note[short] Android
     */
    static ObjectManager* instance();

    /**
     * @note[short] MacOS (ARM): 0x69e67c
     * @note[short] MacOS (Intel): 0x796490
     * @note[short] Windows: 0x6f1d0
     * @note[short] iOS: 0x24d8a0
     * @note[short] Android
     */
    static cocos2d::CCDictionary* replaceAllOccurencesOfString(cocos2d::CCString* target, cocos2d::CCString* replacement, cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x69d9a8
     * @note[short] MacOS (Intel): 0x795740
     * @note[short] Windows: 0x6e490
     * @note[short] iOS: 0x24d17c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x69f3c8
     * @note[short] MacOS (Intel): 0x797370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24de48
     * @note[short] Android
     */
    bool animLoaded(char const* anim);

    /**
     * @note[short] MacOS (ARM): 0x69f1c0
     * @note[short] MacOS (Intel): 0x7971a0
     * @note[short] Windows: 0x6f8a0
     * @note[short] iOS: 0x24dd5c
     * @note[short] Android
     */
    cocos2d::CCDictionary* getDefinition(char const* definitionKey);

    /**
     * @note[short] MacOS (ARM): 0x69e53c
     * @note[short] MacOS (Intel): 0x796380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24d7f8
     * @note[short] Android
     */
    cocos2d::CCDictionary* getGlobalAnimCopy(char const* anim);

    /**
     * @note[short] MacOS (ARM): 0x69d9f8
     * @note[short] MacOS (Intel): 0x7957a0
     * @note[short] Windows: 0x6e830
     * @note[short] iOS: 0x24d1cc
     * @note[short] Android
     */
    void loadCopiedAnimations();

    /**
     * @note[short] MacOS (ARM): 0x69de64
     * @note[short] MacOS (Intel): 0x795c10
     * @note[short] Windows: 0x6ed80
     * @note[short] iOS: 0x24d3e0
     * @note[short] Android
     */
    void loadCopiedSets();

    /**
     * @note[short] MacOS (ARM): 0x69d97c
     * @note[short] MacOS (Intel): 0x795710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24d150
     * @note[short] Android
     */
    void purgeObjectManager();

    /**
     * @note[short] MacOS (ARM): 0x69f2c4
     * @note[short] MacOS (Intel): 0x797280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24ddc8
     * @note[short] Android
     */
    void setLoaded(char const* objectName);

    /**
     * @note[short] MacOS (ARM): 0x69e1b0
     * @note[short] MacOS (Intel): 0x795fb0
     * @note[short] Windows: 0x6e4f0
     * @note[short] iOS: 0x24d5e8
     * @note[short] Android
     */
    void setup();
    cocos2d::CCDictionary* m_objectDefinitions;
    cocos2d::CCDictionary* m_loadedAnimations;
};
