#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OptionsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "OptionsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OptionsObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x24e6f4
     * @note[short] MacOS (Intel): 0x2b05d0
     * @note[short] Windows: 0x29e6a0
     * @note[short] iOS: 0x2e0d90
     * @note[short] Android: Rebinded
     */
    static OptionsObject* create(int id, bool enabled, gd::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x24e7f0
     * @note[short] MacOS (Intel): 0x2b06d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(int id, bool enabled, gd::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x24e82c
     * @note[short] MacOS (Intel): 0x2b0700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0e8c
     * @note[short] Android
     */
    void toggleState();
    int m_optionID;
    bool m_enabled;
    gd::string m_name;
    OptionsObjectDelegate* m_delegate;
    int m_count;
};
