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

class ParentalOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ParentalOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParentalOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6aa458
     * @note[short] MacOS (Intel): 0x7a31e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf2858
     * @note[short] Android: Rebinded
     */
     ~ParentalOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6a6150
     * @note[short] MacOS (Intel): 0x79e980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xef9c8
     * @note[short] Android
     */
    static ParentalOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6aa6c0
     * @note[short] MacOS (Intel): 0x7a3560
     * @note[short] Windows: 0x37b590
     * @note[short] iOS: 0xf2908
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6abe10
     * @note[short] MacOS (Intel): 0x7a4d70
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0xf38d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6aaa98
     * @note[short] MacOS (Intel): 0x7a3970
     * @note[short] Windows: 0x37b9e0
     * @note[short] iOS: 0xf2cdc
     * @note[short] Android
     */
    void addToggle(char const* label, char const* variable, char const* info);

    /**
     * @note[short] MacOS (ARM): 0x6abc80
     * @note[short] MacOS (Intel): 0x7a4c10
     * @note[short] Windows: 0x2c0650
     * @note[short] iOS: 0xf3850
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6ab048
     * @note[short] MacOS (Intel): 0x7a3f70
     * @note[short] Windows: 0x2c08f0
     * @note[short] iOS: 0xf30d0
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6ab788
     * @note[short] MacOS (Intel): 0x7a4720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf35ac
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6aba7c
     * @note[short] MacOS (Intel): 0x7a4a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] MacOS (ARM): 0x6ab548
     * @note[short] MacOS (Intel): 0x7a44e0
     * @note[short] Windows: 0x37bfe0
     * @note[short] iOS: 0xf343c
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6abde8
     * @note[short] MacOS (Intel): 0x7a4d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6ab458
     * @note[short] MacOS (Intel): 0x7a43e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf334c
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x6abdc0
     * @note[short] MacOS (Intel): 0x7a4d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x6ab8b8
     * @note[short] MacOS (Intel): 0x7a4840
     * @note[short] Windows: 0x37be50
     * @note[short] iOS: 0xf3658
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x6aaff4
     * @note[short] MacOS (Intel): 0x7a3f00
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0xf307c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6abaa4
     * @note[short] MacOS (Intel): 0x7a4a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf374c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ab030
     * @note[short] MacOS (Intel): 0x7a3f30
     * @note[short] Windows: 0x2c08d0
     * @note[short] iOS: 0xf30b8
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ab03c
     * @note[short] MacOS (Intel): 0x7a3f50
     * @note[short] Windows: 0x2c08e0
     * @note[short] iOS: 0xf30c4
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ab720
     * @note[short] MacOS (Intel): 0x7a46d0
     * @note[short] Windows: 0x37c180
     * @note[short] iOS: 0xf3544
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6abd98
     * @note[short] MacOS (Intel): 0x7a4d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);
    int m_page;
    int m_toggleCount;
    int m_maxPage;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
};
