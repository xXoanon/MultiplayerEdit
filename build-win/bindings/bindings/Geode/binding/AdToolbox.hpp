#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AdToolbox {
public:
    static constexpr auto CLASS_NAME = "AdToolbox";

    /**
     * @note[short] MacOS (ARM): 0xb309c
     * @note[short] MacOS (Intel): 0xcb8e0
     * @note[short] Android
     */
    static void cacheInterstitial();

    /**
     * @note[short] MacOS (ARM): 0xb30ac
     * @note[short] MacOS (Intel): 0xcb910
     * @note[short] Android
     */
    static void cacheRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0xb3094
     * @note[short] MacOS (Intel): 0xcb8c0
     * @note[short] Android
     */
    static void disableBanner();

    /**
     * @note[short] MacOS (ARM): 0xb3090
     * @note[short] MacOS (Intel): 0xcb8b0
     * @note[short] Android
     */
    static void enableBanner();

    /**
     * @note[short] MacOS (ARM): 0xb308c
     * @note[short] MacOS (Intel): 0xcb8a0
     * @note[short] Android
     */
    static void enableBannerNoRefresh();

    /**
     * @note[short] MacOS (ARM): 0xb30a0
     * @note[short] MacOS (Intel): 0xcb8f0
     * @note[short] Android
     */
    static bool hasCachedInterstitial();

    /**
     * @note[short] MacOS (ARM): 0xb30b0
     * @note[short] MacOS (Intel): 0xcb920
     * @note[short] Android
     */
    static bool hasCachedRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0xb30bc
     * @note[short] MacOS (Intel): 0xcb940
     * @note[short] Android
     */
    static bool isShowingAd();

    /**
     * @note[short] MacOS (ARM): 0xb3088
     * @note[short] MacOS (Intel): 0xcb890
     * @note[short] Android
     */
    static void queueRefreshBanner();

    /**
     * @note[short] MacOS (ARM): 0xb3084
     * @note[short] MacOS (Intel): 0xcb880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8ce0
     * @note[short] Android
     */
    static void setupAds();

    /**
     * @note[short] MacOS (ARM): 0xb30b8
     * @note[short] MacOS (Intel): 0xcb930
     * @note[short] Android
     */
    static void showDebug();

    /**
     * @note[short] MacOS (ARM): 0xb3098
     * @note[short] MacOS (Intel): 0xcb8d0
     * @note[short] Android
     */
    static void showInterstitial();

    /**
     * @note[short] MacOS (ARM): 0xb30a8
     * @note[short] MacOS (Intel): 0xcb900
     * @note[short] Android
     */
    static void showRewardedVideo();
};
