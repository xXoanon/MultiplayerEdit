#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x5148fc
     * @note[short] MacOS (Intel): 0x5ea980
     * @note[short] Windows: 0x27e1a0
     * @note[short] iOS: 0x2b988
     * @note[short] Android
     */
    static GJGroundLayer* create(int groundID, int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5159fc
     * @note[short] MacOS (Intel): 0x5ebab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7b4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5157f0
     * @note[short] MacOS (Intel): 0x5eb8d0
     * @note[short] Windows: 0x27edf0
     * @note[short] iOS: 0x2c64c
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x5157fc
     * @note[short] MacOS (Intel): 0x5eb8e0
     * @note[short] Windows: 0x27ee00
     * @note[short] iOS: 0x2c658
     * @note[short] Android
     */
    virtual void fadeInGround(float duration);

    /**
     * @note[short] MacOS (ARM): 0x5159d0
     * @note[short] MacOS (Intel): 0x5eba80
     * @note[short] Windows: 0x27eff0
     * @note[short] iOS: 0x2c7ac
     * @note[short] Android
     */
    virtual void fadeOutGround(float duration);

    /**
     * @note[short] MacOS (ARM): 0x514eec
     * @note[short] MacOS (Intel): 0x5eaf70
     * @note[short] Windows: 0x27ea50
     * @note[short] iOS: 0x2be6c
     * @note[short] Android
     */
    void createLine(int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5159d8
     * @note[short] MacOS (Intel): 0x5eba90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x51587c
     * @note[short] MacOS (Intel): 0x5eb950
     * @note[short] Windows: 0x27edf0
     * @note[short] iOS: 0x2c6d8
     * @note[short] Android
     */
    void fadeInFinished();

    /**
     * @note[short] MacOS (ARM): 0x515a48
     * @note[short] MacOS (Intel): 0x5ebb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getGroundY();

    /**
     * @note[short] MacOS (ARM): 0x515888
     * @note[short] MacOS (Intel): 0x5eb960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideShadows();

    /**
     * @note[short] MacOS (ARM): 0x5149e0
     * @note[short] MacOS (Intel): 0x5eaa90
     * @note[short] Windows: 0x27e220
     * @note[short] iOS: 0x2ba0c
     * @note[short] Android
     */
    bool init(int groundID, int lineType);

    /**
     * @note[short] MacOS (ARM): 0x51508c
     * @note[short] MacOS (Intel): 0x5eb130
     * @note[short] Windows: 0x27e790
     * @note[short] iOS: 0x2c008
     * @note[short] Android
     */
    void loadGroundSprites(int count, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x515a00
     * @note[short] MacOS (Intel): 0x5ebac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7b8
     * @note[short] Android
     */
    void positionGround(float y);

    /**
     * @note[short] MacOS (ARM): 0x5154c4
     * @note[short] MacOS (Intel): 0x5eb560
     * @note[short] Windows: 0x27ec40
     * @note[short] iOS: 0x2c390
     * @note[short] Android
     */
    float scaleGround(float scale);

    /**
     * @note[short] MacOS (ARM): 0x515388
     * @note[short] MacOS (Intel): 0x5eb410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c260
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5153c8
     * @note[short] MacOS (Intel): 0x5eb450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c294
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x515308
     * @note[short] MacOS (Intel): 0x5eb390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c1e0
     * @note[short] Android
     */
    void updateGround01Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x515440
     * @note[short] MacOS (Intel): 0x5eb4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c30c
     * @note[short] Android
     */
    void updateGround02Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5153f0
     * @note[short] MacOS (Intel): 0x5eb480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c2bc
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x5155b8
     * @note[short] MacOS (Intel): 0x5eb670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c414
     * @note[short] Android
     */
    void updateGroundWidth(bool useThis);

    /**
     * @note[short] MacOS (ARM): 0x5157b4
     * @note[short] MacOS (Intel): 0x5eb880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c610
     * @note[short] Android
     */
    void updateLineBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x515720
     * @note[short] MacOS (Intel): 0x5eb7f0
     * @note[short] Windows: 0x27ee80
     * @note[short] iOS: 0x2c57c
     * @note[short] Android
     */
    void updateShadows();

    /**
     * @note[short] MacOS (ARM): 0x515908
     * @note[short] MacOS (Intel): 0x5eb9c0
     * @note[short] Windows: 0x27ef20
     * @note[short] iOS: 0x2c6e4
     * @note[short] Android
     */
    void updateShadowXPos(float leftX, float rightX);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    cocos2d::CCSprite* m_lineSprite;
    bool m_showGround;
    bool m_blendLine;
    float m_ground1Offset;
    int m_lineType;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1cc;
    bool m_cameraRotated;
};
