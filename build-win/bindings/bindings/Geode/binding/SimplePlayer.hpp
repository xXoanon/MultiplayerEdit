#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimplePlayer : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimplePlayer, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SimplePlayer();

    /**
     * @note[short] MacOS (ARM): 0x2f9c80
     * @note[short] MacOS (Intel): 0x36fea0
     * @note[short] Windows: 0x2791e0
     * @note[short] iOS: 0x306f8c
     * @note[short] Android: Rebinded
     */
     ~SimplePlayer();

    /**
     * @note[short] MacOS (ARM): 0x2f4d84
     * @note[short] MacOS (Intel): 0x36ac90
     * @note[short] Windows: 0x2793a0
     * @note[short] iOS: 0x3031d8
     * @note[short] Android
     */
    static SimplePlayer* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x2fa990
     * @note[short] MacOS (Intel): 0x370ce0
     * @note[short] Windows: 0x27a7f0
     * @note[short] iOS: 0x307874
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2fa5cc
     * @note[short] MacOS (Intel): 0x370920
     * @note[short] Windows: 0x279c00
     * @note[short] iOS: 0x3074c4
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2fa3a0
     * @note[short] MacOS (Intel): 0x370710
     * @note[short] Android
     */
    void asyncLoadIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f4e40
     * @note[short] MacOS (Intel): 0x36ad50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303288
     * @note[short] Android
     */
    void createRobotSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2f4e98
     * @note[short] MacOS (Intel): 0x36ada0
     * @note[short] Windows: 0x279b70
     * @note[short] iOS: 0x3032e0
     * @note[short] Android
     */
    void createSpiderSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2f8cb8
     * @note[short] MacOS (Intel): 0x36ee20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3064ac
     * @note[short] Android
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableGlowOutline();

    /**
     * @note[short] MacOS (ARM): 0x2f8c98
     * @note[short] MacOS (Intel): 0x36edf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30648c
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2fa4b8
     * @note[short] MacOS (Intel): 0x370820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x2fa6b8
     * @note[short] MacOS (Intel): 0x370a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3075a4
     * @note[short] Android
     */
    void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x2fa57c
     * @note[short] MacOS (Intel): 0x3708d0
     * @note[short] Android
     */
    void iconFinishedLoading(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f9db0
     * @note[short] MacOS (Intel): 0x370020
     * @note[short] Windows: 0x279490
     * @note[short] iOS: 0x307008
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x2f8c50
     * @note[short] MacOS (Intel): 0x36edb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setColors(cocos2d::ccColor3B const& color1, cocos2d::ccColor3B const& color2);

    /**
     * @note[short] MacOS (ARM): 0x2fa76c
     * @note[short] MacOS (Intel): 0x370ab0
     * @note[short] Windows: 0x27a5c0
     * @note[short] iOS: 0x307658
     * @note[short] Android
     */
    void setFrames(char const* firstFrame, char const* secondFrame, char const* ufoFrame, char const* glowFrame, char const* extraFrame);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setGlowOutline(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2fa62c
     * @note[short] MacOS (Intel): 0x370980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x307524
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2fa65c
     * @note[short] MacOS (Intel): 0x3709b0
     * @note[short] Windows: 0x279c30
     * @note[short] iOS: 0x307554
     * @note[short] Android
     */
    void tryEnableCustomGlowColor(int id);

    /**
     * @note[short] MacOS (ARM): 0x2f877c
     * @note[short] MacOS (Intel): 0x36e870
     * @note[short] Windows: 0x279cd0
     * @note[short] iOS: 0x306054
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x2f5050
     * @note[short] MacOS (Intel): 0x36af50
     * @note[short] Windows: 0x27a090
     * @note[short] iOS: 0x303498
     * @note[short] Android
     */
    void updatePlayerFrame(int id, IconType type);
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    int m_iconRequestID;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_iconLoaded;
};
