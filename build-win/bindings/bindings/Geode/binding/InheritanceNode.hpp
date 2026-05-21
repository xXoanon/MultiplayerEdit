#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class InheritanceNode : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "InheritanceNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(InheritanceNode, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     InheritanceNode();

    /**
     * @note[short] MacOS (ARM): 0x2737d0
     * @note[short] MacOS (Intel): 0x2d9170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd240
     * @note[short] Android
     */
    static InheritanceNode* create(int colorID, InheritanceNode* node);

    /**
     * @note[short] MacOS (ARM): 0x273848
     * @note[short] MacOS (Intel): 0x2d91f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int colorID, InheritanceNode* node);
    int m_colorID;
    InheritanceNode* m_inheritanceNode;
    ColorAction* m_colorAction;
    bool m_unk050;
    bool m_unk051;
};
