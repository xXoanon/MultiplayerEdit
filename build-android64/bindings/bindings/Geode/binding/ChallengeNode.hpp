#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChallengesPage.hpp"
#include "GJChallengeItem.hpp"

class ChallengeNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ChallengeNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ChallengeNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33b74
     * @note[short] Android: Out of line
     */
     ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x323c20
     * @note[short] MacOS (Intel): 0x39e930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32de8
     * @note[short] Android: Rebinded
     */
     ~ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x323758
     * @note[short] MacOS (Intel): 0x39e430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32a38
     * @note[short] Android
     */
    static ChallengeNode* create(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x323cd8
     * @note[short] MacOS (Intel): 0x39ea00
     * @note[short] Windows: 0x86d30
     * @note[short] iOS: 0x32e3c
     * @note[short] Android
     */
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x32499c
     * @note[short] MacOS (Intel): 0x39f600
     * @note[short] Windows: 0x87d80
     * @note[short] iOS: 0x33aa0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32382c
     * @note[short] MacOS (Intel): 0x39e500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void updateTimeLabel(gd::string text);
    ChallengesPage* m_challengesPage;
    GJChallengeItem* m_challengeItem;
    cocos2d::CCPoint m_unkPoint;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    bool m_unloaded;
};
