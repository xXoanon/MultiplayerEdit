#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DrawGridLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DrawGridLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0xc2e08
     * @note[short] MacOS (Intel): 0xdcb20
     * @note[short] Windows: 0x2e8af0
     * @note[short] iOS: 0x357c7c
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* parent, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xdff78
     * @note[short] MacOS (Intel): 0x100fb0
     * @note[short] Windows: 0x2e8ff0
     * @note[short] iOS: 0x369804
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0xe008c
     * @note[short] MacOS (Intel): 0x101140
     * @note[short] Windows: 0x2e91f0
     * @note[short] iOS: 0x369918
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xce4e8
     * @note[short] MacOS (Intel): 0xea380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addAudioLineObject(AudioLineGuideGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce330
     * @note[short] MacOS (Intel): 0xea200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e26c
     * @note[short] Android
     */
    void addToEffects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce7e0
     * @note[short] MacOS (Intel): 0xea980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e5ec
     * @note[short] Android
     */
    void addToGuides(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce86c
     * @note[short] MacOS (Intel): 0xeaa00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e678
     * @note[short] Android
     */
    void addToSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdfeac
     * @note[short] MacOS (Intel): 0x100ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x369744
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalMinMax(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdfd40
     * @note[short] MacOS (Intel): 0x100d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x369608
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* parent, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xc4d18
     * @note[short] MacOS (Intel): 0xdefd0
     * @note[short] Windows: 0x2e8cd0
     * @note[short] iOS: 0x359434
     * @note[short] Android: Rebinded
     */
    void loadTimeMarkers(gd::string markers);

    /**
     * @note[short] MacOS (ARM): 0xd3974
     * @note[short] MacOS (Intel): 0xf07e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xdff6c
     * @note[short] MacOS (Intel): 0x100f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void postUpdate();

    /**
     * @note[short] MacOS (ARM): 0xce7a8
     * @note[short] MacOS (Intel): 0xea930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeAudioLineObject(AudioLineGuideGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce778
     * @note[short] MacOS (Intel): 0xea900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeFromEffects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce7d4
     * @note[short] MacOS (Intel): 0xea960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e5e0
     * @note[short] Android
     */
    void removeFromGuides(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xce820
     * @note[short] MacOS (Intel): 0xea9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35e62c
     * @note[short] Android
     */
    void removeFromSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdfe9c
     * @note[short] MacOS (Intel): 0x100eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sortSpeedObjects();

    /**
     * @note[short] MacOS (ARM): 0xd23e0
     * @note[short] MacOS (Intel): 0xeecf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3609a8
     * @note[short] Android
     */
    float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] MacOS (ARM): 0xe007c
     * @note[short] MacOS (Intel): 0x101120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x369908
     * @note[short] Android
     */
    void updateMusicGuideTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xd2334
     * @note[short] MacOS (Intel): 0xeec50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36090c
     * @note[short] Android
     */
    void updateTimeMarkers();
    std::array<cocos2d::CCPoint, 400>* m_pointArray1;
    std::array<cocos2d::CCPoint, 400>* m_pointArray2;
    std::array<cocos2d::CCPoint, 400>* m_pointArray3;
    gd::unordered_map<int, AudioLineGuideGameObject*> m_audioLineObjects;
    float m_musicTime;
    float m_playbackTime;
    float m_oldPlaybackTime;
    float m_playbackX;
    float m_playbackY;
    bool m_sortEffects;
    LevelEditorLayer* m_editorLayer;
    gd::string m_timeMarkerString;
    cocos2d::CCNode* m_objectLayer;
    cocos2d::CCArray* m_timeMarkers;
    cocos2d::CCArray* m_effectGameObjects;
    cocos2d::CCArray* m_guideObjects;
    cocos2d::CCArray* m_speedObjects;
    double m_unk258;
    float m_currentSpeed;
    float m_slowSpeed;
    float m_normalSpeed;
    float m_fastSpeed;
    float m_fasterSpeed;
    float m_fastestSpeed;
    bool m_updateTimeMarkers;
    bool m_updateSpeedObjects;
    float m_gridSize;
};
