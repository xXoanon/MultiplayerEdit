#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x273220
     * @note[short] MacOS (Intel): 0x2d8ba0
     * @note[short] Windows: 0x258930
     * @note[short] iOS: 0xccac
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x2732c8
     * @note[short] MacOS (Intel): 0x2d8c40
     * @note[short] Windows: 0x2589f0
     * @note[short] iOS: 0xcd48
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2735c4
     * @note[short] MacOS (Intel): 0x2d8f70
     * @note[short] Windows: 0x258d20
     * @note[short] iOS: 0xd038
     * @note[short] Android
     */
    void updateBlending(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x2732d4
     * @note[short] MacOS (Intel): 0x2d8c60
     * @note[short] Windows: 0x258a10
     * @note[short] iOS: 0xcd54
     * @note[short] Android
     */
    void updateCopyLabel(int channelID, bool copyColorLoop);

    /**
     * @note[short] MacOS (ARM): 0x27347c
     * @note[short] MacOS (Intel): 0x2d8e20
     * @note[short] Windows: 0x258bd0
     * @note[short] iOS: 0xcef4
     * @note[short] Android
     */
    void updateOpacity(float alpha);

    /**
     * @note[short] MacOS (ARM): 0x2736d0
     * @note[short] MacOS (Intel): 0x2d9080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd140
     * @note[short] Android
     */
    void updateValues(ColorAction* action);
    cocos2d::CCLabelBMFont* m_copyLabel;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    cocos2d::CCLabelBMFont* m_blendingLabel;
};
