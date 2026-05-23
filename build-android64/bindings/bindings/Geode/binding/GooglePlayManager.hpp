#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3decd8
     * @note[short] MacOS (Intel): 0x477e40
     * @note[short] Windows: 0x6ac80
     * @note[short] iOS: 0x41c68
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x3ded44
     * @note[short] MacOS (Intel): 0x477eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41cc8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3ded4c
     * @note[short] MacOS (Intel): 0x477ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void googlePlaySignedIn();
    GooglePlayDelegate* m_delegate1;
    GooglePlayDelegate* m_delegate2;
};
