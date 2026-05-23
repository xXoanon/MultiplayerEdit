#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicArtistObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "MusicArtistObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicArtistObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x4d9014
     * @note[short] MacOS (Intel): 0x58e2c0
     * @note[short] Windows: 0x347ac0
     * @note[short] iOS: 0x155c64
     * @note[short] Android: Rebinded
     */
    static MusicArtistObject* create(int id, gd::string name, gd::string url, gd::string youtube);

    /**
     * @note[short] MacOS (ARM): 0x4e3b60
     * @note[short] MacOS (Intel): 0x59a660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(int id, gd::string name, gd::string url, gd::string youtube);
    int m_artistID;
    gd::string m_artistName;
    gd::string m_artistURL;
    gd::string m_artistYouTube;
};
