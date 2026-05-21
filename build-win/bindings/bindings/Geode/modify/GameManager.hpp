#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

	#ifndef GEODE_STATICS_activeIconForType
		#define GEODE_STATICS_activeIconForType
		GEODE_AS_STATIC_FUNCTION(activeIconForType) 
	#endif

	#ifndef GEODE_STATICS_addCustomAnimationFrame
		#define GEODE_STATICS_addCustomAnimationFrame
		GEODE_AS_STATIC_FUNCTION(addCustomAnimationFrame) 
	#endif

	#ifndef GEODE_STATICS_addGameAnimation
		#define GEODE_STATICS_addGameAnimation
		GEODE_AS_STATIC_FUNCTION(addGameAnimation) 
	#endif

	#ifndef GEODE_STATICS_addIconDelegate
		#define GEODE_STATICS_addIconDelegate
		GEODE_AS_STATIC_FUNCTION(addIconDelegate) 
	#endif

	#ifndef GEODE_STATICS_addNewCustomObject
		#define GEODE_STATICS_addNewCustomObject
		GEODE_AS_STATIC_FUNCTION(addNewCustomObject) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_canShowRewardedVideo
		#define GEODE_STATICS_canShowRewardedVideo
		GEODE_AS_STATIC_FUNCTION(canShowRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_checkSteamAchievementUnlock
		#define GEODE_STATICS_checkSteamAchievementUnlock
		GEODE_AS_STATIC_FUNCTION(checkSteamAchievementUnlock) 
	#endif

	#ifndef GEODE_STATICS_checkUsedIcons
		#define GEODE_STATICS_checkUsedIcons
		GEODE_AS_STATIC_FUNCTION(checkUsedIcons) 
	#endif

	#ifndef GEODE_STATICS_colorForIdx
		#define GEODE_STATICS_colorForIdx
		GEODE_AS_STATIC_FUNCTION(colorForIdx) 
	#endif

	#ifndef GEODE_STATICS_colorKey
		#define GEODE_STATICS_colorKey
		GEODE_AS_STATIC_FUNCTION(colorKey) 
	#endif

	#ifndef GEODE_STATICS_completedAchievement
		#define GEODE_STATICS_completedAchievement
		GEODE_AS_STATIC_FUNCTION(completedAchievement) 
	#endif

	#ifndef GEODE_STATICS_countForType
		#define GEODE_STATICS_countForType
		GEODE_AS_STATIC_FUNCTION(countForType) 
	#endif

	#ifndef GEODE_STATICS_dpadConfigToString
		#define GEODE_STATICS_dpadConfigToString
		GEODE_AS_STATIC_FUNCTION(dpadConfigToString) 
	#endif

	#ifndef GEODE_STATICS_fadeInMenuMusic
		#define GEODE_STATICS_fadeInMenuMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingBGAsync
		#define GEODE_STATICS_finishedLoadingBGAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingBGAsync) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingGAsync
		#define GEODE_STATICS_finishedLoadingGAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingGAsync) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingGAsync1
		#define GEODE_STATICS_finishedLoadingGAsync1
		GEODE_AS_STATIC_FUNCTION(finishedLoadingGAsync1) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingGAsync2
		#define GEODE_STATICS_finishedLoadingGAsync2
		GEODE_AS_STATIC_FUNCTION(finishedLoadingGAsync2) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingIconAsync
		#define GEODE_STATICS_finishedLoadingIconAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingIconAsync) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingMGAsync
		#define GEODE_STATICS_finishedLoadingMGAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingMGAsync) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingMGAsync1
		#define GEODE_STATICS_finishedLoadingMGAsync1
		GEODE_AS_STATIC_FUNCTION(finishedLoadingMGAsync1) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingMGAsync2
		#define GEODE_STATICS_finishedLoadingMGAsync2
		GEODE_AS_STATIC_FUNCTION(finishedLoadingMGAsync2) 
	#endif

	#ifndef GEODE_STATICS_generateSecretNumber
		#define GEODE_STATICS_generateSecretNumber
		GEODE_AS_STATIC_FUNCTION(generateSecretNumber) 
	#endif

	#ifndef GEODE_STATICS_getGameVariable
		#define GEODE_STATICS_getGameVariable
		GEODE_AS_STATIC_FUNCTION(getGameVariable) 
	#endif

	#ifndef GEODE_STATICS_getIntGameVariable
		#define GEODE_STATICS_getIntGameVariable
		GEODE_AS_STATIC_FUNCTION(getIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_getMenuMusicFile
		#define GEODE_STATICS_getMenuMusicFile
		GEODE_AS_STATIC_FUNCTION(getMenuMusicFile) 
	#endif

	#ifndef GEODE_STATICS_getUGV
		#define GEODE_STATICS_getUGV
		GEODE_AS_STATIC_FUNCTION(getUGV) 
	#endif

	#ifndef GEODE_STATICS_getUnlockForAchievement
		#define GEODE_STATICS_getUnlockForAchievement
		GEODE_AS_STATIC_FUNCTION(getUnlockForAchievement) 
	#endif

	#ifndef GEODE_STATICS_iconKey
		#define GEODE_STATICS_iconKey
		GEODE_AS_STATIC_FUNCTION(iconKey) 
	#endif

	#ifndef GEODE_STATICS_iconTypeToUnlockType
		#define GEODE_STATICS_iconTypeToUnlockType
		GEODE_AS_STATIC_FUNCTION(iconTypeToUnlockType) 
	#endif

	#ifndef GEODE_STATICS_isColorUnlocked
		#define GEODE_STATICS_isColorUnlocked
		GEODE_AS_STATIC_FUNCTION(isColorUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isIconUnlocked
		#define GEODE_STATICS_isIconUnlocked
		GEODE_AS_STATIC_FUNCTION(isIconUnlocked) 
	#endif

	#ifndef GEODE_STATICS_loadBackground
		#define GEODE_STATICS_loadBackground
		GEODE_AS_STATIC_FUNCTION(loadBackground) 
	#endif

	#ifndef GEODE_STATICS_loadDpadFromString
		#define GEODE_STATICS_loadDpadFromString
		GEODE_AS_STATIC_FUNCTION(loadDpadFromString) 
	#endif

	#ifndef GEODE_STATICS_loadDPadLayout
		#define GEODE_STATICS_loadDPadLayout
		GEODE_AS_STATIC_FUNCTION(loadDPadLayout) 
	#endif

	#ifndef GEODE_STATICS_loadFont
		#define GEODE_STATICS_loadFont
		GEODE_AS_STATIC_FUNCTION(loadFont) 
	#endif

	#ifndef GEODE_STATICS_loadGround
		#define GEODE_STATICS_loadGround
		GEODE_AS_STATIC_FUNCTION(loadGround) 
	#endif

	#ifndef GEODE_STATICS_loadIcon
		#define GEODE_STATICS_loadIcon
		GEODE_AS_STATIC_FUNCTION(loadIcon) 
	#endif

	#ifndef GEODE_STATICS_loadIconAsync
		#define GEODE_STATICS_loadIconAsync
		GEODE_AS_STATIC_FUNCTION(loadIconAsync) 
	#endif

	#ifndef GEODE_STATICS_loadMiddleground
		#define GEODE_STATICS_loadMiddleground
		GEODE_AS_STATIC_FUNCTION(loadMiddleground) 
	#endif

	#ifndef GEODE_STATICS_logLoadedIconInfo
		#define GEODE_STATICS_logLoadedIconInfo
		GEODE_AS_STATIC_FUNCTION(logLoadedIconInfo) 
	#endif

	#ifndef GEODE_STATICS_playMenuMusic
		#define GEODE_STATICS_playMenuMusic
		GEODE_AS_STATIC_FUNCTION(playMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_playSFXTrigger
		#define GEODE_STATICS_playSFXTrigger
		GEODE_AS_STATIC_FUNCTION(playSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_prepareDPadSettings
		#define GEODE_STATICS_prepareDPadSettings
		GEODE_AS_STATIC_FUNCTION(prepareDPadSettings) 
	#endif

	#ifndef GEODE_STATICS_recountUserStats
		#define GEODE_STATICS_recountUserStats
		GEODE_AS_STATIC_FUNCTION(recountUserStats) 
	#endif

	#ifndef GEODE_STATICS_reloadAll
		#define GEODE_STATICS_reloadAll
		GEODE_AS_STATIC_FUNCTION(reloadAll) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep2
		#define GEODE_STATICS_reloadAllStep2
		GEODE_AS_STATIC_FUNCTION(reloadAllStep2) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep3
		#define GEODE_STATICS_reloadAllStep3
		GEODE_AS_STATIC_FUNCTION(reloadAllStep3) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep4
		#define GEODE_STATICS_reloadAllStep4
		GEODE_AS_STATIC_FUNCTION(reloadAllStep4) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep5
		#define GEODE_STATICS_reloadAllStep5
		GEODE_AS_STATIC_FUNCTION(reloadAllStep5) 
	#endif

	#ifndef GEODE_STATICS_reloadMenu
		#define GEODE_STATICS_reloadMenu
		GEODE_AS_STATIC_FUNCTION(reloadMenu) 
	#endif

	#ifndef GEODE_STATICS_reorderKey
		#define GEODE_STATICS_reorderKey
		GEODE_AS_STATIC_FUNCTION(reorderKey) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_reportPercentageForLevel
		#define GEODE_STATICS_reportPercentageForLevel
		GEODE_AS_STATIC_FUNCTION(reportPercentageForLevel) 
	#endif

	#ifndef GEODE_STATICS_resetAchievement
		#define GEODE_STATICS_resetAchievement
		GEODE_AS_STATIC_FUNCTION(resetAchievement) 
	#endif

	#ifndef GEODE_STATICS_resetAllIcons
		#define GEODE_STATICS_resetAllIcons
		GEODE_AS_STATIC_FUNCTION(resetAllIcons) 
	#endif

	#ifndef GEODE_STATICS_resetCoinUnlocks
		#define GEODE_STATICS_resetCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(resetCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_resolutionForKey
		#define GEODE_STATICS_resolutionForKey
		GEODE_AS_STATIC_FUNCTION(resolutionForKey) 
	#endif

	#ifndef GEODE_STATICS_returnToLastScene
		#define GEODE_STATICS_returnToLastScene
		GEODE_AS_STATIC_FUNCTION(returnToLastScene) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoAdFinished
		#define GEODE_STATICS_rewardedVideoAdFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoAdFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoHidden
		#define GEODE_STATICS_rewardedVideoHidden
		GEODE_AS_STATIC_FUNCTION(rewardedVideoHidden) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoHiddenDelayed
		#define GEODE_STATICS_rewardedVideoHiddenDelayed
		GEODE_AS_STATIC_FUNCTION(rewardedVideoHiddenDelayed) 
	#endif

	#ifndef GEODE_STATICS_safePopScene
		#define GEODE_STATICS_safePopScene
		GEODE_AS_STATIC_FUNCTION(safePopScene) 
	#endif

	#ifndef GEODE_STATICS_saveAdTimer
		#define GEODE_STATICS_saveAdTimer
		GEODE_AS_STATIC_FUNCTION(saveAdTimer) 
	#endif

	#ifndef GEODE_STATICS_saveDPadLayout
		#define GEODE_STATICS_saveDPadLayout
		GEODE_AS_STATIC_FUNCTION(saveDPadLayout) 
	#endif

	#ifndef GEODE_STATICS_setGameVariable
		#define GEODE_STATICS_setGameVariable
		GEODE_AS_STATIC_FUNCTION(setGameVariable) 
	#endif

	#ifndef GEODE_STATICS_setIntGameVariable
		#define GEODE_STATICS_setIntGameVariable
		GEODE_AS_STATIC_FUNCTION(setIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_setUGV
		#define GEODE_STATICS_setUGV
		GEODE_AS_STATIC_FUNCTION(setUGV) 
	#endif

	#ifndef GEODE_STATICS_setupGameAnimations
		#define GEODE_STATICS_setupGameAnimations
		GEODE_AS_STATIC_FUNCTION(setupGameAnimations) 
	#endif

	#ifndef GEODE_STATICS_sheetNameForIcon
		#define GEODE_STATICS_sheetNameForIcon
		GEODE_AS_STATIC_FUNCTION(sheetNameForIcon) 
	#endif

	#ifndef GEODE_STATICS_stringForCustomObject
		#define GEODE_STATICS_stringForCustomObject
		GEODE_AS_STATIC_FUNCTION(stringForCustomObject) 
	#endif

	#ifndef GEODE_STATICS_switchCustomObjects
		#define GEODE_STATICS_switchCustomObjects
		GEODE_AS_STATIC_FUNCTION(switchCustomObjects) 
	#endif

	#ifndef GEODE_STATICS_toggleGameVariable
		#define GEODE_STATICS_toggleGameVariable
		GEODE_AS_STATIC_FUNCTION(toggleGameVariable) 
	#endif

	#ifndef GEODE_STATICS_tryCacheAd
		#define GEODE_STATICS_tryCacheAd
		GEODE_AS_STATIC_FUNCTION(tryCacheAd) 
	#endif

	#ifndef GEODE_STATICS_unloadIcon
		#define GEODE_STATICS_unloadIcon
		GEODE_AS_STATIC_FUNCTION(unloadIcon) 
	#endif

	#ifndef GEODE_STATICS_unloadIcons
		#define GEODE_STATICS_unloadIcons
		GEODE_AS_STATIC_FUNCTION(unloadIcons) 
	#endif

	#ifndef GEODE_STATICS_unlockTypeToIconType
		#define GEODE_STATICS_unlockTypeToIconType
		GEODE_AS_STATIC_FUNCTION(unlockTypeToIconType) 
	#endif

	#ifndef GEODE_STATICS_updateCustomFPS
		#define GEODE_STATICS_updateCustomFPS
		GEODE_AS_STATIC_FUNCTION(updateCustomFPS) 
	#endif

	#ifndef GEODE_STATICS_verifyCoinUnlocks
		#define GEODE_STATICS_verifyCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyCoinUnlocks) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountStatusChanged
		#define GEODE_CONCEPT_CHECK_accountStatusChanged
		GEODE_CONCEPT_FUNCTION_CHECK(accountStatusChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeIconForType
		#define GEODE_CONCEPT_CHECK_activeIconForType
		GEODE_CONCEPT_FUNCTION_CHECK(activeIconForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomAnimationFrame
		#define GEODE_CONCEPT_CHECK_addCustomAnimationFrame
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomAnimationFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDuplicateLastFrame
		#define GEODE_CONCEPT_CHECK_addDuplicateLastFrame
		GEODE_CONCEPT_FUNCTION_CHECK(addDuplicateLastFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGameAnimation
		#define GEODE_CONCEPT_CHECK_addGameAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(addGameAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addIconDelegate
		#define GEODE_CONCEPT_CHECK_addIconDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addIconDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewCustomObject
		#define GEODE_CONCEPT_CHECK_addNewCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(addNewCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGJLog
		#define GEODE_CONCEPT_CHECK_addToGJLog
		GEODE_CONCEPT_FUNCTION_CHECK(addToGJLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		#define GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		#define GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateBaseKeyForIcons
		#define GEODE_CONCEPT_CHECK_calculateBaseKeyForIcons
		GEODE_CONCEPT_FUNCTION_CHECK(calculateBaseKeyForIcons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canShowRewardedVideo
		#define GEODE_CONCEPT_CHECK_canShowRewardedVideo
		GEODE_CONCEPT_FUNCTION_CHECK(canShowRewardedVideo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSteamAchievementUnlock
		#define GEODE_CONCEPT_CHECK_checkSteamAchievementUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(checkSteamAchievementUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkUsedIcons
		#define GEODE_CONCEPT_CHECK_checkUsedIcons
		GEODE_CONCEPT_FUNCTION_CHECK(checkUsedIcons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimItemsResponse
		#define GEODE_CONCEPT_CHECK_claimItemsResponse
		GEODE_CONCEPT_FUNCTION_CHECK(claimItemsResponse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearGJLog
		#define GEODE_CONCEPT_CHECK_clearGJLog
		GEODE_CONCEPT_FUNCTION_CHECK(clearGJLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForIdx
		#define GEODE_CONCEPT_CHECK_colorForIdx
		GEODE_CONCEPT_FUNCTION_CHECK(colorForIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForPos
		#define GEODE_CONCEPT_CHECK_colorForPos
		GEODE_CONCEPT_FUNCTION_CHECK(colorForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorKey
		#define GEODE_CONCEPT_CHECK_colorKey
		GEODE_CONCEPT_FUNCTION_CHECK(colorKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedAchievement
		#define GEODE_CONCEPT_CHECK_completedAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(completedAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForType
		#define GEODE_CONCEPT_CHECK_countForType
		GEODE_CONCEPT_FUNCTION_CHECK(countForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_defaultFrameForAnimation
		#define GEODE_CONCEPT_CHECK_defaultFrameForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(defaultFrameForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didExitPlayscene
		#define GEODE_CONCEPT_CHECK_didExitPlayscene
		GEODE_CONCEPT_FUNCTION_CHECK(didExitPlayscene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doQuickSave
		#define GEODE_CONCEPT_CHECK_doQuickSave
		GEODE_CONCEPT_FUNCTION_CHECK(doQuickSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dpadConfigToString
		#define GEODE_CONCEPT_CHECK_dpadConfigToString
		GEODE_CONCEPT_FUNCTION_CHECK(dpadConfigToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_eventUnlockFeature
		#define GEODE_CONCEPT_CHECK_eventUnlockFeature
		GEODE_CONCEPT_FUNCTION_CHECK(eventUnlockFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMenuMusic
		#define GEODE_CONCEPT_CHECK_fadeInMenuMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMenuMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMusic
		#define GEODE_CONCEPT_CHECK_fadeInMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingBGAsync
		#define GEODE_CONCEPT_CHECK_finishedLoadingBGAsync
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingBGAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingGAsync
		#define GEODE_CONCEPT_CHECK_finishedLoadingGAsync
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingGAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingGAsync1
		#define GEODE_CONCEPT_CHECK_finishedLoadingGAsync1
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingGAsync1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingGAsync2
		#define GEODE_CONCEPT_CHECK_finishedLoadingGAsync2
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingGAsync2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingIconAsync
		#define GEODE_CONCEPT_CHECK_finishedLoadingIconAsync
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingIconAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingMGAsync
		#define GEODE_CONCEPT_CHECK_finishedLoadingMGAsync
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingMGAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingMGAsync1
		#define GEODE_CONCEPT_CHECK_finishedLoadingMGAsync1
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingMGAsync1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingMGAsync2
		#define GEODE_CONCEPT_CHECK_finishedLoadingMGAsync2
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingMGAsync2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followTwitch
		#define GEODE_CONCEPT_CHECK_followTwitch
		GEODE_CONCEPT_FUNCTION_CHECK(followTwitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followTwitter
		#define GEODE_CONCEPT_CHECK_followTwitter
		GEODE_CONCEPT_FUNCTION_CHECK(followTwitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_framesForAnimation
		#define GEODE_CONCEPT_CHECK_framesForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(framesForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_frameTimeForAnimation
		#define GEODE_CONCEPT_CHECK_frameTimeForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(frameTimeForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateSecretNumber
		#define GEODE_CONCEPT_CHECK_generateSecretNumber
		GEODE_CONCEPT_FUNCTION_CHECK(generateSecretNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGTexture
		#define GEODE_CONCEPT_CHECK_getBGTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getBGTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorLayer
		#define GEODE_CONCEPT_CHECK_getEditorLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontFile
		#define GEODE_CONCEPT_CHECK_getFontFile
		GEODE_CONCEPT_FUNCTION_CHECK(getFontFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontTexture
		#define GEODE_CONCEPT_CHECK_getFontTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getFontTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameLayer
		#define GEODE_CONCEPT_CHECK_getGameLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getGameLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameVariable
		#define GEODE_CONCEPT_CHECK_getGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(getGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameVariableDefault
		#define GEODE_CONCEPT_CHECK_getGameVariableDefault
		GEODE_CONCEPT_FUNCTION_CHECK(getGameVariableDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGTexture
		#define GEODE_CONCEPT_CHECK_getGTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getGTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIconRequestID
		#define GEODE_CONCEPT_CHECK_getIconRequestID
		GEODE_CONCEPT_FUNCTION_CHECK(getIconRequestID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntGameVariable
		#define GEODE_CONCEPT_CHECK_getIntGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(getIntGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntGameVariableDefault
		#define GEODE_CONCEPT_CHECK_getIntGameVariableDefault
		GEODE_CONCEPT_FUNCTION_CHECK(getIntGameVariableDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMenuMusicFile
		#define GEODE_CONCEPT_CHECK_getMenuMusicFile
		GEODE_CONCEPT_FUNCTION_CHECK(getMenuMusicFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMGTexture
		#define GEODE_CONCEPT_CHECK_getMGTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getMGTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextUniqueObjectKey
		#define GEODE_CONCEPT_CHECK_getNextUniqueObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextUniqueObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextUsedKey
		#define GEODE_CONCEPT_CHECK_getNextUsedKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextUsedKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrderedCustomObjectKeys
		#define GEODE_CONCEPT_CHECK_getOrderedCustomObjectKeys
		GEODE_CONCEPT_FUNCTION_CHECK(getOrderedCustomObjectKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerBall
		#define GEODE_CONCEPT_CHECK_getPlayerBall
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerBall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerBird
		#define GEODE_CONCEPT_CHECK_getPlayerBird
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerBird) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerColor
		#define GEODE_CONCEPT_CHECK_getPlayerColor
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerColor2
		#define GEODE_CONCEPT_CHECK_getPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerDart
		#define GEODE_CONCEPT_CHECK_getPlayerDart
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerDart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerDeathEffect
		#define GEODE_CONCEPT_CHECK_getPlayerDeathEffect
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerDeathEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerFrame
		#define GEODE_CONCEPT_CHECK_getPlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerGlow
		#define GEODE_CONCEPT_CHECK_getPlayerGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerGlowColor
		#define GEODE_CONCEPT_CHECK_getPlayerGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerJetpack
		#define GEODE_CONCEPT_CHECK_getPlayerJetpack
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerJetpack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerRobot
		#define GEODE_CONCEPT_CHECK_getPlayerRobot
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerShip
		#define GEODE_CONCEPT_CHECK_getPlayerShip
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerShipFire
		#define GEODE_CONCEPT_CHECK_getPlayerShipFire
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerShipFire) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerSpider
		#define GEODE_CONCEPT_CHECK_getPlayerSpider
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerSpider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerStreak
		#define GEODE_CONCEPT_CHECK_getPlayerStreak
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerSwing
		#define GEODE_CONCEPT_CHECK_getPlayerSwing
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerSwing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayLayer
		#define GEODE_CONCEPT_CHECK_getPlayLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPracticeMusicFile
		#define GEODE_CONCEPT_CHECK_getPracticeMusicFile
		GEODE_CONCEPT_FUNCTION_CHECK(getPracticeMusicFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUGV
		#define GEODE_CONCEPT_CHECK_getUGV
		GEODE_CONCEPT_FUNCTION_CHECK(getUGV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnlockForAchievement
		#define GEODE_CONCEPT_CHECK_getUnlockForAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(getUnlockForAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groundHasSecondaryColor
		#define GEODE_CONCEPT_CHECK_groundHasSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(groundHasSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_iconAndTypeForKey
		#define GEODE_CONCEPT_CHECK_iconAndTypeForKey
		GEODE_CONCEPT_FUNCTION_CHECK(iconAndTypeForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_iconKey
		#define GEODE_CONCEPT_CHECK_iconKey
		GEODE_CONCEPT_FUNCTION_CHECK(iconKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_iconTypeToUnlockType
		#define GEODE_CONCEPT_CHECK_iconTypeToUnlockType
		GEODE_CONCEPT_FUNCTION_CHECK(iconTypeToUnlockType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorUnlocked
		#define GEODE_CONCEPT_CHECK_isColorUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isColorUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isIconLoaded
		#define GEODE_CONCEPT_CHECK_isIconLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isIconLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isIconUnlocked
		#define GEODE_CONCEPT_CHECK_isIconUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isIconUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemPurchased
		#define GEODE_CONCEPT_CHECK_itemPurchased
		GEODE_CONCEPT_FUNCTION_CHECK(itemPurchased) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_joinDiscord
		#define GEODE_CONCEPT_CHECK_joinDiscord
		GEODE_CONCEPT_FUNCTION_CHECK(joinDiscord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_joinReddit
		#define GEODE_CONCEPT_CHECK_joinReddit
		GEODE_CONCEPT_FUNCTION_CHECK(joinReddit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyForIcon
		#define GEODE_CONCEPT_CHECK_keyForIcon
		GEODE_CONCEPT_FUNCTION_CHECK(keyForIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIsPremium
		#define GEODE_CONCEPT_CHECK_levelIsPremium
		GEODE_CONCEPT_FUNCTION_CHECK(levelIsPremium) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeFacebook
		#define GEODE_CONCEPT_CHECK_likeFacebook
		GEODE_CONCEPT_FUNCTION_CHECK(likeFacebook) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadBackground
		#define GEODE_CONCEPT_CHECK_loadBackground
		GEODE_CONCEPT_FUNCTION_CHECK(loadBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadBackgroundAsync
		#define GEODE_CONCEPT_CHECK_loadBackgroundAsync
		GEODE_CONCEPT_FUNCTION_CHECK(loadBackgroundAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDeathEffect
		#define GEODE_CONCEPT_CHECK_loadDeathEffect
		GEODE_CONCEPT_FUNCTION_CHECK(loadDeathEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDpadFromString
		#define GEODE_CONCEPT_CHECK_loadDpadFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadDpadFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDPadLayout
		#define GEODE_CONCEPT_CHECK_loadDPadLayout
		GEODE_CONCEPT_FUNCTION_CHECK(loadDPadLayout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFont
		#define GEODE_CONCEPT_CHECK_loadFont
		GEODE_CONCEPT_FUNCTION_CHECK(loadFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGround
		#define GEODE_CONCEPT_CHECK_loadGround
		GEODE_CONCEPT_FUNCTION_CHECK(loadGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroundAsync
		#define GEODE_CONCEPT_CHECK_loadGroundAsync
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroundAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadIcon
		#define GEODE_CONCEPT_CHECK_loadIcon
		GEODE_CONCEPT_FUNCTION_CHECK(loadIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadIconAsync
		#define GEODE_CONCEPT_CHECK_loadIconAsync
		GEODE_CONCEPT_FUNCTION_CHECK(loadIconAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadMiddleground
		#define GEODE_CONCEPT_CHECK_loadMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(loadMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadMiddlegroundAsync
		#define GEODE_CONCEPT_CHECK_loadMiddlegroundAsync
		GEODE_CONCEPT_FUNCTION_CHECK(loadMiddlegroundAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadVideoSettings
		#define GEODE_CONCEPT_CHECK_loadVideoSettings
		GEODE_CONCEPT_FUNCTION_CHECK(loadVideoSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockColor
		#define GEODE_CONCEPT_CHECK_lockColor
		GEODE_CONCEPT_FUNCTION_CHECK(lockColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockIcon
		#define GEODE_CONCEPT_CHECK_lockIcon
		GEODE_CONCEPT_FUNCTION_CHECK(lockIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logLoadedIconInfo
		#define GEODE_CONCEPT_CHECK_logLoadedIconInfo
		GEODE_CONCEPT_FUNCTION_CHECK(logLoadedIconInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openEditorGuide
		#define GEODE_CONCEPT_CHECK_openEditorGuide
		GEODE_CONCEPT_FUNCTION_CHECK(openEditorGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playMenuMusic
		#define GEODE_CONCEPT_CHECK_playMenuMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playMenuMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSFXTrigger
		#define GEODE_CONCEPT_CHECK_playSFXTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(playSFXTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareDPadSettings
		#define GEODE_CONCEPT_CHECK_prepareDPadSettings
		GEODE_CONCEPT_FUNCTION_CHECK(prepareDPadSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_printGJLog
		#define GEODE_CONCEPT_CHECK_printGJLog
		GEODE_CONCEPT_FUNCTION_CHECK(printGJLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueReloadMenu
		#define GEODE_CONCEPT_CHECK_queueReloadMenu
		GEODE_CONCEPT_FUNCTION_CHECK(queueReloadMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateGame
		#define GEODE_CONCEPT_CHECK_rateGame
		GEODE_CONCEPT_FUNCTION_CHECK(rateGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountUserStats
		#define GEODE_CONCEPT_CHECK_recountUserStats
		GEODE_CONCEPT_FUNCTION_CHECK(recountUserStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAll
		#define GEODE_CONCEPT_CHECK_reloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep2
		#define GEODE_CONCEPT_CHECK_reloadAllStep2
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep3
		#define GEODE_CONCEPT_CHECK_reloadAllStep3
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep4
		#define GEODE_CONCEPT_CHECK_reloadAllStep4
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep4) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep5
		#define GEODE_CONCEPT_CHECK_reloadAllStep5
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep5) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadMenu
		#define GEODE_CONCEPT_CHECK_reloadMenu
		GEODE_CONCEPT_FUNCTION_CHECK(reloadMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCustomObject
		#define GEODE_CONCEPT_CHECK_removeCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeIconDelegate
		#define GEODE_CONCEPT_CHECK_removeIconDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeIconDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderKey
		#define GEODE_CONCEPT_CHECK_reorderKey
		GEODE_CONCEPT_FUNCTION_CHECK(reorderKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportAchievementWithID
		#define GEODE_CONCEPT_CHECK_reportAchievementWithID
		GEODE_CONCEPT_FUNCTION_CHECK(reportAchievementWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportPercentageForLevel
		#define GEODE_CONCEPT_CHECK_reportPercentageForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(reportPercentageForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAchievement
		#define GEODE_CONCEPT_CHECK_resetAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(resetAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAdTimer
		#define GEODE_CONCEPT_CHECK_resetAdTimer
		GEODE_CONCEPT_FUNCTION_CHECK(resetAdTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllIcons
		#define GEODE_CONCEPT_CHECK_resetAllIcons
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllIcons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCoinUnlocks
		#define GEODE_CONCEPT_CHECK_resetCoinUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(resetCoinUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDPadSettings
		#define GEODE_CONCEPT_CHECK_resetDPadSettings
		GEODE_CONCEPT_FUNCTION_CHECK(resetDPadSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resolutionForKey
		#define GEODE_CONCEPT_CHECK_resolutionForKey
		GEODE_CONCEPT_FUNCTION_CHECK(resolutionForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudio
		#define GEODE_CONCEPT_CHECK_resumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudioDelayed
		#define GEODE_CONCEPT_CHECK_resumeAudioDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudioDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_returnToLastScene
		#define GEODE_CONCEPT_CHECK_returnToLastScene
		GEODE_CONCEPT_FUNCTION_CHECK(returnToLastScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoAdFinished
		#define GEODE_CONCEPT_CHECK_rewardedVideoAdFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoAdFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoHidden
		#define GEODE_CONCEPT_CHECK_rewardedVideoHidden
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoHiddenDelayed
		#define GEODE_CONCEPT_CHECK_rewardedVideoHiddenDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoHiddenDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_safePopScene
		#define GEODE_CONCEPT_CHECK_safePopScene
		GEODE_CONCEPT_FUNCTION_CHECK(safePopScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveAdTimer
		#define GEODE_CONCEPT_CHECK_saveAdTimer
		GEODE_CONCEPT_FUNCTION_CHECK(saveAdTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveDPadLayout
		#define GEODE_CONCEPT_CHECK_saveDPadLayout
		GEODE_CONCEPT_FUNCTION_CHECK(saveDPadLayout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGameVariable
		#define GEODE_CONCEPT_CHECK_setGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(setGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHasRatingPower
		#define GEODE_CONCEPT_CHECK_setHasRatingPower
		GEODE_CONCEPT_FUNCTION_CHECK(setHasRatingPower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntGameVariable
		#define GEODE_CONCEPT_CHECK_setIntGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(setIntGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerBall
		#define GEODE_CONCEPT_CHECK_setPlayerBall
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerBall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerBird
		#define GEODE_CONCEPT_CHECK_setPlayerBird
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerBird) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerColor
		#define GEODE_CONCEPT_CHECK_setPlayerColor
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerColor2
		#define GEODE_CONCEPT_CHECK_setPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerColor3
		#define GEODE_CONCEPT_CHECK_setPlayerColor3
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerColor3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerDart
		#define GEODE_CONCEPT_CHECK_setPlayerDart
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerDart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerDeathEffect
		#define GEODE_CONCEPT_CHECK_setPlayerDeathEffect
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerDeathEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerFrame
		#define GEODE_CONCEPT_CHECK_setPlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerGlow
		#define GEODE_CONCEPT_CHECK_setPlayerGlow
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerJetpack
		#define GEODE_CONCEPT_CHECK_setPlayerJetpack
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerJetpack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerRobot
		#define GEODE_CONCEPT_CHECK_setPlayerRobot
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerShip
		#define GEODE_CONCEPT_CHECK_setPlayerShip
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerShipStreak
		#define GEODE_CONCEPT_CHECK_setPlayerShipStreak
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerShipStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerSpider
		#define GEODE_CONCEPT_CHECK_setPlayerSpider
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerSpider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerStreak
		#define GEODE_CONCEPT_CHECK_setPlayerStreak
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerSwing
		#define GEODE_CONCEPT_CHECK_setPlayerSwing
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerSwing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerUserID
		#define GEODE_CONCEPT_CHECK_setPlayerUserID
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUGV
		#define GEODE_CONCEPT_CHECK_setUGV
		GEODE_CONCEPT_FUNCTION_CHECK(setUGV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGameAnimations
		#define GEODE_CONCEPT_CHECK_setupGameAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(setupGameAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sheetNameForIcon
		#define GEODE_CONCEPT_CHECK_sheetNameForIcon
		GEODE_CONCEPT_FUNCTION_CHECK(sheetNameForIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shortenAdTimer
		#define GEODE_CONCEPT_CHECK_shortenAdTimer
		GEODE_CONCEPT_FUNCTION_CHECK(shortenAdTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldShowInterstitial
		#define GEODE_CONCEPT_CHECK_shouldShowInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(shouldShowInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showInterstitial
		#define GEODE_CONCEPT_CHECK_showInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(showInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showInterstitialForced
		#define GEODE_CONCEPT_CHECK_showInterstitialForced
		GEODE_CONCEPT_FUNCTION_CHECK(showInterstitialForced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMainMenuAd
		#define GEODE_CONCEPT_CHECK_showMainMenuAd
		GEODE_CONCEPT_FUNCTION_CHECK(showMainMenuAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startUpdate
		#define GEODE_CONCEPT_CHECK_startUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(startUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringForCustomObject
		#define GEODE_CONCEPT_CHECK_stringForCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(stringForCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_subYouTube
		#define GEODE_CONCEPT_CHECK_subYouTube
		GEODE_CONCEPT_FUNCTION_CHECK(subYouTube) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchCustomObjects
		#define GEODE_CONCEPT_CHECK_switchCustomObjects
		GEODE_CONCEPT_FUNCTION_CHECK(switchCustomObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchScreenMode
		#define GEODE_CONCEPT_CHECK_switchScreenMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchScreenMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncPlatformAchievements
		#define GEODE_CONCEPT_CHECK_syncPlatformAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGameVariable
		#define GEODE_CONCEPT_CHECK_toggleGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryCacheAd
		#define GEODE_CONCEPT_CHECK_tryCacheAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryCacheAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowInterstitial
		#define GEODE_CONCEPT_CHECK_tryShowInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadBackground
		#define GEODE_CONCEPT_CHECK_unloadBackground
		GEODE_CONCEPT_FUNCTION_CHECK(unloadBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadIcon
		#define GEODE_CONCEPT_CHECK_unloadIcon
		GEODE_CONCEPT_FUNCTION_CHECK(unloadIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadIcons
		#define GEODE_CONCEPT_CHECK_unloadIcons
		GEODE_CONCEPT_FUNCTION_CHECK(unloadIcons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockColor
		#define GEODE_CONCEPT_CHECK_unlockColor
		GEODE_CONCEPT_FUNCTION_CHECK(unlockColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockedPremium
		#define GEODE_CONCEPT_CHECK_unlockedPremium
		GEODE_CONCEPT_FUNCTION_CHECK(unlockedPremium) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockIcon
		#define GEODE_CONCEPT_CHECK_unlockIcon
		GEODE_CONCEPT_FUNCTION_CHECK(unlockIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockTypeToIconType
		#define GEODE_CONCEPT_CHECK_unlockTypeToIconType
		GEODE_CONCEPT_FUNCTION_CHECK(unlockTypeToIconType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomFPS
		#define GEODE_CONCEPT_CHECK_updateCustomFPS
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomFPS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMusic
		#define GEODE_CONCEPT_CHECK_updateMusic
		GEODE_CONCEPT_FUNCTION_CHECK(updateMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyAchievementUnlocks
		#define GEODE_CONCEPT_CHECK_verifyAchievementUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(verifyAchievementUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyCoinUnlocks
		#define GEODE_CONCEPT_CHECK_verifyCoinUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(verifyCoinUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyStarUnlocks
		#define GEODE_CONCEPT_CHECK_verifyStarUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(verifyStarUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifySyncedCoins
		#define GEODE_CONCEPT_CHECK_verifySyncedCoins
		GEODE_CONCEPT_FUNCTION_CHECK(verifySyncedCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_videoAdHidden
		#define GEODE_CONCEPT_CHECK_videoAdHidden
		GEODE_CONCEPT_FUNCTION_CHECK(videoAdHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_videoAdShowed
		#define GEODE_CONCEPT_CHECK_videoAdShowed
		GEODE_CONCEPT_FUNCTION_CHECK(videoAdShowed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameManager> : ModifyBase<ModifyDerive<Der, GameManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameManager>>;
		using ModifyBase<ModifyDerive<Der, GameManager>>::ModifyBase;
		using Base = GameManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17b4a0, Default, GameManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x189bc0, Thiscall, GameManager, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17b4f0, Thiscall, GameManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x188fb0, Thiscall, GameManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x186a90, Thiscall, GameManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1886b0, Thiscall, GameManager, firstLoad, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, accountStatusChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181a90, Thiscall, GameManager, activeIconForType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1aeb60, Thiscall, GameManager, addCustomAnimationFrame, int, int, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, addDuplicateLastFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ae9f0, Thiscall, GameManager, addGameAnimation, int, int, float, gd::string, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, addIconDelegate, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1837f0, Thiscall, GameManager, addNewCustomObject, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, addToGJLog, cocos2d::CCString*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, applicationDidEnterBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x189c50, Thiscall, GameManager, applicationWillEnterForeground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, calculateBaseKeyForIcons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, canShowRewardedVideo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e1c0, Thiscall, GameManager, checkSteamAchievementUnlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1841d0, Thiscall, GameManager, checkUsedIcons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, claimItemsResponse, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, clearGJLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181350, Thiscall, GameManager, colorForIdx, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, colorForPos, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c7b0, Thiscall, GameManager, colorKey, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17d1f0, Thiscall, GameManager, completedAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181c00, Thiscall, GameManager, countForType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, defaultFrameForAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, didExitPlayscene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, doQuickSave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x186490, Thiscall, GameManager, dpadConfigToString, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, eventUnlockFeature, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17bab0, Thiscall, GameManager, fadeInMenuMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17bba0, Thiscall, GameManager, fadeInMusic, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182950, Thiscall, GameManager, finishedLoadingBGAsync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182df0, Thiscall, GameManager, finishedLoadingGAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182d70, Thiscall, GameManager, finishedLoadingGAsync1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182db0, Thiscall, GameManager, finishedLoadingGAsync2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, finishedLoadingIconAsync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182b90, Thiscall, GameManager, finishedLoadingMGAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182b10, Thiscall, GameManager, finishedLoadingMGAsync1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182b50, Thiscall, GameManager, finishedLoadingMGAsync2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, followTwitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, followTwitter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, framesForAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, frameTimeForAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x185cf0, Thiscall, GameManager, generateSecretNumber, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getBGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getEditorLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getFontFile, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getFontTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getGameLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183110, Thiscall, GameManager, getGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getGameVariableDefault, const char*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getIconRequestID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183710, Thiscall, GameManager, getIntGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getIntGameVariableDefault, const char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17b720, Thiscall, GameManager, getMenuMusicFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getMGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getNextUniqueObjectKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getNextUsedKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getOrderedCustomObjectKeys, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerBall, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerBird, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerColor2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerDart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerDeathEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerGlowColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerJetpack, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerRobot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerShip, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerShipFire, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerSpider, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerStreak, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayerSwing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPlayLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getPracticeMusicFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1834a0, Thiscall, GameManager, getUGV, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c9a0, Thiscall, GameManager, getUnlockForAchievement, gd::string, int&, UnlockType&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, groundHasSecondaryColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, iconAndTypeForKey, int, int&, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c2d0, Thiscall, GameManager, iconKey, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c5e0, Thiscall, GameManager, iconTypeToUnlockType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c8e0, Thiscall, GameManager, isColorUnlocked, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, isIconLoaded, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c500, Thiscall, GameManager, isIconUnlocked, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, itemPurchased, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, joinDiscord, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, joinReddit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, keyForIcon, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, levelIsPremium, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, likeFacebook, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1828a0, Thiscall, GameManager, loadBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, loadBackgroundAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, loadDeathEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x186780, Thiscall, GameManager, loadDpadFromString, UIButtonConfig&, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1861e0, Thiscall, GameManager, loadDPadLayout, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1827f0, Thiscall, GameManager, loadFont, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182c50, Thiscall, GameManager, loadGround, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, loadGroundAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181d10, Thiscall, GameManager, loadIcon, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, loadIconAsync, int, int, int, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182a00, Thiscall, GameManager, loadMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, loadMiddlegroundAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, loadVideoSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, lockColor, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, lockIcon, int, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, logLoadedIconInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, openEditorGuide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17b830, Thiscall, GameManager, playMenuMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17bcc0, Thiscall, GameManager, playSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1869f0, Thiscall, GameManager, prepareDPadSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, printGJLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, queueReloadMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, rateGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x184bc0, Thiscall, GameManager, recountUserStats, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, reloadAll, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a410, Thiscall, GameManager, reloadAll, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a4c0, Thiscall, GameManager, reloadAllStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a620, Thiscall, GameManager, reloadAllStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a730, Thiscall, GameManager, reloadAllStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a7d0, Thiscall, GameManager, reloadAllStep5, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a3e0, Thiscall, GameManager, reloadMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, removeCustomObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, removeIconDelegate, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183ac0, Thiscall, GameManager, reorderKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17dff0, Thiscall, GameManager, reportAchievementWithID, char const*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17d610, Thiscall, GameManager, reportPercentageForLevel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17d3b0, Thiscall, GameManager, resetAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, resetAdTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183ea0, Thiscall, GameManager, resetAllIcons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180b70, Thiscall, GameManager, resetCoinUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, resetDPadSettings, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a810, Thiscall, GameManager, resolutionForKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, resumeAudioDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x189fb0, Thiscall, GameManager, returnToLastScene, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, rewardedVideoAdFinished, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, rewardedVideoHidden, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, rewardedVideoHiddenDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18a360, Thiscall, GameManager, safePopScene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, saveAdTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x185e20, Thiscall, GameManager, saveDPadLayout, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182eb0, Thiscall, GameManager, setGameVariable, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setHasRatingPower, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183610, Thiscall, GameManager, setIntGameVariable, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerBall, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerBird, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerColor2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerColor3, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerDart, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerDeathEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerGlow, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerJetpack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerRobot, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerShip, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerShipStreak, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerSpider, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerStreak, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerSwing, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setPlayerUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183340, Thiscall, GameManager, setUGV, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ab7f0, Thiscall, GameManager, setupGameAnimations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182490, Thiscall, GameManager, sheetNameForIcon, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, shortenAdTimer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, shouldShowInterstitial, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, showInterstitial, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, showInterstitialForced, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, showMainMenuAd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, startUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183970, Thiscall, GameManager, stringForCustomObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, subYouTube, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183bc0, Thiscall, GameManager, switchCustomObjects, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, switchScreenMode, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, syncPlatformAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x183290, Thiscall, GameManager, toggleGameVariable, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, tryCacheAd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, tryShowInterstitial, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, unloadBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182070, Thiscall, GameManager, unloadIcon, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182330, Thiscall, GameManager, unloadIcons, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, unlockColor, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, unlockedPremium, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, unlockIcon, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17c700, Thiscall, GameManager, unlockTypeToIconType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ac40, Thiscall, GameManager, updateCustomFPS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, updateMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, verifyAchievementUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e5a0, Thiscall, GameManager, verifyCoinUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, verifyStarUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, verifySyncedCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, videoAdHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, videoAdShowed, )
		}
	};
}
