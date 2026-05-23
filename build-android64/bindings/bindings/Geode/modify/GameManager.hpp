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

	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif

	#ifndef GEODE_STATICS_activeIconForType
		#define GEODE_STATICS_activeIconForType
		GEODE_AS_STATIC_FUNCTION(activeIconForType) 
	#endif

	#ifndef GEODE_STATICS_addCustomAnimationFrame
		#define GEODE_STATICS_addCustomAnimationFrame
		GEODE_AS_STATIC_FUNCTION(addCustomAnimationFrame) 
	#endif

	#ifndef GEODE_STATICS_addDuplicateLastFrame
		#define GEODE_STATICS_addDuplicateLastFrame
		GEODE_AS_STATIC_FUNCTION(addDuplicateLastFrame) 
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

	#ifndef GEODE_STATICS_addToGJLog
		#define GEODE_STATICS_addToGJLog
		GEODE_AS_STATIC_FUNCTION(addToGJLog) 
	#endif

	#ifndef GEODE_STATICS_applicationDidEnterBackground
		#define GEODE_STATICS_applicationDidEnterBackground
		GEODE_AS_STATIC_FUNCTION(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_calculateBaseKeyForIcons
		#define GEODE_STATICS_calculateBaseKeyForIcons
		GEODE_AS_STATIC_FUNCTION(calculateBaseKeyForIcons) 
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

	#ifndef GEODE_STATICS_claimItemsResponse
		#define GEODE_STATICS_claimItemsResponse
		GEODE_AS_STATIC_FUNCTION(claimItemsResponse) 
	#endif

	#ifndef GEODE_STATICS_clearGJLog
		#define GEODE_STATICS_clearGJLog
		GEODE_AS_STATIC_FUNCTION(clearGJLog) 
	#endif

	#ifndef GEODE_STATICS_colorForIdx
		#define GEODE_STATICS_colorForIdx
		GEODE_AS_STATIC_FUNCTION(colorForIdx) 
	#endif

	#ifndef GEODE_STATICS_colorForPos
		#define GEODE_STATICS_colorForPos
		GEODE_AS_STATIC_FUNCTION(colorForPos) 
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

	#ifndef GEODE_STATICS_defaultFrameForAnimation
		#define GEODE_STATICS_defaultFrameForAnimation
		GEODE_AS_STATIC_FUNCTION(defaultFrameForAnimation) 
	#endif

	#ifndef GEODE_STATICS_didExitPlayscene
		#define GEODE_STATICS_didExitPlayscene
		GEODE_AS_STATIC_FUNCTION(didExitPlayscene) 
	#endif

	#ifndef GEODE_STATICS_doQuickSave
		#define GEODE_STATICS_doQuickSave
		GEODE_AS_STATIC_FUNCTION(doQuickSave) 
	#endif

	#ifndef GEODE_STATICS_dpadConfigToString
		#define GEODE_STATICS_dpadConfigToString
		GEODE_AS_STATIC_FUNCTION(dpadConfigToString) 
	#endif

	#ifndef GEODE_STATICS_eventUnlockFeature
		#define GEODE_STATICS_eventUnlockFeature
		GEODE_AS_STATIC_FUNCTION(eventUnlockFeature) 
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

	#ifndef GEODE_STATICS_followTwitch
		#define GEODE_STATICS_followTwitch
		GEODE_AS_STATIC_FUNCTION(followTwitch) 
	#endif

	#ifndef GEODE_STATICS_followTwitter
		#define GEODE_STATICS_followTwitter
		GEODE_AS_STATIC_FUNCTION(followTwitter) 
	#endif

	#ifndef GEODE_STATICS_framesForAnimation
		#define GEODE_STATICS_framesForAnimation
		GEODE_AS_STATIC_FUNCTION(framesForAnimation) 
	#endif

	#ifndef GEODE_STATICS_frameTimeForAnimation
		#define GEODE_STATICS_frameTimeForAnimation
		GEODE_AS_STATIC_FUNCTION(frameTimeForAnimation) 
	#endif

	#ifndef GEODE_STATICS_generateSecretNumber
		#define GEODE_STATICS_generateSecretNumber
		GEODE_AS_STATIC_FUNCTION(generateSecretNumber) 
	#endif

	#ifndef GEODE_STATICS_getBGTexture
		#define GEODE_STATICS_getBGTexture
		GEODE_AS_STATIC_FUNCTION(getBGTexture) 
	#endif

	#ifndef GEODE_STATICS_getFontFile
		#define GEODE_STATICS_getFontFile
		GEODE_AS_STATIC_FUNCTION(getFontFile) 
	#endif

	#ifndef GEODE_STATICS_getFontTexture
		#define GEODE_STATICS_getFontTexture
		GEODE_AS_STATIC_FUNCTION(getFontTexture) 
	#endif

	#ifndef GEODE_STATICS_getGameVariable
		#define GEODE_STATICS_getGameVariable
		GEODE_AS_STATIC_FUNCTION(getGameVariable) 
	#endif

	#ifndef GEODE_STATICS_getGTexture
		#define GEODE_STATICS_getGTexture
		GEODE_AS_STATIC_FUNCTION(getGTexture) 
	#endif

	#ifndef GEODE_STATICS_getIconRequestID
		#define GEODE_STATICS_getIconRequestID
		GEODE_AS_STATIC_FUNCTION(getIconRequestID) 
	#endif

	#ifndef GEODE_STATICS_getIntGameVariable
		#define GEODE_STATICS_getIntGameVariable
		GEODE_AS_STATIC_FUNCTION(getIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_getMenuMusicFile
		#define GEODE_STATICS_getMenuMusicFile
		GEODE_AS_STATIC_FUNCTION(getMenuMusicFile) 
	#endif

	#ifndef GEODE_STATICS_getMGTexture
		#define GEODE_STATICS_getMGTexture
		GEODE_AS_STATIC_FUNCTION(getMGTexture) 
	#endif

	#ifndef GEODE_STATICS_getNextUniqueObjectKey
		#define GEODE_STATICS_getNextUniqueObjectKey
		GEODE_AS_STATIC_FUNCTION(getNextUniqueObjectKey) 
	#endif

	#ifndef GEODE_STATICS_getNextUsedKey
		#define GEODE_STATICS_getNextUsedKey
		GEODE_AS_STATIC_FUNCTION(getNextUsedKey) 
	#endif

	#ifndef GEODE_STATICS_getOrderedCustomObjectKeys
		#define GEODE_STATICS_getOrderedCustomObjectKeys
		GEODE_AS_STATIC_FUNCTION(getOrderedCustomObjectKeys) 
	#endif

	#ifndef GEODE_STATICS_getPracticeMusicFile
		#define GEODE_STATICS_getPracticeMusicFile
		GEODE_AS_STATIC_FUNCTION(getPracticeMusicFile) 
	#endif

	#ifndef GEODE_STATICS_getUGV
		#define GEODE_STATICS_getUGV
		GEODE_AS_STATIC_FUNCTION(getUGV) 
	#endif

	#ifndef GEODE_STATICS_getUnlockForAchievement
		#define GEODE_STATICS_getUnlockForAchievement
		GEODE_AS_STATIC_FUNCTION(getUnlockForAchievement) 
	#endif

	#ifndef GEODE_STATICS_groundHasSecondaryColor
		#define GEODE_STATICS_groundHasSecondaryColor
		GEODE_AS_STATIC_FUNCTION(groundHasSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_iconAndTypeForKey
		#define GEODE_STATICS_iconAndTypeForKey
		GEODE_AS_STATIC_FUNCTION(iconAndTypeForKey) 
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

	#ifndef GEODE_STATICS_isIconLoaded
		#define GEODE_STATICS_isIconLoaded
		GEODE_AS_STATIC_FUNCTION(isIconLoaded) 
	#endif

	#ifndef GEODE_STATICS_isIconUnlocked
		#define GEODE_STATICS_isIconUnlocked
		GEODE_AS_STATIC_FUNCTION(isIconUnlocked) 
	#endif

	#ifndef GEODE_STATICS_itemPurchased
		#define GEODE_STATICS_itemPurchased
		GEODE_AS_STATIC_FUNCTION(itemPurchased) 
	#endif

	#ifndef GEODE_STATICS_joinDiscord
		#define GEODE_STATICS_joinDiscord
		GEODE_AS_STATIC_FUNCTION(joinDiscord) 
	#endif

	#ifndef GEODE_STATICS_joinReddit
		#define GEODE_STATICS_joinReddit
		GEODE_AS_STATIC_FUNCTION(joinReddit) 
	#endif

	#ifndef GEODE_STATICS_keyForIcon
		#define GEODE_STATICS_keyForIcon
		GEODE_AS_STATIC_FUNCTION(keyForIcon) 
	#endif

	#ifndef GEODE_STATICS_levelIsPremium
		#define GEODE_STATICS_levelIsPremium
		GEODE_AS_STATIC_FUNCTION(levelIsPremium) 
	#endif

	#ifndef GEODE_STATICS_likeFacebook
		#define GEODE_STATICS_likeFacebook
		GEODE_AS_STATIC_FUNCTION(likeFacebook) 
	#endif

	#ifndef GEODE_STATICS_loadBackground
		#define GEODE_STATICS_loadBackground
		GEODE_AS_STATIC_FUNCTION(loadBackground) 
	#endif

	#ifndef GEODE_STATICS_loadBackgroundAsync
		#define GEODE_STATICS_loadBackgroundAsync
		GEODE_AS_STATIC_FUNCTION(loadBackgroundAsync) 
	#endif

	#ifndef GEODE_STATICS_loadDeathEffect
		#define GEODE_STATICS_loadDeathEffect
		GEODE_AS_STATIC_FUNCTION(loadDeathEffect) 
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

	#ifndef GEODE_STATICS_loadGroundAsync
		#define GEODE_STATICS_loadGroundAsync
		GEODE_AS_STATIC_FUNCTION(loadGroundAsync) 
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

	#ifndef GEODE_STATICS_loadMiddlegroundAsync
		#define GEODE_STATICS_loadMiddlegroundAsync
		GEODE_AS_STATIC_FUNCTION(loadMiddlegroundAsync) 
	#endif

	#ifndef GEODE_STATICS_loadVideoSettings
		#define GEODE_STATICS_loadVideoSettings
		GEODE_AS_STATIC_FUNCTION(loadVideoSettings) 
	#endif

	#ifndef GEODE_STATICS_lockColor
		#define GEODE_STATICS_lockColor
		GEODE_AS_STATIC_FUNCTION(lockColor) 
	#endif

	#ifndef GEODE_STATICS_lockIcon
		#define GEODE_STATICS_lockIcon
		GEODE_AS_STATIC_FUNCTION(lockIcon) 
	#endif

	#ifndef GEODE_STATICS_logLoadedIconInfo
		#define GEODE_STATICS_logLoadedIconInfo
		GEODE_AS_STATIC_FUNCTION(logLoadedIconInfo) 
	#endif

	#ifndef GEODE_STATICS_openEditorGuide
		#define GEODE_STATICS_openEditorGuide
		GEODE_AS_STATIC_FUNCTION(openEditorGuide) 
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

	#ifndef GEODE_STATICS_printGJLog
		#define GEODE_STATICS_printGJLog
		GEODE_AS_STATIC_FUNCTION(printGJLog) 
	#endif

	#ifndef GEODE_STATICS_queueReloadMenu
		#define GEODE_STATICS_queueReloadMenu
		GEODE_AS_STATIC_FUNCTION(queueReloadMenu) 
	#endif

	#ifndef GEODE_STATICS_rateGame
		#define GEODE_STATICS_rateGame
		GEODE_AS_STATIC_FUNCTION(rateGame) 
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

	#ifndef GEODE_STATICS_removeCustomObject
		#define GEODE_STATICS_removeCustomObject
		GEODE_AS_STATIC_FUNCTION(removeCustomObject) 
	#endif

	#ifndef GEODE_STATICS_removeIconDelegate
		#define GEODE_STATICS_removeIconDelegate
		GEODE_AS_STATIC_FUNCTION(removeIconDelegate) 
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

	#ifndef GEODE_STATICS_resetAdTimer
		#define GEODE_STATICS_resetAdTimer
		GEODE_AS_STATIC_FUNCTION(resetAdTimer) 
	#endif

	#ifndef GEODE_STATICS_resetAllIcons
		#define GEODE_STATICS_resetAllIcons
		GEODE_AS_STATIC_FUNCTION(resetAllIcons) 
	#endif

	#ifndef GEODE_STATICS_resetCoinUnlocks
		#define GEODE_STATICS_resetCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(resetCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_resetDPadSettings
		#define GEODE_STATICS_resetDPadSettings
		GEODE_AS_STATIC_FUNCTION(resetDPadSettings) 
	#endif

	#ifndef GEODE_STATICS_resolutionForKey
		#define GEODE_STATICS_resolutionForKey
		GEODE_AS_STATIC_FUNCTION(resolutionForKey) 
	#endif

	#ifndef GEODE_STATICS_resumeAudio
		#define GEODE_STATICS_resumeAudio
		GEODE_AS_STATIC_FUNCTION(resumeAudio) 
	#endif

	#ifndef GEODE_STATICS_resumeAudioDelayed
		#define GEODE_STATICS_resumeAudioDelayed
		GEODE_AS_STATIC_FUNCTION(resumeAudioDelayed) 
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

	#ifndef GEODE_STATICS_shortenAdTimer
		#define GEODE_STATICS_shortenAdTimer
		GEODE_AS_STATIC_FUNCTION(shortenAdTimer) 
	#endif

	#ifndef GEODE_STATICS_shouldShowInterstitial
		#define GEODE_STATICS_shouldShowInterstitial
		GEODE_AS_STATIC_FUNCTION(shouldShowInterstitial) 
	#endif

	#ifndef GEODE_STATICS_showInterstitial
		#define GEODE_STATICS_showInterstitial
		GEODE_AS_STATIC_FUNCTION(showInterstitial) 
	#endif

	#ifndef GEODE_STATICS_showInterstitialForced
		#define GEODE_STATICS_showInterstitialForced
		GEODE_AS_STATIC_FUNCTION(showInterstitialForced) 
	#endif

	#ifndef GEODE_STATICS_showMainMenuAd
		#define GEODE_STATICS_showMainMenuAd
		GEODE_AS_STATIC_FUNCTION(showMainMenuAd) 
	#endif

	#ifndef GEODE_STATICS_startUpdate
		#define GEODE_STATICS_startUpdate
		GEODE_AS_STATIC_FUNCTION(startUpdate) 
	#endif

	#ifndef GEODE_STATICS_stringForCustomObject
		#define GEODE_STATICS_stringForCustomObject
		GEODE_AS_STATIC_FUNCTION(stringForCustomObject) 
	#endif

	#ifndef GEODE_STATICS_subYouTube
		#define GEODE_STATICS_subYouTube
		GEODE_AS_STATIC_FUNCTION(subYouTube) 
	#endif

	#ifndef GEODE_STATICS_switchCustomObjects
		#define GEODE_STATICS_switchCustomObjects
		GEODE_AS_STATIC_FUNCTION(switchCustomObjects) 
	#endif

	#ifndef GEODE_STATICS_switchScreenMode
		#define GEODE_STATICS_switchScreenMode
		GEODE_AS_STATIC_FUNCTION(switchScreenMode) 
	#endif

	#ifndef GEODE_STATICS_syncPlatformAchievements
		#define GEODE_STATICS_syncPlatformAchievements
		GEODE_AS_STATIC_FUNCTION(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_STATICS_toggleGameVariable
		#define GEODE_STATICS_toggleGameVariable
		GEODE_AS_STATIC_FUNCTION(toggleGameVariable) 
	#endif

	#ifndef GEODE_STATICS_tryCacheAd
		#define GEODE_STATICS_tryCacheAd
		GEODE_AS_STATIC_FUNCTION(tryCacheAd) 
	#endif

	#ifndef GEODE_STATICS_tryShowInterstitial
		#define GEODE_STATICS_tryShowInterstitial
		GEODE_AS_STATIC_FUNCTION(tryShowInterstitial) 
	#endif

	#ifndef GEODE_STATICS_unloadBackground
		#define GEODE_STATICS_unloadBackground
		GEODE_AS_STATIC_FUNCTION(unloadBackground) 
	#endif

	#ifndef GEODE_STATICS_unloadIcon
		#define GEODE_STATICS_unloadIcon
		GEODE_AS_STATIC_FUNCTION(unloadIcon) 
	#endif

	#ifndef GEODE_STATICS_unloadIcons
		#define GEODE_STATICS_unloadIcons
		GEODE_AS_STATIC_FUNCTION(unloadIcons) 
	#endif

	#ifndef GEODE_STATICS_unlockColor
		#define GEODE_STATICS_unlockColor
		GEODE_AS_STATIC_FUNCTION(unlockColor) 
	#endif

	#ifndef GEODE_STATICS_unlockedPremium
		#define GEODE_STATICS_unlockedPremium
		GEODE_AS_STATIC_FUNCTION(unlockedPremium) 
	#endif

	#ifndef GEODE_STATICS_unlockIcon
		#define GEODE_STATICS_unlockIcon
		GEODE_AS_STATIC_FUNCTION(unlockIcon) 
	#endif

	#ifndef GEODE_STATICS_unlockTypeToIconType
		#define GEODE_STATICS_unlockTypeToIconType
		GEODE_AS_STATIC_FUNCTION(unlockTypeToIconType) 
	#endif

	#ifndef GEODE_STATICS_updateCustomFPS
		#define GEODE_STATICS_updateCustomFPS
		GEODE_AS_STATIC_FUNCTION(updateCustomFPS) 
	#endif

	#ifndef GEODE_STATICS_updateMusic
		#define GEODE_STATICS_updateMusic
		GEODE_AS_STATIC_FUNCTION(updateMusic) 
	#endif

	#ifndef GEODE_STATICS_verifyAchievementUnlocks
		#define GEODE_STATICS_verifyAchievementUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyAchievementUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifyCoinUnlocks
		#define GEODE_STATICS_verifyCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifyStarUnlocks
		#define GEODE_STATICS_verifyStarUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyStarUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifySyncedCoins
		#define GEODE_STATICS_verifySyncedCoins
		GEODE_AS_STATIC_FUNCTION(verifySyncedCoins) 
	#endif

	#ifndef GEODE_STATICS_videoAdHidden
		#define GEODE_STATICS_videoAdHidden
		GEODE_AS_STATIC_FUNCTION(videoAdHidden) 
	#endif

	#ifndef GEODE_STATICS_videoAdShowed
		#define GEODE_STATICS_videoAdShowed
		GEODE_AS_STATIC_FUNCTION(videoAdShowed) 
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
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::sharedState)), Default, GameManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameManager::update)), Default, GameManager, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameManager::init)), Default, GameManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<DS_Dictionary*>::func(&GameManager::encodeDataTo)), Default, GameManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<DS_Dictionary*>::func(&GameManager::dataLoaded)), Default, GameManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameManager::firstLoad)), Default, GameManager, firstLoad, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::accountStatusChanged)), Default, GameManager, accountStatusChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<IconType>::func(&GameManager::activeIconForType)), Default, GameManager, activeIconForType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager23addCustomAnimationFrameEiiSsSs")), Default, GameManager, addCustomAnimationFrame, int, int, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::addDuplicateLastFrame)), Default, GameManager, addDuplicateLastFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager16addGameAnimationEiifSsSsi")), Default, GameManager, addGameAnimation, int, int, float, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&GameManager::addIconDelegate)), Default, GameManager, addIconDelegate, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager18addNewCustomObjectESs")), Default, GameManager, addNewCustomObject, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCString*>::func(&GameManager::addToGJLog)), Default, GameManager, addToGJLog, cocos2d::CCString*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::applicationDidEnterBackground)), Default, GameManager, applicationDidEnterBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::applicationWillEnterForeground)), Default, GameManager, applicationWillEnterForeground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::calculateBaseKeyForIcons)), Default, GameManager, calculateBaseKeyForIcons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::canShowRewardedVideo)), Default, GameManager, canShowRewardedVideo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::checkSteamAchievementUnlock)), Default, GameManager, checkSteamAchievementUnlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::checkUsedIcons)), Default, GameManager, checkUsedIcons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager18claimItemsResponseESs")), Default, GameManager, claimItemsResponse, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::clearGJLog)), Default, GameManager, clearGJLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::colorForIdx)), Default, GameManager, colorForIdx, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::colorForPos)), Default, GameManager, colorForPos, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameManager::colorKey)), Default, GameManager, colorKey, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager20completedAchievementESs")), Default, GameManager, completedAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<IconType>::func(&GameManager::countForType)), Default, GameManager, countForType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::defaultFrameForAnimation)), Default, GameManager, defaultFrameForAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::didExitPlayscene)), Default, GameManager, didExitPlayscene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::doQuickSave)), Default, GameManager, doQuickSave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UIButtonConfig&>::func(&GameManager::dpadConfigToString)), Default, GameManager, dpadConfigToString, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameManager::eventUnlockFeature)), Default, GameManager, eventUnlockFeature, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::fadeInMenuMusic)), Default, GameManager, fadeInMenuMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager11fadeInMusicESs")), Default, GameManager, fadeInMusic, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GameManager::finishedLoadingBGAsync)), Default, GameManager, finishedLoadingBGAsync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::finishedLoadingGAsync)), Default, GameManager, finishedLoadingGAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GameManager::finishedLoadingGAsync1)), Default, GameManager, finishedLoadingGAsync1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GameManager::finishedLoadingGAsync2)), Default, GameManager, finishedLoadingGAsync2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GameManager::finishedLoadingIconAsync)), Default, GameManager, finishedLoadingIconAsync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::finishedLoadingMGAsync)), Default, GameManager, finishedLoadingMGAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GameManager::finishedLoadingMGAsync1)), Default, GameManager, finishedLoadingMGAsync1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GameManager::finishedLoadingMGAsync2)), Default, GameManager, finishedLoadingMGAsync2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::followTwitch)), Default, GameManager, followTwitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::followTwitter)), Default, GameManager, followTwitter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::framesForAnimation)), Default, GameManager, framesForAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::frameTimeForAnimation)), Default, GameManager, frameTimeForAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::generateSecretNumber)), Default, GameManager, generateSecretNumber, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::getBGTexture)), Default, GameManager, getBGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getEditorLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::getFontFile)), Default, GameManager, getFontFile, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::getFontTexture)), Default, GameManager, getFontTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getGameLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameManager::getGameVariable)), Default, GameManager, getGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getGameVariableDefault, const char*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::getGTexture)), Default, GameManager, getGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::getIconRequestID)), Default, GameManager, getIconRequestID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameManager::getIntGameVariable)), Default, GameManager, getIntGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, getIntGameVariableDefault, const char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::getMenuMusicFile)), Default, GameManager, getMenuMusicFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::getMGTexture)), Default, GameManager, getMGTexture, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::getNextUniqueObjectKey)), Default, GameManager, getNextUniqueObjectKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameManager::getNextUsedKey)), Default, GameManager, getNextUsedKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::getOrderedCustomObjectKeys)), Default, GameManager, getOrderedCustomObjectKeys, )
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
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::getPracticeMusicFile)), Default, GameManager, getPracticeMusicFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameManager::getUGV)), Default, GameManager, getUGV, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager23getUnlockForAchievementESsRiR10UnlockType")), Default, GameManager, getUnlockForAchievement, gd::string, int&, UnlockType&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::groundHasSecondaryColor)), Default, GameManager, groundHasSecondaryColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int&, int&>::func(&GameManager::iconAndTypeForKey)), Default, GameManager, iconAndTypeForKey, int, int&, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, IconType>::func(&GameManager::iconKey)), Default, GameManager, iconKey, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<IconType>::func(&GameManager::iconTypeToUnlockType)), Default, GameManager, iconTypeToUnlockType, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameManager::isColorUnlocked)), Default, GameManager, isColorUnlocked, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameManager::isIconLoaded)), Default, GameManager, isIconLoaded, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, IconType>::func(&GameManager::isIconUnlocked)), Default, GameManager, isIconUnlocked, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameManager::itemPurchased)), Default, GameManager, itemPurchased, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::joinDiscord)), Default, GameManager, joinDiscord, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::joinReddit)), Default, GameManager, joinReddit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameManager::keyForIcon)), Default, GameManager, keyForIcon, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameManager::levelIsPremium)), Default, GameManager, levelIsPremium, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::likeFacebook)), Default, GameManager, likeFacebook, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadBackground)), Default, GameManager, loadBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadBackgroundAsync)), Default, GameManager, loadBackgroundAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadDeathEffect)), Default, GameManager, loadDeathEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager18loadDpadFromStringER14UIButtonConfigSs")), Default, GameManager, loadDpadFromString, UIButtonConfig&, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameManager::loadDPadLayout)), Default, GameManager, loadDPadLayout, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadFont)), Default, GameManager, loadFont, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadGround)), Default, GameManager, loadGround, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadGroundAsync)), Default, GameManager, loadGroundAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameManager::loadIcon)), Default, GameManager, loadIcon, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, cocos2d::CCObject*>::func(&GameManager::loadIconAsync)), Default, GameManager, loadIconAsync, int, int, int, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadMiddleground)), Default, GameManager, loadMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::loadMiddlegroundAsync)), Default, GameManager, loadMiddlegroundAsync, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::loadVideoSettings)), Default, GameManager, loadVideoSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameManager::lockColor)), Default, GameManager, lockColor, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, IconType>::func(&GameManager::lockIcon)), Default, GameManager, lockIcon, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::logLoadedIconInfo)), Default, GameManager, logLoadedIconInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::openEditorGuide)), Default, GameManager, openEditorGuide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::playMenuMusic)), Default, GameManager, playMenuMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXTriggerGameObject*>::func(&GameManager::playSFXTrigger)), Default, GameManager, playSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::prepareDPadSettings)), Default, GameManager, prepareDPadSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::printGJLog)), Default, GameManager, printGJLog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::queueReloadMenu)), Default, GameManager, queueReloadMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::rateGame)), Default, GameManager, rateGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager16recountUserStatsESs")), Default, GameManager, recountUserStats, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, reloadAll, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool, bool, bool>::func(&GameManager::reloadAll)), Default, GameManager, reloadAll, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::reloadAllStep2)), Default, GameManager, reloadAllStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::reloadAllStep3)), Default, GameManager, reloadAllStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::reloadAllStep4)), Default, GameManager, reloadAllStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::reloadAllStep5)), Default, GameManager, reloadAllStep5, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::reloadMenu)), Default, GameManager, reloadMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::removeCustomObject)), Default, GameManager, removeCustomObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::removeIconDelegate)), Default, GameManager, removeIconDelegate, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameManager::reorderKey)), Default, GameManager, reorderKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int, bool>::func(&GameManager::reportAchievementWithID)), Default, GameManager, reportAchievementWithID, char const*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, bool>::func(&GameManager::reportPercentageForLevel)), Default, GameManager, reportPercentageForLevel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11GameManager16resetAchievementESs")), Default, GameManager, resetAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::resetAdTimer)), Default, GameManager, resetAdTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::resetAllIcons)), Default, GameManager, resetAllIcons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::resetCoinUnlocks)), Default, GameManager, resetCoinUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameManager::resetDPadSettings)), Default, GameManager, resetDPadSettings, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::resolutionForKey)), Default, GameManager, resolutionForKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::resumeAudio)), Default, GameManager, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::resumeAudioDelayed)), Default, GameManager, resumeAudioDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameManager::returnToLastScene)), Default, GameManager, returnToLastScene, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::rewardedVideoAdFinished)), Default, GameManager, rewardedVideoAdFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::rewardedVideoHidden)), Default, GameManager, rewardedVideoHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::rewardedVideoHiddenDelayed)), Default, GameManager, rewardedVideoHiddenDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::safePopScene)), Default, GameManager, safePopScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::saveAdTimer)), Default, GameManager, saveAdTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameManager::saveDPadLayout)), Default, GameManager, saveDPadLayout, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&GameManager::setGameVariable)), Default, GameManager, setGameVariable, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameManager, setHasRatingPower, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameManager::setIntGameVariable)), Default, GameManager, setIntGameVariable, char const*, int)
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
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&GameManager::setUGV)), Default, GameManager, setUGV, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::setupGameAnimations)), Default, GameManager, setupGameAnimations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameManager::sheetNameForIcon)), Default, GameManager, sheetNameForIcon, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameManager::shortenAdTimer)), Default, GameManager, shortenAdTimer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameManager::shouldShowInterstitial)), Default, GameManager, shouldShowInterstitial, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::showInterstitial)), Default, GameManager, showInterstitial, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::showInterstitialForced)), Default, GameManager, showInterstitialForced, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::showMainMenuAd)), Default, GameManager, showMainMenuAd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::startUpdate)), Default, GameManager, startUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::stringForCustomObject)), Default, GameManager, stringForCustomObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::subYouTube)), Default, GameManager, subYouTube, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameManager::switchCustomObjects)), Default, GameManager, switchCustomObjects, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool, bool>::func(&GameManager::switchScreenMode)), Default, GameManager, switchScreenMode, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::syncPlatformAchievements)), Default, GameManager, syncPlatformAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameManager::toggleGameVariable)), Default, GameManager, toggleGameVariable, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::tryCacheAd)), Default, GameManager, tryCacheAd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameManager::tryShowInterstitial)), Default, GameManager, tryShowInterstitial, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::unloadBackground)), Default, GameManager, unloadBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameManager::unloadIcon)), Default, GameManager, unloadIcon, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::unloadIcons)), Default, GameManager, unloadIcons, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&GameManager::unlockColor)), Default, GameManager, unlockColor, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::unlockedPremium)), Default, GameManager, unlockedPremium, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, IconType>::func(&GameManager::unlockIcon)), Default, GameManager, unlockIcon, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameManager::unlockTypeToIconType)), Default, GameManager, unlockTypeToIconType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::updateCustomFPS)), Default, GameManager, updateCustomFPS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::updateMusic)), Default, GameManager, updateMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::verifyAchievementUnlocks)), Default, GameManager, verifyAchievementUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::verifyCoinUnlocks)), Default, GameManager, verifyCoinUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::verifyStarUnlocks)), Default, GameManager, verifyStarUnlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::verifySyncedCoins)), Default, GameManager, verifySyncedCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::videoAdHidden)), Default, GameManager, videoAdHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameManager::videoAdShowed)), Default, GameManager, videoAdShowed, )
		}
	};
}
