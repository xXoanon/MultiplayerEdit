#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CCSpritePart : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpritePart, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x45890
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePart();

    /**
     * @note[short] MacOS (ARM): 0x2fde84
     * @note[short] MacOS (Intel): 0x3745c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7ebc0
     * @note[short] Android
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x2fdd24
     * @note[short] MacOS (Intel): 0x374440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7ead4
     * @note[short] Android
     */
    static CCSpritePart* createWithSpriteFrameName(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ff220
     * @note[short] MacOS (Intel): 0x375900
     * @note[short] Windows: 0x46aa0
     * @note[short] iOS: 0x7f788
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x2fe0bc
     * @note[short] MacOS (Intel): 0x3747f0
     * @note[short] Windows: 0x469f0
     * @note[short] iOS: 0x7edec
     * @note[short] Android: Rebinded
     */
    void frameChanged(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x2ff218
     * @note[short] MacOS (Intel): 0x3758f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool getBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2fe84c
     * @note[short] MacOS (Intel): 0x374f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideInactive();

    /**
     * @note[short] MacOS (ARM): 0x2fe844
     * @note[short] MacOS (Intel): 0x374f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void markAsNotBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2fe534
     * @note[short] MacOS (Intel): 0x374c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x2fe1cc
     * @note[short] MacOS (Intel): 0x374910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setBeingUsed(bool beingUsed);

    /**
     * @note[short] MacOS (ARM): 0x2fe548
     * @note[short] MacOS (Intel): 0x374ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void updateDisplayFrame(gd::string frame);
    bool m_isBeingUsed;
    gd::string m_spriteFrameName;
    SpritePartDelegate* m_delegate;
};
