#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7f830
     * @note[short] Android: Out of line
     */
     CCPartAnimSprite();

    /**
     * @note[short] MacOS (ARM): 0x2ff0e8
     * @note[short] MacOS (Intel): 0x375770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7f70c
     * @note[short] Android: Rebinded
     */
     ~CCPartAnimSprite();

    /**
     * @note[short] MacOS (ARM): 0x2fd4f0
     * @note[short] MacOS (Intel): 0x373a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7e58c
     * @note[short] Android
     */
    static CCPartAnimSprite* createWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2feb60
     * @note[short] MacOS (Intel): 0x375280
     * @note[short] Windows: 0x46720
     * @note[short] iOS: 0x7f41c
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x2feb88
     * @note[short] MacOS (Intel): 0x3752a0
     * @note[short] Windows: 0x46740
     * @note[short] iOS: 0x7f444
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x2feb38
     * @note[short] MacOS (Intel): 0x375260
     * @note[short] Windows: 0x46700
     * @note[short] iOS: 0x7f3f4
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x2fee4c
     * @note[short] MacOS (Intel): 0x375510
     * @note[short] Windows: 0x46910
     * @note[short] iOS: 0x7f630
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2febb0
     * @note[short] MacOS (Intel): 0x3752c0
     * @note[short] Windows: 0x46760
     * @note[short] iOS: 0x7f46c
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::ccBlendFunc blendFunc);

    /**
     * @note[short] MacOS (ARM): 0x2fe710
     * @note[short] MacOS (Intel): 0x374e30
     * @note[short] Windows: 0x46130
     * @note[short] iOS: 0x7f0c0
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x2fe868
     * @note[short] MacOS (Intel): 0x374fa0
     * @note[short] Windows: 0x463a0
     * @note[short] iOS: 0x7f1ec
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x2fe880
     * @note[short] MacOS (Intel): 0x374fc0
     * @note[short] Windows: 0x463c0
     * @note[short] iOS: 0x7f204
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();

    /**
     * @note[short] MacOS (ARM): 0x2fe37c
     * @note[short] MacOS (Intel): 0x374ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void changeTextureOfID(char const* key, char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ff000
     * @note[short] MacOS (Intel): 0x3756a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int countParts();

    /**
     * @note[short] MacOS (ARM): 0x2ff01c
     * @note[short] MacOS (Intel): 0x3756c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void dirtify();

    /**
     * @note[short] MacOS (ARM): 0x2fe60c
     * @note[short] MacOS (Intel): 0x374d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7f054
     * @note[short] Android
     */
    CCSpritePart* getSpriteForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2fd5dc
     * @note[short] MacOS (Intel): 0x373b50
     * @note[short] Windows: 0x45980
     * @note[short] iOS: 0x7e618
     * @note[short] Android
     */
    bool initWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2fed60
     * @note[short] MacOS (Intel): 0x375440
     * @note[short] Windows: 0x46830
     * @note[short] iOS: 0x7f548
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2fea90
     * @note[short] MacOS (Intel): 0x3751d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7f39c
     * @note[short] Android
     */
    void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x2feae8
     * @note[short] MacOS (Intel): 0x375220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x2fdf38
     * @note[short] MacOS (Intel): 0x374670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7ec68
     * @note[short] Android
     */
    void transformSprite(SpriteDescription* description);

    /**
     * @note[short] MacOS (ARM): 0x2fe1d4
     * @note[short] MacOS (Intel): 0x374920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7eeac
     * @note[short] Android
     */
    void tweenSpriteTo(SpriteDescription* description, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2fe888
     * @note[short] MacOS (Intel): 0x374fd0
     * @note[short] Windows: 0x463d0
     * @note[short] iOS: 0x7f20c
     * @note[short] Android
     */
    void tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration);
    cocos2d::CCDictionary* m_spritePartIDs;
    cocos2d::CCSpriteFrame* m_spriteFrame;
    bool m_hasChanged;
    cocos2d::CCSize m_unkSize;
    cocos2d::CCArray* m_spriteParts;
};
