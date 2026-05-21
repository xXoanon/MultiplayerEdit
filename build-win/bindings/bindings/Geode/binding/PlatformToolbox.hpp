#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";

    /**
     * @note[short] MacOS (ARM): 0x423770
     * @note[short] MacOS (Intel): 0x4c3dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b81c
     * @note[short] Android
     */
    static void activateGameCenter();

    /**
     * @note[short] MacOS (ARM): 0x4241c4
     * @note[short] MacOS (Intel): 0x4c4a20
     * @note[short] Windows: 0x78790
     * @note[short] iOS: 0x16bcf4
     * @note[short] Android: Rebinded
     */
    static bool copyToClipboard(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x423ad4
     * @note[short] MacOS (Intel): 0x4c4240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bbb0
     * @note[short] Android: Rebinded
     */
    static bool doesFileExist(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x423b8c
     * @note[short] MacOS (Intel): 0x4c4330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static void downloadAndSavePromoImage(gd::string url, gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x424248
     * @note[short] MacOS (Intel): 0x4c4ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bc68
     * @note[short] Android
     */
    static void gameDidSave();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static float getDeviceRefreshRate();

    /**
     * @note[short] MacOS (ARM): 0x424314
     * @note[short] MacOS (Intel): 0x4c4c10
     * @note[short] Windows: 0x78700
     * @note[short] iOS: 0x16bc74
     * @note[short] Android
     */
    static cocos2d::CCSize getDisplaySize();

    /**
     * @note[short] MacOS (ARM): 0x4240dc
     * @note[short] MacOS (Intel): 0x4c4910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static gd::string getRawPath(char const* path);

    /**
     * @note[short] MacOS (ARM): 0x423658
     * @note[short] MacOS (Intel): 0x4c3c10
     * @note[short] Windows: 0x78510
     * @note[short] iOS: 0x16b6ec
     * @note[short] Android
     */
    static gd::string getUniqueUserID();

    /**
     * @note[short] MacOS (ARM): 0x423734
     * @note[short] MacOS (Intel): 0x4c3cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b754
     * @note[short] Android
     */
    static gd::string getUserID();

    /**
     * @note[short] MacOS (ARM): 0x4237c4
     * @note[short] MacOS (Intel): 0x4c3e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcec
     * @note[short] Android
     */
    static void hideCursor();

    /**
     * @note[short] MacOS (ARM): 0x4243d8
     * @note[short] MacOS (Intel): 0x4c4d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcb8
     * @note[short] Android
     */
    static bool isControllerConnected();

    /**
     * @note[short] MacOS (ARM): 0x423ab0
     * @note[short] MacOS (Intel): 0x4c4210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bb8c
     * @note[short] Android
     */
    static bool isHD();

    /**
     * @note[short] MacOS (ARM): 0x423774
     * @note[short] MacOS (Intel): 0x4c3dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b820
     * @note[short] Android
     */
    static bool isLocalPlayerAuthenticated();

    /**
     * @note[short] MacOS (ARM): 0x423740
     * @note[short] MacOS (Intel): 0x4c3d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b7f4
     * @note[short] Android
     */
    static bool isLowMemoryDevice();

    /**
     * @note[short] MacOS (ARM): 0x423738
     * @note[short] MacOS (Intel): 0x4c3d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b7c8
     * @note[short] Android
     */
    static bool isNetworkAvailable();

    /**
     * @note[short] MacOS (ARM): 0x42377c
     * @note[short] MacOS (Intel): 0x4c3de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b828
     * @note[short] Android
     */
    static bool isSignedInGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x423980
     * @note[short] MacOS (Intel): 0x4c40a0
     * @note[short] iOS: 0x16ba68
     * @note[short] Android: Rebinded
     */
    static void loadAndDecryptFileToString(char const* dirPath, char const* fileName, gd::string& str);

    /**
     * @note[short] MacOS (ARM): 0x42376c
     * @note[short] MacOS (Intel): 0x4c3db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b818
     * @note[short] Android
     */
    static void logEvent(char const* event);

    /**
     * @note[short] MacOS (ARM): 0x42375c
     * @note[short] MacOS (Intel): 0x4c3d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void onGameLaunch();

    /**
     * @note[short] MacOS (ARM): 0x42374c
     * @note[short] MacOS (Intel): 0x4c3d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b800
     * @note[short] Android
     */
    static void onNativePause();

    /**
     * @note[short] MacOS (ARM): 0x423750
     * @note[short] MacOS (Intel): 0x4c3d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b804
     * @note[short] Android
     */
    static void onNativeResume();

    /**
     * @note[short] MacOS (ARM): 0x423754
     * @note[short] MacOS (Intel): 0x4c3d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b808
     * @note[short] Android
     */
    static void onToggleKeyboard();

    /**
     * @note[short] MacOS (ARM): 0x4237f8
     * @note[short] MacOS (Intel): 0x4c3eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b904
     * @note[short] Android
     */
    static void openAppPage();

    /**
     * @note[short] MacOS (ARM): 0x424358
     * @note[short] MacOS (Intel): 0x4c4c70
     * @note[short] Android
     */
    static void platformShutdown();

    /**
     * @note[short] MacOS (ARM): 0x42442c
     * @note[short] MacOS (Intel): 0x4c4e00
     * @note[short] Android
     */
    static void refreshWindow();

    /**
     * @note[short] MacOS (ARM): 0x42378c
     * @note[short] MacOS (Intel): 0x4c3e10
     * @note[short] iOS: 0x16b830
     * @note[short] Android
     */
    static void reportAchievementWithID(char const* key, int percent);

    /**
     * @note[short] MacOS (ARM): 0x423748
     * @note[short] MacOS (Intel): 0x4c3d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b7fc
     * @note[short] Android
     */
    static void reportLoadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x4242cc
     * @note[short] MacOS (Intel): 0x4c4b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bc70
     * @note[short] Android
     */
    static void resizeWindow(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x4237fc
     * @note[short] MacOS (Intel): 0x4c3ec0
     * @note[short] iOS: 0x16b924
     * @note[short] Android: Rebinded
     */
    static void saveAndEncryptStringToFile(gd::string& str, char const* fileName, char const* dirPath);

    /**
     * @note[short] MacOS (ARM): 0x4237c0
     * @note[short] MacOS (Intel): 0x4c3e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b838
     * @note[short] Android
     */
    static void sendMail(char const* title, char const* content, char const* address);

    /**
     * @note[short] MacOS (ARM): 0x423760
     * @note[short] MacOS (Intel): 0x4c3d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void setBlockBackButton(bool block);

    /**
     * @note[short] MacOS (ARM): 0x423758
     * @note[short] MacOS (Intel): 0x4c3d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b80c
     * @note[short] Android
     */
    static void setKeyboardState(bool state);

    /**
     * @note[short] MacOS (ARM): 0x423764
     * @note[short] MacOS (Intel): 0x4c3da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b810
     * @note[short] Android
     */
    static bool shouldResumeSound();

    /**
     * @note[short] MacOS (ARM): 0x4237bc
     * @note[short] MacOS (Intel): 0x4c3e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b834
     * @note[short] Android
     */
    static void showAchievements();

    /**
     * @note[short] MacOS (ARM): 0x4237dc
     * @note[short] MacOS (Intel): 0x4c3e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcf0
     * @note[short] Android
     */
    static void showCursor();

    /**
     * @note[short] MacOS (ARM): 0x423784
     * @note[short] MacOS (Intel): 0x4c3df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void signInGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x423788
     * @note[short] MacOS (Intel): 0x4c3e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void signOutGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x423b90
     * @note[short] MacOS (Intel): 0x4c4340
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCSprite* spriteFromSavedFile(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x424400
     * @note[short] MacOS (Intel): 0x4c4dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleCallGLFinish(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x4243f8
     * @note[short] MacOS (Intel): 0x4c4da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleCPUSleepMode(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x424404
     * @note[short] MacOS (Intel): 0x4c4dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcc4
     * @note[short] Android
     */
    static void toggleForceTimer(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x424278
     * @note[short] MacOS (Intel): 0x4c4b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bc6c
     * @note[short] Android
     */
    static void toggleFullScreen(bool fullscreen, bool borderless, bool fix);

    /**
     * @note[short] MacOS (ARM): 0x4242c8
     * @note[short] MacOS (Intel): 0x4c4b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bda0
     * @note[short] Android
     */
    static void toggleLockCursor(bool isLocked);

    /**
     * @note[short] MacOS (ARM): 0x4243a8
     * @note[short] MacOS (Intel): 0x4c4d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcb4
     * @note[short] Android
     */
    static void toggleMouseControl(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x424408
     * @note[short] MacOS (Intel): 0x4c4de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcc8
     * @note[short] Android
     */
    static void toggleSmoothFix(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x4243fc
     * @note[short] MacOS (Intel): 0x4c4db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bcc0
     * @note[short] Android
     */
    static void toggleVerticalSync(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x4237f4
     * @note[short] MacOS (Intel): 0x4c3ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b8c4
     * @note[short] Android: Rebinded
     */
    static void tryShowRateDialog(gd::string gameName);

    /**
     * @note[short] MacOS (ARM): 0x424388
     * @note[short] MacOS (Intel): 0x4c4cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void updateMouseControl();

    /**
     * @note[short] MacOS (ARM): 0x424310
     * @note[short] MacOS (Intel): 0x4c4c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void updateWindowedSize(float width, float height);
};
