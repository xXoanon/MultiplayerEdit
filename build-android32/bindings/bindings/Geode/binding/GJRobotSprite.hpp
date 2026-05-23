#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): 0x5072c8
     * @note[short] MacOS (Intel): 0x5dbc50
     * @note[short] Windows: 0x2a6690
     * @note[short] iOS: 0x23f284
     * @note[short] Android
     */
    static GJRobotSprite* create(int frame);

    /**
     * @note[short] MacOS (ARM): 0x50841c
     * @note[short] MacOS (Intel): 0x5dd010
     * @note[short] Windows: 0x2a7380
     * @note[short] iOS: 0x240088
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x508500
     * @note[short] MacOS (Intel): 0x5dd120
     * @note[short] Windows: 0x2a7a70
     * @note[short] iOS: 0x24016c
     * @note[short] Android
     */
    virtual void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x5080d4
     * @note[short] MacOS (Intel): 0x5dcc20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fd44
     * @note[short] Android
     */
    void hideGlow();

    /**
     * @note[short] MacOS (ARM): 0x507400
     * @note[short] MacOS (Intel): 0x5dbd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23f34c
     * @note[short] Android
     */
    bool init(int frame);

    /**
     * @note[short] MacOS (ARM): 0x507490
     * @note[short] MacOS (Intel): 0x5dbe00
     * @note[short] Windows: 0x2a6740
     * @note[short] iOS: 0x23f3d0
     * @note[short] Android: Rebinded
     */
    bool init(int frame, gd::string animName);

    /**
     * @note[short] MacOS (ARM): 0x5080c0
     * @note[short] MacOS (Intel): 0x5dcc00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fd30
     * @note[short] Android
     */
    void showGlow();

    /**
     * @note[short] MacOS (ARM): 0x5080e8
     * @note[short] MacOS (Intel): 0x5dcc40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fd58
     * @note[short] Android
     */
    void updateColor01(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x508390
     * @note[short] MacOS (Intel): 0x5dcf70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fffc
     * @note[short] Android
     */
    void updateColor02(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5080fc
     * @note[short] MacOS (Intel): 0x5dcc60
     * @note[short] Windows: 0x2a6ed0
     * @note[short] iOS: 0x23fd6c
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x5079c0
     * @note[short] MacOS (Intel): 0x5dc3a0
     * @note[short] Windows: 0x2a7480
     * @note[short] iOS: 0x23f87c
     * @note[short] Android
     */
    void updateFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5083a0
     * @note[short] MacOS (Intel): 0x5dcf90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24000c
     * @note[short] Android
     */
    void updateGlowColor(cocos2d::ccColor3B color, bool simple);
    cocos2d::CCArray* m_unkArray;
    bool m_hasExtra;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_secondColor;
    cocos2d::CCArray* m_secondArray;
    cocos2d::CCSprite* m_glowSprite;
    cocos2d::CCSprite* m_extraSprite;
    IconType m_iconType;
    int m_iconRequestID;
    CCSpritePart* m_headSprite;
    CCSpritePart* m_footSprite;
};
