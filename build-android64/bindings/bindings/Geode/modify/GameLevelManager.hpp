#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_acceptFriendRequest
		#define GEODE_STATICS_acceptFriendRequest
		GEODE_AS_STATIC_FUNCTION(acceptFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_accountIDForUserID
		#define GEODE_STATICS_accountIDForUserID
		GEODE_AS_STATIC_FUNCTION(accountIDForUserID) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_areGauntletsLoaded
		#define GEODE_STATICS_areGauntletsLoaded
		GEODE_AS_STATIC_FUNCTION(areGauntletsLoaded) 
	#endif

	#ifndef GEODE_STATICS_banUser
		#define GEODE_STATICS_banUser
		GEODE_AS_STATIC_FUNCTION(banUser) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_cleanupDailyLevels
		#define GEODE_STATICS_cleanupDailyLevels
		GEODE_AS_STATIC_FUNCTION(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetAccountComments
		#define GEODE_STATICS_createAndGetAccountComments
		GEODE_AS_STATIC_FUNCTION(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_createAndGetCommentsFull
		#define GEODE_STATICS_createAndGetCommentsFull
		GEODE_AS_STATIC_FUNCTION(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelComments
		#define GEODE_STATICS_createAndGetLevelComments
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelLists
		#define GEODE_STATICS_createAndGetLevelLists
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelLists) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevels
		#define GEODE_STATICS_createAndGetLevels
		GEODE_AS_STATIC_FUNCTION(createAndGetLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetMapPacks
		#define GEODE_STATICS_createAndGetMapPacks
		GEODE_AS_STATIC_FUNCTION(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_STATICS_createAndGetScores
		#define GEODE_STATICS_createAndGetScores
		GEODE_AS_STATIC_FUNCTION(createAndGetScores) 
	#endif

	#ifndef GEODE_STATICS_createNewLevel
		#define GEODE_STATICS_createNewLevel
		GEODE_AS_STATIC_FUNCTION(createNewLevel) 
	#endif

	#ifndef GEODE_STATICS_createNewLevelList
		#define GEODE_STATICS_createNewLevelList
		GEODE_AS_STATIC_FUNCTION(createNewLevelList) 
	#endif

	#ifndef GEODE_STATICS_createPageInfo
		#define GEODE_STATICS_createPageInfo
		GEODE_AS_STATIC_FUNCTION(createPageInfo) 
	#endif

	#ifndef GEODE_STATICS_createSmartTemplate
		#define GEODE_STATICS_createSmartTemplate
		GEODE_AS_STATIC_FUNCTION(createSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteAccountComment
		#define GEODE_STATICS_deleteAccountComment
		GEODE_AS_STATIC_FUNCTION(deleteAccountComment) 
	#endif

	#ifndef GEODE_STATICS_deleteComment
		#define GEODE_STATICS_deleteComment
		GEODE_AS_STATIC_FUNCTION(deleteComment) 
	#endif

	#ifndef GEODE_STATICS_deleteFriendRequests
		#define GEODE_STATICS_deleteFriendRequests
		GEODE_AS_STATIC_FUNCTION(deleteFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_deleteLevel
		#define GEODE_STATICS_deleteLevel
		GEODE_AS_STATIC_FUNCTION(deleteLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelComment
		#define GEODE_STATICS_deleteLevelComment
		GEODE_AS_STATIC_FUNCTION(deleteLevelComment) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelList
		#define GEODE_STATICS_deleteLevelList
		GEODE_AS_STATIC_FUNCTION(deleteLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteSentFriendRequest
		#define GEODE_STATICS_deleteSentFriendRequest
		GEODE_AS_STATIC_FUNCTION(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevel
		#define GEODE_STATICS_deleteServerLevel
		GEODE_AS_STATIC_FUNCTION(deleteServerLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevelList
		#define GEODE_STATICS_deleteServerLevelList
		GEODE_AS_STATIC_FUNCTION(deleteServerLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteSmartTemplate
		#define GEODE_STATICS_deleteSmartTemplate
		GEODE_AS_STATIC_FUNCTION(deleteSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_deleteUserMessages
		#define GEODE_STATICS_deleteUserMessages
		GEODE_AS_STATIC_FUNCTION(deleteUserMessages) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_downloadUserMessage
		#define GEODE_STATICS_downloadUserMessage
		GEODE_AS_STATIC_FUNCTION(downloadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_followUser
		#define GEODE_STATICS_followUser
		GEODE_AS_STATIC_FUNCTION(followUser) 
	#endif

	#ifndef GEODE_STATICS_friendRequestFromAccountID
		#define GEODE_STATICS_friendRequestFromAccountID
		GEODE_AS_STATIC_FUNCTION(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_STATICS_friendRequestWasRemoved
		#define GEODE_STATICS_friendRequestWasRemoved
		GEODE_AS_STATIC_FUNCTION(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_getAccountCommentKey
		#define GEODE_STATICS_getAccountCommentKey
		GEODE_AS_STATIC_FUNCTION(getAccountCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getAccountComments
		#define GEODE_STATICS_getAccountComments
		GEODE_AS_STATIC_FUNCTION(getAccountComments) 
	#endif

	#ifndef GEODE_STATICS_getActiveDailyID
		#define GEODE_STATICS_getActiveDailyID
		GEODE_AS_STATIC_FUNCTION(getActiveDailyID) 
	#endif

	#ifndef GEODE_STATICS_getActiveSmartTemplate
		#define GEODE_STATICS_getActiveSmartTemplate
		GEODE_AS_STATIC_FUNCTION(getActiveSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_getAllSmartTemplates
		#define GEODE_STATICS_getAllSmartTemplates
		GEODE_AS_STATIC_FUNCTION(getAllSmartTemplates) 
	#endif

	#ifndef GEODE_STATICS_getAllUsedSongIDs
		#define GEODE_STATICS_getAllUsedSongIDs
		GEODE_AS_STATIC_FUNCTION(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getCommentKey
		#define GEODE_STATICS_getCommentKey
		GEODE_AS_STATIC_FUNCTION(getCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getCompletedDailyLevels
		#define GEODE_STATICS_getCompletedDailyLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedEventLevels
		#define GEODE_STATICS_getCompletedEventLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedEventLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedGauntletDemons
		#define GEODE_STATICS_getCompletedGauntletDemons
		GEODE_AS_STATIC_FUNCTION(getCompletedGauntletDemons) 
	#endif

	#ifndef GEODE_STATICS_getCompletedGauntletLevels
		#define GEODE_STATICS_getCompletedGauntletLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedGauntletLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedWeeklyLevels
		#define GEODE_STATICS_getCompletedWeeklyLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedWeeklyLevels) 
	#endif

	#ifndef GEODE_STATICS_getDailyID
		#define GEODE_STATICS_getDailyID
		GEODE_AS_STATIC_FUNCTION(getDailyID) 
	#endif

	#ifndef GEODE_STATICS_getDailyTimer
		#define GEODE_STATICS_getDailyTimer
		GEODE_AS_STATIC_FUNCTION(getDailyTimer) 
	#endif

	#ifndef GEODE_STATICS_getDeleteCommentKey
		#define GEODE_STATICS_getDeleteCommentKey
		GEODE_AS_STATIC_FUNCTION(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getDeleteMessageKey
		#define GEODE_STATICS_getDeleteMessageKey
		GEODE_AS_STATIC_FUNCTION(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelsString
		#define GEODE_STATICS_getDemonLevelsString
		GEODE_AS_STATIC_FUNCTION(getDemonLevelsString) 
	#endif

	#ifndef GEODE_STATICS_getDescKey
		#define GEODE_STATICS_getDescKey
		GEODE_AS_STATIC_FUNCTION(getDescKey) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyStr
		#define GEODE_STATICS_getDifficultyStr
		GEODE_AS_STATIC_FUNCTION(getDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_getDiffKey
		#define GEODE_STATICS_getDiffKey
		GEODE_AS_STATIC_FUNCTION(getDiffKey) 
	#endif

	#ifndef GEODE_STATICS_getDiffVal
		#define GEODE_STATICS_getDiffVal
		GEODE_AS_STATIC_FUNCTION(getDiffVal) 
	#endif

	#ifndef GEODE_STATICS_getFolderName
		#define GEODE_STATICS_getFolderName
		GEODE_AS_STATIC_FUNCTION(getFolderName) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequestKey
		#define GEODE_STATICS_getFriendRequestKey
		GEODE_AS_STATIC_FUNCTION(getFriendRequestKey) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequests
		#define GEODE_STATICS_getFriendRequests
		GEODE_AS_STATIC_FUNCTION(getFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_getGauntletKey
		#define GEODE_STATICS_getGauntletKey
		GEODE_AS_STATIC_FUNCTION(getGauntletKey) 
	#endif

	#ifndef GEODE_STATICS_getGauntletLevels
		#define GEODE_STATICS_getGauntletLevels
		GEODE_AS_STATIC_FUNCTION(getGauntletLevels) 
	#endif

	#ifndef GEODE_STATICS_getGauntlets
		#define GEODE_STATICS_getGauntlets
		GEODE_AS_STATIC_FUNCTION(getGauntlets) 
	#endif

	#ifndef GEODE_STATICS_getGauntletSearchKey
		#define GEODE_STATICS_getGauntletSearchKey
		GEODE_AS_STATIC_FUNCTION(getGauntletSearchKey) 
	#endif

	#ifndef GEODE_STATICS_getGJChallenges
		#define GEODE_STATICS_getGJChallenges
		GEODE_AS_STATIC_FUNCTION(getGJChallenges) 
	#endif

	#ifndef GEODE_STATICS_getGJDailyLevelState
		#define GEODE_STATICS_getGJDailyLevelState
		GEODE_AS_STATIC_FUNCTION(getGJDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_getGJRewards
		#define GEODE_STATICS_getGJRewards
		GEODE_AS_STATIC_FUNCTION(getGJRewards) 
	#endif

	#ifndef GEODE_STATICS_getGJSecretReward
		#define GEODE_STATICS_getGJSecretReward
		GEODE_AS_STATIC_FUNCTION(getGJSecretReward) 
	#endif

	#ifndef GEODE_STATICS_getGJUserInfo
		#define GEODE_STATICS_getGJUserInfo
		GEODE_AS_STATIC_FUNCTION(getGJUserInfo) 
	#endif

	#ifndef GEODE_STATICS_getHighestLevelOrder
		#define GEODE_STATICS_getHighestLevelOrder
		GEODE_AS_STATIC_FUNCTION(getHighestLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_getIntForKey
		#define GEODE_STATICS_getIntForKey
		GEODE_AS_STATIC_FUNCTION(getIntForKey) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardKey
		#define GEODE_STATICS_getLeaderboardKey
		GEODE_AS_STATIC_FUNCTION(getLeaderboardKey) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardScores
		#define GEODE_STATICS_getLeaderboardScores
		GEODE_AS_STATIC_FUNCTION(getLeaderboardScores) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getLenKey
		#define GEODE_STATICS_getLenKey
		GEODE_AS_STATIC_FUNCTION(getLenKey) 
	#endif

	#ifndef GEODE_STATICS_getLenVal
		#define GEODE_STATICS_getLenVal
		GEODE_AS_STATIC_FUNCTION(getLenVal) 
	#endif

	#ifndef GEODE_STATICS_getLevelComments
		#define GEODE_STATICS_getLevelComments
		GEODE_AS_STATIC_FUNCTION(getLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getLevelDownloadKey
		#define GEODE_STATICS_getLevelDownloadKey
		GEODE_AS_STATIC_FUNCTION(getLevelDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboard
		#define GEODE_STATICS_getLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboardKey
		#define GEODE_STATICS_getLevelLeaderboardKey
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboardKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelListKey
		#define GEODE_STATICS_getLevelListKey
		GEODE_AS_STATIC_FUNCTION(getLevelListKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelLists
		#define GEODE_STATICS_getLevelLists
		GEODE_AS_STATIC_FUNCTION(getLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getLevelRateInfo
		#define GEODE_STATICS_getLevelRateInfo
		GEODE_AS_STATIC_FUNCTION(getLevelRateInfo) 
	#endif

	#ifndef GEODE_STATICS_getLevelSaveData
		#define GEODE_STATICS_getLevelSaveData
		GEODE_AS_STATIC_FUNCTION(getLevelSaveData) 
	#endif

	#ifndef GEODE_STATICS_getLikeAccountItemKey
		#define GEODE_STATICS_getLikeAccountItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_STATICS_getLikeItemKey
		#define GEODE_STATICS_getLikeItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeItemKey) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevel
		#define GEODE_STATICS_getLocalLevel
		GEODE_AS_STATIC_FUNCTION(getLocalLevel) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelByName
		#define GEODE_STATICS_getLocalLevelByName
		GEODE_AS_STATIC_FUNCTION(getLocalLevelByName) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelList
		#define GEODE_STATICS_getLocalLevelList
		GEODE_AS_STATIC_FUNCTION(getLocalLevelList) 
	#endif

	#ifndef GEODE_STATICS_getLowestLevelOrder
		#define GEODE_STATICS_getLowestLevelOrder
		GEODE_AS_STATIC_FUNCTION(getLowestLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_getMainLevel
		#define GEODE_STATICS_getMainLevel
		GEODE_AS_STATIC_FUNCTION(getMainLevel) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPacks
		#define GEODE_STATICS_getMapPacks
		GEODE_AS_STATIC_FUNCTION(getMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getMessageKey
		#define GEODE_STATICS_getMessageKey
		GEODE_AS_STATIC_FUNCTION(getMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getMessagesKey
		#define GEODE_STATICS_getMessagesKey
		GEODE_AS_STATIC_FUNCTION(getMessagesKey) 
	#endif

	#ifndef GEODE_STATICS_getNews
		#define GEODE_STATICS_getNews
		GEODE_AS_STATIC_FUNCTION(getNews) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeTemplateID
		#define GEODE_STATICS_getNextFreeTemplateID
		GEODE_AS_STATIC_FUNCTION(getNextFreeTemplateID) 
	#endif

	#ifndef GEODE_STATICS_getNextLevelName
		#define GEODE_STATICS_getNextLevelName
		GEODE_AS_STATIC_FUNCTION(getNextLevelName) 
	#endif

	#ifndef GEODE_STATICS_getOnlineLevels
		#define GEODE_STATICS_getOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getPageInfo
		#define GEODE_STATICS_getPageInfo
		GEODE_AS_STATIC_FUNCTION(getPageInfo) 
	#endif

	#ifndef GEODE_STATICS_getPostCommentKey
		#define GEODE_STATICS_getPostCommentKey
		GEODE_AS_STATIC_FUNCTION(getPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getRateStarsKey
		#define GEODE_STATICS_getRateStarsKey
		GEODE_AS_STATIC_FUNCTION(getRateStarsKey) 
	#endif

	#ifndef GEODE_STATICS_getReportKey
		#define GEODE_STATICS_getReportKey
		GEODE_AS_STATIC_FUNCTION(getReportKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevel
		#define GEODE_STATICS_getSavedDailyLevel
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevelFromLevelID
		#define GEODE_STATICS_getSavedDailyLevelFromLevelID
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevelFromLevelID) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntlet
		#define GEODE_STATICS_getSavedGauntlet
		GEODE_AS_STATIC_FUNCTION(getSavedGauntlet) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntletLevel
		#define GEODE_STATICS_getSavedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevel
		#define GEODE_STATICS_getSavedLevel
		GEODE_AS_STATIC_FUNCTION(getSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelList
		#define GEODE_STATICS_getSavedLevelList
		GEODE_AS_STATIC_FUNCTION(getSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelLists
		#define GEODE_STATICS_getSavedLevelLists
		GEODE_AS_STATIC_FUNCTION(getSavedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevels
		#define GEODE_STATICS_getSavedLevels
		GEODE_AS_STATIC_FUNCTION(getSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_getSavedMapPack
		#define GEODE_STATICS_getSavedMapPack
		GEODE_AS_STATIC_FUNCTION(getSavedMapPack) 
	#endif

	#ifndef GEODE_STATICS_getSearchScene
		#define GEODE_STATICS_getSearchScene
		GEODE_AS_STATIC_FUNCTION(getSearchScene) 
	#endif

	#ifndef GEODE_STATICS_getSplitIntFromKey
		#define GEODE_STATICS_getSplitIntFromKey
		GEODE_AS_STATIC_FUNCTION(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStarLevelsString
		#define GEODE_STATICS_getStarLevelsString
		GEODE_AS_STATIC_FUNCTION(getStarLevelsString) 
	#endif

	#ifndef GEODE_STATICS_getStoredLevelComments
		#define GEODE_STATICS_getStoredLevelComments
		GEODE_AS_STATIC_FUNCTION(getStoredLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getStoredOnlineLevels
		#define GEODE_STATICS_getStoredOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserList
		#define GEODE_STATICS_getStoredUserList
		GEODE_AS_STATIC_FUNCTION(getStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessage
		#define GEODE_STATICS_getStoredUserMessage
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessage) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessageReply
		#define GEODE_STATICS_getStoredUserMessageReply
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_getTimeLeft
		#define GEODE_STATICS_getTimeLeft
		GEODE_AS_STATIC_FUNCTION(getTimeLeft) 
	#endif

	#ifndef GEODE_STATICS_getTopArtists
		#define GEODE_STATICS_getTopArtists
		GEODE_AS_STATIC_FUNCTION(getTopArtists) 
	#endif

	#ifndef GEODE_STATICS_getTopArtistsKey
		#define GEODE_STATICS_getTopArtistsKey
		GEODE_AS_STATIC_FUNCTION(getTopArtistsKey) 
	#endif

	#ifndef GEODE_STATICS_getUploadMessageKey
		#define GEODE_STATICS_getUploadMessageKey
		GEODE_AS_STATIC_FUNCTION(getUploadMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoKey
		#define GEODE_STATICS_getUserInfoKey
		GEODE_AS_STATIC_FUNCTION(getUserInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getUserList
		#define GEODE_STATICS_getUserList
		GEODE_AS_STATIC_FUNCTION(getUserList) 
	#endif

	#ifndef GEODE_STATICS_getUserMessages
		#define GEODE_STATICS_getUserMessages
		GEODE_AS_STATIC_FUNCTION(getUserMessages) 
	#endif

	#ifndef GEODE_STATICS_getUsers
		#define GEODE_STATICS_getUsers
		GEODE_AS_STATIC_FUNCTION(getUsers) 
	#endif

	#ifndef GEODE_STATICS_gotoLevelPage
		#define GEODE_STATICS_gotoLevelPage
		GEODE_AS_STATIC_FUNCTION(gotoLevelPage) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_hasDailyStateBeenLoaded
		#define GEODE_STATICS_hasDailyStateBeenLoaded
		GEODE_AS_STATIC_FUNCTION(hasDailyStateBeenLoaded) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedLevel
		#define GEODE_STATICS_hasDownloadedLevel
		GEODE_AS_STATIC_FUNCTION(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedList
		#define GEODE_STATICS_hasDownloadedList
		GEODE_AS_STATIC_FUNCTION(hasDownloadedList) 
	#endif

	#ifndef GEODE_STATICS_hasLikedAccountItem
		#define GEODE_STATICS_hasLikedAccountItem
		GEODE_AS_STATIC_FUNCTION(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItem
		#define GEODE_STATICS_hasLikedItem
		GEODE_AS_STATIC_FUNCTION(hasLikedItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItemFullCheck
		#define GEODE_STATICS_hasLikedItemFullCheck
		GEODE_AS_STATIC_FUNCTION(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_STATICS_hasRatedDemon
		#define GEODE_STATICS_hasRatedDemon
		GEODE_AS_STATIC_FUNCTION(hasRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_hasRatedLevelStars
		#define GEODE_STATICS_hasRatedLevelStars
		GEODE_AS_STATIC_FUNCTION(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_STATICS_hasReportedLevel
		#define GEODE_STATICS_hasReportedLevel
		GEODE_AS_STATIC_FUNCTION(hasReportedLevel) 
	#endif

	#ifndef GEODE_STATICS_invalidateMessages
		#define GEODE_STATICS_invalidateMessages
		GEODE_AS_STATIC_FUNCTION(invalidateMessages) 
	#endif

	#ifndef GEODE_STATICS_invalidateRequests
		#define GEODE_STATICS_invalidateRequests
		GEODE_AS_STATIC_FUNCTION(invalidateRequests) 
	#endif

	#ifndef GEODE_STATICS_invalidateUserList
		#define GEODE_STATICS_invalidateUserList
		GEODE_AS_STATIC_FUNCTION(invalidateUserList) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isFollowingUser
		#define GEODE_STATICS_isFollowingUser
		GEODE_AS_STATIC_FUNCTION(isFollowingUser) 
	#endif

	#ifndef GEODE_STATICS_isTimeValid
		#define GEODE_STATICS_isTimeValid
		GEODE_AS_STATIC_FUNCTION(isTimeValid) 
	#endif

	#ifndef GEODE_STATICS_isUpdateValid
		#define GEODE_STATICS_isUpdateValid
		GEODE_AS_STATIC_FUNCTION(isUpdateValid) 
	#endif

	#ifndef GEODE_STATICS_itemIDFromLikeKey
		#define GEODE_STATICS_itemIDFromLikeKey
		GEODE_AS_STATIC_FUNCTION(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_keyHasTimer
		#define GEODE_STATICS_keyHasTimer
		GEODE_AS_STATIC_FUNCTION(keyHasTimer) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromCommentKey
		#define GEODE_STATICS_levelIDFromCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromPostCommentKey
		#define GEODE_STATICS_levelIDFromPostCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_likeFromLikeKey
		#define GEODE_STATICS_likeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(likeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_likeItem
		#define GEODE_STATICS_likeItem
		GEODE_AS_STATIC_FUNCTION(likeItem) 
	#endif

	#ifndef GEODE_STATICS_limitSavedLevels
		#define GEODE_STATICS_limitSavedLevels
		GEODE_AS_STATIC_FUNCTION(limitSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_makeTimeStamp
		#define GEODE_STATICS_makeTimeStamp
		GEODE_AS_STATIC_FUNCTION(makeTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_markItemAsLiked
		#define GEODE_STATICS_markItemAsLiked
		GEODE_AS_STATIC_FUNCTION(markItemAsLiked) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsDownloaded
		#define GEODE_STATICS_markLevelAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedDemon
		#define GEODE_STATICS_markLevelAsRatedDemon
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedStars
		#define GEODE_STATICS_markLevelAsRatedStars
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsReported
		#define GEODE_STATICS_markLevelAsReported
		GEODE_AS_STATIC_FUNCTION(markLevelAsReported) 
	#endif

	#ifndef GEODE_STATICS_markListAsDownloaded
		#define GEODE_STATICS_markListAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markListAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_messageWasRemoved
		#define GEODE_STATICS_messageWasRemoved
		GEODE_AS_STATIC_FUNCTION(messageWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_onAcceptFriendRequestCompleted
		#define GEODE_STATICS_onAcceptFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBanUserCompleted
		#define GEODE_STATICS_onBanUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBanUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBlockUserCompleted
		#define GEODE_STATICS_onBlockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCommentCompleted
		#define GEODE_STATICS_onDeleteCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteFriendRequestCompleted
		#define GEODE_STATICS_onDeleteFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelCompleted
		#define GEODE_STATICS_onDeleteServerLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelListCompleted
		#define GEODE_STATICS_onDeleteServerLevelListCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteUserMessagesCompleted
		#define GEODE_STATICS_onDeleteUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadLevelCompleted
		#define GEODE_STATICS_onDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadUserMessageCompleted
		#define GEODE_STATICS_onDownloadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountCommentsCompleted
		#define GEODE_STATICS_onGetAccountCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetFriendRequestsCompleted
		#define GEODE_STATICS_onGetFriendRequestsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGauntletsCompleted
		#define GEODE_STATICS_onGetGauntletsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGauntletsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJChallengesCompleted
		#define GEODE_STATICS_onGetGJChallengesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJChallengesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJDailyLevelStateCompleted
		#define GEODE_STATICS_onGetGJDailyLevelStateCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJDailyLevelStateCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJRewardsCompleted
		#define GEODE_STATICS_onGetGJRewardsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJRewardsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJSecretRewardCompleted
		#define GEODE_STATICS_onGetGJSecretRewardCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJSecretRewardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJUserInfoCompleted
		#define GEODE_STATICS_onGetGJUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLeaderboardScoresCompleted
		#define GEODE_STATICS_onGetLeaderboardScoresCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelCommentsCompleted
		#define GEODE_STATICS_onGetLevelCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelLeaderboardCompleted
		#define GEODE_STATICS_onGetLevelLeaderboardCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelLeaderboardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelListsCompleted
		#define GEODE_STATICS_onGetLevelListsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelListsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelRateInfoCompleted
		#define GEODE_STATICS_onGetLevelRateInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelRateInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelSaveDataCompleted
		#define GEODE_STATICS_onGetLevelSaveDataCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetMapPacksCompleted
		#define GEODE_STATICS_onGetMapPacksCompleted
		GEODE_AS_STATIC_FUNCTION(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetNewsCompleted
		#define GEODE_STATICS_onGetNewsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetNewsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetOnlineLevelsCompleted
		#define GEODE_STATICS_onGetOnlineLevelsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetTopArtistsCompleted
		#define GEODE_STATICS_onGetTopArtistsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetTopArtistsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserListCompleted
		#define GEODE_STATICS_onGetUserListCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserMessagesCompleted
		#define GEODE_STATICS_onGetUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUsersCompleted
		#define GEODE_STATICS_onGetUsersCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLikeItemCompleted
		#define GEODE_STATICS_onLikeItemCompleted
		GEODE_AS_STATIC_FUNCTION(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateDemonCompleted
		#define GEODE_STATICS_onRateDemonCompleted
		GEODE_AS_STATIC_FUNCTION(onRateDemonCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateLevelAdminCompleted
		#define GEODE_STATICS_onRateLevelAdminCompleted
		GEODE_AS_STATIC_FUNCTION(onRateLevelAdminCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsCompleted
		#define GEODE_STATICS_onRateStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReadFriendRequestCompleted
		#define GEODE_STATICS_onReadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriendCompleted
		#define GEODE_STATICS_onRemoveFriendCompleted
		GEODE_AS_STATIC_FUNCTION(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReportLevelCompleted
		#define GEODE_STATICS_onReportLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRequestUserAccessCompleted
		#define GEODE_STATICS_onRequestUserAccessCompleted
		GEODE_AS_STATIC_FUNCTION(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRestoreItemsCompleted
		#define GEODE_STATICS_onRestoreItemsCompleted
		GEODE_AS_STATIC_FUNCTION(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelFeaturedCompleted
		#define GEODE_STATICS_onSetLevelFeaturedCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelStarsCompleted
		#define GEODE_STATICS_onSetLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSubmitUserInfoCompleted
		#define GEODE_STATICS_onSubmitUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSuggestLevelStarsCompleted
		#define GEODE_STATICS_onSuggestLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUserCompleted
		#define GEODE_STATICS_onUnblockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescriptionCompleted
		#define GEODE_STATICS_onUpdateDescriptionCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLevelCompleted
		#define GEODE_STATICS_onUpdateLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateUserScoreCompleted
		#define GEODE_STATICS_onUpdateUserScoreCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadCommentCompleted
		#define GEODE_STATICS_onUploadCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadFriendRequestCompleted
		#define GEODE_STATICS_onUploadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelCompleted
		#define GEODE_STATICS_onUploadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelListCompleted
		#define GEODE_STATICS_onUploadLevelListCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadUserMessageCompleted
		#define GEODE_STATICS_onUploadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_pageFromCommentKey
		#define GEODE_STATICS_pageFromCommentKey
		GEODE_AS_STATIC_FUNCTION(pageFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_parseRestoreData
		#define GEODE_STATICS_parseRestoreData
		GEODE_AS_STATIC_FUNCTION(parseRestoreData) 
	#endif

	#ifndef GEODE_STATICS_performNetworkTest
		#define GEODE_STATICS_performNetworkTest
		GEODE_AS_STATIC_FUNCTION(performNetworkTest) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_processOnDownloadLevelCompleted
		#define GEODE_STATICS_processOnDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(processOnDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_purgeUnusedLevels
		#define GEODE_STATICS_purgeUnusedLevels
		GEODE_AS_STATIC_FUNCTION(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_STATICS_rateDemon
		#define GEODE_STATICS_rateDemon
		GEODE_AS_STATIC_FUNCTION(rateDemon) 
	#endif

	#ifndef GEODE_STATICS_rateLevelAdmin
		#define GEODE_STATICS_rateLevelAdmin
		GEODE_AS_STATIC_FUNCTION(rateLevelAdmin) 
	#endif

	#ifndef GEODE_STATICS_rateStars
		#define GEODE_STATICS_rateStars
		GEODE_AS_STATIC_FUNCTION(rateStars) 
	#endif

	#ifndef GEODE_STATICS_readFriendRequest
		#define GEODE_STATICS_readFriendRequest
		GEODE_AS_STATIC_FUNCTION(readFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDelimiterChars
		#define GEODE_STATICS_removeDelimiterChars
		GEODE_AS_STATIC_FUNCTION(removeDelimiterChars) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeFriend
		#define GEODE_STATICS_removeFriend
		GEODE_AS_STATIC_FUNCTION(removeFriend) 
	#endif

	#ifndef GEODE_STATICS_removeLevelDownloadedKeysFromDict
		#define GEODE_STATICS_removeLevelDownloadedKeysFromDict
		GEODE_AS_STATIC_FUNCTION(removeLevelDownloadedKeysFromDict) 
	#endif

	#ifndef GEODE_STATICS_removeUserFromList
		#define GEODE_STATICS_removeUserFromList
		GEODE_AS_STATIC_FUNCTION(removeUserFromList) 
	#endif

	#ifndef GEODE_STATICS_reportLevel
		#define GEODE_STATICS_reportLevel
		GEODE_AS_STATIC_FUNCTION(reportLevel) 
	#endif

	#ifndef GEODE_STATICS_requestUserAccess
		#define GEODE_STATICS_requestUserAccess
		GEODE_AS_STATIC_FUNCTION(requestUserAccess) 
	#endif

	#ifndef GEODE_STATICS_resetAccountComments
		#define GEODE_STATICS_resetAccountComments
		GEODE_AS_STATIC_FUNCTION(resetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_resetAllTimers
		#define GEODE_STATICS_resetAllTimers
		GEODE_AS_STATIC_FUNCTION(resetAllTimers) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForAccountID
		#define GEODE_STATICS_resetCommentTimersForAccountID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForAccountID) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForLevelID
		#define GEODE_STATICS_resetCommentTimersForLevelID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForLevelID) 
	#endif

	#ifndef GEODE_STATICS_resetDailyLevelState
		#define GEODE_STATICS_resetDailyLevelState
		GEODE_AS_STATIC_FUNCTION(resetDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_resetGauntlets
		#define GEODE_STATICS_resetGauntlets
		GEODE_AS_STATIC_FUNCTION(resetGauntlets) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserInfo
		#define GEODE_STATICS_resetStoredUserInfo
		GEODE_AS_STATIC_FUNCTION(resetStoredUserInfo) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserList
		#define GEODE_STATICS_resetStoredUserList
		GEODE_AS_STATIC_FUNCTION(resetStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_resetTimerForKey
		#define GEODE_STATICS_resetTimerForKey
		GEODE_AS_STATIC_FUNCTION(resetTimerForKey) 
	#endif

	#ifndef GEODE_STATICS_restoreItems
		#define GEODE_STATICS_restoreItems
		GEODE_AS_STATIC_FUNCTION(restoreItems) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevelLists
		#define GEODE_STATICS_saveFetchedLevelLists
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevels
		#define GEODE_STATICS_saveFetchedLevels
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevels) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedMapPacks
		#define GEODE_STATICS_saveFetchedMapPacks
		GEODE_AS_STATIC_FUNCTION(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_saveGauntlet
		#define GEODE_STATICS_saveGauntlet
		GEODE_AS_STATIC_FUNCTION(saveGauntlet) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_saveLevelList
		#define GEODE_STATICS_saveLevelList
		GEODE_AS_STATIC_FUNCTION(saveLevelList) 
	#endif

	#ifndef GEODE_STATICS_saveLocalScore
		#define GEODE_STATICS_saveLocalScore
		GEODE_AS_STATIC_FUNCTION(saveLocalScore) 
	#endif

	#ifndef GEODE_STATICS_saveMapPack
		#define GEODE_STATICS_saveMapPack
		GEODE_AS_STATIC_FUNCTION(saveMapPack) 
	#endif

	#ifndef GEODE_STATICS_setActiveSmartTemplate
		#define GEODE_STATICS_setActiveSmartTemplate
		GEODE_AS_STATIC_FUNCTION(setActiveSmartTemplate) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setDiffVal
		#define GEODE_STATICS_setDiffVal
		GEODE_AS_STATIC_FUNCTION(setDiffVal) 
	#endif

	#ifndef GEODE_STATICS_setFolderName
		#define GEODE_STATICS_setFolderName
		GEODE_AS_STATIC_FUNCTION(setFolderName) 
	#endif

	#ifndef GEODE_STATICS_setIntForKey
		#define GEODE_STATICS_setIntForKey
		GEODE_AS_STATIC_FUNCTION(setIntForKey) 
	#endif

	#ifndef GEODE_STATICS_setLenVal
		#define GEODE_STATICS_setLenVal
		GEODE_AS_STATIC_FUNCTION(setLenVal) 
	#endif

	#ifndef GEODE_STATICS_setLevelFeatured
		#define GEODE_STATICS_setLevelFeatured
		GEODE_AS_STATIC_FUNCTION(setLevelFeatured) 
	#endif

	#ifndef GEODE_STATICS_setLevelStars
		#define GEODE_STATICS_setLevelStars
		GEODE_AS_STATIC_FUNCTION(setLevelStars) 
	#endif

	#ifndef GEODE_STATICS_specialFromLikeKey
		#define GEODE_STATICS_specialFromLikeKey
		GEODE_AS_STATIC_FUNCTION(specialFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_storeCommentsResult
		#define GEODE_STATICS_storeCommentsResult
		GEODE_AS_STATIC_FUNCTION(storeCommentsResult) 
	#endif

	#ifndef GEODE_STATICS_storeDailyLevelState
		#define GEODE_STATICS_storeDailyLevelState
		GEODE_AS_STATIC_FUNCTION(storeDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_storeFriendRequest
		#define GEODE_STATICS_storeFriendRequest
		GEODE_AS_STATIC_FUNCTION(storeFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_storeSearchResult
		#define GEODE_STATICS_storeSearchResult
		GEODE_AS_STATIC_FUNCTION(storeSearchResult) 
	#endif

	#ifndef GEODE_STATICS_storeUserInfo
		#define GEODE_STATICS_storeUserInfo
		GEODE_AS_STATIC_FUNCTION(storeUserInfo) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessage
		#define GEODE_STATICS_storeUserMessage
		GEODE_AS_STATIC_FUNCTION(storeUserMessage) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessageReply
		#define GEODE_STATICS_storeUserMessageReply
		GEODE_AS_STATIC_FUNCTION(storeUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_storeUserName
		#define GEODE_STATICS_storeUserName
		GEODE_AS_STATIC_FUNCTION(storeUserName) 
	#endif

	#ifndef GEODE_STATICS_storeUserNames
		#define GEODE_STATICS_storeUserNames
		GEODE_AS_STATIC_FUNCTION(storeUserNames) 
	#endif

	#ifndef GEODE_STATICS_submitUserInfo
		#define GEODE_STATICS_submitUserInfo
		GEODE_AS_STATIC_FUNCTION(submitUserInfo) 
	#endif

	#ifndef GEODE_STATICS_suggestLevelStars
		#define GEODE_STATICS_suggestLevelStars
		GEODE_AS_STATIC_FUNCTION(suggestLevelStars) 
	#endif

	#ifndef GEODE_STATICS_tryGetUsername
		#define GEODE_STATICS_tryGetUsername
		GEODE_AS_STATIC_FUNCTION(tryGetUsername) 
	#endif

	#ifndef GEODE_STATICS_typeFromCommentKey
		#define GEODE_STATICS_typeFromCommentKey
		GEODE_AS_STATIC_FUNCTION(typeFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_typeFromLikeKey
		#define GEODE_STATICS_typeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(typeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
	#endif

	#ifndef GEODE_STATICS_unfollowUser
		#define GEODE_STATICS_unfollowUser
		GEODE_AS_STATIC_FUNCTION(unfollowUser) 
	#endif

	#ifndef GEODE_STATICS_unrateLevelAdmin
		#define GEODE_STATICS_unrateLevelAdmin
		GEODE_AS_STATIC_FUNCTION(unrateLevelAdmin) 
	#endif

	#ifndef GEODE_STATICS_updateDescription
		#define GEODE_STATICS_updateDescription
		GEODE_AS_STATIC_FUNCTION(updateDescription) 
	#endif

	#ifndef GEODE_STATICS_updateLevel
		#define GEODE_STATICS_updateLevel
		GEODE_AS_STATIC_FUNCTION(updateLevel) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrders
		#define GEODE_STATICS_updateLevelOrders
		GEODE_AS_STATIC_FUNCTION(updateLevelOrders) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRankAdmin
		#define GEODE_STATICS_updateLevelRankAdmin
		GEODE_AS_STATIC_FUNCTION(updateLevelRankAdmin) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRewards
		#define GEODE_STATICS_updateLevelRewards
		GEODE_AS_STATIC_FUNCTION(updateLevelRewards) 
	#endif

	#ifndef GEODE_STATICS_updateSavedLevelList
		#define GEODE_STATICS_updateSavedLevelList
		GEODE_AS_STATIC_FUNCTION(updateSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_updateUsernames
		#define GEODE_STATICS_updateUsernames
		GEODE_AS_STATIC_FUNCTION(updateUsernames) 
	#endif

	#ifndef GEODE_STATICS_updateUserScore
		#define GEODE_STATICS_updateUserScore
		GEODE_AS_STATIC_FUNCTION(updateUserScore) 
	#endif

	#ifndef GEODE_STATICS_uploadAccountComment
		#define GEODE_STATICS_uploadAccountComment
		GEODE_AS_STATIC_FUNCTION(uploadAccountComment) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

	#ifndef GEODE_STATICS_uploadFriendRequest
		#define GEODE_STATICS_uploadFriendRequest
		GEODE_AS_STATIC_FUNCTION(uploadFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_uploadLevel
		#define GEODE_STATICS_uploadLevel
		GEODE_AS_STATIC_FUNCTION(uploadLevel) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelComment
		#define GEODE_STATICS_uploadLevelComment
		GEODE_AS_STATIC_FUNCTION(uploadLevelComment) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelList
		#define GEODE_STATICS_uploadLevelList
		GEODE_AS_STATIC_FUNCTION(uploadLevelList) 
	#endif

	#ifndef GEODE_STATICS_uploadUserMessage
		#define GEODE_STATICS_uploadUserMessage
		GEODE_AS_STATIC_FUNCTION(uploadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_userIDForAccountID
		#define GEODE_STATICS_userIDForAccountID
		GEODE_AS_STATIC_FUNCTION(userIDForAccountID) 
	#endif

	#ifndef GEODE_STATICS_userInfoForAccountID
		#define GEODE_STATICS_userInfoForAccountID
		GEODE_AS_STATIC_FUNCTION(userInfoForAccountID) 
	#endif

	#ifndef GEODE_STATICS_userNameForUserID
		#define GEODE_STATICS_userNameForUserID
		GEODE_AS_STATIC_FUNCTION(userNameForUserID) 
	#endif

	#ifndef GEODE_STATICS_verifyContainerOnlyHasLevels
		#define GEODE_STATICS_verifyContainerOnlyHasLevels
		GEODE_AS_STATIC_FUNCTION(verifyContainerOnlyHasLevels) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelState
		#define GEODE_STATICS_verifyLevelState
		GEODE_AS_STATIC_FUNCTION(verifyLevelState) 
	#endif

	#ifndef GEODE_STATICS_writeSpecialFilters
		#define GEODE_STATICS_writeSpecialFilters
		GEODE_AS_STATIC_FUNCTION(writeSpecialFilters) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptFriendRequest
		#define GEODE_CONCEPT_CHECK_acceptFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(acceptFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountIDForUserID
		#define GEODE_CONCEPT_CHECK_accountIDForUserID
		GEODE_CONCEPT_FUNCTION_CHECK(accountIDForUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areGauntletsLoaded
		#define GEODE_CONCEPT_CHECK_areGauntletsLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(areGauntletsLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_banUser
		#define GEODE_CONCEPT_CHECK_banUser
		GEODE_CONCEPT_FUNCTION_CHECK(banUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blockUser
		#define GEODE_CONCEPT_CHECK_blockUser
		GEODE_CONCEPT_FUNCTION_CHECK(blockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanupDailyLevels
		#define GEODE_CONCEPT_CHECK_cleanupDailyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetAccountComments
		#define GEODE_CONCEPT_CHECK_createAndGetAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetCommentsFull
		#define GEODE_CONCEPT_CHECK_createAndGetCommentsFull
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevelComments
		#define GEODE_CONCEPT_CHECK_createAndGetLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevelLists
		#define GEODE_CONCEPT_CHECK_createAndGetLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevels
		#define GEODE_CONCEPT_CHECK_createAndGetLevels
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetMapPacks
		#define GEODE_CONCEPT_CHECK_createAndGetMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetScores
		#define GEODE_CONCEPT_CHECK_createAndGetScores
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewLevel
		#define GEODE_CONCEPT_CHECK_createNewLevel
		GEODE_CONCEPT_FUNCTION_CHECK(createNewLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewLevelList
		#define GEODE_CONCEPT_CHECK_createNewLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(createNewLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPageInfo
		#define GEODE_CONCEPT_CHECK_createPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSmartTemplate
		#define GEODE_CONCEPT_CHECK_createSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(createSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteAccountComment
		#define GEODE_CONCEPT_CHECK_deleteAccountComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteAccountComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteComment
		#define GEODE_CONCEPT_CHECK_deleteComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteFriendRequests
		#define GEODE_CONCEPT_CHECK_deleteFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(deleteFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevel
		#define GEODE_CONCEPT_CHECK_deleteLevel
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevelComment
		#define GEODE_CONCEPT_CHECK_deleteLevelComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevelComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevelList
		#define GEODE_CONCEPT_CHECK_deleteLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSentFriendRequest
		#define GEODE_CONCEPT_CHECK_deleteSentFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteServerLevel
		#define GEODE_CONCEPT_CHECK_deleteServerLevel
		GEODE_CONCEPT_FUNCTION_CHECK(deleteServerLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteServerLevelList
		#define GEODE_CONCEPT_CHECK_deleteServerLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(deleteServerLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSmartTemplate
		#define GEODE_CONCEPT_CHECK_deleteSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteUserMessages
		#define GEODE_CONCEPT_CHECK_deleteUserMessages
		GEODE_CONCEPT_FUNCTION_CHECK(deleteUserMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadLevel
		#define GEODE_CONCEPT_CHECK_downloadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(downloadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadUserMessage
		#define GEODE_CONCEPT_CHECK_downloadUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(downloadUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUser
		#define GEODE_CONCEPT_CHECK_followUser
		GEODE_CONCEPT_FUNCTION_CHECK(followUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendRequestFromAccountID
		#define GEODE_CONCEPT_CHECK_friendRequestFromAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendRequestWasRemoved
		#define GEODE_CONCEPT_CHECK_friendRequestWasRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountCommentKey
		#define GEODE_CONCEPT_CHECK_getAccountCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountComments
		#define GEODE_CONCEPT_CHECK_getAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveDailyID
		#define GEODE_CONCEPT_CHECK_getActiveDailyID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveDailyID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSmartTemplate
		#define GEODE_CONCEPT_CHECK_getActiveSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSmartTemplates
		#define GEODE_CONCEPT_CHECK_getAllSmartTemplates
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSmartTemplates) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllUsedSongIDs
		#define GEODE_CONCEPT_CHECK_getAllUsedSongIDs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBasePostString
		#define GEODE_CONCEPT_CHECK_getBasePostString
		GEODE_CONCEPT_FUNCTION_CHECK(getBasePostString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoolForKey
		#define GEODE_CONCEPT_CHECK_getBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentKey
		#define GEODE_CONCEPT_CHECK_getCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedDailyLevels
		#define GEODE_CONCEPT_CHECK_getCompletedDailyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedDailyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedEventLevels
		#define GEODE_CONCEPT_CHECK_getCompletedEventLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedEventLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedGauntletDemons
		#define GEODE_CONCEPT_CHECK_getCompletedGauntletDemons
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedGauntletDemons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedGauntletLevels
		#define GEODE_CONCEPT_CHECK_getCompletedGauntletLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedGauntletLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedLevels
		#define GEODE_CONCEPT_CHECK_getCompletedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedWeeklyLevels
		#define GEODE_CONCEPT_CHECK_getCompletedWeeklyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedWeeklyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyID
		#define GEODE_CONCEPT_CHECK_getDailyID
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyTimer
		#define GEODE_CONCEPT_CHECK_getDailyTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteCommentKey
		#define GEODE_CONCEPT_CHECK_getDeleteCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteMessageKey
		#define GEODE_CONCEPT_CHECK_getDeleteMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemonLevelsString
		#define GEODE_CONCEPT_CHECK_getDemonLevelsString
		GEODE_CONCEPT_FUNCTION_CHECK(getDemonLevelsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDescKey
		#define GEODE_CONCEPT_CHECK_getDescKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDescKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDifficultyStr
		#define GEODE_CONCEPT_CHECK_getDifficultyStr
		GEODE_CONCEPT_FUNCTION_CHECK(getDifficultyStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDiffKey
		#define GEODE_CONCEPT_CHECK_getDiffKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDiffKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDiffVal
		#define GEODE_CONCEPT_CHECK_getDiffVal
		GEODE_CONCEPT_FUNCTION_CHECK(getDiffVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFolderName
		#define GEODE_CONCEPT_CHECK_getFolderName
		GEODE_CONCEPT_FUNCTION_CHECK(getFolderName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendRequestKey
		#define GEODE_CONCEPT_CHECK_getFriendRequestKey
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendRequestKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendRequests
		#define GEODE_CONCEPT_CHECK_getFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletKey
		#define GEODE_CONCEPT_CHECK_getGauntletKey
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletLevels
		#define GEODE_CONCEPT_CHECK_getGauntletLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntlets
		#define GEODE_CONCEPT_CHECK_getGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletSearchKey
		#define GEODE_CONCEPT_CHECK_getGauntletSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJChallenges
		#define GEODE_CONCEPT_CHECK_getGJChallenges
		GEODE_CONCEPT_FUNCTION_CHECK(getGJChallenges) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJDailyLevelState
		#define GEODE_CONCEPT_CHECK_getGJDailyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(getGJDailyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJRewards
		#define GEODE_CONCEPT_CHECK_getGJRewards
		GEODE_CONCEPT_FUNCTION_CHECK(getGJRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJSecretReward
		#define GEODE_CONCEPT_CHECK_getGJSecretReward
		GEODE_CONCEPT_FUNCTION_CHECK(getGJSecretReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJUserInfo
		#define GEODE_CONCEPT_CHECK_getGJUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getGJUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHighestLevelOrder
		#define GEODE_CONCEPT_CHECK_getHighestLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getHighestLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntForKey
		#define GEODE_CONCEPT_CHECK_getIntForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getIntForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLeaderboardKey
		#define GEODE_CONCEPT_CHECK_getLeaderboardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLeaderboardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLeaderboardScores
		#define GEODE_CONCEPT_CHECK_getLeaderboardScores
		GEODE_CONCEPT_FUNCTION_CHECK(getLeaderboardScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthStr
		#define GEODE_CONCEPT_CHECK_getLengthStr
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLenKey
		#define GEODE_CONCEPT_CHECK_getLenKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLenKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLenVal
		#define GEODE_CONCEPT_CHECK_getLenVal
		GEODE_CONCEPT_FUNCTION_CHECK(getLenVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelComments
		#define GEODE_CONCEPT_CHECK_getLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelDownloadKey
		#define GEODE_CONCEPT_CHECK_getLevelDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelKey
		#define GEODE_CONCEPT_CHECK_getLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLeaderboard
		#define GEODE_CONCEPT_CHECK_getLevelLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLeaderboardKey
		#define GEODE_CONCEPT_CHECK_getLevelLeaderboardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLeaderboardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelListKey
		#define GEODE_CONCEPT_CHECK_getLevelListKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelListKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLists
		#define GEODE_CONCEPT_CHECK_getLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelRateInfo
		#define GEODE_CONCEPT_CHECK_getLevelRateInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelRateInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSaveData
		#define GEODE_CONCEPT_CHECK_getLevelSaveData
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSaveData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeAccountItemKey
		#define GEODE_CONCEPT_CHECK_getLikeAccountItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeItemKey
		#define GEODE_CONCEPT_CHECK_getLikeItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevel
		#define GEODE_CONCEPT_CHECK_getLocalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevelByName
		#define GEODE_CONCEPT_CHECK_getLocalLevelByName
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevelByName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevelList
		#define GEODE_CONCEPT_CHECK_getLocalLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLowestLevelOrder
		#define GEODE_CONCEPT_CHECK_getLowestLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getLowestLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevel
		#define GEODE_CONCEPT_CHECK_getMainLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPackKey
		#define GEODE_CONCEPT_CHECK_getMapPackKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPackKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPacks
		#define GEODE_CONCEPT_CHECK_getMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessageKey
		#define GEODE_CONCEPT_CHECK_getMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessagesKey
		#define GEODE_CONCEPT_CHECK_getMessagesKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMessagesKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNews
		#define GEODE_CONCEPT_CHECK_getNews
		GEODE_CONCEPT_FUNCTION_CHECK(getNews) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeTemplateID
		#define GEODE_CONCEPT_CHECK_getNextFreeTemplateID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeTemplateID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextLevelName
		#define GEODE_CONCEPT_CHECK_getNextLevelName
		GEODE_CONCEPT_FUNCTION_CHECK(getNextLevelName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnlineLevels
		#define GEODE_CONCEPT_CHECK_getOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageInfo
		#define GEODE_CONCEPT_CHECK_getPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPostCommentKey
		#define GEODE_CONCEPT_CHECK_getPostCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getPostCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateStarsKey
		#define GEODE_CONCEPT_CHECK_getRateStarsKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRateStarsKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReportKey
		#define GEODE_CONCEPT_CHECK_getReportKey
		GEODE_CONCEPT_FUNCTION_CHECK(getReportKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedDailyLevel
		#define GEODE_CONCEPT_CHECK_getSavedDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedDailyLevelFromLevelID
		#define GEODE_CONCEPT_CHECK_getSavedDailyLevelFromLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedDailyLevelFromLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedGauntlet
		#define GEODE_CONCEPT_CHECK_getSavedGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedGauntletLevel
		#define GEODE_CONCEPT_CHECK_getSavedGauntletLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevel
		#define GEODE_CONCEPT_CHECK_getSavedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevelList
		#define GEODE_CONCEPT_CHECK_getSavedLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevelLists
		#define GEODE_CONCEPT_CHECK_getSavedLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevels
		#define GEODE_CONCEPT_CHECK_getSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedMapPack
		#define GEODE_CONCEPT_CHECK_getSavedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchScene
		#define GEODE_CONCEPT_CHECK_getSearchScene
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSplitIntFromKey
		#define GEODE_CONCEPT_CHECK_getSplitIntFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarLevelsString
		#define GEODE_CONCEPT_CHECK_getStarLevelsString
		GEODE_CONCEPT_FUNCTION_CHECK(getStarLevelsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredLevelComments
		#define GEODE_CONCEPT_CHECK_getStoredLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredOnlineLevels
		#define GEODE_CONCEPT_CHECK_getStoredOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserList
		#define GEODE_CONCEPT_CHECK_getStoredUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserMessage
		#define GEODE_CONCEPT_CHECK_getStoredUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserMessageReply
		#define GEODE_CONCEPT_CHECK_getStoredUserMessageReply
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeLeft
		#define GEODE_CONCEPT_CHECK_getTimeLeft
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTopArtists
		#define GEODE_CONCEPT_CHECK_getTopArtists
		GEODE_CONCEPT_FUNCTION_CHECK(getTopArtists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTopArtistsKey
		#define GEODE_CONCEPT_CHECK_getTopArtistsKey
		GEODE_CONCEPT_FUNCTION_CHECK(getTopArtistsKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUploadMessageKey
		#define GEODE_CONCEPT_CHECK_getUploadMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUploadMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoKey
		#define GEODE_CONCEPT_CHECK_getUserInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserList
		#define GEODE_CONCEPT_CHECK_getUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserMessages
		#define GEODE_CONCEPT_CHECK_getUserMessages
		GEODE_CONCEPT_FUNCTION_CHECK(getUserMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUsers
		#define GEODE_CONCEPT_CHECK_getUsers
		GEODE_CONCEPT_FUNCTION_CHECK(getUsers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gotoLevelPage
		#define GEODE_CONCEPT_CHECK_gotoLevelPage
		GEODE_CONCEPT_FUNCTION_CHECK(gotoLevelPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDailyStateBeenLoaded
		#define GEODE_CONCEPT_CHECK_hasDailyStateBeenLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(hasDailyStateBeenLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDownloadedLevel
		#define GEODE_CONCEPT_CHECK_hasDownloadedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDownloadedList
		#define GEODE_CONCEPT_CHECK_hasDownloadedList
		GEODE_CONCEPT_FUNCTION_CHECK(hasDownloadedList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedAccountItem
		#define GEODE_CONCEPT_CHECK_hasLikedAccountItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedItem
		#define GEODE_CONCEPT_CHECK_hasLikedItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedItemFullCheck
		#define GEODE_CONCEPT_CHECK_hasLikedItemFullCheck
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRatedDemon
		#define GEODE_CONCEPT_CHECK_hasRatedDemon
		GEODE_CONCEPT_FUNCTION_CHECK(hasRatedDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRatedLevelStars
		#define GEODE_CONCEPT_CHECK_hasRatedLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasReportedLevel
		#define GEODE_CONCEPT_CHECK_hasReportedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasReportedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateMessages
		#define GEODE_CONCEPT_CHECK_invalidateMessages
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateRequests
		#define GEODE_CONCEPT_CHECK_invalidateRequests
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateUserList
		#define GEODE_CONCEPT_CHECK_invalidateUserList
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFollowingUser
		#define GEODE_CONCEPT_CHECK_isFollowingUser
		GEODE_CONCEPT_FUNCTION_CHECK(isFollowingUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTimeValid
		#define GEODE_CONCEPT_CHECK_isTimeValid
		GEODE_CONCEPT_FUNCTION_CHECK(isTimeValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUpdateValid
		#define GEODE_CONCEPT_CHECK_isUpdateValid
		GEODE_CONCEPT_FUNCTION_CHECK(isUpdateValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemIDFromLikeKey
		#define GEODE_CONCEPT_CHECK_itemIDFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyHasTimer
		#define GEODE_CONCEPT_CHECK_keyHasTimer
		GEODE_CONCEPT_FUNCTION_CHECK(keyHasTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIDFromCommentKey
		#define GEODE_CONCEPT_CHECK_levelIDFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIDFromPostCommentKey
		#define GEODE_CONCEPT_CHECK_levelIDFromPostCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeFromLikeKey
		#define GEODE_CONCEPT_CHECK_likeFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(likeFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeItem
		#define GEODE_CONCEPT_CHECK_likeItem
		GEODE_CONCEPT_FUNCTION_CHECK(likeItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitSavedLevels
		#define GEODE_CONCEPT_CHECK_limitSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(limitSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeTimeStamp
		#define GEODE_CONCEPT_CHECK_makeTimeStamp
		GEODE_CONCEPT_FUNCTION_CHECK(makeTimeStamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markItemAsLiked
		#define GEODE_CONCEPT_CHECK_markItemAsLiked
		GEODE_CONCEPT_FUNCTION_CHECK(markItemAsLiked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsDownloaded
		#define GEODE_CONCEPT_CHECK_markLevelAsDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsRatedDemon
		#define GEODE_CONCEPT_CHECK_markLevelAsRatedDemon
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsRatedDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsRatedStars
		#define GEODE_CONCEPT_CHECK_markLevelAsRatedStars
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsReported
		#define GEODE_CONCEPT_CHECK_markLevelAsReported
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsReported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markListAsDownloaded
		#define GEODE_CONCEPT_CHECK_markListAsDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(markListAsDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_messageWasRemoved
		#define GEODE_CONCEPT_CHECK_messageWasRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(messageWasRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAcceptFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onAcceptFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBanUserCompleted
		#define GEODE_CONCEPT_CHECK_onBanUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBanUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlockUserCompleted
		#define GEODE_CONCEPT_CHECK_onBlockUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCommentCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServerLevelCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteServerLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServerLevelListCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteServerLevelListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServerLevelListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteUserMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteUserMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadLevelCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadUserMessageCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadUserMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetAccountCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onGetAccountCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetFriendRequestsCompleted
		#define GEODE_CONCEPT_CHECK_onGetFriendRequestsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGauntletsCompleted
		#define GEODE_CONCEPT_CHECK_onGetGauntletsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGauntletsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJChallengesCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJChallengesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJChallengesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJDailyLevelStateCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJDailyLevelStateCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJDailyLevelStateCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJRewardsCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJRewardsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJRewardsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJSecretRewardCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJSecretRewardCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJSecretRewardCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJUserInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJUserInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLeaderboardScoresCompleted
		#define GEODE_CONCEPT_CHECK_onGetLeaderboardScoresCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelLeaderboardCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelLeaderboardCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelLeaderboardCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelListsCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelListsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelListsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelRateInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelRateInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelRateInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelSaveDataCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelSaveDataCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetMapPacksCompleted
		#define GEODE_CONCEPT_CHECK_onGetMapPacksCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetNewsCompleted
		#define GEODE_CONCEPT_CHECK_onGetNewsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetNewsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetOnlineLevelsCompleted
		#define GEODE_CONCEPT_CHECK_onGetOnlineLevelsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetTopArtistsCompleted
		#define GEODE_CONCEPT_CHECK_onGetTopArtistsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetTopArtistsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserListCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUsersCompleted
		#define GEODE_CONCEPT_CHECK_onGetUsersCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLikeItemCompleted
		#define GEODE_CONCEPT_CHECK_onLikeItemCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateDemonCompleted
		#define GEODE_CONCEPT_CHECK_onRateDemonCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateDemonCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateLevelAdminCompleted
		#define GEODE_CONCEPT_CHECK_onRateLevelAdminCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateLevelAdminCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateStarsCompleted
		#define GEODE_CONCEPT_CHECK_onRateStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReadFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onReadFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFriendCompleted
		#define GEODE_CONCEPT_CHECK_onRemoveFriendCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReportLevelCompleted
		#define GEODE_CONCEPT_CHECK_onReportLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRequestUserAccessCompleted
		#define GEODE_CONCEPT_CHECK_onRequestUserAccessCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestoreItemsCompleted
		#define GEODE_CONCEPT_CHECK_onRestoreItemsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetLevelFeaturedCompleted
		#define GEODE_CONCEPT_CHECK_onSetLevelFeaturedCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetLevelStarsCompleted
		#define GEODE_CONCEPT_CHECK_onSetLevelStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmitUserInfoCompleted
		#define GEODE_CONCEPT_CHECK_onSubmitUserInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSuggestLevelStarsCompleted
		#define GEODE_CONCEPT_CHECK_onSuggestLevelStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnblockUserCompleted
		#define GEODE_CONCEPT_CHECK_onUnblockUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateDescriptionCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateDescriptionCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLevelCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateUserScoreCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateUserScoreCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		#define GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onUploadFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadLevelCompleted
		#define GEODE_CONCEPT_CHECK_onUploadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadLevelListCompleted
		#define GEODE_CONCEPT_CHECK_onUploadLevelListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadLevelListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadUserMessageCompleted
		#define GEODE_CONCEPT_CHECK_onUploadUserMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageFromCommentKey
		#define GEODE_CONCEPT_CHECK_pageFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseRestoreData
		#define GEODE_CONCEPT_CHECK_parseRestoreData
		GEODE_CONCEPT_FUNCTION_CHECK(parseRestoreData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performNetworkTest
		#define GEODE_CONCEPT_CHECK_performNetworkTest
		GEODE_CONCEPT_FUNCTION_CHECK(performNetworkTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processOnDownloadLevelCompleted
		#define GEODE_CONCEPT_CHECK_processOnDownloadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(processOnDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeUnusedLevels
		#define GEODE_CONCEPT_CHECK_purgeUnusedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateDemon
		#define GEODE_CONCEPT_CHECK_rateDemon
		GEODE_CONCEPT_FUNCTION_CHECK(rateDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateLevelAdmin
		#define GEODE_CONCEPT_CHECK_rateLevelAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(rateLevelAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateStars
		#define GEODE_CONCEPT_CHECK_rateStars
		GEODE_CONCEPT_FUNCTION_CHECK(rateStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readFriendRequest
		#define GEODE_CONCEPT_CHECK_readFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(readFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelimiterChars
		#define GEODE_CONCEPT_CHECK_removeDelimiterChars
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelimiterChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFriend
		#define GEODE_CONCEPT_CHECK_removeFriend
		GEODE_CONCEPT_FUNCTION_CHECK(removeFriend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLevelDownloadedKeysFromDict
		#define GEODE_CONCEPT_CHECK_removeLevelDownloadedKeysFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(removeLevelDownloadedKeysFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeUserFromList
		#define GEODE_CONCEPT_CHECK_removeUserFromList
		GEODE_CONCEPT_FUNCTION_CHECK(removeUserFromList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportLevel
		#define GEODE_CONCEPT_CHECK_reportLevel
		GEODE_CONCEPT_FUNCTION_CHECK(reportLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestUserAccess
		#define GEODE_CONCEPT_CHECK_requestUserAccess
		GEODE_CONCEPT_FUNCTION_CHECK(requestUserAccess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAccountComments
		#define GEODE_CONCEPT_CHECK_resetAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(resetAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllTimers
		#define GEODE_CONCEPT_CHECK_resetAllTimers
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCommentTimersForAccountID
		#define GEODE_CONCEPT_CHECK_resetCommentTimersForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(resetCommentTimersForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCommentTimersForLevelID
		#define GEODE_CONCEPT_CHECK_resetCommentTimersForLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(resetCommentTimersForLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDailyLevelState
		#define GEODE_CONCEPT_CHECK_resetDailyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(resetDailyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGauntlets
		#define GEODE_CONCEPT_CHECK_resetGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(resetGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoredUserInfo
		#define GEODE_CONCEPT_CHECK_resetStoredUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoredUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoredUserList
		#define GEODE_CONCEPT_CHECK_resetStoredUserList
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoredUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTimerForKey
		#define GEODE_CONCEPT_CHECK_resetTimerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(resetTimerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreItems
		#define GEODE_CONCEPT_CHECK_restoreItems
		GEODE_CONCEPT_FUNCTION_CHECK(restoreItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedLevelLists
		#define GEODE_CONCEPT_CHECK_saveFetchedLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedLevels
		#define GEODE_CONCEPT_CHECK_saveFetchedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedMapPacks
		#define GEODE_CONCEPT_CHECK_saveFetchedMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveGauntlet
		#define GEODE_CONCEPT_CHECK_saveGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(saveGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevel
		#define GEODE_CONCEPT_CHECK_saveLevel
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevelList
		#define GEODE_CONCEPT_CHECK_saveLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLocalScore
		#define GEODE_CONCEPT_CHECK_saveLocalScore
		GEODE_CONCEPT_FUNCTION_CHECK(saveLocalScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveMapPack
		#define GEODE_CONCEPT_CHECK_saveMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(saveMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveSmartTemplate
		#define GEODE_CONCEPT_CHECK_setActiveSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBoolForKey
		#define GEODE_CONCEPT_CHECK_setBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDiffVal
		#define GEODE_CONCEPT_CHECK_setDiffVal
		GEODE_CONCEPT_FUNCTION_CHECK(setDiffVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFolderName
		#define GEODE_CONCEPT_CHECK_setFolderName
		GEODE_CONCEPT_FUNCTION_CHECK(setFolderName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntForKey
		#define GEODE_CONCEPT_CHECK_setIntForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setIntForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLenVal
		#define GEODE_CONCEPT_CHECK_setLenVal
		GEODE_CONCEPT_FUNCTION_CHECK(setLenVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelFeatured
		#define GEODE_CONCEPT_CHECK_setLevelFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelStars
		#define GEODE_CONCEPT_CHECK_setLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_specialFromLikeKey
		#define GEODE_CONCEPT_CHECK_specialFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(specialFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCommentsResult
		#define GEODE_CONCEPT_CHECK_storeCommentsResult
		GEODE_CONCEPT_FUNCTION_CHECK(storeCommentsResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeDailyLevelState
		#define GEODE_CONCEPT_CHECK_storeDailyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(storeDailyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeFriendRequest
		#define GEODE_CONCEPT_CHECK_storeFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(storeFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSearchResult
		#define GEODE_CONCEPT_CHECK_storeSearchResult
		GEODE_CONCEPT_FUNCTION_CHECK(storeSearchResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserInfo
		#define GEODE_CONCEPT_CHECK_storeUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserMessage
		#define GEODE_CONCEPT_CHECK_storeUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserMessageReply
		#define GEODE_CONCEPT_CHECK_storeUserMessageReply
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserMessageReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserName
		#define GEODE_CONCEPT_CHECK_storeUserName
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserNames
		#define GEODE_CONCEPT_CHECK_storeUserNames
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_submitUserInfo
		#define GEODE_CONCEPT_CHECK_submitUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(submitUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_suggestLevelStars
		#define GEODE_CONCEPT_CHECK_suggestLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(suggestLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetUsername
		#define GEODE_CONCEPT_CHECK_tryGetUsername
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetUsername) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeFromCommentKey
		#define GEODE_CONCEPT_CHECK_typeFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(typeFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeFromLikeKey
		#define GEODE_CONCEPT_CHECK_typeFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(typeFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockUser
		#define GEODE_CONCEPT_CHECK_unblockUser
		GEODE_CONCEPT_FUNCTION_CHECK(unblockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unfollowUser
		#define GEODE_CONCEPT_CHECK_unfollowUser
		GEODE_CONCEPT_FUNCTION_CHECK(unfollowUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unrateLevelAdmin
		#define GEODE_CONCEPT_CHECK_unrateLevelAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(unrateLevelAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDescription
		#define GEODE_CONCEPT_CHECK_updateDescription
		GEODE_CONCEPT_FUNCTION_CHECK(updateDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevel
		#define GEODE_CONCEPT_CHECK_updateLevel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelOrders
		#define GEODE_CONCEPT_CHECK_updateLevelOrders
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelOrders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRankAdmin
		#define GEODE_CONCEPT_CHECK_updateLevelRankAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRankAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRewards
		#define GEODE_CONCEPT_CHECK_updateLevelRewards
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSavedLevelList
		#define GEODE_CONCEPT_CHECK_updateSavedLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(updateSavedLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUsernames
		#define GEODE_CONCEPT_CHECK_updateUsernames
		GEODE_CONCEPT_FUNCTION_CHECK(updateUsernames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScore
		#define GEODE_CONCEPT_CHECK_updateUserScore
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadAccountComment
		#define GEODE_CONCEPT_CHECK_uploadAccountComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadAccountComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadComment
		#define GEODE_CONCEPT_CHECK_uploadComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadFriendRequest
		#define GEODE_CONCEPT_CHECK_uploadFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(uploadFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevel
		#define GEODE_CONCEPT_CHECK_uploadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevelComment
		#define GEODE_CONCEPT_CHECK_uploadLevelComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevelComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevelList
		#define GEODE_CONCEPT_CHECK_uploadLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadUserMessage
		#define GEODE_CONCEPT_CHECK_uploadUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(uploadUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userIDForAccountID
		#define GEODE_CONCEPT_CHECK_userIDForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(userIDForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userInfoForAccountID
		#define GEODE_CONCEPT_CHECK_userInfoForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(userInfoForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userNameForUserID
		#define GEODE_CONCEPT_CHECK_userNameForUserID
		GEODE_CONCEPT_FUNCTION_CHECK(userNameForUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyContainerOnlyHasLevels
		#define GEODE_CONCEPT_CHECK_verifyContainerOnlyHasLevels
		GEODE_CONCEPT_FUNCTION_CHECK(verifyContainerOnlyHasLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyLevelState
		#define GEODE_CONCEPT_CHECK_verifyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(verifyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writeSpecialFilters
		#define GEODE_CONCEPT_CHECK_writeSpecialFilters
		GEODE_CONCEPT_FUNCTION_CHECK(writeSpecialFilters) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelManager> : ModifyBase<ModifyDerive<Der, GameLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelManager>>;
		using ModifyBase<ModifyDerive<Der, GameLevelManager>>::ModifyBase;
		using Base = GameLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager14responseToDictESsb")), Default, GameLevelManager, responseToDict, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::sharedState)), Default, GameLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameLevelManager::init)), Default, GameLevelManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::acceptFriendRequest)), Default, GameLevelManager, acceptFriendRequest, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::accountIDForUserID)), Default, GameLevelManager, accountIDForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::addDLToActive)), Default, GameLevelManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::areGauntletsLoaded)), Default, GameLevelManager, areGauntletsLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::banUser)), Default, GameLevelManager, banUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::blockUser)), Default, GameLevelManager, blockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::cleanupDailyLevels)), Default, GameLevelManager, cleanupDailyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager27createAndGetAccountCommentsESsi")), Default, GameLevelManager, createAndGetAccountComments, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24createAndGetCommentsFullESsib")), Default, GameLevelManager, createAndGetCommentsFull, gd::string, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager25createAndGetLevelCommentsESsi")), Default, GameLevelManager, createAndGetLevelComments, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22createAndGetLevelListsESs")), Default, GameLevelManager, createAndGetLevelLists, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager18createAndGetLevelsESs")), Default, GameLevelManager, createAndGetLevels, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager20createAndGetMapPacksESs")), Default, GameLevelManager, createAndGetMapPacks, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager18createAndGetScoresESs11GJScoreType")), Default, GameLevelManager, createAndGetScores, gd::string, GJScoreType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::createNewLevel)), Default, GameLevelManager, createNewLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::createNewLevelList)), Default, GameLevelManager, createNewLevelList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameLevelManager::createPageInfo)), Default, GameLevelManager, createPageInfo, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::createSmartTemplate)), Default, GameLevelManager, createSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&GameLevelManager::dataLoaded)), Default, GameLevelManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::deleteAccountComment)), Default, GameLevelManager, deleteAccountComment, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, CommentType, int>::func(&GameLevelManager::deleteComment)), Default, GameLevelManager, deleteComment, int, CommentType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::CCArray*, bool>::func(&GameLevelManager::deleteFriendRequests)), Default, GameLevelManager, deleteFriendRequests, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::deleteLevel)), Default, GameLevelManager, deleteLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::deleteLevelComment)), Default, GameLevelManager, deleteLevelComment, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameLevelManager::deleteLevelList)), Default, GameLevelManager, deleteLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::deleteSentFriendRequest)), Default, GameLevelManager, deleteSentFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::deleteServerLevel)), Default, GameLevelManager, deleteServerLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::deleteServerLevelList)), Default, GameLevelManager, deleteServerLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSmartTemplate*>::func(&GameLevelManager::deleteSmartTemplate)), Default, GameLevelManager, deleteSmartTemplate, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJUserMessage*, cocos2d::CCArray*, bool>::func(&GameLevelManager::deleteUserMessages)), Default, GameLevelManager, deleteUserMessages, GJUserMessage*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, int>::func(&GameLevelManager::downloadLevel)), Default, GameLevelManager, downloadLevel, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::downloadUserMessage)), Default, GameLevelManager, downloadUserMessage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&GameLevelManager::encodeDataTo)), Default, GameLevelManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::firstSetup)), Default, GameLevelManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::followUser)), Default, GameLevelManager, followUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::friendRequestFromAccountID)), Default, GameLevelManager, friendRequestFromAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::friendRequestWasRemoved)), Default, GameLevelManager, friendRequestWasRemoved, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::getAccountCommentKey)), Default, GameLevelManager, getAccountCommentKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameLevelManager::getAccountComments)), Default, GameLevelManager, getAccountComments, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&GameLevelManager::getActiveDailyID)), Default, GameLevelManager, getActiveDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getActiveSmartTemplate)), Default, GameLevelManager, getActiveSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getAllSmartTemplates)), Default, GameLevelManager, getAllSmartTemplates, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getAllUsedSongIDs)), Default, GameLevelManager, getAllUsedSongIDs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getBasePostString)), Default, GameLevelManager, getBasePostString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::getBoolForKey)), Default, GameLevelManager, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, CommentKeyType>::func(&GameLevelManager::getCommentKey)), Default, GameLevelManager, getCommentKey, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getCompletedDailyLevels)), Default, GameLevelManager, getCompletedDailyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::getCompletedEventLevels)), Default, GameLevelManager, getCompletedEventLevels, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getCompletedGauntletDemons)), Default, GameLevelManager, getCompletedGauntletDemons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getCompletedGauntletLevels)), Default, GameLevelManager, getCompletedGauntletLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameLevelManager::getCompletedLevels)), Default, GameLevelManager, getCompletedLevels, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getCompletedWeeklyLevels)), Default, GameLevelManager, getCompletedWeeklyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&GameLevelManager::getDailyID)), Default, GameLevelManager, getDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&GameLevelManager::getDailyTimer)), Default, GameLevelManager, getDailyTimer, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameLevelManager::getDeleteCommentKey)), Default, GameLevelManager, getDeleteCommentKey, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::getDeleteMessageKey)), Default, GameLevelManager, getDeleteMessageKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getDemonLevelsString)), Default, GameLevelManager, getDemonLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getDescKey)), Default, GameLevelManager, getDescKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool, bool, bool, bool, bool, bool>::func(&GameLevelManager::getDifficultyStr)), Default, GameLevelManager, getDifficultyStr, bool, bool, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getDiffKey)), Default, GameLevelManager, getDiffKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getDiffVal)), Default, GameLevelManager, getDiffVal, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::getFolderName)), Default, GameLevelManager, getFolderName, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, int>::func(&GameLevelManager::getFriendRequestKey)), Default, GameLevelManager, getFriendRequestKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, int, int>::func(&GameLevelManager::getFriendRequests)), Default, GameLevelManager, getFriendRequests, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getGauntletKey)), Default, GameLevelManager, getGauntletKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getGauntletLevels)), Default, GameLevelManager, getGauntletLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getGauntlets)), Default, GameLevelManager, getGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getGauntletSearchKey)), Default, GameLevelManager, getGauntletSearchKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getGJChallenges)), Default, GameLevelManager, getGJChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&GameLevelManager::getGJDailyLevelState)), Default, GameLevelManager, getGJDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getGJRewards)), Default, GameLevelManager, getGJRewards, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager17getGJSecretRewardESs")), Default, GameLevelManager, getGJSecretReward, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getGJUserInfo)), Default, GameLevelManager, getGJUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getHighestLevelOrder)), Default, GameLevelManager, getHighestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::getIntForKey)), Default, GameLevelManager, getIntForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LeaderboardType, LeaderboardStat>::func(&GameLevelManager::getLeaderboardKey)), Default, GameLevelManager, getLeaderboardKey, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LeaderboardType, LeaderboardStat>::func(&GameLevelManager::getLeaderboardScores)), Default, GameLevelManager, getLeaderboardScores, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool, bool, bool, bool>::func(&GameLevelManager::getLengthStr)), Default, GameLevelManager, getLengthStr, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLenKey)), Default, GameLevelManager, getLenKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLenVal)), Default, GameLevelManager, getLenVal, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int, CommentKeyType>::func(&GameLevelManager::getLevelComments)), Default, GameLevelManager, getLevelComments, int, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, int>::func(&GameLevelManager::getLevelDownloadKey)), Default, GameLevelManager, getLevelDownloadKey, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLevelKey)), Default, GameLevelManager, getLevelKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode>::func(&GameLevelManager::getLevelLeaderboard)), Default, GameLevelManager, getLevelLeaderboard, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, LevelLeaderboardType, LevelLeaderboardMode>::func(&GameLevelManager::getLevelLeaderboardKey)), Default, GameLevelManager, getLevelLeaderboardKey, int, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLevelListKey)), Default, GameLevelManager, getLevelListKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSearchObject*>::func(&GameLevelManager::getLevelLists)), Default, GameLevelManager, getLevelLists, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLevelRateInfo)), Default, GameLevelManager, getLevelRateInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getLevelSaveData)), Default, GameLevelManager, getLevelSaveData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::getLikeAccountItemKey)), Default, GameLevelManager, getLikeAccountItemKey, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::getLikeItemKey)), Default, GameLevelManager, getLikeItemKey, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLocalLevel)), Default, GameLevelManager, getLocalLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager19getLocalLevelByNameESs")), Default, GameLevelManager, getLocalLevelByName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getLocalLevelList)), Default, GameLevelManager, getLocalLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getLowestLevelOrder)), Default, GameLevelManager, getLowestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::getMainLevel)), Default, GameLevelManager, getMainLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getMapPackKey)), Default, GameLevelManager, getMapPackKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSearchObject*>::func(&GameLevelManager::getMapPacks)), Default, GameLevelManager, getMapPacks, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getMessageKey)), Default, GameLevelManager, getMessageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, int>::func(&GameLevelManager::getMessagesKey)), Default, GameLevelManager, getMessagesKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getNews)), Default, GameLevelManager, getNews, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getNextFreeTemplateID)), Default, GameLevelManager, getNextFreeTemplateID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager16getNextLevelNameESs")), Default, GameLevelManager, getNextLevelName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSearchObject*>::func(&GameLevelManager::getOnlineLevels)), Default, GameLevelManager, getOnlineLevels, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::getPageInfo)), Default, GameLevelManager, getPageInfo, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getPostCommentKey)), Default, GameLevelManager, getPostCommentKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getRateStarsKey)), Default, GameLevelManager, getRateStarsKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getReportKey)), Default, GameLevelManager, getReportKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedDailyLevel)), Default, GameLevelManager, getSavedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedDailyLevelFromLevelID)), Default, GameLevelManager, getSavedDailyLevelFromLevelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedGauntlet)), Default, GameLevelManager, getSavedGauntlet, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedGauntletLevel)), Default, GameLevelManager, getSavedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::getSavedLevel)), Default, GameLevelManager, getSavedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedLevel)), Default, GameLevelManager, getSavedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedLevelList)), Default, GameLevelManager, getSavedLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedLevelLists)), Default, GameLevelManager, getSavedLevelLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, int>::func(&GameLevelManager::getSavedLevels)), Default, GameLevelManager, getSavedLevels, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getSavedMapPack)), Default, GameLevelManager, getSavedMapPack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::getSearchScene)), Default, GameLevelManager, getSearchScene, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameLevelManager::getSplitIntFromKey)), Default, GameLevelManager, getSplitIntFromKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::getStarLevelsString)), Default, GameLevelManager, getStarLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::getStoredLevelComments)), Default, GameLevelManager, getStoredLevelComments, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::getStoredOnlineLevels)), Default, GameLevelManager, getStoredOnlineLevels, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UserListType>::func(&GameLevelManager::getStoredUserList)), Default, GameLevelManager, getStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getStoredUserMessage)), Default, GameLevelManager, getStoredUserMessage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getStoredUserMessageReply)), Default, GameLevelManager, getStoredUserMessageReply, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&GameLevelManager::getTimeLeft)), Default, GameLevelManager, getTimeLeft, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::getTopArtists)), Default, GameLevelManager, getTopArtists, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getTopArtistsKey)), Default, GameLevelManager, getTopArtistsKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getUploadMessageKey)), Default, GameLevelManager, getUploadMessageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::getUserInfoKey)), Default, GameLevelManager, getUserInfoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UserListType>::func(&GameLevelManager::getUserList)), Default, GameLevelManager, getUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, int, int>::func(&GameLevelManager::getUserMessages)), Default, GameLevelManager, getUserMessages, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSearchObject*>::func(&GameLevelManager::getUsers)), Default, GameLevelManager, getUsers, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::gotoLevelPage)), Default, GameLevelManager, gotoLevelPage, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager8handleItEbSsSs10GJHttpType")), Default, GameLevelManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager15handleItDelayedEbSsSs10GJHttpType")), Default, GameLevelManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, void*>::func(&GameLevelManager::handleItND)), Default, GameLevelManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&GameLevelManager::hasDailyStateBeenLoaded)), Default, GameLevelManager, hasDailyStateBeenLoaded, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::hasDownloadedLevel)), Default, GameLevelManager, hasDownloadedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::hasDownloadedList)), Default, GameLevelManager, hasDownloadedList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::hasLikedAccountItem)), Default, GameLevelManager, hasLikedAccountItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::hasLikedItem)), Default, GameLevelManager, hasLikedItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::hasLikedItemFullCheck)), Default, GameLevelManager, hasLikedItemFullCheck, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::hasRatedDemon)), Default, GameLevelManager, hasRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::hasRatedLevelStars)), Default, GameLevelManager, hasRatedLevelStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::hasReportedLevel)), Default, GameLevelManager, hasReportedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool>::func(&GameLevelManager::invalidateMessages)), Default, GameLevelManager, invalidateMessages, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool>::func(&GameLevelManager::invalidateRequests)), Default, GameLevelManager, invalidateRequests, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UserListType, bool>::func(&GameLevelManager::invalidateUserList)), Default, GameLevelManager, invalidateUserList, UserListType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::isDLActive)), Default, GameLevelManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::isFollowingUser)), Default, GameLevelManager, isFollowingUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&GameLevelManager::isTimeValid)), Default, GameLevelManager, isTimeValid, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::isUpdateValid)), Default, GameLevelManager, isUpdateValid, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::itemIDFromLikeKey)), Default, GameLevelManager, itemIDFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::keyHasTimer)), Default, GameLevelManager, keyHasTimer, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::levelIDFromCommentKey)), Default, GameLevelManager, levelIDFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::levelIDFromPostCommentKey)), Default, GameLevelManager, levelIDFromPostCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::likeFromLikeKey)), Default, GameLevelManager, likeFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::likeItem)), Default, GameLevelManager, likeItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::limitSavedLevels)), Default, GameLevelManager, limitSavedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::makeTimeStamp)), Default, GameLevelManager, makeTimeStamp, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LikeItemType, int, bool, int>::func(&GameLevelManager::markItemAsLiked)), Default, GameLevelManager, markItemAsLiked, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::markLevelAsDownloaded)), Default, GameLevelManager, markLevelAsDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::markLevelAsRatedDemon)), Default, GameLevelManager, markLevelAsRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::markLevelAsRatedStars)), Default, GameLevelManager, markLevelAsRatedStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::markLevelAsReported)), Default, GameLevelManager, markLevelAsReported, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::markListAsDownloaded)), Default, GameLevelManager, markListAsDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::messageWasRemoved)), Default, GameLevelManager, messageWasRemoved, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager30onAcceptFriendRequestCompletedESsSs")), Default, GameLevelManager, onAcceptFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager18onBanUserCompletedESsSs")), Default, GameLevelManager, onBanUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager20onBlockUserCompletedESsSs")), Default, GameLevelManager, onBlockUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onDeleteCommentCompletedESsSs")), Default, GameLevelManager, onDeleteCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager30onDeleteFriendRequestCompletedESsSs")), Default, GameLevelManager, onDeleteFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onDeleteServerLevelCompletedESsSs")), Default, GameLevelManager, onDeleteServerLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager32onDeleteServerLevelListCompletedESsSs")), Default, GameLevelManager, onDeleteServerLevelListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager29onDeleteUserMessagesCompletedESsSs")), Default, GameLevelManager, onDeleteUserMessagesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onDownloadLevelCompletedESsSs")), Default, GameLevelManager, onDownloadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager30onDownloadUserMessageCompletedESsSs")), Default, GameLevelManager, onDownloadUserMessageCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager29onGetAccountCommentsCompletedESsSs")), Default, GameLevelManager, onGetAccountCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onGetFriendRequestsCompletedESsSs")), Default, GameLevelManager, onGetFriendRequestsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager23onGetGauntletsCompletedESsSs")), Default, GameLevelManager, onGetGauntletsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager26onGetGJChallengesCompletedESsSs")), Default, GameLevelManager, onGetGJChallengesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager31onGetGJDailyLevelStateCompletedESsSs")), Default, GameLevelManager, onGetGJDailyLevelStateCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager23onGetGJRewardsCompletedESsSs")), Default, GameLevelManager, onGetGJRewardsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onGetGJSecretRewardCompletedESsSs")), Default, GameLevelManager, onGetGJSecretRewardCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onGetGJUserInfoCompletedESsSs")), Default, GameLevelManager, onGetGJUserInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager31onGetLeaderboardScoresCompletedESsSs")), Default, GameLevelManager, onGetLeaderboardScoresCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager27onGetLevelCommentsCompletedESsSs")), Default, GameLevelManager, onGetLevelCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager30onGetLevelLeaderboardCompletedESsSs")), Default, GameLevelManager, onGetLevelLeaderboardCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onGetLevelListsCompletedESsSs")), Default, GameLevelManager, onGetLevelListsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager27onGetLevelRateInfoCompletedESsSs")), Default, GameLevelManager, onGetLevelRateInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager27onGetLevelSaveDataCompletedESsSs")), Default, GameLevelManager, onGetLevelSaveDataCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22onGetMapPacksCompletedESsSs")), Default, GameLevelManager, onGetMapPacksCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager18onGetNewsCompletedESsSs")), Default, GameLevelManager, onGetNewsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager26onGetOnlineLevelsCompletedESsSs")), Default, GameLevelManager, onGetOnlineLevelsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onGetTopArtistsCompletedESsSs")), Default, GameLevelManager, onGetTopArtistsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22onGetUserListCompletedESsSs")), Default, GameLevelManager, onGetUserListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager26onGetUserMessagesCompletedESsSs")), Default, GameLevelManager, onGetUserMessagesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager19onGetUsersCompletedESsSs")), Default, GameLevelManager, onGetUsersCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager19onLikeItemCompletedESsSs")), Default, GameLevelManager, onLikeItemCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*>::func(&GameLevelManager::onProcessHttpRequestCompleted)), Default, GameLevelManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager20onRateDemonCompletedESsSs")), Default, GameLevelManager, onRateDemonCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager25onRateLevelAdminCompletedESsSs")), Default, GameLevelManager, onRateLevelAdminCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager20onRateStarsCompletedESsSs")), Default, GameLevelManager, onRateStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onReadFriendRequestCompletedESsSs")), Default, GameLevelManager, onReadFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager23onRemoveFriendCompletedESsSs")), Default, GameLevelManager, onRemoveFriendCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22onReportLevelCompletedESsSs")), Default, GameLevelManager, onReportLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onRequestUserAccessCompletedESsSs")), Default, GameLevelManager, onRequestUserAccessCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager23onRestoreItemsCompletedESsSs")), Default, GameLevelManager, onRestoreItemsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager27onSetLevelFeaturedCompletedESsSs")), Default, GameLevelManager, onSetLevelFeaturedCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onSetLevelStarsCompletedESsSs")), Default, GameLevelManager, onSetLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager25onSubmitUserInfoCompletedESsSs")), Default, GameLevelManager, onSubmitUserInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onSuggestLevelStarsCompletedESsSs")), Default, GameLevelManager, onSuggestLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22onUnblockUserCompletedESsSs")), Default, GameLevelManager, onUnblockUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onUpdateDescriptionCompletedESsSs")), Default, GameLevelManager, onUpdateDescriptionCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22onUpdateLevelCompletedESsSs")), Default, GameLevelManager, onUpdateLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager26onUpdateUserScoreCompletedESsSs")), Default, GameLevelManager, onUpdateUserScoreCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager24onUploadCommentCompletedESsSs")), Default, GameLevelManager, onUploadCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager30onUploadFriendRequestCompletedESsSs")), Default, GameLevelManager, onUploadFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager22onUploadLevelCompletedESsSs")), Default, GameLevelManager, onUploadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager26onUploadLevelListCompletedESsSs")), Default, GameLevelManager, onUploadLevelListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager28onUploadUserMessageCompletedESsSs")), Default, GameLevelManager, onUploadUserMessageCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::pageFromCommentKey)), Default, GameLevelManager, pageFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager16parseRestoreDataESs")), Default, GameLevelManager, parseRestoreData, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::performNetworkTest)), Default, GameLevelManager, performNetworkTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager18ProcessHttpRequestESsSsSs10GJHttpType")), Default, GameLevelManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager31processOnDownloadLevelCompletedESsSsb")), Default, GameLevelManager, processOnDownloadLevelCompleted, gd::string, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::purgeUnusedLevels)), Default, GameLevelManager, purgeUnusedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, bool>::func(&GameLevelManager::rateDemon)), Default, GameLevelManager, rateDemon, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int, bool, bool>::func(&GameLevelManager::rateLevelAdmin)), Default, GameLevelManager, rateLevelAdmin, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::rateStars)), Default, GameLevelManager, rateStars, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::readFriendRequest)), Default, GameLevelManager, readFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager20removeDelimiterCharsESsb")), Default, GameLevelManager, removeDelimiterChars, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::removeDLFromActive)), Default, GameLevelManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::removeFriend)), Default, GameLevelManager, removeFriend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&GameLevelManager::removeLevelDownloadedKeysFromDict)), Default, GameLevelManager, removeLevelDownloadedKeysFromDict, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UserListType>::func(&GameLevelManager::removeUserFromList)), Default, GameLevelManager, removeUserFromList, int, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::reportLevel)), Default, GameLevelManager, reportLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::requestUserAccess)), Default, GameLevelManager, requestUserAccess, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::resetAccountComments)), Default, GameLevelManager, resetAccountComments, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::resetAllTimers)), Default, GameLevelManager, resetAllTimers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::resetCommentTimersForAccountID)), Default, GameLevelManager, resetCommentTimersForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, CommentKeyType>::func(&GameLevelManager::resetCommentTimersForLevelID)), Default, GameLevelManager, resetCommentTimersForLevelID, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&GameLevelManager::resetDailyLevelState)), Default, GameLevelManager, resetDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::resetGauntlets)), Default, GameLevelManager, resetGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::resetStoredUserInfo)), Default, GameLevelManager, resetStoredUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UserListType>::func(&GameLevelManager::resetStoredUserList)), Default, GameLevelManager, resetStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::resetTimerForKey)), Default, GameLevelManager, resetTimerForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::restoreItems)), Default, GameLevelManager, restoreItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&GameLevelManager::saveFetchedLevelLists)), Default, GameLevelManager, saveFetchedLevelLists, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&GameLevelManager::saveFetchedLevels)), Default, GameLevelManager, saveFetchedLevels, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&GameLevelManager::saveFetchedMapPacks)), Default, GameLevelManager, saveFetchedMapPacks, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJMapPack*>::func(&GameLevelManager::saveGauntlet)), Default, GameLevelManager, saveGauntlet, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::saveLevel)), Default, GameLevelManager, saveLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameLevelManager::saveLevelList)), Default, GameLevelManager, saveLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameLevelManager::saveLocalScore)), Default, GameLevelManager, saveLocalScore, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJMapPack*>::func(&GameLevelManager::saveMapPack)), Default, GameLevelManager, saveMapPack, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSmartTemplate*>::func(&GameLevelManager::setActiveSmartTemplate)), Default, GameLevelManager, setActiveSmartTemplate, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, char const*>::func(&GameLevelManager::setBoolForKey)), Default, GameLevelManager, setBoolForKey, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::setDiffVal)), Default, GameLevelManager, setDiffVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager13setFolderNameEiSsb")), Default, GameLevelManager, setFolderName, int, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char const*>::func(&GameLevelManager::setIntForKey)), Default, GameLevelManager, setIntForKey, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameLevelManager::setLenVal)), Default, GameLevelManager, setLenVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, bool>::func(&GameLevelManager::setLevelFeatured)), Default, GameLevelManager, setLevelFeatured, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, bool>::func(&GameLevelManager::setLevelStars)), Default, GameLevelManager, setLevelStars, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::specialFromLikeKey)), Default, GameLevelManager, specialFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager19storeCommentsResultEPN7cocos2d7CCArrayESsPKc")), Default, GameLevelManager, storeCommentsResult, cocos2d::CCArray*, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, GJTimedLevelType>::func(&GameLevelManager::storeDailyLevelState)), Default, GameLevelManager, storeDailyLevelState, int, int, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJFriendRequest*>::func(&GameLevelManager::storeFriendRequest)), Default, GameLevelManager, storeFriendRequest, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager17storeSearchResultEPN7cocos2d7CCArrayESsPKc")), Default, GameLevelManager, storeSearchResult, cocos2d::CCArray*, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJUserScore*>::func(&GameLevelManager::storeUserInfo)), Default, GameLevelManager, storeUserInfo, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJUserMessage*>::func(&GameLevelManager::storeUserMessage)), Default, GameLevelManager, storeUserMessage, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJUserMessage*>::func(&GameLevelManager::storeUserMessageReply)), Default, GameLevelManager, storeUserMessageReply, int, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager13storeUserNameEiiSs")), Default, GameLevelManager, storeUserName, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager14storeUserNamesESs")), Default, GameLevelManager, storeUserNames, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::submitUserInfo)), Default, GameLevelManager, submitUserInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&GameLevelManager::suggestLevelStars)), Default, GameLevelManager, suggestLevelStars, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::tryGetUsername)), Default, GameLevelManager, tryGetUsername, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::typeFromCommentKey)), Default, GameLevelManager, typeFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameLevelManager::typeFromLikeKey)), Default, GameLevelManager, typeFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::unblockUser)), Default, GameLevelManager, unblockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::unfollowUser)), Default, GameLevelManager, unfollowUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::unrateLevelAdmin)), Default, GameLevelManager, unrateLevelAdmin, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager17updateDescriptionEiSs")), Default, GameLevelManager, updateDescription, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::updateLevel)), Default, GameLevelManager, updateLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::updateLevelOrders)), Default, GameLevelManager, updateLevelOrders, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GameLevelManager::updateLevelRankAdmin)), Default, GameLevelManager, updateLevelRankAdmin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::updateLevelRewards)), Default, GameLevelManager, updateLevelRewards, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameLevelManager::updateSavedLevelList)), Default, GameLevelManager, updateSavedLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::updateUsernames)), Default, GameLevelManager, updateUsernames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameLevelManager::updateUserScore)), Default, GameLevelManager, updateUserScore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager20uploadAccountCommentESs")), Default, GameLevelManager, uploadAccountComment, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager13uploadCommentESs11CommentTypeii")), Default, GameLevelManager, uploadComment, gd::string, CommentType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager19uploadFriendRequestEiSs")), Default, GameLevelManager, uploadFriendRequest, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::uploadLevel)), Default, GameLevelManager, uploadLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager18uploadLevelCommentEiSsi")), Default, GameLevelManager, uploadLevelComment, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&GameLevelManager::uploadLevelList)), Default, GameLevelManager, uploadLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16GameLevelManager17uploadUserMessageEiSsSs")), Default, GameLevelManager, uploadUserMessage, int, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::userIDForAccountID)), Default, GameLevelManager, userIDForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::userInfoForAccountID)), Default, GameLevelManager, userInfoForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameLevelManager::userNameForUserID)), Default, GameLevelManager, userNameForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&GameLevelManager::verifyContainerOnlyHasLevels)), Default, GameLevelManager, verifyContainerOnlyHasLevels, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GameLevelManager::verifyLevelState)), Default, GameLevelManager, verifyLevelState, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSearchObject*>::func(&GameLevelManager::writeSpecialFilters)), Default, GameLevelManager, writeSpecialFilters, GJSearchObject*)
		}
	};
}
