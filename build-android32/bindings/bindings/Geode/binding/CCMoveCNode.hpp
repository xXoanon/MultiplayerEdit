#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMoveCNode : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCMoveCNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMoveCNode, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCMoveCNode();

    /**
     * @note[short] MacOS (ARM): 0x27d3e4
     * @note[short] MacOS (Intel): 0x2e47d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12900
     * @note[short] Android
     */
    static CCMoveCNode* create();

    /**
     * @note[short] MacOS (ARM): 0x285fc4
     * @note[short] MacOS (Intel): 0x2efa80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x285fcc
     * @note[short] MacOS (Intel): 0x2efa90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reset();
    double m_unk038;
    double m_unk040;
    double m_unk048;
    void* m_unk050;
    double m_unk058;
    double m_unk060;
    double m_unk068;
    bool m_unk070;
    bool m_unk071;
    int m_unk074;
    bool m_unk078;
    int m_unk07c;
    double m_unk080;
    double m_unk088;
    double m_unk090;
    double m_unk098;
    double m_unk0a0;
    double m_unk0a8;
    double m_unk0b0;
    int m_unk0b8;
    double m_unk0c0;
    GroupCommandObject2* m_groupObject;
    bool m_unk0d0;
    bool m_unk0d1;
    gd::vector<GroupCommandObject2*> m_groupObjects;
};
