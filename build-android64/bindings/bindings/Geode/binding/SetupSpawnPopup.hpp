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

class SetupSpawnPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x22fa64
     * @note[short] MacOS (Intel): 0x28f200
     * @note[short] Windows: 0x45df80
     * @note[short] iOS: 0xf79e4
     * @note[short] Android
     */
    static SetupSpawnPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2311b0
     * @note[short] MacOS (Intel): 0x290c60
     * @note[short] Windows: 0x4244b0
     * @note[short] iOS: 0xf8c78
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x230f7c
     * @note[short] MacOS (Intel): 0x290a20
     * @note[short] Windows: 0x45eeb0
     * @note[short] iOS: 0xf8ac8
     * @note[short] Android
     */
    void addRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x22fbf8
     * @note[short] MacOS (Intel): 0x28f440
     * @note[short] Windows: 0x45e0c0
     * @note[short] iOS: 0xf7acc
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2306fc
     * @note[short] MacOS (Intel): 0x290100
     * @note[short] Windows: 0x45ee50
     * @note[short] iOS: 0xf84c8
     * @note[short] Android
     */
    void onAddRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23074c
     * @note[short] MacOS (Intel): 0x290150
     * @note[short] Windows: 0x45eff0
     * @note[short] iOS: 0xf8524
     * @note[short] Android
     */
    void onDeleteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x230834
     * @note[short] MacOS (Intel): 0x290250
     * @note[short] Windows: 0x45f190
     * @note[short] iOS: 0xf85d0
     * @note[short] Android
     */
    void onPasteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2310b8
     * @note[short] MacOS (Intel): 0x290b60
     * @note[short] Windows: 0x45fa50
     * @note[short] iOS: 0xf8bb8
     * @note[short] Android
     */
    void onSelectRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x231060
     * @note[short] MacOS (Intel): 0x290b10
     * @note[short] Windows: 0x45fb20
     * @note[short] iOS: 0xf8b60
     * @note[short] Android
     */
    void queueUpdateButtons();

    /**
     * @note[short] MacOS (ARM): 0x230874
     * @note[short] MacOS (Intel): 0x2902a0
     * @note[short] Windows: 0x45f230
     * @note[short] iOS: 0xf8610
     * @note[short] Android
     */
    void updateRemapButtons(float dt);
    bool m_isBusy;
    cocos2d::CCArray* m_remapButtons;
    gd::vector<int> m_remapGroups;
    int m_remapOriginalID;
    int m_remapNewID;
};
