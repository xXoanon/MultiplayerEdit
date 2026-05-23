#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SelectEventLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SelectEventLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectEventLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4123c8
     * @note[short] Android: Out of line
     */
     SelectEventLayer();

    /**
     * @note[short] MacOS (ARM): 0x4c5780
     * @note[short] MacOS (Intel): 0x577f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x407570
     * @note[short] Android: Rebinded
     */
     ~SelectEventLayer();

    /**
     * @note[short] MacOS (ARM): 0x4c553c
     * @note[short] MacOS (Intel): 0x577bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x407464
     * @note[short] Android: Rebinded
     */
    static SelectEventLayer* create(SetupEventLinkPopup* popup, gd::set<int>& eventIDs);

    /**
     * @note[short] MacOS (ARM): 0x4c7764
     * @note[short] MacOS (Intel): 0x57a600
     * @note[short] Windows: 0x2f6ec0
     * @note[short] iOS: 0x409190
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4c76ac
     * @note[short] MacOS (Intel): 0x57a530
     * @note[short] Windows: 0x4676a0
     * @note[short] iOS: 0x40914c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c7478
     * @note[short] MacOS (Intel): 0x57a320
     * @note[short] Windows: 0x467550
     * @note[short] iOS: 0x409028
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c6f20
     * @note[short] MacOS (Intel): 0x579d90
     * @note[short] Windows: 0x467760
     * @note[short] iOS: 0x408ca8
     * @note[short] Android: Rebinded
     */
    void addToggle(int id, gd::string info);

    /**
     * @note[short] MacOS (ARM): 0x4c59f0
     * @note[short] MacOS (Intel): 0x5782e0
     * @note[short] Windows: 0x4666e0
     * @note[short] iOS: 0x407640
     * @note[short] Android: Rebinded
     */
    bool init(SetupEventLinkPopup* popup, gd::set<int>& eventIDs);

    /**
     * @note[short] MacOS (ARM): 0x4c7788
     * @note[short] MacOS (Intel): 0x57a640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4091b4
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition();

    /**
     * @note[short] MacOS (ARM): 0x4c7894
     * @note[short] MacOS (Intel): 0x57a760
     * @note[short] Windows: 0x467ba0
     * @note[short] iOS: 0x4092c0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    SetupEventLinkPopup* m_eventLinkPopup;
    bool m_eventsChanged;
    int m_unk3b4;
    int m_toggleCount;
    int m_maxPage;
    gd::map<int, gd::string> m_eventInfos;
    gd::set<int> m_eventIDs;
};
