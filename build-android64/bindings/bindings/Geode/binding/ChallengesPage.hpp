#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GJChallengeDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChallengesPage();

    /**
     * @note[short] MacOS (ARM): 0x322220
     * @note[short] MacOS (Intel): 0x39cdc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x319e0
     * @note[short] Android: Rebinded
     */
     ~ChallengesPage();

    /**
     * @note[short] MacOS (ARM): 0x322310
     * @note[short] MacOS (Intel): 0x39cf60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31ad0
     * @note[short] Android
     */
    static ChallengesPage* create();

    /**
     * @note[short] MacOS (ARM): 0x32242c
     * @note[short] MacOS (Intel): 0x39d0d0
     * @note[short] Windows: 0x85350
     * @note[short] iOS: 0x31ba8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x323a88
     * @note[short] MacOS (Intel): 0x39e770
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x32c50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3239ec
     * @note[short] MacOS (Intel): 0x39e6e0
     * @note[short] Windows: 0x869d0
     * @note[short] iOS: 0x32c44
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x32385c
     * @note[short] MacOS (Intel): 0x39e540
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x32ac4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3239e4
     * @note[short] MacOS (Intel): 0x39e6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32c3c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x323310
     * @note[short] MacOS (Intel): 0x39e040
     * @note[short] Windows: 0x85e00
     * @note[short] iOS: 0x3274c
     * @note[short] Android
     */
    virtual void challengeStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x3235d4
     * @note[short] MacOS (Intel): 0x39e340
     * @note[short] Windows: 0x85f90
     * @note[short] iOS: 0x32954
     * @note[short] Android
     */
    virtual void challengeStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x323bf0
     * @note[short] MacOS (Intel): 0x39e8d0
     * @note[short] Windows: 0x86d10
     * @note[short] iOS: 0x32db8
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x323ac0
     * @note[short] MacOS (Intel): 0x39e7b0
     * @note[short] Windows: 0x86a20
     * @note[short] iOS: 0x32c88
     * @note[short] Android
     */
    void claimItem(ChallengeNode* node, GJChallengeItem* item, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x32308c
     * @note[short] MacOS (Intel): 0x39dd80
     * @note[short] Windows: 0x860e0
     * @note[short] iOS: 0x32510
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x3234ec
     * @note[short] MacOS (Intel): 0x39e240
     * @note[short] Windows: 0x86410
     * @note[short] iOS: 0x32870
     * @note[short] Android
     */
    void exitNodeAtSlot(int position, float delay);

    /**
     * @note[short] MacOS (ARM): 0x322e00
     * @note[short] MacOS (Intel): 0x39dae0
     * @note[short] Windows: 0x86990
     * @note[short] iOS: 0x322d0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32366c
     * @note[short] MacOS (Intel): 0x39e3d0
     * @note[short] Windows: 0x86060
     * @note[short] iOS: 0x329ec
     * @note[short] Android
     */
    void tryGetChallenges();

    /**
     * @note[short] MacOS (ARM): 0x323268
     * @note[short] MacOS (Intel): 0x39df70
     * @note[short] Windows: 0x85d60
     * @note[short] iOS: 0x326e8
     * @note[short] Android
     */
    void updateDots();

    /**
     * @note[short] MacOS (ARM): 0x322e4c
     * @note[short] MacOS (Intel): 0x39db20
     * @note[short] Windows: 0x86500
     * @note[short] iOS: 0x3231c
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
