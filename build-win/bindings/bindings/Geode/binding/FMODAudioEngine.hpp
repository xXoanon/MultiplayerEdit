#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>
#include "FMODAudioState.hpp"
#include "FMODSoundState.hpp"
#include "FMODMusic.hpp"
#include "FMODSound.hpp"
#include "FMODQueuedEffect.hpp"
#include "FMODQueuedMusic.hpp"
#include "FMODSoundTween.hpp"

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x53100
     * @note[short] iOS: 0x13ed80
     * @note[short] Android: Out of line
     */
     FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): 0x35b4f4
     * @note[short] MacOS (Intel): 0x3dc5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x137fd0
     * @note[short] Android: Rebinded
     */
     ~FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FMODAudioEngine* get();

    /**
     * @note[short] MacOS (ARM): 0x360cc8
     * @note[short] MacOS (Intel): 0x3e35b0
     * @note[short] Windows: 0x569e0
     * @note[short] iOS: 0x13b418
     * @note[short] Android
     */
    static float pitchForIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x35c524
     * @note[short] MacOS (Intel): 0x3ddab0
     * @note[short] Windows: 0x54cf0
     * @note[short] iOS: 0x138a00
     * @note[short] Android
     */
    static gd::string reverbToString(FMODReverbPreset preset);

    /**
     * @note[short] MacOS (ARM): 0x35b82c
     * @note[short] MacOS (Intel): 0x3dca80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1380c0
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] MacOS (ARM): 0x35d000
     * @note[short] MacOS (Intel): 0x3de750
     * @note[short] Windows: 0x553c0
     * @note[short] iOS: 0x138dd4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x36597c
     * @note[short] MacOS (Intel): 0x3e9320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e3cc
     * @note[short] Android
     */
    void activateQueuedMusic(int channel);

    /**
     * @note[short] MacOS (ARM): 0x35e2f8
     * @note[short] MacOS (Intel): 0x3dfdd0
     * @note[short] Windows: 0x584b0
     * @note[short] iOS: 0x1399d4
     * @note[short] Android
     */
    FMOD::Channel* channelForChannelID(int id);

    /**
     * @note[short] MacOS (ARM): 0x3627c0
     * @note[short] MacOS (Intel): 0x3e5750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    FMOD::Channel* channelForUniqueID(int id);

    /**
     * @note[short] MacOS (ARM): 0x361a98
     * @note[short] MacOS (Intel): 0x3e46f0
     * @note[short] Windows: 0x583f0
     * @note[short] iOS: 0x13bbd8
     * @note[short] Android
     */
    int channelIDForUniqueID(int id);

    /**
     * @note[short] MacOS (ARM): 0x361ea8
     * @note[short] MacOS (Intel): 0x3e4bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13bdfc
     * @note[short] Android
     */
    void channelLinkSound(int id, FMODSound* sound);

    /**
     * @note[short] MacOS (ARM): 0x3624c4
     * @note[short] MacOS (Intel): 0x3e5360
     * @note[short] Windows: 0x580e0
     * @note[short] iOS: 0x13c1f0
     * @note[short] Android
     */
    void channelStopped(FMOD::Channel* channel, bool remove);

    /**
     * @note[short] MacOS (ARM): 0x3622f0
     * @note[short] MacOS (Intel): 0x3e5100
     * @note[short] Windows: 0x57e50
     * @note[short] iOS: 0x13c0f0
     * @note[short] Android
     */
    void channelUnlinkSound(int id);

    /**
     * @note[short] MacOS (ARM): 0x35ca84
     * @note[short] MacOS (Intel): 0x3ddfb0
     * @note[short] Windows: 0x55310
     * @note[short] iOS: 0x138bb8
     * @note[short] Android
     */
    void clearAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x3606c0
     * @note[short] MacOS (Intel): 0x3e2f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b074
     * @note[short] Android
     */
    int countActiveEffects();

    /**
     * @note[short] MacOS (ARM): 0x360770
     * @note[short] MacOS (Intel): 0x3e3010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b098
     * @note[short] Android
     */
    int countActiveMusic();

    /**
     * @note[short] MacOS (ARM): 0x3663e8
     * @note[short] MacOS (Intel): 0x3ea0b0
     * @note[short] Windows: 0x5cba0
     * @note[short] iOS: 0x13e978
     * @note[short] Android: Rebinded
     */
    FMOD::Sound* createStream(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x360cb4
     * @note[short] MacOS (Intel): 0x3e3580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b408
     * @note[short] Android
     */
    void disableMetering();

    /**
     * @note[short] MacOS (ARM): 0x360c94
     * @note[short] MacOS (Intel): 0x3e3550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b3e8
     * @note[short] Android
     */
    void enableMetering();

    /**
     * @note[short] MacOS (ARM): 0x36373c
     * @note[short] MacOS (Intel): 0x3e6960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cd64
     * @note[short] Android
     */
    void fadeInBackgroundMusic(float value);

    /**
     * @note[short] MacOS (ARM): 0x363db0
     * @note[short] MacOS (Intel): 0x3e70c0
     * @note[short] Windows: 0x5c3f0
     * @note[short] iOS: 0x13d1e8
     * @note[short] Android
     */
    void fadeInMusic(float duration, int channel);

    /**
     * @note[short] MacOS (ARM): 0x366340
     * @note[short] MacOS (Intel): 0x3e9fd0
     * @note[short] Windows: 0x5c670
     * @note[short] iOS: 0x13e8d0
     * @note[short] Android
     */
    void fadeMusic(float duration, int channel, float startVolume, float endVolume);

    /**
     * @note[short] MacOS (ARM): 0x3662a4
     * @note[short] MacOS (Intel): 0x3e9ef0
     * @note[short] Windows: 0x5c530
     * @note[short] iOS: 0x13e834
     * @note[short] Android
     */
    void fadeOutMusic(float duration, int channel);

    /**
     * @note[short] MacOS (ARM): 0x3639e0
     * @note[short] MacOS (Intel): 0x3e6c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cf64
     * @note[short] Android
     */
    gd::string getActiveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x35f5dc
     * @note[short] MacOS (Intel): 0x3e1860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13a610
     * @note[short] Android
     */
    FMOD::Channel* getActiveMusicChannel(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x36377c
     * @note[short] MacOS (Intel): 0x3e69a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cda4
     * @note[short] Android
     */
    float getBackgroundMusicVolume();

    /**
     * @note[short] MacOS (ARM): 0x360e68
     * @note[short] MacOS (Intel): 0x3e3730
     * @note[short] Windows: 0x56b50
     * @note[short] iOS: 0x13b560
     * @note[short] Android
     */
    FMOD::ChannelGroup* getChannelGroup(int id, bool reverb);

    /**
     * @note[short] MacOS (ARM): 0x36379c
     * @note[short] MacOS (Intel): 0x3e69e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cdc4
     * @note[short] Android
     */
    float getEffectsVolume();

    /**
     * @note[short] MacOS (ARM): 0x366640
     * @note[short] MacOS (Intel): 0x3ea350
     * @note[short] Windows: 0x5cde0
     * @note[short] iOS: 0x13eb34
     * @note[short] Android
     */
    gd::string getFMODStatus(int unused);

    /**
     * @note[short] MacOS (ARM): 0x360cbc
     * @note[short] MacOS (Intel): 0x3e3590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b410
     * @note[short] Android
     */
    float getMeteringValue();

    /**
     * @note[short] MacOS (ARM): 0x3616cc
     * @note[short] MacOS (Intel): 0x3e4280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b9ac
     * @note[short] Android
     */
    int getMusicChannelID(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x365de0
     * @note[short] MacOS (Intel): 0x3e98b0
     * @note[short] Windows: 0x5c360
     * @note[short] iOS: 0x13e620
     * @note[short] Android
     */
    unsigned int getMusicLengthMS(int channel);

    /**
     * @note[short] MacOS (ARM): 0x365d5c
     * @note[short] MacOS (Intel): 0x3e9830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e5fc
     * @note[short] Android
     */
    float getMusicTime(int channel);

    /**
     * @note[short] MacOS (ARM): 0x365cf0
     * @note[short] MacOS (Intel): 0x3e97c0
     * @note[short] Windows: 0x5c300
     * @note[short] iOS: 0x13e590
     * @note[short] Android
     */
    unsigned int getMusicTimeMS(int channel);

    /**
     * @note[short] MacOS (ARM): 0x361f1c
     * @note[short] MacOS (Intel): 0x3e4c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getNextChannelID();

    /**
     * @note[short] MacOS (ARM): 0x36081c
     * @note[short] MacOS (Intel): 0x3e30d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    gd::map<std::pair<int, int>, FMODSoundTween>& getTweenContainer(AudioTargetType type);

    /**
     * @note[short] MacOS (ARM): 0x364a3c
     * @note[short] MacOS (Intel): 0x3e7f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13dbec
     * @note[short] Android
     */
    bool isAnyPersistentPlaying();

    /**
     * @note[short] MacOS (ARM): 0x361bbc
     * @note[short] MacOS (Intel): 0x3e4870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isChannelStopping(int channel);

    /**
     * @note[short] MacOS (ARM): 0x3617f0
     * @note[short] MacOS (Intel): 0x3e4400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool isEffectLoaded(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x3637b8
     * @note[short] MacOS (Intel): 0x3e6a10
     * @note[short] Windows: 0x59d30
     * @note[short] iOS: 0x13cde0
     * @note[short] Android
     */
    bool isMusicPlaying(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x3638d8
     * @note[short] MacOS (Intel): 0x3e6b40
     * @note[short] Windows: 0x59f10
     * @note[short] iOS: 0x13cecc
     * @note[short] Android: Rebinded
     */
    bool isMusicPlaying(gd::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x363f08
     * @note[short] MacOS (Intel): 0x3e7230
     * @note[short] Windows: 0x5ad80
     * @note[short] iOS: 0x13d32c
     * @note[short] Android: Rebinded
     */
    bool isPersistentMatchPlaying(gd::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x364a60
     * @note[short] MacOS (Intel): 0x3e7f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* sound);

    /**
     * @note[short] MacOS (ARM): 0x3634f8
     * @note[short] MacOS (Intel): 0x3e66b0
     * @note[short] Windows: 0x59a00
     * @note[short] iOS: 0x13cc9c
     * @note[short] Android: Rebinded
     */
    int lengthForSound(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x363b48
     * @note[short] MacOS (Intel): 0x3e6e30
     * @note[short] Windows: 0x5a040
     * @note[short] iOS: 0x13d008
     * @note[short] Android: Rebinded
     */
    void loadAndPlayMusic(gd::string path, unsigned int time, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x35e5c0
     * @note[short] MacOS (Intel): 0x3e01f0
     * @note[short] Windows: 0x55f50
     * @note[short] iOS: 0x139bd8
     * @note[short] Android
     */
    void loadAudioState(FMODAudioState& state);

    /**
     * @note[short] MacOS (ARM): 0x363e48
     * @note[short] MacOS (Intel): 0x3e71a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13d280
     * @note[short] Android: Rebinded
     */
    void loadMusic(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x35f0d0
     * @note[short] MacOS (Intel): 0x3e1210
     * @note[short] Windows: 0x5a2b0
     * @note[short] iOS: 0x13a1cc
     * @note[short] Android: Rebinded
     */
    void loadMusic(gd::string path, float speed, float unknown, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset);

    /**
     * @note[short] MacOS (ARM): 0x35c9f4
     * @note[short] MacOS (Intel): 0x3ddf20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x138b30
     * @note[short] Android
     */
    void pauseAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x3634e0
     * @note[short] MacOS (Intel): 0x3e6670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cc84
     * @note[short] Android
     */
    void pauseAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x363808
     * @note[short] MacOS (Intel): 0x3e6a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13ce24
     * @note[short] Android
     */
    void pauseAllMusic(bool force);

    /**
     * @note[short] MacOS (ARM): 0x3634d8
     * @note[short] MacOS (Intel): 0x3e6650
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseEffect(unsigned int effect);

    /**
     * @note[short] MacOS (ARM): 0x366280
     * @note[short] MacOS (Intel): 0x3e9ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseMusic(int musicChannel);

    /**
     * @note[short] MacOS (ARM): 0x36142c
     * @note[short] MacOS (Intel): 0x3e4020
     * @note[short] Windows: 0x56dc0
     * @note[short] iOS: 0x13b750
     * @note[short] Android: Rebinded
     */
    int playEffect(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x3614dc
     * @note[short] MacOS (Intel): 0x3e40b0
     * @note[short] Windows: 0x56e40
     * @note[short] iOS: 0x13b7ec
     * @note[short] Android: Rebinded
     */
    int playEffect(gd::string path, float speed, float unknown, float volume);

    /**
     * @note[short] MacOS (ARM): 0x35f718
     * @note[short] MacOS (Intel): 0x3e1a20
     * @note[short] Windows: 0x56f30
     * @note[short] iOS: 0x13a678
     * @note[short] Android: Rebinded
     */
    int playEffectAdvanced(gd::string path, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup);

    /**
     * @note[short] MacOS (ARM): 0x3615e4
     * @note[short] MacOS (Intel): 0x3e41a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b8d8
     * @note[short] Android: Rebinded
     */
    int playEffectAsync(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x363c2c
     * @note[short] MacOS (Intel): 0x3e6f00
     * @note[short] Windows: 0x5a140
     * @note[short] iOS: 0x13d0e0
     * @note[short] Android: Rebinded
     */
    void playMusic(gd::string path, bool shouldLoop, float fadeInTime, int channel);

    /**
     * @note[short] MacOS (ARM): 0x35c0a0
     * @note[short] MacOS (Intel): 0x3dd590
     * @note[short] Windows: 0x59290
     * @note[short] iOS: 0x138638
     * @note[short] Android: Rebinded
     */
    FMODSound* preloadEffect(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x361f30
     * @note[short] MacOS (Intel): 0x3e4c40
     * @note[short] Windows: 0x59680
     * @note[short] iOS: 0x13be70
     * @note[short] Android: Rebinded
     */
    FMOD::Sound* preloadEffectAsync(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x364034
     * @note[short] MacOS (Intel): 0x3e7350
     * @note[short] Windows: 0x5c7c0
     * @note[short] iOS: 0x13d3f8
     * @note[short] Android: Rebinded
     */
    FMOD::Sound* preloadMusic(gd::string path, bool noRelease, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x366884
     * @note[short] MacOS (Intel): 0x3ea5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void printResult(FMOD_RESULT result);

    /**
     * @note[short] MacOS (ARM): 0x364abc
     * @note[short] MacOS (Intel): 0x3e7fa0
     * @note[short] Windows: 0x5b0a0
     * @note[short] iOS: 0x13dc10
     * @note[short] Android: Rebinded
     */
    void queuedEffectFinishedLoading(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x361810
     * @note[short] MacOS (Intel): 0x3e4420
     * @note[short] Windows: 0x57950
     * @note[short] iOS: 0x13ba0c
     * @note[short] Android: Rebinded
     */
    int queuePlayEffect(gd::string audioFilename, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group);

    /**
     * @note[short] MacOS (ARM): 0x3647c4
     * @note[short] MacOS (Intel): 0x3e7c50
     * @note[short] Windows: 0x5aaa0
     * @note[short] iOS: 0x13d974
     * @note[short] Android: Rebinded
     */
    void queueStartMusic(gd::string audioFilename, float pitch, float unknown, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset);

    /**
     * @note[short] MacOS (ARM): 0x361d2c
     * @note[short] MacOS (Intel): 0x3e4a30
     * @note[short] Windows: 0x57b20
     * @note[short] iOS: 0x13bc80
     * @note[short] Android
     */
    int registerChannel(FMOD::Channel* channel, int channelID, int effectID);

    /**
     * @note[short] MacOS (ARM): 0x35d850
     * @note[short] MacOS (Intel): 0x3df090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1391d8
     * @note[short] Android
     */
    void releaseRemovedSounds();

    /**
     * @note[short] MacOS (ARM): 0x35ca3c
     * @note[short] MacOS (Intel): 0x3ddf70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x138b74
     * @note[short] Android
     */
    void resumeAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x3634ec
     * @note[short] MacOS (Intel): 0x3e6690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cc90
     * @note[short] Android
     */
    void resumeAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x363884
     * @note[short] MacOS (Intel): 0x3e6ae0
     * @note[short] Windows: 0x59eb0
     * @note[short] iOS: 0x13ce80
     * @note[short] Android
     */
    void resumeAllMusic();

    /**
     * @note[short] MacOS (ARM): 0x35c8b4
     * @note[short] MacOS (Intel): 0x3ddde0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x138a2c
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x3634dc
     * @note[short] MacOS (Intel): 0x3e6660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeEffect(unsigned int effect);

    /**
     * @note[short] MacOS (ARM): 0x35f5b8
     * @note[short] MacOS (Intel): 0x3e1840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13a5ec
     * @note[short] Android
     */
    void resumeMusic(int musicChannel);

    /**
     * @note[short] MacOS (ARM): 0x35e07c
     * @note[short] MacOS (Intel): 0x3df9f0
     * @note[short] Windows: 0x55920
     * @note[short] iOS: 0x139888
     * @note[short] Android
     */
    void saveAudioState(FMODAudioState& state);

    /**
     * @note[short] MacOS (ARM): 0x363784
     * @note[short] MacOS (Intel): 0x3e69b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cdac
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x360b74
     * @note[short] MacOS (Intel): 0x3e3420
     * @note[short] Windows: 0x59180
     * @note[short] iOS: 0x13b2dc
     * @note[short] Android
     */
    void setChannelPitch(int id, AudioTargetType type, float pitch);

    /**
     * @note[short] MacOS (ARM): 0x360998
     * @note[short] MacOS (Intel): 0x3e3230
     * @note[short] Windows: 0x58de0
     * @note[short] iOS: 0x13b100
     * @note[short] Android
     */
    void setChannelVolume(int id, AudioTargetType type, float volume);

    /**
     * @note[short] MacOS (ARM): 0x3631bc
     * @note[short] MacOS (Intel): 0x3e6340
     * @note[short] Windows: 0x58fb0
     * @note[short] iOS: 0x13c928
     * @note[short] Android
     */
    void setChannelVolumeMod(int id, AudioTargetType type, float volumeMod);

    /**
     * @note[short] MacOS (ARM): 0x3637a4
     * @note[short] MacOS (Intel): 0x3e69f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13cdcc
     * @note[short] Android
     */
    void setEffectsVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x3600f4
     * @note[short] MacOS (Intel): 0x3e2770
     * @note[short] Windows: 0x5c1c0
     * @note[short] iOS: 0x13ae08
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int time, bool dontWait, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x35ba30
     * @note[short] MacOS (Intel): 0x3dce30
     * @note[short] Windows: 0x53bf0
     * @note[short] iOS: 0x138120
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x35be20
     * @note[short] MacOS (Intel): 0x3dd280
     * @note[short] Windows: 0x540d0
     * @note[short] iOS: 0x1383ac
     * @note[short] Android
     */
    void setupAudioEngine();

    /**
     * @note[short] MacOS (ARM): 0x35c920
     * @note[short] MacOS (Intel): 0x3dde50
     * @note[short] Windows: 0x552b0
     * @note[short] iOS: 0x138a6c
     * @note[short] Android
     */
    void start();

    /**
     * @note[short] MacOS (ARM): 0x364344
     * @note[short] MacOS (Intel): 0x3e76a0
     * @note[short] Windows: 0x5a620
     * @note[short] iOS: 0x13d684
     * @note[short] Android
     */
    void startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset);

    /**
     * @note[short] MacOS (ARM): 0x35c9ac
     * @note[short] MacOS (Intel): 0x3dded0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x138aec
     * @note[short] Android
     */
    void stop();

    /**
     * @note[short] MacOS (ARM): 0x35cb34
     * @note[short] MacOS (Intel): 0x3de090
     * @note[short] Windows: 0x598e0
     * @note[short] iOS: 0x138c3c
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x35cdb4
     * @note[short] MacOS (Intel): 0x3de470
     * @note[short] Windows: 0x59da0
     * @note[short] iOS: 0x138ce4
     * @note[short] Android
     */
    void stopAllMusic(bool clear);

    /**
     * @note[short] MacOS (ARM): 0x362d5c
     * @note[short] MacOS (Intel): 0x3e5f00
     * @note[short] Windows: 0x58a50
     * @note[short] iOS: 0x13c65c
     * @note[short] Android
     */
    float stopAndGetFade(FMOD::Channel* channel);

    /**
     * @note[short] MacOS (ARM): 0x366008
     * @note[short] MacOS (Intel): 0x3e9b70
     * @note[short] Windows: 0x5cab0
     * @note[short] iOS: 0x13e758
     * @note[short] Android
     */
    void stopAndRemoveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x361ca0
     * @note[short] MacOS (Intel): 0x3e49b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13bc38
     * @note[short] Android
     */
    void stopChannel(int id);

    /**
     * @note[short] MacOS (ARM): 0x362c28
     * @note[short] MacOS (Intel): 0x3e5d40
     * @note[short] Windows: 0x58840
     * @note[short] iOS: 0x13c528
     * @note[short] Android
     */
    void stopChannel(FMOD::Channel* channel, bool loop, float delay);

    /**
     * @note[short] MacOS (ARM): 0x3627e8
     * @note[short] MacOS (Intel): 0x3e5770
     * @note[short] Windows: 0x58570
     * @note[short] iOS: 0x13c320
     * @note[short] Android
     */
    void stopChannel(int id, AudioTargetType type, bool loop, float delay);

    /**
     * @note[short] MacOS (ARM): 0x360840
     * @note[short] MacOS (Intel): 0x3e3100
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopChannelTween(int id, AudioTargetType target, AudioModType mod);

    /**
     * @note[short] MacOS (ARM): 0x360954
     * @note[short] MacOS (Intel): 0x3e31f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopChannelTweens(int id, AudioTargetType target);

    /**
     * @note[short] MacOS (ARM): 0x364d9c
     * @note[short] MacOS (Intel): 0x3e83a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13de30
     * @note[short] Android
     */
    void stopMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x365e60
     * @note[short] MacOS (Intel): 0x3e9940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e6a0
     * @note[short] Android: Rebinded
     */
    void stopMusicNotInSet(gd::unordered_set<int>& musicIDs);

    /**
     * @note[short] MacOS (ARM): 0x363398
     * @note[short] MacOS (Intel): 0x3e6530
     * @note[short] Windows: 0x59540
     * @note[short] iOS: 0x13cb04
     * @note[short] Android: Rebinded
     */
    FMODSound* storeEffect(FMOD::Sound* sound, gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x364da0
     * @note[short] MacOS (Intel): 0x3e83b0
     * @note[short] Windows: 0x5bd10
     * @note[short] iOS: 0x13de34
     * @note[short] Android
     */
    void swapMusicIndex(int musicID, int channelID);

    /**
     * @note[short] MacOS (ARM): 0x360cc4
     * @note[short] MacOS (Intel): 0x3e35a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void testFunction(int unknown);

    /**
     * @note[short] MacOS (ARM): 0x360220
     * @note[short] MacOS (Intel): 0x3e2890
     * @note[short] Windows: 0x5b9d0
     * @note[short] iOS: 0x13aefc
     * @note[short] Android
     */
    void triggerQueuedMusic(FMODQueuedMusic music);

    /**
     * @note[short] MacOS (ARM): 0x363554
     * @note[short] MacOS (Intel): 0x3e6720
     * @note[short] Windows: 0x59ad0
     * @note[short] iOS: 0x13ccf4
     * @note[short] Android
     */
    void unloadAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x363550
     * @note[short] MacOS (Intel): 0x3e6710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void unloadEffect(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x362160
     * @note[short] MacOS (Intel): 0x3e4ee0
     * @note[short] Windows: 0x57c50
     * @note[short] iOS: 0x13c044
     * @note[short] Android
     */
    void unregisterChannel(int id);

    /**
     * @note[short] MacOS (ARM): 0x35dc94
     * @note[short] MacOS (Intel): 0x3df5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x139544
     * @note[short] Android
     */
    void updateBackgroundFade();

    /**
     * @note[short] MacOS (ARM): 0x362e58
     * @note[short] MacOS (Intel): 0x3e6050
     * @note[short] Windows: 0x58b90
     * @note[short] iOS: 0x13c758
     * @note[short] Android
     */
    void updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value);

    /**
     * @note[short] MacOS (ARM): 0x35de88
     * @note[short] MacOS (Intel): 0x3df7e0
     * @note[short] Windows: 0x567f0
     * @note[short] iOS: 0x1396f4
     * @note[short] Android
     */
    void updateChannelTweens(float dt);

    /**
     * @note[short] MacOS (ARM): 0x35dd20
     * @note[short] MacOS (Intel): 0x3df680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1395d0
     * @note[short] Android
     */
    void updateMetering();

    /**
     * @note[short] MacOS (ARM): 0x35d46c
     * @note[short] MacOS (Intel): 0x3dec40
     * @note[short] Windows: 0x5aef0
     * @note[short] iOS: 0x138fb4
     * @note[short] Android
     */
    void updateQueuedEffects();

    /**
     * @note[short] MacOS (ARM): 0x35d928
     * @note[short] MacOS (Intel): 0x3df170
     * @note[short] Windows: 0x5b6d0
     * @note[short] iOS: 0x13929c
     * @note[short] Android
     */
    void updateQueuedMusic();

    /**
     * @note[short] MacOS (ARM): 0x35c320
     * @note[short] MacOS (Intel): 0x3dd860
     * @note[short] Windows: 0x54430
     * @note[short] iOS: 0x13880c
     * @note[short] Android
     */
    void updateReverb(FMODReverbPreset preset, bool force);

    /**
     * @note[short] MacOS (ARM): 0x35d610
     * @note[short] MacOS (Intel): 0x3dee20
     * @note[short] Windows: 0x5b440
     * @note[short] iOS: 0x139114
     * @note[short] Android
     */
    void updateTemporaryEffects();

    /**
     * @note[short] MacOS (ARM): 0x365c58
     * @note[short] MacOS (Intel): 0x3e9720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e4f8
     * @note[short] Android
     */
    FMOD_OPENSTATE waitUntilSoundReady(FMOD::Sound* sound);
    gd::unordered_map<int, FMODMusic> m_fmodMusic;
    gd::unordered_map<gd::string, FMODSound> m_fmodSounds;
    gd::unordered_set<gd::string> m_temporarySoundPaths;
    float m_musicVolume;
    float m_sfxVolume;
    float m_backgroundMusicFade;
    float m_musicFadeStart;
    float m_pulse1;
    float m_pulse2;
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::ChannelGroup* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::DSP* m_mainDSP;
    FMOD::DSP* m_globalChannelDSP;
    FMOD::ChannelGroup* m_globalChannel;
    FMOD::ChannelGroup* m_reverbChannel;
    FMOD_RESULT m_lastResult;
    int m_sampleRate;
    bool m_reducedQuality;
    bool m_allAudioPaused;
    int m_musicOffset;
    bool m_stopped;
    FMODAudioState m_audioState;
    gd::vector<FMOD::Sound*> m_removedSounds;
    gd::unordered_map<int, FMOD::DSP*> m_channelIDToDSP;
    gd::unordered_map<int, FMOD::Channel*> m_channelIDToChannel;
    gd::unordered_set<int> m_stoppedChannels;
    FMODReverbPreset m_reverbPreset;
    gd::unordered_map<int, int> m_channelIDToEffectID;
    gd::unordered_map<int, int> m_effectIDToChannelID;
    gd::unordered_map<int, gd::string> m_channelIDToSoundPath;
    gd::vector<FMODQueuedEffect> m_queuedEffects;
    gd::unordered_map<gd::string, FMOD::Sound*> m_soundPathToSound;
    gd::unordered_map<int, FMOD::ChannelGroup*> m_globalChannelGroups;
    gd::unordered_map<int, FMOD::ChannelGroup*> m_reverbChannelGroups;
    bool m_showAudioVisualizer;
    float m_musicVisualizerTime;
    float m_musicVisualizerPeak;
    float m_musicVisualizerVolume;
    float m_sfxVisualizerTime;
    float m_sfxVisualizerPeak;
    float m_sfxVisualizerVolume;
};
