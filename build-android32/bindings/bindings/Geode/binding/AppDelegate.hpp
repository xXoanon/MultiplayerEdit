#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)

    /**
     * @note[short] MacOS (ARM): 0x57c070
     * @note[short] MacOS (Intel): 0x65c240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2693f4
     * @note[short] Android
     */
    static AppDelegate* get();

    /**
     * @note[short] MacOS (ARM): 0x57beec
     * @note[short] MacOS (Intel): 0x65c0c0
     * @note[short] Windows: 0x82a40
     * @note[short] iOS: 0x2692a0
     * @note[short] Android
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] MacOS (ARM): 0x57c164
     * @note[short] MacOS (Intel): 0x65c360
     * @note[short] Windows: 0x82df0
     * @note[short] iOS: 0x269484
     * @note[short] Android
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x57c2b0
     * @note[short] MacOS (Intel): 0x65c4c0
     * @note[short] Windows: 0x82e70
     * @note[short] iOS: 0x269548
     * @note[short] Android
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x57c080
     * @note[short] MacOS (Intel): 0x65c260
     * @note[short] Windows: 0x82d90
     * @note[short] iOS: 0x269404
     * @note[short] Android
     */
    virtual void applicationWillBecomeActive();

    /**
     * @note[short] MacOS (ARM): 0x57c094
     * @note[short] MacOS (Intel): 0x65c280
     * @note[short] Windows: 0x82de0
     * @note[short] iOS: 0x269418
     * @note[short] Android
     */
    virtual void applicationWillResignActive();

    /**
     * @note[short] MacOS (ARM): 0x57c534
     * @note[short] MacOS (Intel): 0x65c750
     * @note[short] Windows: 0x83500
     * @note[short] iOS: 0x269718
     * @note[short] Android
     */
    virtual void trySaveGame(bool force);

    /**
     * @note[short] MacOS (ARM): 0x57c610
     * @note[short] MacOS (Intel): 0x65c830
     * @note[short] Windows: 0x835e0
     * @note[short] iOS: 0x2697ec
     * @note[short] Android
     */
    virtual void willSwitchToScene(cocos2d::CCScene* scene);

    /**
     * @note[short] MacOS (ARM): 0x57c05c
     * @note[short] MacOS (Intel): 0x65c220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2693e0
     * @note[short] Android
     */
    float bgScale();

    /**
     * @note[short] MacOS (ARM): 0x57c4bc
     * @note[short] MacOS (Intel): 0x65c6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2696f0
     * @note[short] Android
     */
    void checkSound();

    /**
     * @note[short] MacOS (ARM): 0x57c65c
     * @note[short] MacOS (Intel): 0x65c880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x269838
     * @note[short] Android
     */
    void hideLoadingCircle();

    /**
     * @note[short] MacOS (ARM): 0x57c074
     * @note[short] MacOS (Intel): 0x65c250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2693f8
     * @note[short] Android
     */
    void loadingIsFinished();

    /**
     * @note[short] MacOS (ARM): 0x57c438
     * @note[short] MacOS (Intel): 0x65c660
     * @note[short] Windows: 0x833c0
     * @note[short] iOS: 0x26967c
     * @note[short] Android
     */
    bool musicTest();

    /**
     * @note[short] MacOS (ARM): 0x57c0fc
     * @note[short] MacOS (Intel): 0x65c2f0
     * @note[short] Windows: 0x83040
     * @note[short] iOS: 0x26941c
     * @note[short] Android
     */
    void pauseGame();

    /**
     * @note[short] MacOS (ARM): 0x57c25c
     * @note[short] MacOS (Intel): 0x65c460
     * @note[short] Windows: 0x83120
     * @note[short] iOS: 0x2694f0
     * @note[short] Android
     */
    void pauseSound();

    /**
     * @note[short] MacOS (ARM): 0x57be38
     * @note[short] MacOS (Intel): 0x65bff0
     * @note[short] Windows: 0x825b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void platformShutdown();

    /**
     * @note[short] MacOS (ARM): 0x57c39c
     * @note[short] MacOS (Intel): 0x65c5b0
     * @note[short] Windows: 0x832c0
     * @note[short] iOS: 0x269630
     * @note[short] Android
     */
    void resumeSound();

    /**
     * @note[short] MacOS (ARM): 0x57c398
     * @note[short] MacOS (Intel): 0x65c5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setIdleTimerDisabled(bool disabled);

    /**
     * @note[short] MacOS (ARM): 0x57be3c
     * @note[short] MacOS (Intel): 0x65c000
     * @note[short] Windows: 0x825d0
     * @note[short] iOS: 0x2691b4
     * @note[short] Android
     */
    void setupGLView();

    /**
     * @note[short] MacOS (ARM): 0x57c658
     * @note[short] MacOS (Intel): 0x65c870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x269834
     * @note[short] Android
     */
    void showLoadingCircle(bool unk1, bool unk2, bool unk3);
    bool m_glViewSetup;
    bool m_gamePaused;
    cocos2d::CCScene* m_runningScene;
    bool m_loadingFinished;
    bool m_unk0e9;
    bool m_ios;
    bool m_unk0eb;
    bool m_unk0ec;
    bool m_needsSafeArea;
    float m_saveTime;
};
