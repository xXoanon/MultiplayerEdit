#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] MacOS (ARM): 0x457004
     * @note[short] MacOS (Intel): 0x4fe9a0
     * @note[short] Windows: 0x329040
     * @note[short] iOS: 0x1a82f4
     * @note[short] Android
     */
    static int artistForAudio(int id);

    /**
     * @note[short] MacOS (ARM): 0x459d54
     * @note[short] MacOS (Intel): 0x501e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a9400
     * @note[short] Android: Rebinded
     */
    static gd::string base64DecodeString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x459d20
     * @note[short] MacOS (Intel): 0x501e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a93cc
     * @note[short] Android: Rebinded
     */
    static gd::string base64EncodeString(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x459d88
     * @note[short] MacOS (Intel): 0x501ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a9434
     * @note[short] Android
     */
    static cocos2d::CCDictionary* createStarPackDict();

    /**
     * @note[short] MacOS (ARM): 0x457fac
     * @note[short] MacOS (Intel): 0x4ffcf0
     * @note[short] Windows: 0x32b150
     * @note[short] iOS: 0x1a83cc
     * @note[short] Android
     */
    static gd::string fbURLForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x458304
     * @note[short] MacOS (Intel): 0x500070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int getAudioBPM(int id);

    /**
     * @note[short] MacOS (ARM): 0x456978
     * @note[short] MacOS (Intel): 0x4fe430
     * @note[short] Windows: 0x328470
     * @note[short] iOS: 0x1a82c8
     * @note[short] Android
     */
    static gd::string getAudioFileName(int id);

    /**
     * @note[short] MacOS (ARM): 0x458324
     * @note[short] MacOS (Intel): 0x500090
     * @note[short] Windows: 0x32b650
     * @note[short] iOS: 0x1a83f8
     * @note[short] Android
     */
    static gd::string getAudioString(int id);

    /**
     * @note[short] MacOS (ARM): 0x456228
     * @note[short] MacOS (Intel): 0x4fde70
     * @note[short] Windows: 0x3278f0
     * @note[short] iOS: 0x1a8298
     * @note[short] Android
     */
    static gd::string getAudioTitle(int id);

    /**
     * @note[short] MacOS (ARM): 0x459850
     * @note[short] MacOS (Intel): 0x501690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool getLastGameplayReversed();

    /**
     * @note[short] MacOS (ARM): 0x45985c
     * @note[short] MacOS (Intel): 0x5016a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a901c
     * @note[short] Android
     */
    static bool getLastGameplayRotated();

    /**
     * @note[short] MacOS (ARM): 0x459844
     * @note[short] MacOS (Intel): 0x501680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a9010
     * @note[short] Android
     */
    static float getLastTimewarp();

    /**
     * @note[short] MacOS (ARM): 0x4544b0
     * @note[short] MacOS (Intel): 0x4fb910
     * @note[short] Windows: 0x325040
     * @note[short] iOS: 0x1a6cf0
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int id, bool noString);

    /**
     * @note[short] MacOS (ARM): 0x4540fc
     * @note[short] MacOS (Intel): 0x4fb5d0
     * @note[short] Windows: 0x324f00
     * @note[short] iOS: 0x1a6c64
     * @note[short] Android
     */
    static gd::unordered_set<int> getLevelList();

    /**
     * @note[short] MacOS (ARM): 0x459868
     * @note[short] MacOS (Intel): 0x5016b0
     * @note[short] Windows: 0x32d200
     * @note[short] iOS: 0x1a9028
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x45a1f8
     * @note[short] MacOS (Intel): 0x502310
     * @note[short] Windows: 0x32d5e0
     * @note[short] iOS: 0x1a96b0
     * @note[short] Android
     */
    static void moveTriggerObjectsToArray(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, int index);

    /**
     * @note[short] MacOS (ARM): 0x457028
     * @note[short] MacOS (Intel): 0x4fe9c0
     * @note[short] Windows: 0x329110
     * @note[short] iOS: 0x1a8318
     * @note[short] Android
     */
    static gd::string nameForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x4578d4
     * @note[short] MacOS (Intel): 0x4ff640
     * @note[short] Windows: 0x32a730
     * @note[short] iOS: 0x1a8374
     * @note[short] Android
     */
    static gd::string ngURLForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x458920
     * @note[short] MacOS (Intel): 0x5006b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float offsetBPMForTrack(int id);

    /**
     * @note[short] MacOS (ARM): 0x45934c
     * @note[short] MacOS (Intel): 0x501080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a8b1c
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTime(float time, cocos2d::CCArray* objects, int speed, bool platformer, int& rotateChannel);

    /**
     * @note[short] MacOS (ARM): 0x45935c
     * @note[short] MacOS (Intel): 0x5010b0
     * @note[short] Windows: 0x32cba0
     * @note[short] iOS: 0x1a8b2c
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTimeInternal(float time, cocos2d::CCArray* objects, int speed, bool platformer, bool ignoreMinorAxis, bool ignoreWarp, int& rotateChannel, int unused);

    /**
     * @note[short] MacOS (ARM): 0x45a2b0
     * @note[short] MacOS (Intel): 0x5023c0
     * @note[short] Windows: 0x32d6b0
     * @note[short] iOS: 0x1a9768
     * @note[short] Android
     */
    static void sortChannelOrderObjects(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, bool moveObjects);

    /**
     * @note[short] MacOS (ARM): 0x45a578
     * @note[short] MacOS (Intel): 0x5026a0
     * @note[short] Windows: 0x32d930
     * @note[short] iOS: 0x1a99dc
     * @note[short] Android
     */
    static void sortSpeedObjects(cocos2d::CCArray* objects, GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x45896c
     * @note[short] MacOS (Intel): 0x500700
     * @note[short] Windows: 0x32c1c0
     * @note[short] iOS: 0x1a8424
     * @note[short] Android
     */
    static float timeForPos(cocos2d::CCPoint position, cocos2d::CCArray* objects, int speed, int order, int channel, bool songTriggers, bool platformer, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] MacOS (ARM): 0x4540f8
     * @note[short] MacOS (Intel): 0x4fb5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleDebugLogging(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x457274
     * @note[short] MacOS (Intel): 0x4feb80
     * @note[short] Windows: 0x329410
     * @note[short] iOS: 0x1a8344
     * @note[short] Android
     */
    static gd::string urlForAudio(int id);

    /**
     * @note[short] MacOS (ARM): 0x458940
     * @note[short] MacOS (Intel): 0x5006d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float valueForSpeedMod(int speed);

    /**
     * @note[short] MacOS (ARM): 0x459b70
     * @note[short] MacOS (Intel): 0x501cd0
     * @note[short] Windows: 0x32d3c0
     * @note[short] iOS: 0x1a92c8
     * @note[short] Android: Rebinded
     */
    static bool verifyLevelIntegrity(gd::string str, int id);

    /**
     * @note[short] MacOS (ARM): 0x457c18
     * @note[short] MacOS (Intel): 0x4ff940
     * @note[short] Windows: 0x32abd0
     * @note[short] iOS: 0x1a83a0
     * @note[short] Android
     */
    static gd::string ytURLForArtist(int id);
};
