#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretLayer6 : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretLayer6";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer6, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3e4f04
     * @note[short] MacOS (Intel): 0x47eac0
     * @note[short] Android
     */
    static SecretLayer6* create();

    /**
     * @note[short] MacOS (ARM): 0x3e4e48
     * @note[short] MacOS (Intel): 0x47e9f0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3e4fa8
     * @note[short] MacOS (Intel): 0x47eb70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3e5ae4
     * @note[short] MacOS (Intel): 0x47f7e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3e542c
     * @note[short] MacOS (Intel): 0x47f040
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e547c
     * @note[short] MacOS (Intel): 0x47f090
     * @note[short] Android
     */
    void startGame01();
    SecretGame01Layer* m_gameLayer;
};
