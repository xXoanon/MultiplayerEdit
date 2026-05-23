#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] MacOS (ARM): 0x4495cc
     * @note[short] MacOS (Intel): 0x4ef7d0
     * @note[short] Windows: 0x65040
     * @note[short] iOS: 0x44a80
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem);

    /**
     * @note[short] MacOS (ARM): 0x4496b4
     * @note[short] MacOS (Intel): 0x4ef8a0
     * @note[short] Windows: 0x65120
     * @note[short] iOS: 0x44b64
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* parent);

    /**
     * @note[short] MacOS (ARM): 0x4481a0
     * @note[short] MacOS (Intel): 0x4ee2d0
     * @note[short] Windows: 0x64140
     * @note[short] iOS: 0x43c0c
     * @note[short] Android
     */
    static void alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize);

    /**
     * @note[short] MacOS (ARM): 0x448458
     * @note[short] MacOS (Intel): 0x4ee600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43dd4
     * @note[short] Android
     */
    static void alignItemsVertically(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x44f8a8
     * @note[short] MacOS (Intel): 0x4f67e0
     * @note[short] Windows: 0x68ac0
     * @note[short] iOS: 0x47ec8
     * @note[short] Android
     */
    static float bounceTime(float time);

    /**
     * @note[short] MacOS (ARM): 0x449b14
     * @note[short] MacOS (Intel): 0x4efd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B colorToSepia(cocos2d::ccColor3B color, float factor);

    /**
     * @note[short] MacOS (ARM): 0x448a9c
     * @note[short] MacOS (Intel): 0x4eec50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void contentScaleClipRect(cocos2d::CCRect& rect);

    /**
     * @note[short] MacOS (ARM): 0x44b1ec
     * @note[short] MacOS (Intel): 0x4f1460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static gd::string createHashString(gd::string const& str, int length);

    /**
     * @note[short] MacOS (ARM): 0x448ae0
     * @note[short] MacOS (Intel): 0x4eecb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4427c
     * @note[short] Android: Rebinded
     */
    static CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, cocos2d::CCArray* container);

    /**
     * @note[short] MacOS (ARM): 0x448c1c
     * @note[short] MacOS (Intel): 0x4eede0
     * @note[short] Windows: 0x646a0
     * @note[short] iOS: 0x443b0
     * @note[short] Android: Rebinded
     */
    static CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container);

    /**
     * @note[short] MacOS (ARM): 0x4485e8
     * @note[short] MacOS (Intel): 0x4ee7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43f64
     * @note[short] Android
     */
    static bool doWeHaveInternet();

    /**
     * @note[short] MacOS (ARM): 0x44f594
     * @note[short] MacOS (Intel): 0x4f6540
     * @note[short] Windows: 0x685a0
     * @note[short] iOS: 0x47e98
     * @note[short] Android
     */
    static gd::string easeToText(int easingType);

    /**
     * @note[short] MacOS (ARM): 0x44b6ec
     * @note[short] MacOS (Intel): 0x4f1950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t fast_rand();

    /**
     * @note[short] MacOS (ARM): 0x44b714
     * @note[short] MacOS (Intel): 0x4f1980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45ce8
     * @note[short] Android
     */
    static float fast_rand_0_1();

    /**
     * @note[short] MacOS (ARM): 0x44b750
     * @note[short] MacOS (Intel): 0x4f19c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45d20
     * @note[short] Android
     */
    static float fast_rand_minus1_1();

    /**
     * @note[short] MacOS (ARM): 0x44b6d4
     * @note[short] MacOS (Intel): 0x4f1930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45cdc
     * @note[short] Android
     */
    static void fast_srand(uint64_t seed);

    /**
     * @note[short] MacOS (ARM): 0x44b554
     * @note[short] MacOS (Intel): 0x4f17e0
     * @note[short] Windows: 0x66070
     * @note[short] iOS: 0x45bf8
     * @note[short] Android
     */
    static gd::string gen_random(int length);

    /**
     * @note[short] MacOS (ARM): 0x448044
     * @note[short] MacOS (Intel): 0x4ee170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCSequence* getDropActionWDelay(float delay, float duration, float scale, cocos2d::CCNode* target, cocos2d::SEL_CallFunc selector);

    /**
     * @note[short] MacOS (ARM): 0x448100
     * @note[short] MacOS (Intel): 0x4ee230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCSequence* getDropActionWEnd(float delay, float duration, float scale, cocos2d::CCAction* action, float actionDelay);

    /**
     * @note[short] MacOS (ARM): 0x44b498
     * @note[short] MacOS (Intel): 0x4f16a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCActionInterval* getEasedAction(cocos2d::CCActionInterval* action, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x44f990
     * @note[short] MacOS (Intel): 0x4f68a0
     * @note[short] Windows: 0x68b70
     * @note[short] iOS: 0x47f78
     * @note[short] Android
     */
    static float getEasedValue(float value, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x44b6e0
     * @note[short] MacOS (Intel): 0x4f1940
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t getfast_srand();

    /**
     * @note[short] MacOS (ARM): 0x44b518
     * @note[short] MacOS (Intel): 0x4f17a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int getInvertedEasing(int easingType);

    /**
     * @note[short] MacOS (ARM): 0x4490b8
     * @note[short] MacOS (Intel): 0x4ef270
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCDictionary* getLargestMergedIntDicts(cocos2d::CCDictionary* dict1, cocos2d::CCDictionary* dict2);

    /**
     * @note[short] MacOS (ARM): 0x449ca0
     * @note[short] MacOS (Intel): 0x4efec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44f84
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getMultipliedHSV(cocos2d::ccHSVValue const& value, float factor);

    /**
     * @note[short] MacOS (ARM): 0x448ec0
     * @note[short] MacOS (Intel): 0x4ef040
     * @note[short] Windows: 0x649a0
     * @note[short] iOS: 0x44654
     * @note[short] Android
     */
    static cocos2d::CCPoint getRelativeOffset(GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x44886c
     * @note[short] MacOS (Intel): 0x4eea40
     * @note[short] Windows: 0x64340
     * @note[short] iOS: 0x4404c
     * @note[short] Android
     */
    static gd::string getResponse(cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x44b2bc
     * @note[short] MacOS (Intel): 0x4f1520
     * @note[short] Windows: 0x65e50
     * @note[short] iOS: 0x45ae0
     * @note[short] Android
     */
    static gd::string getTimeString(int seconds, bool noSeconds);

    /**
     * @note[short] MacOS (ARM): 0x449d0c
     * @note[short] MacOS (Intel): 0x4eff60
     * @note[short] Windows: 0x65510
     * @note[short] iOS: 0x44ff0
     * @note[short] Android: Rebinded
     */
    static cocos2d::ccHSVValue hsvFromString(gd::string const& str, char const* delim);

    /**
     * @note[short] MacOS (ARM): 0x4503e8
     * @note[short] MacOS (Intel): 0x4f72e0
     * @note[short] Windows: 0x69150
     * @note[short] iOS: 0x48470
     * @note[short] Android
     */
    static gd::string intToShortString(int value);

    /**
     * @note[short] MacOS (ARM): 0x4500bc
     * @note[short] MacOS (Intel): 0x4f6fb0
     * @note[short] Windows: 0x69090
     * @note[short] iOS: 0x4838c
     * @note[short] Android
     */
    static gd::string intToString(int value);

    /**
     * @note[short] MacOS (ARM): 0x448748
     * @note[short] MacOS (Intel): 0x4ee910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool isIOS();

    /**
     * @note[short] MacOS (ARM): 0x44b544
     * @note[short] MacOS (Intel): 0x4f17d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45be8
     * @note[short] Android
     */
    static bool isRateEasing(int easingType);

    /**
     * @note[short] MacOS (ARM): 0x44910c
     * @note[short] MacOS (Intel): 0x4ef2c0
     * @note[short] Windows: 0x64ba0
     * @note[short] iOS: 0x44834
     * @note[short] Android
     */
    static void mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict);

    /**
     * @note[short] MacOS (ARM): 0x449378
     * @note[short] MacOS (Intel): 0x4ef550
     * @note[short] Windows: 0x64e00
     * @note[short] iOS: 0x4496c
     * @note[short] Android
     */
    static void mergeDictsSkipConflict(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict);

    /**
     * @note[short] MacOS (ARM): 0x450a1c
     * @note[short] MacOS (Intel): 0x4f7960
     * @note[short] Windows: 0x69660
     * @note[short] iOS: 0x488c0
     * @note[short] Android
     */
    static gd::string msToTimeString(int milliseconds, int formattingMode);

    /**
     * @note[short] MacOS (ARM): 0x449a40
     * @note[short] MacOS (Intel): 0x4efc60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44ec8
     * @note[short] Android
     */
    static cocos2d::ccColor3B multipliedColorValue(cocos2d::ccColor3B minColor, cocos2d::ccColor3B maxColor, float factor);

    /**
     * @note[short] MacOS (ARM): 0x448848
     * @note[short] MacOS (Intel): 0x4eea20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44048
     * @note[short] Android
     */
    static void openAppPage();

    /**
     * @note[short] MacOS (ARM): 0x448750
     * @note[short] MacOS (Intel): 0x4ee920
     * @note[short] Android: Rebinded
     */
    static void openRateURL(gd::string str1, gd::string str2);

    /**
     * @note[short] MacOS (ARM): 0x44efec
     * @note[short] MacOS (Intel): 0x4f5f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47908
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCParticleSystemQuad* particleFromString(gd::string const& str, cocos2d::CCParticleSystemQuad* system, bool dontUpdate);

    /**
     * @note[short] MacOS (ARM): 0x44f0d8
     * @note[short] MacOS (Intel): 0x4f6030
     * @note[short] Windows: 0x68030
     * @note[short] iOS: 0x479dc
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate);

    /**
     * @note[short] MacOS (ARM): 0x44e1b4
     * @note[short] MacOS (Intel): 0x4f4fd0
     * @note[short] Windows: 0x67570
     * @note[short] iOS: 0x46f68
     * @note[short] Android: Rebinded
     */
    static void particleStringToStruct(gd::string const& str, cocos2d::ParticleStruct& particleStruct);

    /**
     * @note[short] MacOS (ARM): 0x450b70
     * @note[short] MacOS (Intel): 0x4f7ab0
     * @note[short] Windows: 0x69790
     * @note[short] iOS: 0x48a14
     * @note[short] Android
     */
    static gd::string pointsToString(int points);

    /**
     * @note[short] MacOS (ARM): 0x448ad8
     * @note[short] MacOS (Intel): 0x4eeca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44274
     * @note[short] Android
     */
    static void postClipVisit();

    /**
     * @note[short] MacOS (ARM): 0x4489f0
     * @note[short] MacOS (Intel): 0x4eeba0
     * @note[short] Windows: 0x645f0
     * @note[short] iOS: 0x44190
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* node, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x448aa0
     * @note[short] MacOS (Intel): 0x4eec60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4423c
     * @note[short] Android
     */
    static void preVisitWithClipRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x44b798
     * @note[short] MacOS (Intel): 0x4f1a00
     * @note[short] Windows: 0x66300
     * @note[short] iOS: 0x45d64
     * @note[short] Android
     */
    static gd::string saveParticleToString(cocos2d::CCParticleSystemQuad* system);

    /**
     * @note[short] MacOS (ARM): 0x45025c
     * @note[short] MacOS (Intel): 0x4f7190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static bool saveStringToFile(gd::string const& path, gd::string const& content);

    /**
     * @note[short] MacOS (ARM): 0x44a2a4
     * @note[short] MacOS (Intel): 0x4f0480
     * @note[short] Windows: 0x65720
     * @note[short] iOS: 0x4532c
     * @note[short] Android
     */
    static gd::string stringFromHSV(cocos2d::ccHSVValue value, char const* separator);

    /**
     * @note[short] MacOS (ARM): 0x44ab30
     * @note[short] MacOS (Intel): 0x4f0df0
     * @note[short] Windows: 0x65c60
     * @note[short] iOS: 0x4572c
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCDictionary* stringSetupToDict(gd::string const& str, char const* separator);

    /**
     * @note[short] MacOS (ARM): 0x44a790
     * @note[short] MacOS (Intel): 0x4f0aa0
     * @note[short] Windows: 0x658c0
     * @note[short] iOS: 0x454f8
     * @note[short] Android: Rebinded
     */
    static void stringSetupToMap(gd::string const& str, char const* separator, gd::map<gd::string, gd::string>& setup);

    /**
     * @note[short] MacOS (ARM): 0x44b154
     * @note[short] MacOS (Intel): 0x4f13c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45a48
     * @note[short] Android
     */
    static cocos2d::ccColor3B strongColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4507bc
     * @note[short] MacOS (Intel): 0x4f7740
     * @note[short] Windows: 0x692f0
     * @note[short] iOS: 0x486ac
     * @note[short] Android
     */
    static gd::string timestampToHumanReadable(time_t timestamp);

    /**
     * @note[short] MacOS (ARM): 0x449884
     * @note[short] MacOS (Intel): 0x4efa60
     * @note[short] Windows: 0x652c0
     * @note[short] iOS: 0x44d30
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv);

    /**
     * @note[short] MacOS (ARM): 0x449868
     * @note[short] MacOS (Intel): 0x4efa30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44d14
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& color, float h, float s, float v);
};
