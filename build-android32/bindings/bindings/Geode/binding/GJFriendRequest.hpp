#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJFriendRequest : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJFriendRequest, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJFriendRequest();

    /**
     * @note[short] MacOS (ARM): 0x4af980
     * @note[short] MacOS (Intel): 0x560550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0038
     * @note[short] Android
     */
    static GJFriendRequest* create();

    /**
     * @note[short] MacOS (ARM): 0x49d66c
     * @note[short] MacOS (Intel): 0x54d020
     * @note[short] Windows: 0x172c80
     * @note[short] iOS: 0xa469c
     * @note[short] Android
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4afa18
     * @note[short] MacOS (Intel): 0x5605e0
     * @note[short] Windows: 0x77de0
     * @note[short] iOS: 0xb00c4
     * @note[short] Android
     */
    virtual bool init();
    int m_requestID;
    int m_accountID;
    int m_unusedToAccountID;
    gd::string m_message;
    gd::string m_uploadDate;
    bool m_isRead;
};
