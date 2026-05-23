#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJActionManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJActionManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJActionManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x52f924
     * @note[short] MacOS (Intel): 0x609580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe2c0
     * @note[short] Android: Rebinded
     */
     ~GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x52f9dc
     * @note[short] MacOS (Intel): 0x609650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe314
     * @note[short] Android
     */
    static GJActionManager* create();

    /**
     * @note[short] MacOS (ARM): 0x52fa70
     * @note[short] MacOS (Intel): 0x6096e0
     * @note[short] Windows: 0x200590
     * @note[short] iOS: 0x2fe390
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x52fae4
     * @note[short] MacOS (Intel): 0x609750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCAction* getInternalAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x52faa8
     * @note[short] MacOS (Intel): 0x609720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe3c8
     * @note[short] Android
     */
    void runInternalAction(cocos2d::CCAction* action, cocos2d::CCNode* target);

    /**
     * @note[short] MacOS (ARM): 0x52fb40
     * @note[short] MacOS (Intel): 0x6097c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe454
     * @note[short] Android
     */
    void stopAllInternalActions();

    /**
     * @note[short] MacOS (ARM): 0x52faf0
     * @note[short] MacOS (Intel): 0x609770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe404
     * @note[short] Android
     */
    void stopInternalAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x52fbe0
     * @note[short] MacOS (Intel): 0x609860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe460
     * @note[short] Android
     */
    void updateInternalActions(float dt, bool remove);
    cocos2d::CCDictionary* m_internalActions;
};
