#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeybindingsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "KeybindingsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(KeybindingsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4400d0
     * @note[short] MacOS (Intel): 0x4e50f0
     * @note[short] Windows: 0x2c0d80
     * @note[short] iOS: 0x347234
     * @note[short] Android
     */
    static KeybindingsManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x440230
     * @note[short] MacOS (Intel): 0x4e5280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3472fc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x440238
     * @note[short] MacOS (Intel): 0x4e5290
     * @note[short] Android
     */
    bool commandForKey(cocos2d::enumKeyCodes key, GJKeyGroup group, bool control, bool alt, bool shift);

    /**
     * @note[short] MacOS (ARM): 0x440250
     * @note[short] MacOS (Intel): 0x4e52b0
     * @note[short] Android
     */
    bool commandForKeyMods(cocos2d::enumKeyCodes key, GJKeyGroup group);

    /**
     * @note[short] MacOS (ARM): 0x440244
     * @note[short] MacOS (Intel): 0x4e52a0
     * @note[short] Android
     */
    bool commandForKeyNoMods(cocos2d::enumKeyCodes key, GJKeyGroup group);

    /**
     * @note[short] MacOS (ARM): 0x440478
     * @note[short] MacOS (Intel): 0x4e54f0
     * @note[short] Android
     */
    cocos2d::CCDictionary* commandToKeyForGroup(GJKeyGroup group);

    /**
     * @note[short] MacOS (ARM): 0x4406e4
     * @note[short] MacOS (Intel): 0x4e5780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3473c8
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4406a0
     * @note[short] MacOS (Intel): 0x4e5740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x347384
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x440624
     * @note[short] MacOS (Intel): 0x4e56b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x347304
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4402ac
     * @note[short] MacOS (Intel): 0x4e5310
     * @note[short] Android
     */
    GJKeyGroup groupForCommand(GJKeyCommand command);

    /**
     * @note[short] MacOS (ARM): 0x4402a4
     * @note[short] MacOS (Intel): 0x4e5300
     * @note[short] Android
     */
    cocos2d::enumKeyCodes keyForCommand(GJKeyCommand command);

    /**
     * @note[short] MacOS (ARM): 0x4402cc
     * @note[short] MacOS (Intel): 0x4e5330
     * @note[short] Android
     */
    cocos2d::CCDictionary* keyToCommandForGroup(GJKeyGroup group);
    cocos2d::CCDictionary* m_keyToCommandDict;
    cocos2d::CCDictionary* m_commandToKeyDict;
};
