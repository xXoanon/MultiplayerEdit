#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserMessage : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserMessage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserMessage, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUserMessage();

    /**
     * @note[short] MacOS (ARM): 0x4afbe0
     * @note[short] MacOS (Intel): 0x5607d0
     * @note[short] Windows: 0x173ed0
     * @note[short] iOS: 0xb014c
     * @note[short] Android
     */
    static GJUserMessage* create();

    /**
     * @note[short] MacOS (ARM): 0x49df20
     * @note[short] MacOS (Intel): 0x54d980
     * @note[short] Windows: 0x173390
     * @note[short] iOS: 0xa4c20
     * @note[short] Android
     */
    static GJUserMessage* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4afc7c
     * @note[short] MacOS (Intel): 0x560870
     * @note[short] Windows: 0x77de0
     * @note[short] iOS: 0xb01dc
     * @note[short] Android
     */
    virtual bool init();
    int m_messageID;
    int m_accountID;
    int m_userID;
    gd::string m_title;
    gd::string m_content;
    gd::string m_username;
    gd::string m_uploadDate;
    bool m_read;
    bool m_outgoing;
    bool m_toggled;
};
