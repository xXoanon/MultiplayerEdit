#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUINode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUINode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUINode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x427464
     * @note[short] MacOS (Intel): 0x4c8350
     * @note[short] Windows: 0x4ceab0
     * @note[short] iOS: 0x494cc
     * @note[short] Android
     */
    static GJUINode* create(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x42a440
     * @note[short] MacOS (Intel): 0x4cb6d0
     * @note[short] Windows: 0x4cf5f0
     * @note[short] iOS: 0x4b18c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x42a2f4
     * @note[short] MacOS (Intel): 0x4cb580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b040
     * @note[short] Android
     */
    int activeRangeTouchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x4293e4
     * @note[short] MacOS (Intel): 0x4ca470
     * @note[short] Windows: 0x4cf2c0
     * @note[short] iOS: 0x4a760
     * @note[short] Android
     */
    int activeTouchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x42a0dc
     * @note[short] MacOS (Intel): 0x4cb310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4aebc
     * @note[short] Android
     */
    float getButtonScale();

    /**
     * @note[short] MacOS (ARM): 0x42a0ec
     * @note[short] MacOS (Intel): 0x4cb330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4aecc
     * @note[short] Android
     */
    uint8_t getOpacity();

    /**
     * @note[short] MacOS (ARM): 0x429454
     * @note[short] MacOS (Intel): 0x4ca4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a7d0
     * @note[short] Android
     */
    void highlightButton(int button);

    /**
     * @note[short] MacOS (ARM): 0x4298a4
     * @note[short] MacOS (Intel): 0x4caa50
     * @note[short] Windows: 0x4ceb90
     * @note[short] iOS: 0x4aa34
     * @note[short] Android
     */
    bool init(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x427928
     * @note[short] MacOS (Intel): 0x4c8850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x498e4
     * @note[short] Android
     */
    void loadFromConfig(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x427d38
     * @note[short] MacOS (Intel): 0x4c8cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49aec
     * @note[short] Android
     */
    void resetState();

    /**
     * @note[short] MacOS (ARM): 0x42a044
     * @note[short] MacOS (Intel): 0x4cb260
     * @note[short] Windows: 0x4cee40
     * @note[short] iOS: 0x4ae24
     * @note[short] Android
     */
    void saveToConfig(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x429ff4
     * @note[short] MacOS (Intel): 0x4cb220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4add4
     * @note[short] Android
     */
    void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x42936c
     * @note[short] MacOS (Intel): 0x4ca410
     * @note[short] Windows: 0x4cf560
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleHighlight(int button, bool highlight);

    /**
     * @note[short] MacOS (ARM): 0x429dc0
     * @note[short] MacOS (Intel): 0x4caff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4ad04
     * @note[short] Android
     */
    void toggleModeB(bool modeB);

    /**
     * @note[short] MacOS (ARM): 0x42950c
     * @note[short] MacOS (Intel): 0x4ca580
     * @note[short] Windows: 0x4cf4a0
     * @note[short] iOS: 0x4a884
     * @note[short] Android
     */
    void touchEnded();

    /**
     * @note[short] MacOS (ARM): 0x429214
     * @note[short] MacOS (Intel): 0x4ca2c0
     * @note[short] Windows: 0x4cf1b0
     * @note[short] iOS: 0x4a6c8
     * @note[short] Android
     */
    int touchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x42a0fc
     * @note[short] MacOS (Intel): 0x4cb350
     * @note[short] Windows: 0x4ceef0
     * @note[short] iOS: 0x4aedc
     * @note[short] Android
     */
    void updateButtonFrames();

    /**
     * @note[short] MacOS (ARM): 0x429c00
     * @note[short] MacOS (Intel): 0x4cae00
     * @note[short] Windows: 0x4cf0b0
     * @note[short] iOS: 0x4ac18
     * @note[short] Android
     */
    void updateButtonPositions();

    /**
     * @note[short] MacOS (ARM): 0x429ec4
     * @note[short] MacOS (Intel): 0x4cb0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4ad64
     * @note[short] Android
     */
    void updateButtonScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x429db4
     * @note[short] MacOS (Intel): 0x4cafd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDeadzone(int deadzone);

    /**
     * @note[short] MacOS (ARM): 0x429cd4
     * @note[short] MacOS (Intel): 0x4caee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4acf4
     * @note[short] Android
     */
    void updateDragRadius(float radius);

    /**
     * @note[short] MacOS (ARM): 0x42a218
     * @note[short] MacOS (Intel): 0x4cb480
     * @note[short] Windows: 0x4cf040
     * @note[short] iOS: 0x4afac
     * @note[short] Android
     */
    void updateHeight(float height);

    /**
     * @note[short] MacOS (ARM): 0x42a26c
     * @note[short] MacOS (Intel): 0x4cb4f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4afb8
     * @note[short] Android
     */
    void updateRangePos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x429bb0
     * @note[short] MacOS (Intel): 0x4cada0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4abc8
     * @note[short] Android
     */
    void updateSize(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x42a1c4
     * @note[short] MacOS (Intel): 0x4cb410
     * @note[short] Windows: 0x4cefd0
     * @note[short] iOS: 0x4afa4
     * @note[short] Android
     */
    void updateWidth(float width);
    cocos2d::CCSprite* m_firstSprite;
    cocos2d::CCSprite* m_secondSprite;
    cocos2d::CCRect m_rect;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCPoint m_touchPosition;
    float m_radius;
    float m_deadzone;
    bool m_drawLines;
    bool m_modeB;
    bool m_snap;
    bool m_swiping;
    bool m_moving;
    bool m_player2;
    bool m_oneButton;
    bool m_split;
    PlayerButton m_currentButton;
};
