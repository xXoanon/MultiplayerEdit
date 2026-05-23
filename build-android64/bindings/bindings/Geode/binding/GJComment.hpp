#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJComment : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJComment";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJComment, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJComment();

    /**
     * @note[short] MacOS (ARM): 0x4b08fc
     * @note[short] MacOS (Intel): 0x561830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0cc8
     * @note[short] Android: Rebinded
     */
     ~GJComment();

    /**
     * @note[short] MacOS (ARM): 0x4b09a0
     * @note[short] MacOS (Intel): 0x5618f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0d4c
     * @note[short] Android
     */
    static GJComment* create();

    /**
     * @note[short] MacOS (ARM): 0x4a0d2c
     * @note[short] MacOS (Intel): 0x550a20
     * @note[short] Windows: 0x1752a0
     * @note[short] iOS: 0xa689c
     * @note[short] Android
     */
    static GJComment* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4b0a58
     * @note[short] MacOS (Intel): 0x5619d0
     * @note[short] Windows: 0x175e40
     * @note[short] iOS: 0xb0e04
     * @note[short] Android
     */
    virtual bool init();
    gd::string m_commentString;
    gd::string m_userName;
    int m_commentID;
    int m_userID;
    int m_likeCount;
    int m_levelID;
    bool m_isSpam;
    int m_accountID;
    gd::string m_uploadDate;
    bool m_commentDeleted;
    int m_percentage;
    int m_modBadge;
    cocos2d::ccColor3B m_color;
    bool m_hasLevelID;
    bool m_unkMultiplayerBool;
    bool m_canDelete;
    GJUserScore* m_userScore;
};
