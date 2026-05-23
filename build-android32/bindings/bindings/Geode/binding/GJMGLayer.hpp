#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMGLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJMGLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMGLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJMGLayer();

    /**
     * @note[short] MacOS (ARM): 0x515b64
     * @note[short] MacOS (Intel): 0x5ebc50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c800
     * @note[short] Android
     */
    static GJMGLayer* create(int index);

    /**
     * @note[short] MacOS (ARM): 0x515b44
     * @note[short] MacOS (Intel): 0x5ebc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float defaultYOffsetForBG2(int index);

    /**
     * @note[short] MacOS (ARM): 0x5165dc
     * @note[short] MacOS (Intel): 0x5ec700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d0f4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5165ac
     * @note[short] MacOS (Intel): 0x5ec6d0
     * @note[short] Windows: 0x27edf0
     * @note[short] iOS: 0x2d0e8
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x5165b8
     * @note[short] MacOS (Intel): 0x5ec6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x515c40
     * @note[short] MacOS (Intel): 0x5ebd60
     * @note[short] Windows: 0x27f000
     * @note[short] iOS: 0x2c8d0
     * @note[short] Android
     */
    bool init(int index);

    /**
     * @note[short] MacOS (ARM): 0x5160bc
     * @note[short] MacOS (Intel): 0x5ec1f0
     * @note[short] Windows: 0x27f500
     * @note[short] iOS: 0x2cc38
     * @note[short] Android
     */
    void loadGroundSprites(int count, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x516448
     * @note[short] MacOS (Intel): 0x5ec560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cf84
     * @note[short] Android
     */
    float scaleGround(float scale);

    /**
     * @note[short] MacOS (ARM): 0x516308
     * @note[short] MacOS (Intel): 0x5ec420
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x516348
     * @note[short] MacOS (Intel): 0x5ec460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ce84
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x516278
     * @note[short] MacOS (Intel): 0x5ec390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cdf4
     * @note[short] Android
     */
    void updateGroundColor(cocos2d::ccColor3B color, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5163c0
     * @note[short] MacOS (Intel): 0x5ec4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cefc
     * @note[short] Android
     */
    void updateGroundOpacity(unsigned char opacity, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x516370
     * @note[short] MacOS (Intel): 0x5ec490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ceac
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x5164c4
     * @note[short] MacOS (Intel): 0x5ec5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d000
     * @note[short] Android
     */
    void updateGroundWidth(bool useThis);

    /**
     * @note[short] MacOS (ARM): 0x5165e0
     * @note[short] MacOS (Intel): 0x5ec710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d0f8
     * @note[short] Android
     */
    void updateMG01Blend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x51661c
     * @note[short] MacOS (Intel): 0x5ec760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d134
     * @note[short] Android
     */
    void updateMG02Blend(bool blend);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    void* m_unk1b0;
    bool m_showGround;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1c4;
    bool m_cameraRotated;
    bool m_blendMG1;
    bool m_blendMG2;
    cocos2d::CCSpriteBatchNode* m_mg1BatchNode;
    cocos2d::CCSpriteBatchNode* m_mg2BatchNode;
    float m_groundScale;
    float m_ground2Offset;
};
