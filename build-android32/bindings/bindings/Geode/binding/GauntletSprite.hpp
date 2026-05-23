#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSprite();

    /**
     * @note[short] MacOS (ARM): 0x31a5a8
     * @note[short] MacOS (Intel): 0x394510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2339e0
     * @note[short] Android
     */
    static GauntletSprite* create(GauntletType type, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x31afb8
     * @note[short] MacOS (Intel): 0x394e20
     * @note[short] Windows: 0x1f84f0
     * @note[short] iOS: 0x23404c
     * @note[short] Android
     */
    void addLockedSprite();

    /**
     * @note[short] MacOS (ARM): 0x31aebc
     * @note[short] MacOS (Intel): 0x394d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x233f64
     * @note[short] Android
     */
    void addNormalSprite();

    /**
     * @note[short] MacOS (ARM): 0x31b284
     * @note[short] MacOS (Intel): 0x3950c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x31ae28
     * @note[short] MacOS (Intel): 0x394cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x233ee8
     * @note[short] Android
     */
    bool init(GauntletType type, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x31b264
     * @note[short] MacOS (Intel): 0x395090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23424c
     * @note[short] Android
     */
    float luminanceForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x31ad54
     * @note[short] MacOS (Intel): 0x394bf0
     * @note[short] Windows: 0x1f87f0
     * @note[short] iOS: 0x233e9c
     * @note[short] Android
     */
    void toggleLockedSprite(bool locked);
    GauntletType m_gauntletType;
};
