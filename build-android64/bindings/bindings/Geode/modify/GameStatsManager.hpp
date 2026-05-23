#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameStatsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_accountIDForIcon
		#define GEODE_STATICS_accountIDForIcon
		GEODE_AS_STATIC_FUNCTION(accountIDForIcon) 
	#endif

	#ifndef GEODE_STATICS_addSimpleSpecialChestReward
		#define GEODE_STATICS_addSimpleSpecialChestReward
		GEODE_AS_STATIC_FUNCTION(addSimpleSpecialChestReward) 
	#endif

	#ifndef GEODE_STATICS_addSpecialRewardDescription
		#define GEODE_STATICS_addSpecialRewardDescription
		GEODE_AS_STATIC_FUNCTION(addSpecialRewardDescription) 
	#endif

	#ifndef GEODE_STATICS_addStoreItem
		#define GEODE_STATICS_addStoreItem
		GEODE_AS_STATIC_FUNCTION(addStoreItem) 
	#endif

	#ifndef GEODE_STATICS_areChallengesLoaded
		#define GEODE_STATICS_areChallengesLoaded
		GEODE_AS_STATIC_FUNCTION(areChallengesLoaded) 
	#endif

	#ifndef GEODE_STATICS_areRewardsLoaded
		#define GEODE_STATICS_areRewardsLoaded
		GEODE_AS_STATIC_FUNCTION(areRewardsLoaded) 
	#endif

	#ifndef GEODE_STATICS_awardCurrencyForLevel
		#define GEODE_STATICS_awardCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(awardCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_awardDiamondsForLevel
		#define GEODE_STATICS_awardDiamondsForLevel
		GEODE_AS_STATIC_FUNCTION(awardDiamondsForLevel) 
	#endif

	#ifndef GEODE_STATICS_awardOldSpecialStats
		#define GEODE_STATICS_awardOldSpecialStats
		GEODE_AS_STATIC_FUNCTION(awardOldSpecialStats) 
	#endif

	#ifndef GEODE_STATICS_awardSecretKey
		#define GEODE_STATICS_awardSecretKey
		GEODE_AS_STATIC_FUNCTION(awardSecretKey) 
	#endif

	#ifndef GEODE_STATICS_canItemBeUnlocked
		#define GEODE_STATICS_canItemBeUnlocked
		GEODE_AS_STATIC_FUNCTION(canItemBeUnlocked) 
	#endif

	#ifndef GEODE_STATICS_checkAchievement
		#define GEODE_STATICS_checkAchievement
		GEODE_AS_STATIC_FUNCTION(checkAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinAchievement
		#define GEODE_STATICS_checkCoinAchievement
		GEODE_AS_STATIC_FUNCTION(checkCoinAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinsForLevel
		#define GEODE_STATICS_checkCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_claimListReward
		#define GEODE_STATICS_claimListReward
		GEODE_AS_STATIC_FUNCTION(claimListReward) 
	#endif

	#ifndef GEODE_STATICS_collectReward
		#define GEODE_STATICS_collectReward
		GEODE_AS_STATIC_FUNCTION(collectReward) 
	#endif

	#ifndef GEODE_STATICS_collectVideoReward
		#define GEODE_STATICS_collectVideoReward
		GEODE_AS_STATIC_FUNCTION(collectVideoReward) 
	#endif

	#ifndef GEODE_STATICS_completedChallenge
		#define GEODE_STATICS_completedChallenge
		GEODE_AS_STATIC_FUNCTION(completedChallenge) 
	#endif

	#ifndef GEODE_STATICS_completedDailyLevel
		#define GEODE_STATICS_completedDailyLevel
		GEODE_AS_STATIC_FUNCTION(completedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_completedDemonLevel
		#define GEODE_STATICS_completedDemonLevel
		GEODE_AS_STATIC_FUNCTION(completedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_completedLevel
		#define GEODE_STATICS_completedLevel
		GEODE_AS_STATIC_FUNCTION(completedLevel) 
	#endif

	#ifndef GEODE_STATICS_completedMapPack
		#define GEODE_STATICS_completedMapPack
		GEODE_AS_STATIC_FUNCTION(completedMapPack) 
	#endif

	#ifndef GEODE_STATICS_completedStarLevel
		#define GEODE_STATICS_completedStarLevel
		GEODE_AS_STATIC_FUNCTION(completedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_countSecretChests
		#define GEODE_STATICS_countSecretChests
		GEODE_AS_STATIC_FUNCTION(countSecretChests) 
	#endif

	#ifndef GEODE_STATICS_countUnlockedSecretChests
		#define GEODE_STATICS_countUnlockedSecretChests
		GEODE_AS_STATIC_FUNCTION(countUnlockedSecretChests) 
	#endif

	#ifndef GEODE_STATICS_createReward
		#define GEODE_STATICS_createReward
		GEODE_AS_STATIC_FUNCTION(createReward) 
	#endif

	#ifndef GEODE_STATICS_createSecretChestItems
		#define GEODE_STATICS_createSecretChestItems
		GEODE_AS_STATIC_FUNCTION(createSecretChestItems) 
	#endif

	#ifndef GEODE_STATICS_createSecretChestRewards
		#define GEODE_STATICS_createSecretChestRewards
		GEODE_AS_STATIC_FUNCTION(createSecretChestRewards) 
	#endif

	#ifndef GEODE_STATICS_createSpecialChestItems
		#define GEODE_STATICS_createSpecialChestItems
		GEODE_AS_STATIC_FUNCTION(createSpecialChestItems) 
	#endif

	#ifndef GEODE_STATICS_createStoreItems
		#define GEODE_STATICS_createStoreItems
		GEODE_AS_STATIC_FUNCTION(createStoreItems) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_generateItemUnlockableData
		#define GEODE_STATICS_generateItemUnlockableData
		GEODE_AS_STATIC_FUNCTION(generateItemUnlockableData) 
	#endif

	#ifndef GEODE_STATICS_getAwardedCurrencyForLevel
		#define GEODE_STATICS_getAwardedCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(getAwardedCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_getAwardedDiamondsForLevel
		#define GEODE_STATICS_getAwardedDiamondsForLevel
		GEODE_AS_STATIC_FUNCTION(getAwardedDiamondsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getBaseCurrency
		#define GEODE_STATICS_getBaseCurrency
		GEODE_AS_STATIC_FUNCTION(getBaseCurrency) 
	#endif

	#ifndef GEODE_STATICS_getBaseCurrencyForLevel
		#define GEODE_STATICS_getBaseCurrencyForLevel
		GEODE_AS_STATIC_FUNCTION(getBaseCurrencyForLevel) 
	#endif

	#ifndef GEODE_STATICS_getBaseDiamonds
		#define GEODE_STATICS_getBaseDiamonds
		GEODE_AS_STATIC_FUNCTION(getBaseDiamonds) 
	#endif

	#ifndef GEODE_STATICS_getBonusDiamonds
		#define GEODE_STATICS_getBonusDiamonds
		GEODE_AS_STATIC_FUNCTION(getBonusDiamonds) 
	#endif

	#ifndef GEODE_STATICS_getChallenge
		#define GEODE_STATICS_getChallenge
		GEODE_AS_STATIC_FUNCTION(getChallenge) 
	#endif

	#ifndef GEODE_STATICS_getChallengeKey
		#define GEODE_STATICS_getChallengeKey
		GEODE_AS_STATIC_FUNCTION(getChallengeKey) 
	#endif

	#ifndef GEODE_STATICS_getCollectedCoinsForLevel
		#define GEODE_STATICS_getCollectedCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getCompletedMapPacks
		#define GEODE_STATICS_getCompletedMapPacks
		GEODE_AS_STATIC_FUNCTION(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getCurrencyKey
		#define GEODE_STATICS_getCurrencyKey
		GEODE_AS_STATIC_FUNCTION(getCurrencyKey) 
	#endif

	#ifndef GEODE_STATICS_getDailyLevelKey
		#define GEODE_STATICS_getDailyLevelKey
		GEODE_AS_STATIC_FUNCTION(getDailyLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelKey
		#define GEODE_STATICS_getDemonLevelKey
		GEODE_AS_STATIC_FUNCTION(getDemonLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getEventRewardKey
		#define GEODE_STATICS_getEventRewardKey
		GEODE_AS_STATIC_FUNCTION(getEventRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getGauntletRewardKey
		#define GEODE_STATICS_getGauntletRewardKey
		GEODE_AS_STATIC_FUNCTION(getGauntletRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getItemKey
		#define GEODE_STATICS_getItemKey
		GEODE_AS_STATIC_FUNCTION(getItemKey) 
	#endif

	#ifndef GEODE_STATICS_getItemUnlockState
		#define GEODE_STATICS_getItemUnlockState
		GEODE_AS_STATIC_FUNCTION(getItemUnlockState) 
	#endif

	#ifndef GEODE_STATICS_getItemUnlockStateLite
		#define GEODE_STATICS_getItemUnlockStateLite
		GEODE_AS_STATIC_FUNCTION(getItemUnlockStateLite) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getListRewardKey
		#define GEODE_STATICS_getListRewardKey
		GEODE_AS_STATIC_FUNCTION(getListRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getNextGoldChestID
		#define GEODE_STATICS_getNextGoldChestID
		GEODE_AS_STATIC_FUNCTION(getNextGoldChestID) 
	#endif

	#ifndef GEODE_STATICS_getNextVideoAdReward
		#define GEODE_STATICS_getNextVideoAdReward
		GEODE_AS_STATIC_FUNCTION(getNextVideoAdReward) 
	#endif

	#ifndef GEODE_STATICS_getPathRewardKey
		#define GEODE_STATICS_getPathRewardKey
		GEODE_AS_STATIC_FUNCTION(getPathRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getQueuedChallenge
		#define GEODE_STATICS_getQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(getQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_getRewardForSecretChest
		#define GEODE_STATICS_getRewardForSecretChest
		GEODE_AS_STATIC_FUNCTION(getRewardForSecretChest) 
	#endif

	#ifndef GEODE_STATICS_getRewardForSpecialChest
		#define GEODE_STATICS_getRewardForSpecialChest
		GEODE_AS_STATIC_FUNCTION(getRewardForSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_getRewardItem
		#define GEODE_STATICS_getRewardItem
		GEODE_AS_STATIC_FUNCTION(getRewardItem) 
	#endif

	#ifndef GEODE_STATICS_getRewardKey
		#define GEODE_STATICS_getRewardKey
		GEODE_AS_STATIC_FUNCTION(getRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryQueuedChallenge
		#define GEODE_STATICS_getSecondaryQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(getSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_getSecretChestForItem
		#define GEODE_STATICS_getSecretChestForItem
		GEODE_AS_STATIC_FUNCTION(getSecretChestForItem) 
	#endif

	#ifndef GEODE_STATICS_getSecretCoinKey
		#define GEODE_STATICS_getSecretCoinKey
		GEODE_AS_STATIC_FUNCTION(getSecretCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getSecretOnlineRewardKey
		#define GEODE_STATICS_getSecretOnlineRewardKey
		GEODE_AS_STATIC_FUNCTION(getSecretOnlineRewardKey) 
	#endif

	#ifndef GEODE_STATICS_getSpecialChestKeyForItem
		#define GEODE_STATICS_getSpecialChestKeyForItem
		GEODE_AS_STATIC_FUNCTION(getSpecialChestKeyForItem) 
	#endif

	#ifndef GEODE_STATICS_getSpecialRewardDescription
		#define GEODE_STATICS_getSpecialRewardDescription
		GEODE_AS_STATIC_FUNCTION(getSpecialRewardDescription) 
	#endif

	#ifndef GEODE_STATICS_getSpecialUnlockDescription
		#define GEODE_STATICS_getSpecialUnlockDescription
		GEODE_AS_STATIC_FUNCTION(getSpecialUnlockDescription) 
	#endif

	#ifndef GEODE_STATICS_getStarLevelKey
		#define GEODE_STATICS_getStarLevelKey
		GEODE_AS_STATIC_FUNCTION(getStarLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getStat
		#define GEODE_STATICS_getStat
		GEODE_AS_STATIC_FUNCTION(getStat) 
	#endif

	#ifndef GEODE_STATICS_getStatFromKey
		#define GEODE_STATICS_getStatFromKey
		GEODE_AS_STATIC_FUNCTION(getStatFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStoreItem
		#define GEODE_STATICS_getStoreItem
		GEODE_AS_STATIC_FUNCTION(getStoreItem) 
	#endif

	#ifndef GEODE_STATICS_getTotalCollectedCurrency
		#define GEODE_STATICS_getTotalCollectedCurrency
		GEODE_AS_STATIC_FUNCTION(getTotalCollectedCurrency) 
	#endif

	#ifndef GEODE_STATICS_getTotalCollectedDiamonds
		#define GEODE_STATICS_getTotalCollectedDiamonds
		GEODE_AS_STATIC_FUNCTION(getTotalCollectedDiamonds) 
	#endif

	#ifndef GEODE_STATICS_hasClaimedListReward
		#define GEODE_STATICS_hasClaimedListReward
		GEODE_AS_STATIC_FUNCTION(hasClaimedListReward) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedChallenge
		#define GEODE_STATICS_hasCompletedChallenge
		GEODE_AS_STATIC_FUNCTION(hasCompletedChallenge) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDailyLevel
		#define GEODE_STATICS_hasCompletedDailyLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDemonLevel
		#define GEODE_STATICS_hasCompletedDemonLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedGauntletLevel
		#define GEODE_STATICS_hasCompletedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedLevel
		#define GEODE_STATICS_hasCompletedLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMainLevel
		#define GEODE_STATICS_hasCompletedMainLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedMainLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedOnlineLevel
		#define GEODE_STATICS_hasCompletedOnlineLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedStarLevel
		#define GEODE_STATICS_hasCompletedStarLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_hasPendingUserCoin
		#define GEODE_STATICS_hasPendingUserCoin
		GEODE_AS_STATIC_FUNCTION(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_hasRewardBeenCollected
		#define GEODE_STATICS_hasRewardBeenCollected
		GEODE_AS_STATIC_FUNCTION(hasRewardBeenCollected) 
	#endif

	#ifndef GEODE_STATICS_hasSecretCoin
		#define GEODE_STATICS_hasSecretCoin
		GEODE_AS_STATIC_FUNCTION(hasSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_hasUserCoin
		#define GEODE_STATICS_hasUserCoin
		GEODE_AS_STATIC_FUNCTION(hasUserCoin) 
	#endif

	#ifndef GEODE_STATICS_incrementActivePath
		#define GEODE_STATICS_incrementActivePath
		GEODE_AS_STATIC_FUNCTION(incrementActivePath) 
	#endif

	#ifndef GEODE_STATICS_incrementChallenge
		#define GEODE_STATICS_incrementChallenge
		GEODE_AS_STATIC_FUNCTION(incrementChallenge) 
	#endif

	#ifndef GEODE_STATICS_incrementStat
		#define GEODE_STATICS_incrementStat
		GEODE_AS_STATIC_FUNCTION(incrementStat) 
	#endif

	#ifndef GEODE_STATICS_isGauntletChestUnlocked
		#define GEODE_STATICS_isGauntletChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isGauntletChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isGauntletUnlocked
		#define GEODE_STATICS_isGauntletUnlocked
		GEODE_AS_STATIC_FUNCTION(isGauntletUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isItemEnabled
		#define GEODE_STATICS_isItemEnabled
		GEODE_AS_STATIC_FUNCTION(isItemEnabled) 
	#endif

	#ifndef GEODE_STATICS_isItemUnlocked
		#define GEODE_STATICS_isItemUnlocked
		GEODE_AS_STATIC_FUNCTION(isItemUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isPathChestUnlocked
		#define GEODE_STATICS_isPathChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isPathChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isPathUnlocked
		#define GEODE_STATICS_isPathUnlocked
		GEODE_AS_STATIC_FUNCTION(isPathUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isSecretChestUnlocked
		#define GEODE_STATICS_isSecretChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isSecretChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isSecretCoin
		#define GEODE_STATICS_isSecretCoin
		GEODE_AS_STATIC_FUNCTION(isSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_isSecretCoinValid
		#define GEODE_STATICS_isSecretCoinValid
		GEODE_AS_STATIC_FUNCTION(isSecretCoinValid) 
	#endif

	#ifndef GEODE_STATICS_isSpecialChestLiteUnlockable
		#define GEODE_STATICS_isSpecialChestLiteUnlockable
		GEODE_AS_STATIC_FUNCTION(isSpecialChestLiteUnlockable) 
	#endif

	#ifndef GEODE_STATICS_isSpecialChestUnlocked
		#define GEODE_STATICS_isSpecialChestUnlocked
		GEODE_AS_STATIC_FUNCTION(isSpecialChestUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isStoreItemUnlocked
		#define GEODE_STATICS_isStoreItemUnlocked
		GEODE_AS_STATIC_FUNCTION(isStoreItemUnlocked) 
	#endif

	#ifndef GEODE_STATICS_keyCostForSecretChest
		#define GEODE_STATICS_keyCostForSecretChest
		GEODE_AS_STATIC_FUNCTION(keyCostForSecretChest) 
	#endif

	#ifndef GEODE_STATICS_linkSpecialChestUnlocks
		#define GEODE_STATICS_linkSpecialChestUnlocks
		GEODE_AS_STATIC_FUNCTION(linkSpecialChestUnlocks) 
	#endif

	#ifndef GEODE_STATICS_logCoins
		#define GEODE_STATICS_logCoins
		GEODE_AS_STATIC_FUNCTION(logCoins) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsCompletedAndClaimed
		#define GEODE_STATICS_markLevelAsCompletedAndClaimed
		GEODE_AS_STATIC_FUNCTION(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_STATICS_postLoadGameStats
		#define GEODE_STATICS_postLoadGameStats
		GEODE_AS_STATIC_FUNCTION(postLoadGameStats) 
	#endif

	#ifndef GEODE_STATICS_preProcessReward
		#define GEODE_STATICS_preProcessReward
		GEODE_AS_STATIC_FUNCTION(preProcessReward) 
	#endif

	#ifndef GEODE_STATICS_preSaveGameStats
		#define GEODE_STATICS_preSaveGameStats
		GEODE_AS_STATIC_FUNCTION(preSaveGameStats) 
	#endif

	#ifndef GEODE_STATICS_processChallengeQueue
		#define GEODE_STATICS_processChallengeQueue
		GEODE_AS_STATIC_FUNCTION(processChallengeQueue) 
	#endif

	#ifndef GEODE_STATICS_processOnlineChests
		#define GEODE_STATICS_processOnlineChests
		GEODE_AS_STATIC_FUNCTION(processOnlineChests) 
	#endif

	#ifndef GEODE_STATICS_purchaseItem
		#define GEODE_STATICS_purchaseItem
		GEODE_AS_STATIC_FUNCTION(purchaseItem) 
	#endif

	#ifndef GEODE_STATICS_recountSpecialStats
		#define GEODE_STATICS_recountSpecialStats
		GEODE_AS_STATIC_FUNCTION(recountSpecialStats) 
	#endif

	#ifndef GEODE_STATICS_recountUserCoins
		#define GEODE_STATICS_recountUserCoins
		GEODE_AS_STATIC_FUNCTION(recountUserCoins) 
	#endif

	#ifndef GEODE_STATICS_registerRewardsFromItem
		#define GEODE_STATICS_registerRewardsFromItem
		GEODE_AS_STATIC_FUNCTION(registerRewardsFromItem) 
	#endif

	#ifndef GEODE_STATICS_removeChallenge
		#define GEODE_STATICS_removeChallenge
		GEODE_AS_STATIC_FUNCTION(removeChallenge) 
	#endif

	#ifndef GEODE_STATICS_removeErrorFromSpecialChests
		#define GEODE_STATICS_removeErrorFromSpecialChests
		GEODE_AS_STATIC_FUNCTION(removeErrorFromSpecialChests) 
	#endif

	#ifndef GEODE_STATICS_removeQueuedChallenge
		#define GEODE_STATICS_removeQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(removeQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_removeQueuedSecondaryChallenge
		#define GEODE_STATICS_removeQueuedSecondaryChallenge
		GEODE_AS_STATIC_FUNCTION(removeQueuedSecondaryChallenge) 
	#endif

	#ifndef GEODE_STATICS_resetChallengeTimer
		#define GEODE_STATICS_resetChallengeTimer
		GEODE_AS_STATIC_FUNCTION(resetChallengeTimer) 
	#endif

	#ifndef GEODE_STATICS_resetPreSync
		#define GEODE_STATICS_resetPreSync
		GEODE_AS_STATIC_FUNCTION(resetPreSync) 
	#endif

	#ifndef GEODE_STATICS_resetSpecialChest
		#define GEODE_STATICS_resetSpecialChest
		GEODE_AS_STATIC_FUNCTION(resetSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_resetSpecialStatAchievements
		#define GEODE_STATICS_resetSpecialStatAchievements
		GEODE_AS_STATIC_FUNCTION(resetSpecialStatAchievements) 
	#endif

	#ifndef GEODE_STATICS_resetUserCoins
		#define GEODE_STATICS_resetUserCoins
		GEODE_AS_STATIC_FUNCTION(resetUserCoins) 
	#endif

	#ifndef GEODE_STATICS_restorePostSync
		#define GEODE_STATICS_restorePostSync
		GEODE_AS_STATIC_FUNCTION(restorePostSync) 
	#endif

	#ifndef GEODE_STATICS_setStarsForMapPack
		#define GEODE_STATICS_setStarsForMapPack
		GEODE_AS_STATIC_FUNCTION(setStarsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_setStat
		#define GEODE_STATICS_setStat
		GEODE_AS_STATIC_FUNCTION(setStat) 
	#endif

	#ifndef GEODE_STATICS_setStatIfHigher
		#define GEODE_STATICS_setStatIfHigher
		GEODE_AS_STATIC_FUNCTION(setStatIfHigher) 
	#endif

	#ifndef GEODE_STATICS_setupIconCredits
		#define GEODE_STATICS_setupIconCredits
		GEODE_AS_STATIC_FUNCTION(setupIconCredits) 
	#endif

	#ifndef GEODE_STATICS_shopTypeForItemID
		#define GEODE_STATICS_shopTypeForItemID
		GEODE_AS_STATIC_FUNCTION(shopTypeForItemID) 
	#endif

	#ifndef GEODE_STATICS_shouldAwardSecretKey
		#define GEODE_STATICS_shouldAwardSecretKey
		GEODE_AS_STATIC_FUNCTION(shouldAwardSecretKey) 
	#endif

	#ifndef GEODE_STATICS_starsForMapPack
		#define GEODE_STATICS_starsForMapPack
		GEODE_AS_STATIC_FUNCTION(starsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_storeChallenge
		#define GEODE_STATICS_storeChallenge
		GEODE_AS_STATIC_FUNCTION(storeChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeChallengeTime
		#define GEODE_STATICS_storeChallengeTime
		GEODE_AS_STATIC_FUNCTION(storeChallengeTime) 
	#endif

	#ifndef GEODE_STATICS_storeEventChest
		#define GEODE_STATICS_storeEventChest
		GEODE_AS_STATIC_FUNCTION(storeEventChest) 
	#endif

	#ifndef GEODE_STATICS_storeOnlineChest
		#define GEODE_STATICS_storeOnlineChest
		GEODE_AS_STATIC_FUNCTION(storeOnlineChest) 
	#endif

	#ifndef GEODE_STATICS_storePendingUserCoin
		#define GEODE_STATICS_storePendingUserCoin
		GEODE_AS_STATIC_FUNCTION(storePendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_storeQueuedChallenge
		#define GEODE_STATICS_storeQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(storeQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeRewardState
		#define GEODE_STATICS_storeRewardState
		GEODE_AS_STATIC_FUNCTION(storeRewardState) 
	#endif

	#ifndef GEODE_STATICS_storeSecondaryQueuedChallenge
		#define GEODE_STATICS_storeSecondaryQueuedChallenge
		GEODE_AS_STATIC_FUNCTION(storeSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_STATICS_storeSecretCoin
		#define GEODE_STATICS_storeSecretCoin
		GEODE_AS_STATIC_FUNCTION(storeSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_storeUserCoin
		#define GEODE_STATICS_storeUserCoin
		GEODE_AS_STATIC_FUNCTION(storeUserCoin) 
	#endif

	#ifndef GEODE_STATICS_tempClear
		#define GEODE_STATICS_tempClear
		GEODE_AS_STATIC_FUNCTION(tempClear) 
	#endif

	#ifndef GEODE_STATICS_toggleEnableItem
		#define GEODE_STATICS_toggleEnableItem
		GEODE_AS_STATIC_FUNCTION(toggleEnableItem) 
	#endif

	#ifndef GEODE_STATICS_tryFixPathBug
		#define GEODE_STATICS_tryFixPathBug
		GEODE_AS_STATIC_FUNCTION(tryFixPathBug) 
	#endif

	#ifndef GEODE_STATICS_trySelectActivePath
		#define GEODE_STATICS_trySelectActivePath
		GEODE_AS_STATIC_FUNCTION(trySelectActivePath) 
	#endif

	#ifndef GEODE_STATICS_uncompleteLevel
		#define GEODE_STATICS_uncompleteLevel
		GEODE_AS_STATIC_FUNCTION(uncompleteLevel) 
	#endif

	#ifndef GEODE_STATICS_unlockGauntlet
		#define GEODE_STATICS_unlockGauntlet
		GEODE_AS_STATIC_FUNCTION(unlockGauntlet) 
	#endif

	#ifndef GEODE_STATICS_unlockGauntletChest
		#define GEODE_STATICS_unlockGauntletChest
		GEODE_AS_STATIC_FUNCTION(unlockGauntletChest) 
	#endif

	#ifndef GEODE_STATICS_unlockGoldChest
		#define GEODE_STATICS_unlockGoldChest
		GEODE_AS_STATIC_FUNCTION(unlockGoldChest) 
	#endif

	#ifndef GEODE_STATICS_unlockOnlineChest
		#define GEODE_STATICS_unlockOnlineChest
		GEODE_AS_STATIC_FUNCTION(unlockOnlineChest) 
	#endif

	#ifndef GEODE_STATICS_unlockPathChest
		#define GEODE_STATICS_unlockPathChest
		GEODE_AS_STATIC_FUNCTION(unlockPathChest) 
	#endif

	#ifndef GEODE_STATICS_unlockSecretChest
		#define GEODE_STATICS_unlockSecretChest
		GEODE_AS_STATIC_FUNCTION(unlockSecretChest) 
	#endif

	#ifndef GEODE_STATICS_unlockSpecialChest
		#define GEODE_STATICS_unlockSpecialChest
		GEODE_AS_STATIC_FUNCTION(unlockSpecialChest) 
	#endif

	#ifndef GEODE_STATICS_updateActivePath
		#define GEODE_STATICS_updateActivePath
		GEODE_AS_STATIC_FUNCTION(updateActivePath) 
	#endif

	#ifndef GEODE_STATICS_usernameForAccountID
		#define GEODE_STATICS_usernameForAccountID
		GEODE_AS_STATIC_FUNCTION(usernameForAccountID) 
	#endif

	#ifndef GEODE_STATICS_verifyPathAchievements
		#define GEODE_STATICS_verifyPathAchievements
		GEODE_AS_STATIC_FUNCTION(verifyPathAchievements) 
	#endif

	#ifndef GEODE_STATICS_verifyUserCoins
		#define GEODE_STATICS_verifyUserCoins
		GEODE_AS_STATIC_FUNCTION(verifyUserCoins) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountIDForIcon
		#define GEODE_CONCEPT_CHECK_accountIDForIcon
		GEODE_CONCEPT_FUNCTION_CHECK(accountIDForIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSimpleSpecialChestReward
		#define GEODE_CONCEPT_CHECK_addSimpleSpecialChestReward
		GEODE_CONCEPT_FUNCTION_CHECK(addSimpleSpecialChestReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpecialRewardDescription
		#define GEODE_CONCEPT_CHECK_addSpecialRewardDescription
		GEODE_CONCEPT_FUNCTION_CHECK(addSpecialRewardDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addStoreItem
		#define GEODE_CONCEPT_CHECK_addStoreItem
		GEODE_CONCEPT_FUNCTION_CHECK(addStoreItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areChallengesLoaded
		#define GEODE_CONCEPT_CHECK_areChallengesLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(areChallengesLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areRewardsLoaded
		#define GEODE_CONCEPT_CHECK_areRewardsLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(areRewardsLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardCurrencyForLevel
		#define GEODE_CONCEPT_CHECK_awardCurrencyForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(awardCurrencyForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardDiamondsForLevel
		#define GEODE_CONCEPT_CHECK_awardDiamondsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(awardDiamondsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardOldSpecialStats
		#define GEODE_CONCEPT_CHECK_awardOldSpecialStats
		GEODE_CONCEPT_FUNCTION_CHECK(awardOldSpecialStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_awardSecretKey
		#define GEODE_CONCEPT_CHECK_awardSecretKey
		GEODE_CONCEPT_FUNCTION_CHECK(awardSecretKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canItemBeUnlocked
		#define GEODE_CONCEPT_CHECK_canItemBeUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(canItemBeUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkAchievement
		#define GEODE_CONCEPT_CHECK_checkAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(checkAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCoinAchievement
		#define GEODE_CONCEPT_CHECK_checkCoinAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(checkCoinAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCoinsForLevel
		#define GEODE_CONCEPT_CHECK_checkCoinsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimListReward
		#define GEODE_CONCEPT_CHECK_claimListReward
		GEODE_CONCEPT_FUNCTION_CHECK(claimListReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectReward
		#define GEODE_CONCEPT_CHECK_collectReward
		GEODE_CONCEPT_FUNCTION_CHECK(collectReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectVideoReward
		#define GEODE_CONCEPT_CHECK_collectVideoReward
		GEODE_CONCEPT_FUNCTION_CHECK(collectVideoReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedChallenge
		#define GEODE_CONCEPT_CHECK_completedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(completedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedDailyLevel
		#define GEODE_CONCEPT_CHECK_completedDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedDemonLevel
		#define GEODE_CONCEPT_CHECK_completedDemonLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedDemonLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedLevel
		#define GEODE_CONCEPT_CHECK_completedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedMapPack
		#define GEODE_CONCEPT_CHECK_completedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(completedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedStarLevel
		#define GEODE_CONCEPT_CHECK_completedStarLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedStarLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countSecretChests
		#define GEODE_CONCEPT_CHECK_countSecretChests
		GEODE_CONCEPT_FUNCTION_CHECK(countSecretChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countUnlockedSecretChests
		#define GEODE_CONCEPT_CHECK_countUnlockedSecretChests
		GEODE_CONCEPT_FUNCTION_CHECK(countUnlockedSecretChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createReward
		#define GEODE_CONCEPT_CHECK_createReward
		GEODE_CONCEPT_FUNCTION_CHECK(createReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSecretChestItems
		#define GEODE_CONCEPT_CHECK_createSecretChestItems
		GEODE_CONCEPT_FUNCTION_CHECK(createSecretChestItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSecretChestRewards
		#define GEODE_CONCEPT_CHECK_createSecretChestRewards
		GEODE_CONCEPT_FUNCTION_CHECK(createSecretChestRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpecialChestItems
		#define GEODE_CONCEPT_CHECK_createSpecialChestItems
		GEODE_CONCEPT_FUNCTION_CHECK(createSpecialChestItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStoreItems
		#define GEODE_CONCEPT_CHECK_createStoreItems
		GEODE_CONCEPT_FUNCTION_CHECK(createStoreItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateItemUnlockableData
		#define GEODE_CONCEPT_CHECK_generateItemUnlockableData
		GEODE_CONCEPT_FUNCTION_CHECK(generateItemUnlockableData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAwardedCurrencyForLevel
		#define GEODE_CONCEPT_CHECK_getAwardedCurrencyForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getAwardedCurrencyForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAwardedDiamondsForLevel
		#define GEODE_CONCEPT_CHECK_getAwardedDiamondsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getAwardedDiamondsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseCurrency
		#define GEODE_CONCEPT_CHECK_getBaseCurrency
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseCurrency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseCurrencyForLevel
		#define GEODE_CONCEPT_CHECK_getBaseCurrencyForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseCurrencyForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseDiamonds
		#define GEODE_CONCEPT_CHECK_getBaseDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBonusDiamonds
		#define GEODE_CONCEPT_CHECK_getBonusDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(getBonusDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChallenge
		#define GEODE_CONCEPT_CHECK_getChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(getChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChallengeKey
		#define GEODE_CONCEPT_CHECK_getChallengeKey
		GEODE_CONCEPT_FUNCTION_CHECK(getChallengeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCollectedCoinsForLevel
		#define GEODE_CONCEPT_CHECK_getCollectedCoinsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedMapPacks
		#define GEODE_CONCEPT_CHECK_getCompletedMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrencyKey
		#define GEODE_CONCEPT_CHECK_getCurrencyKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrencyKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyLevelKey
		#define GEODE_CONCEPT_CHECK_getDailyLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemonLevelKey
		#define GEODE_CONCEPT_CHECK_getDemonLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDemonLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEventRewardKey
		#define GEODE_CONCEPT_CHECK_getEventRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getEventRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletRewardKey
		#define GEODE_CONCEPT_CHECK_getGauntletRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemKey
		#define GEODE_CONCEPT_CHECK_getItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemUnlockState
		#define GEODE_CONCEPT_CHECK_getItemUnlockState
		GEODE_CONCEPT_FUNCTION_CHECK(getItemUnlockState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemUnlockStateLite
		#define GEODE_CONCEPT_CHECK_getItemUnlockStateLite
		GEODE_CONCEPT_FUNCTION_CHECK(getItemUnlockStateLite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelKey
		#define GEODE_CONCEPT_CHECK_getLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListRewardKey
		#define GEODE_CONCEPT_CHECK_getListRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getListRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPackKey
		#define GEODE_CONCEPT_CHECK_getMapPackKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPackKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextGoldChestID
		#define GEODE_CONCEPT_CHECK_getNextGoldChestID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextGoldChestID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextVideoAdReward
		#define GEODE_CONCEPT_CHECK_getNextVideoAdReward
		GEODE_CONCEPT_FUNCTION_CHECK(getNextVideoAdReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPathRewardKey
		#define GEODE_CONCEPT_CHECK_getPathRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getPathRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getQueuedChallenge
		#define GEODE_CONCEPT_CHECK_getQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(getQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardForSecretChest
		#define GEODE_CONCEPT_CHECK_getRewardForSecretChest
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardForSecretChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardForSpecialChest
		#define GEODE_CONCEPT_CHECK_getRewardForSpecialChest
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardForSpecialChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardItem
		#define GEODE_CONCEPT_CHECK_getRewardItem
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardKey
		#define GEODE_CONCEPT_CHECK_getRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryQueuedChallenge
		#define GEODE_CONCEPT_CHECK_getSecondaryQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecretChestForItem
		#define GEODE_CONCEPT_CHECK_getSecretChestForItem
		GEODE_CONCEPT_FUNCTION_CHECK(getSecretChestForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecretCoinKey
		#define GEODE_CONCEPT_CHECK_getSecretCoinKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSecretCoinKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecretOnlineRewardKey
		#define GEODE_CONCEPT_CHECK_getSecretOnlineRewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSecretOnlineRewardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialChestKeyForItem
		#define GEODE_CONCEPT_CHECK_getSpecialChestKeyForItem
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialChestKeyForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialRewardDescription
		#define GEODE_CONCEPT_CHECK_getSpecialRewardDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialRewardDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialUnlockDescription
		#define GEODE_CONCEPT_CHECK_getSpecialUnlockDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialUnlockDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarLevelKey
		#define GEODE_CONCEPT_CHECK_getStarLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStarLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStat
		#define GEODE_CONCEPT_CHECK_getStat
		GEODE_CONCEPT_FUNCTION_CHECK(getStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStatFromKey
		#define GEODE_CONCEPT_CHECK_getStatFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStatFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoreItem
		#define GEODE_CONCEPT_CHECK_getStoreItem
		GEODE_CONCEPT_FUNCTION_CHECK(getStoreItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalCollectedCurrency
		#define GEODE_CONCEPT_CHECK_getTotalCollectedCurrency
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalCollectedCurrency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalCollectedDiamonds
		#define GEODE_CONCEPT_CHECK_getTotalCollectedDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalCollectedDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasClaimedListReward
		#define GEODE_CONCEPT_CHECK_hasClaimedListReward
		GEODE_CONCEPT_FUNCTION_CHECK(hasClaimedListReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedChallenge
		#define GEODE_CONCEPT_CHECK_hasCompletedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedDailyLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedDemonLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedDemonLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedGauntletLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedGauntletLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedGauntletLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMainLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedMainLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMainLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMapPack
		#define GEODE_CONCEPT_CHECK_hasCompletedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedOnlineLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedOnlineLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedStarLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedStarLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasPendingUserCoin
		#define GEODE_CONCEPT_CHECK_hasPendingUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRewardBeenCollected
		#define GEODE_CONCEPT_CHECK_hasRewardBeenCollected
		GEODE_CONCEPT_FUNCTION_CHECK(hasRewardBeenCollected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSecretCoin
		#define GEODE_CONCEPT_CHECK_hasSecretCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasSecretCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUserCoin
		#define GEODE_CONCEPT_CHECK_hasUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementActivePath
		#define GEODE_CONCEPT_CHECK_incrementActivePath
		GEODE_CONCEPT_FUNCTION_CHECK(incrementActivePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementChallenge
		#define GEODE_CONCEPT_CHECK_incrementChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(incrementChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementStat
		#define GEODE_CONCEPT_CHECK_incrementStat
		GEODE_CONCEPT_FUNCTION_CHECK(incrementStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGauntletChestUnlocked
		#define GEODE_CONCEPT_CHECK_isGauntletChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isGauntletChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGauntletUnlocked
		#define GEODE_CONCEPT_CHECK_isGauntletUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isGauntletUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isItemEnabled
		#define GEODE_CONCEPT_CHECK_isItemEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isItemEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isItemUnlocked
		#define GEODE_CONCEPT_CHECK_isItemUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isItemUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPathChestUnlocked
		#define GEODE_CONCEPT_CHECK_isPathChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isPathChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPathUnlocked
		#define GEODE_CONCEPT_CHECK_isPathUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isPathUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecretChestUnlocked
		#define GEODE_CONCEPT_CHECK_isSecretChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isSecretChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecretCoin
		#define GEODE_CONCEPT_CHECK_isSecretCoin
		GEODE_CONCEPT_FUNCTION_CHECK(isSecretCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecretCoinValid
		#define GEODE_CONCEPT_CHECK_isSecretCoinValid
		GEODE_CONCEPT_FUNCTION_CHECK(isSecretCoinValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialChestLiteUnlockable
		#define GEODE_CONCEPT_CHECK_isSpecialChestLiteUnlockable
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialChestLiteUnlockable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialChestUnlocked
		#define GEODE_CONCEPT_CHECK_isSpecialChestUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialChestUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isStoreItemUnlocked
		#define GEODE_CONCEPT_CHECK_isStoreItemUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isStoreItemUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyCostForSecretChest
		#define GEODE_CONCEPT_CHECK_keyCostForSecretChest
		GEODE_CONCEPT_FUNCTION_CHECK(keyCostForSecretChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_linkSpecialChestUnlocks
		#define GEODE_CONCEPT_CHECK_linkSpecialChestUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(linkSpecialChestUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logCoins
		#define GEODE_CONCEPT_CHECK_logCoins
		GEODE_CONCEPT_FUNCTION_CHECK(logCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsCompletedAndClaimed
		#define GEODE_CONCEPT_CHECK_markLevelAsCompletedAndClaimed
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postLoadGameStats
		#define GEODE_CONCEPT_CHECK_postLoadGameStats
		GEODE_CONCEPT_FUNCTION_CHECK(postLoadGameStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preProcessReward
		#define GEODE_CONCEPT_CHECK_preProcessReward
		GEODE_CONCEPT_FUNCTION_CHECK(preProcessReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSaveGameStats
		#define GEODE_CONCEPT_CHECK_preSaveGameStats
		GEODE_CONCEPT_FUNCTION_CHECK(preSaveGameStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processChallengeQueue
		#define GEODE_CONCEPT_CHECK_processChallengeQueue
		GEODE_CONCEPT_FUNCTION_CHECK(processChallengeQueue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processOnlineChests
		#define GEODE_CONCEPT_CHECK_processOnlineChests
		GEODE_CONCEPT_FUNCTION_CHECK(processOnlineChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purchaseItem
		#define GEODE_CONCEPT_CHECK_purchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(purchaseItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountSpecialStats
		#define GEODE_CONCEPT_CHECK_recountSpecialStats
		GEODE_CONCEPT_FUNCTION_CHECK(recountSpecialStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountUserCoins
		#define GEODE_CONCEPT_CHECK_recountUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(recountUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerRewardsFromItem
		#define GEODE_CONCEPT_CHECK_registerRewardsFromItem
		GEODE_CONCEPT_FUNCTION_CHECK(registerRewardsFromItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChallenge
		#define GEODE_CONCEPT_CHECK_removeChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(removeChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeErrorFromSpecialChests
		#define GEODE_CONCEPT_CHECK_removeErrorFromSpecialChests
		GEODE_CONCEPT_FUNCTION_CHECK(removeErrorFromSpecialChests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeQueuedChallenge
		#define GEODE_CONCEPT_CHECK_removeQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(removeQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeQueuedSecondaryChallenge
		#define GEODE_CONCEPT_CHECK_removeQueuedSecondaryChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(removeQueuedSecondaryChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetChallengeTimer
		#define GEODE_CONCEPT_CHECK_resetChallengeTimer
		GEODE_CONCEPT_FUNCTION_CHECK(resetChallengeTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPreSync
		#define GEODE_CONCEPT_CHECK_resetPreSync
		GEODE_CONCEPT_FUNCTION_CHECK(resetPreSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpecialChest
		#define GEODE_CONCEPT_CHECK_resetSpecialChest
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpecialChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpecialStatAchievements
		#define GEODE_CONCEPT_CHECK_resetSpecialStatAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpecialStatAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUserCoins
		#define GEODE_CONCEPT_CHECK_resetUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(resetUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restorePostSync
		#define GEODE_CONCEPT_CHECK_restorePostSync
		GEODE_CONCEPT_FUNCTION_CHECK(restorePostSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAwardedBonusKeys
		#define GEODE_CONCEPT_CHECK_setAwardedBonusKeys
		GEODE_CONCEPT_FUNCTION_CHECK(setAwardedBonusKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStarsForMapPack
		#define GEODE_CONCEPT_CHECK_setStarsForMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(setStarsForMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStat
		#define GEODE_CONCEPT_CHECK_setStat
		GEODE_CONCEPT_FUNCTION_CHECK(setStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStatIfHigher
		#define GEODE_CONCEPT_CHECK_setStatIfHigher
		GEODE_CONCEPT_FUNCTION_CHECK(setStatIfHigher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupIconCredits
		#define GEODE_CONCEPT_CHECK_setupIconCredits
		GEODE_CONCEPT_FUNCTION_CHECK(setupIconCredits) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shopTypeForItemID
		#define GEODE_CONCEPT_CHECK_shopTypeForItemID
		GEODE_CONCEPT_FUNCTION_CHECK(shopTypeForItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldAwardSecretKey
		#define GEODE_CONCEPT_CHECK_shouldAwardSecretKey
		GEODE_CONCEPT_FUNCTION_CHECK(shouldAwardSecretKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_starsForMapPack
		#define GEODE_CONCEPT_CHECK_starsForMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(starsForMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeChallenge
		#define GEODE_CONCEPT_CHECK_storeChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(storeChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeChallengeTime
		#define GEODE_CONCEPT_CHECK_storeChallengeTime
		GEODE_CONCEPT_FUNCTION_CHECK(storeChallengeTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeEventChest
		#define GEODE_CONCEPT_CHECK_storeEventChest
		GEODE_CONCEPT_FUNCTION_CHECK(storeEventChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeOnlineChest
		#define GEODE_CONCEPT_CHECK_storeOnlineChest
		GEODE_CONCEPT_FUNCTION_CHECK(storeOnlineChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storePendingUserCoin
		#define GEODE_CONCEPT_CHECK_storePendingUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storePendingUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeQueuedChallenge
		#define GEODE_CONCEPT_CHECK_storeQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(storeQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeRewardState
		#define GEODE_CONCEPT_CHECK_storeRewardState
		GEODE_CONCEPT_FUNCTION_CHECK(storeRewardState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSecondaryQueuedChallenge
		#define GEODE_CONCEPT_CHECK_storeSecondaryQueuedChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(storeSecondaryQueuedChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSecretCoin
		#define GEODE_CONCEPT_CHECK_storeSecretCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storeSecretCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserCoin
		#define GEODE_CONCEPT_CHECK_storeUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tempClear
		#define GEODE_CONCEPT_CHECK_tempClear
		GEODE_CONCEPT_FUNCTION_CHECK(tempClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEnableItem
		#define GEODE_CONCEPT_CHECK_toggleEnableItem
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEnableItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryFixPathBug
		#define GEODE_CONCEPT_CHECK_tryFixPathBug
		GEODE_CONCEPT_FUNCTION_CHECK(tryFixPathBug) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySelectActivePath
		#define GEODE_CONCEPT_CHECK_trySelectActivePath
		GEODE_CONCEPT_FUNCTION_CHECK(trySelectActivePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uncompleteLevel
		#define GEODE_CONCEPT_CHECK_uncompleteLevel
		GEODE_CONCEPT_FUNCTION_CHECK(uncompleteLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockGauntlet
		#define GEODE_CONCEPT_CHECK_unlockGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(unlockGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockGauntletChest
		#define GEODE_CONCEPT_CHECK_unlockGauntletChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockGauntletChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockGoldChest
		#define GEODE_CONCEPT_CHECK_unlockGoldChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockGoldChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockOnlineChest
		#define GEODE_CONCEPT_CHECK_unlockOnlineChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockOnlineChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockPathChest
		#define GEODE_CONCEPT_CHECK_unlockPathChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockPathChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockSecretChest
		#define GEODE_CONCEPT_CHECK_unlockSecretChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockSecretChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockSpecialChest
		#define GEODE_CONCEPT_CHECK_unlockSpecialChest
		GEODE_CONCEPT_FUNCTION_CHECK(unlockSpecialChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActivePath
		#define GEODE_CONCEPT_CHECK_updateActivePath
		GEODE_CONCEPT_FUNCTION_CHECK(updateActivePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usernameForAccountID
		#define GEODE_CONCEPT_CHECK_usernameForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(usernameForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyPathAchievements
		#define GEODE_CONCEPT_CHECK_verifyPathAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(verifyPathAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyUserCoins
		#define GEODE_CONCEPT_CHECK_verifyUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(verifyUserCoins) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameStatsManager> : ModifyBase<ModifyDerive<Der, GameStatsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameStatsManager>>;
		using ModifyBase<ModifyDerive<Der, GameStatsManager>>::ModifyBase;
		using Base = GameStatsManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameStatsManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::sharedState)), Default, GameStatsManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameStatsManager::init)), Default, GameStatsManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameStatsManager::accountIDForIcon)), Default, GameStatsManager, accountIDForIcon, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager27addSimpleSpecialChestRewardESs10UnlockTypeib")), Default, GameStatsManager, addSimpleSpecialChestReward, gd::string, UnlockType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager27addSpecialRewardDescriptionESsSs")), Default, GameStatsManager, addSpecialRewardDescription, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int, ShopType>::func(&GameStatsManager::addStoreItem)), Default, GameStatsManager, addStoreItem, int, int, int, int, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::areChallengesLoaded)), Default, GameStatsManager, areChallengesLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::areRewardsLoaded)), Default, GameStatsManager, areRewardsLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::awardCurrencyForLevel)), Default, GameStatsManager, awardCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::awardDiamondsForLevel)), Default, GameStatsManager, awardDiamondsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::awardOldSpecialStats)), Default, GameStatsManager, awardOldSpecialStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::awardSecretKey)), Default, GameStatsManager, awardSecretKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameStatsManager::canItemBeUnlocked)), Default, GameStatsManager, canItemBeUnlocked, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::checkAchievement)), Default, GameStatsManager, checkAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::checkCoinAchievement)), Default, GameStatsManager, checkCoinAchievement, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::checkCoinsForLevel)), Default, GameStatsManager, checkCoinsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameStatsManager::claimListReward)), Default, GameStatsManager, claimListReward, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardType, GJRewardItem*>::func(&GameStatsManager::collectReward)), Default, GameStatsManager, collectReward, GJRewardType, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::collectVideoReward)), Default, GameStatsManager, collectVideoReward, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJChallengeItem*>::func(&GameStatsManager::completedChallenge)), Default, GameStatsManager, completedChallenge, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::completedDailyLevel)), Default, GameStatsManager, completedDailyLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::completedDemonLevel)), Default, GameStatsManager, completedDemonLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::completedLevel)), Default, GameStatsManager, completedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJMapPack*>::func(&GameStatsManager::completedMapPack)), Default, GameStatsManager, completedMapPack, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::completedStarLevel)), Default, GameStatsManager, completedStarLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardType>::func(&GameStatsManager::countSecretChests)), Default, GameStatsManager, countSecretChests, GJRewardType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardType>::func(&GameStatsManager::countUnlockedSecretChests)), Default, GameStatsManager, countUnlockedSecretChests, GJRewardType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager12createRewardE12GJRewardTypeiSs")), Default, GameStatsManager, createReward, GJRewardType, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::createSecretChestItems)), Default, GameStatsManager, createSecretChestItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::createSecretChestRewards)), Default, GameStatsManager, createSecretChestRewards, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::createSpecialChestItems)), Default, GameStatsManager, createSpecialChestItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::createStoreItems)), Default, GameStatsManager, createStoreItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&GameStatsManager::dataLoaded)), Default, GameStatsManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&GameStatsManager::encodeDataTo)), Default, GameStatsManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::firstSetup)), Default, GameStatsManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::generateItemUnlockableData)), Default, GameStatsManager, generateItemUnlockableData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getAwardedCurrencyForLevel)), Default, GameStatsManager, getAwardedCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getAwardedDiamondsForLevel)), Default, GameStatsManager, getAwardedDiamondsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, int>::func(&GameStatsManager::getBaseCurrency)), Default, GameStatsManager, getBaseCurrency, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getBaseCurrencyForLevel)), Default, GameStatsManager, getBaseCurrencyForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getBaseDiamonds)), Default, GameStatsManager, getBaseDiamonds, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getBonusDiamonds)), Default, GameStatsManager, getBonusDiamonds, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getChallenge)), Default, GameStatsManager, getChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJChallengeItem*>::func(&GameStatsManager::getChallengeKey)), Default, GameStatsManager, getChallengeKey, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getCollectedCoinsForLevel)), Default, GameStatsManager, getCollectedCoinsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::getCompletedMapPacks)), Default, GameStatsManager, getCompletedMapPacks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getCurrencyKey)), Default, GameStatsManager, getCurrencyKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getDailyLevelKey)), Default, GameStatsManager, getDailyLevelKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getDemonLevelKey)), Default, GameStatsManager, getDemonLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getEventRewardKey)), Default, GameStatsManager, getEventRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getGauntletRewardKey)), Default, GameStatsManager, getGauntletRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameStatsManager::getItemKey)), Default, GameStatsManager, getItemKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameStatsManager::getItemUnlockState)), Default, GameStatsManager, getItemUnlockState, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameStatsManager::getItemUnlockStateLite)), Default, GameStatsManager, getItemUnlockStateLite, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getLevelKey)), Default, GameStatsManager, getLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, bool, bool, bool>::func(&GameStatsManager::getLevelKey)), Default, GameStatsManager, getLevelKey, int, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameStatsManager::getListRewardKey)), Default, GameStatsManager, getListRewardKey, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getMapPackKey)), Default, GameStatsManager, getMapPackKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::getNextGoldChestID)), Default, GameStatsManager, getNextGoldChestID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::getNextVideoAdReward)), Default, GameStatsManager, getNextVideoAdReward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getPathRewardKey)), Default, GameStatsManager, getPathRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getQueuedChallenge)), Default, GameStatsManager, getQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getRewardForSecretChest)), Default, GameStatsManager, getRewardForSecretChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager24getRewardForSpecialChestESs")), Default, GameStatsManager, getRewardForSpecialChest, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardType>::func(&GameStatsManager::getRewardItem)), Default, GameStatsManager, getRewardItem, GJRewardType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardType, int>::func(&GameStatsManager::getRewardKey)), Default, GameStatsManager, getRewardKey, GJRewardType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getSecondaryQueuedChallenge)), Default, GameStatsManager, getSecondaryQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameStatsManager::getSecretChestForItem)), Default, GameStatsManager, getSecretChestForItem, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::getSecretCoinKey)), Default, GameStatsManager, getSecretCoinKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getSecretOnlineRewardKey)), Default, GameStatsManager, getSecretOnlineRewardKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameStatsManager::getSpecialChestKeyForItem)), Default, GameStatsManager, getSpecialChestKeyForItem, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager27getSpecialRewardDescriptionESsb")), Default, GameStatsManager, getSpecialRewardDescription, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType, bool>::func(&GameStatsManager::getSpecialUnlockDescription)), Default, GameStatsManager, getSpecialUnlockDescription, int, UnlockType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::getStarLevelKey)), Default, GameStatsManager, getStarLevelKey, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::getStat)), Default, GameStatsManager, getStat, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<StatKey>::func(&GameStatsManager::getStatFromKey)), Default, GameStatsManager, getStatFromKey, StatKey)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::getStoreItem)), Default, GameStatsManager, getStoreItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameStatsManager::getStoreItem)), Default, GameStatsManager, getStoreItem, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::getTotalCollectedCurrency)), Default, GameStatsManager, getTotalCollectedCurrency, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::getTotalCollectedDiamonds)), Default, GameStatsManager, getTotalCollectedDiamonds, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameStatsManager::hasClaimedListReward)), Default, GameStatsManager, hasClaimedListReward, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJChallengeItem*>::func(&GameStatsManager::hasCompletedChallenge)), Default, GameStatsManager, hasCompletedChallenge, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::hasCompletedDailyLevel)), Default, GameStatsManager, hasCompletedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::hasCompletedDemonLevel)), Default, GameStatsManager, hasCompletedDemonLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::hasCompletedGauntletLevel)), Default, GameStatsManager, hasCompletedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::hasCompletedLevel)), Default, GameStatsManager, hasCompletedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::hasCompletedMainLevel)), Default, GameStatsManager, hasCompletedMainLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::hasCompletedMapPack)), Default, GameStatsManager, hasCompletedMapPack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::hasCompletedOnlineLevel)), Default, GameStatsManager, hasCompletedOnlineLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::hasCompletedStarLevel)), Default, GameStatsManager, hasCompletedStarLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::hasPendingUserCoin)), Default, GameStatsManager, hasPendingUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardType, int>::func(&GameStatsManager::hasRewardBeenCollected)), Default, GameStatsManager, hasRewardBeenCollected, GJRewardType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::hasSecretCoin)), Default, GameStatsManager, hasSecretCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::hasUserCoin)), Default, GameStatsManager, hasUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::incrementActivePath)), Default, GameStatsManager, incrementActivePath, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJChallengeType, int>::func(&GameStatsManager::incrementChallenge)), Default, GameStatsManager, incrementChallenge, GJChallengeType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::incrementStat)), Default, GameStatsManager, incrementStat, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameStatsManager::incrementStat)), Default, GameStatsManager, incrementStat, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::isGauntletChestUnlocked)), Default, GameStatsManager, isGauntletChestUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::isGauntletUnlocked)), Default, GameStatsManager, isGauntletUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int>::func(&GameStatsManager::isItemEnabled)), Default, GameStatsManager, isItemEnabled, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int>::func(&GameStatsManager::isItemUnlocked)), Default, GameStatsManager, isItemUnlocked, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::isPathChestUnlocked)), Default, GameStatsManager, isPathChestUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<StatKey>::func(&GameStatsManager::isPathUnlocked)), Default, GameStatsManager, isPathUnlocked, StatKey)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::isSecretChestUnlocked)), Default, GameStatsManager, isSecretChestUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager12isSecretCoinESs")), Default, GameStatsManager, isSecretCoin, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager17isSecretCoinValidESs")), Default, GameStatsManager, isSecretCoinValid, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager28isSpecialChestLiteUnlockableESs")), Default, GameStatsManager, isSpecialChestLiteUnlockable, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager22isSpecialChestUnlockedESs")), Default, GameStatsManager, isSpecialChestUnlocked, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::isStoreItemUnlocked)), Default, GameStatsManager, isStoreItemUnlocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::keyCostForSecretChest)), Default, GameStatsManager, keyCostForSecretChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager23linkSpecialChestUnlocksEP12GJRewardItemSs")), Default, GameStatsManager, linkSpecialChestUnlocks, GJRewardItem*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::logCoins)), Default, GameStatsManager, logCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::markLevelAsCompletedAndClaimed)), Default, GameStatsManager, markLevelAsCompletedAndClaimed, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::postLoadGameStats)), Default, GameStatsManager, postLoadGameStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardItem*>::func(&GameStatsManager::preProcessReward)), Default, GameStatsManager, preProcessReward, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::preSaveGameStats)), Default, GameStatsManager, preSaveGameStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::processChallengeQueue)), Default, GameStatsManager, processChallengeQueue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::processOnlineChests)), Default, GameStatsManager, processOnlineChests, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::purchaseItem)), Default, GameStatsManager, purchaseItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::recountSpecialStats)), Default, GameStatsManager, recountSpecialStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameStatsManager::recountUserCoins)), Default, GameStatsManager, recountUserCoins, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJRewardItem*>::func(&GameStatsManager::registerRewardsFromItem)), Default, GameStatsManager, registerRewardsFromItem, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::removeChallenge)), Default, GameStatsManager, removeChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::removeErrorFromSpecialChests)), Default, GameStatsManager, removeErrorFromSpecialChests, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::removeQueuedChallenge)), Default, GameStatsManager, removeQueuedChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::removeQueuedSecondaryChallenge)), Default, GameStatsManager, removeQueuedSecondaryChallenge, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::resetChallengeTimer)), Default, GameStatsManager, resetChallengeTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::resetPreSync)), Default, GameStatsManager, resetPreSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager17resetSpecialChestESs")), Default, GameStatsManager, resetSpecialChest, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::resetSpecialStatAchievements)), Default, GameStatsManager, resetSpecialStatAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::resetUserCoins)), Default, GameStatsManager, resetUserCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::restorePostSync)), Default, GameStatsManager, restorePostSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameStatsManager, setAwardedBonusKeys, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameStatsManager::setStarsForMapPack)), Default, GameStatsManager, setStarsForMapPack, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameStatsManager::setStat)), Default, GameStatsManager, setStat, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameStatsManager::setStatIfHigher)), Default, GameStatsManager, setStatIfHigher, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::setupIconCredits)), Default, GameStatsManager, setupIconCredits, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::shopTypeForItemID)), Default, GameStatsManager, shopTypeForItemID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::shouldAwardSecretKey)), Default, GameStatsManager, shouldAwardSecretKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::starsForMapPack)), Default, GameStatsManager, starsForMapPack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJChallengeItem*>::func(&GameStatsManager::storeChallenge)), Default, GameStatsManager, storeChallenge, int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::storeChallengeTime)), Default, GameStatsManager, storeChallengeTime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJRewardItem*>::func(&GameStatsManager::storeEventChest)), Default, GameStatsManager, storeEventChest, int, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager16storeOnlineChestESsP12GJRewardItem")), Default, GameStatsManager, storeOnlineChest, gd::string, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::storePendingUserCoin)), Default, GameStatsManager, storePendingUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJChallengeItem*>::func(&GameStatsManager::storeQueuedChallenge)), Default, GameStatsManager, storeQueuedChallenge, int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager16storeRewardStateE12GJRewardTypeiiSs")), Default, GameStatsManager, storeRewardState, GJRewardType, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJChallengeItem*>::func(&GameStatsManager::storeSecondaryQueuedChallenge)), Default, GameStatsManager, storeSecondaryQueuedChallenge, int, GJChallengeItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::storeSecretCoin)), Default, GameStatsManager, storeSecretCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameStatsManager::storeUserCoin)), Default, GameStatsManager, storeUserCoin, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::tempClear)), Default, GameStatsManager, tempClear, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int, bool>::func(&GameStatsManager::toggleEnableItem)), Default, GameStatsManager, toggleEnableItem, UnlockType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::tryFixPathBug)), Default, GameStatsManager, tryFixPathBug, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::trySelectActivePath)), Default, GameStatsManager, trySelectActivePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameStatsManager::uncompleteLevel)), Default, GameStatsManager, uncompleteLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::unlockGauntlet)), Default, GameStatsManager, unlockGauntlet, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::unlockGauntletChest)), Default, GameStatsManager, unlockGauntletChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::unlockGoldChest)), Default, GameStatsManager, unlockGoldChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager17unlockOnlineChestESs")), Default, GameStatsManager, unlockOnlineChest, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::unlockPathChest)), Default, GameStatsManager, unlockPathChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::unlockSecretChest)), Default, GameStatsManager, unlockSecretChest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameStatsManager18unlockSpecialChestESs")), Default, GameStatsManager, unlockSpecialChest, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<StatKey>::func(&GameStatsManager::updateActivePath)), Default, GameStatsManager, updateActivePath, StatKey)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameStatsManager::usernameForAccountID)), Default, GameStatsManager, usernameForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::verifyPathAchievements)), Default, GameStatsManager, verifyPathAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameStatsManager::verifyUserCoins)), Default, GameStatsManager, verifyUserCoins, )
		}
	};
}
