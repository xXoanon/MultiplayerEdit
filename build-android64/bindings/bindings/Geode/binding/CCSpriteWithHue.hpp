#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteWithHue();

    /**
     * @note[short] MacOS (ARM): 0x519668
     * @note[short] MacOS (Intel): 0x5efae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteWithHue* create(gd::string const& file);

    /**
     * @note[short] MacOS (ARM): 0x519734
     * @note[short] MacOS (Intel): 0x5efba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteWithHue* create(gd::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x519a20
     * @note[short] MacOS (Intel): 0x5efe40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3544
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x519b1c
     * @note[short] MacOS (Intel): 0x5eff20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3630
     * @note[short] Android: Rebinded
     */
    static CCSpriteWithHue* createWithSpriteFrameName(gd::string const& frameName);

    /**
     * @note[short] MacOS (ARM): 0x519814
     * @note[short] MacOS (Intel): 0x5efc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x51992c
     * @note[short] MacOS (Intel): 0x5efd70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x51a410
     * @note[short] MacOS (Intel): 0x5f08e0
     * @note[short] Windows: 0x48c90
     * @note[short] iOS: 0x1a3c30
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x519dc4
     * @note[short] MacOS (Intel): 0x5f01a0
     * @note[short] Windows: 0x48660
     * @note[short] iOS: 0x1a3860
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x519e40
     * @note[short] MacOS (Intel): 0x5f0210
     * @note[short] Windows: 0x486c0
     * @note[short] iOS: 0x1a38dc
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x519b50
     * @note[short] MacOS (Intel): 0x5eff60
     * @note[short] Windows: 0x48600
     * @note[short] iOS: 0x1a3664
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x519e50
     * @note[short] MacOS (Intel): 0x5f0230
     * @note[short] Windows: 0x486d0
     * @note[short] iOS: 0x1a38ec
     * @note[short] Android
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x51963c
     * @note[short] MacOS (Intel): 0x5efab0
     * @note[short] Windows: 0x48470
     * @note[short] iOS: 0x1a3534
     * @note[short] Android
     */
    virtual gd::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x519f94
     * @note[short] MacOS (Intel): 0x5f0370
     * @note[short] Windows: 0x48970
     * @note[short] iOS: 0x1a39f8
     * @note[short] Android
     */
    virtual const char* shaderBody();

    /**
     * @note[short] MacOS (ARM): 0x519fac
     * @note[short] MacOS (Intel): 0x5f0390
     * @note[short] Windows: 0x48980
     * @note[short] iOS: 0x1a3a04
     * @note[short] Android
     */
    virtual void updateColor();

    /**
     * @note[short] MacOS (ARM): 0x51a370
     * @note[short] MacOS (Intel): 0x5f0810
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getAlpha();

    /**
     * @note[short] MacOS (ARM): 0x51a388
     * @note[short] MacOS (Intel): 0x5f0830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getHue();

    /**
     * @note[short] MacOS (ARM): 0x519f10
     * @note[short] MacOS (Intel): 0x5f0300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3974
     * @note[short] Android
     */
    void getUniformLocations();

    /**
     * @note[short] MacOS (ARM): 0x519ba8
     * @note[short] MacOS (Intel): 0x5effc0
     * @note[short] Windows: 0x48740
     * @note[short] iOS: 0x1a36a8
     * @note[short] Android
     */
    void initShader();

    /**
     * @note[short] MacOS (ARM): 0x51a400
     * @note[short] MacOS (Intel): 0x5f08c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setCustomLuminance(float r, float g, float b);

    /**
     * @note[short] MacOS (ARM): 0x51a3e0
     * @note[short] MacOS (Intel): 0x5f0890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3c14
     * @note[short] Android
     */
    void setEvenLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x519ee0
     * @note[short] MacOS (Intel): 0x5f02b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setHue(float hue);

    /**
     * @note[short] MacOS (ARM): 0x51a390
     * @note[short] MacOS (Intel): 0x5f0840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3bd0
     * @note[short] Android
     */
    void setHueDegrees(float degrees);

    /**
     * @note[short] MacOS (ARM): 0x519ee8
     * @note[short] MacOS (Intel): 0x5f02d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3950
     * @note[short] Android
     */
    void setLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x519b94
     * @note[short] MacOS (Intel): 0x5effa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupDefaultSettings();

    /**
     * @note[short] MacOS (ARM): 0x519fd0
     * @note[short] MacOS (Intel): 0x5f03b0
     * @note[short] Windows: 0x489a0
     * @note[short] iOS: 0x1a3a28
     * @note[short] Android
     */
    void updateColorMatrix();

    /**
     * @note[short] MacOS (ARM): 0x519eb4
     * @note[short] MacOS (Intel): 0x5f0280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateHue(float unused);
    float m_hue;
    std::array<float, 3> m_luminance;
    std::array<std::array<float, 3>, 3> m_colorMatrix;
    int m_uHueLoc;
    int m_uAlphaLoc;
    int m_uLumLoc;
};
