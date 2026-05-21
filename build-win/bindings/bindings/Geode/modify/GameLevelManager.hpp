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

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_cleanupDailyLevels
		#define GEODE_STATICS_cleanupDailyLevels
		GEODE_AS_STATIC_FUNCTION(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetCommentsFull
		#define GEODE_STATICS_createAndGetCommentsFull
		GEODE_AS_STATIC_FUNCTION(createAndGetCommentsFull) 
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

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
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

	#ifndef GEODE_STATICS_deleteLevelList
		#define GEODE_STATICS_deleteLevelList
		GEODE_AS_STATIC_FUNCTION(deleteLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevel
		#define GEODE_STATICS_deleteServerLevel
		GEODE_AS_STATIC_FUNCTION(deleteServerLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevelList
		#define GEODE_STATICS_deleteServerLevelList
		GEODE_AS_STATIC_FUNCTION(deleteServerLevelList) 
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

	#ifndef GEODE_STATICS_friendRequestWasRemoved
		#define GEODE_STATICS_friendRequestWasRemoved
		GEODE_AS_STATIC_FUNCTION(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_getAccountComments
		#define GEODE_STATICS_getAccountComments
		GEODE_AS_STATIC_FUNCTION(getAccountComments) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getCompletedDailyLevels
		#define GEODE_STATICS_getCompletedDailyLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedEventLevels
		#define GEODE_STATICS_getCompletedEventLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedEventLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedWeeklyLevels
		#define GEODE_STATICS_getCompletedWeeklyLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedWeeklyLevels) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelsString
		#define GEODE_STATICS_getDemonLevelsString
		GEODE_AS_STATIC_FUNCTION(getDemonLevelsString) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyStr
		#define GEODE_STATICS_getDifficultyStr
		GEODE_AS_STATIC_FUNCTION(getDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_getFolderName
		#define GEODE_STATICS_getFolderName
		GEODE_AS_STATIC_FUNCTION(getFolderName) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequests
		#define GEODE_STATICS_getFriendRequests
		GEODE_AS_STATIC_FUNCTION(getFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_getGauntletLevels
		#define GEODE_STATICS_getGauntletLevels
		GEODE_AS_STATIC_FUNCTION(getGauntletLevels) 
	#endif

	#ifndef GEODE_STATICS_getGauntlets
		#define GEODE_STATICS_getGauntlets
		GEODE_AS_STATIC_FUNCTION(getGauntlets) 
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

	#ifndef GEODE_STATICS_getLeaderboardScores
		#define GEODE_STATICS_getLeaderboardScores
		GEODE_AS_STATIC_FUNCTION(getLeaderboardScores) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getLevelComments
		#define GEODE_STATICS_getLevelComments
		GEODE_AS_STATIC_FUNCTION(getLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboard
		#define GEODE_STATICS_getLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboard) 
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

	#ifndef GEODE_STATICS_getLocalLevel
		#define GEODE_STATICS_getLocalLevel
		GEODE_AS_STATIC_FUNCTION(getLocalLevel) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelList
		#define GEODE_STATICS_getLocalLevelList
		GEODE_AS_STATIC_FUNCTION(getLocalLevelList) 
	#endif

	#ifndef GEODE_STATICS_getMainLevel
		#define GEODE_STATICS_getMainLevel
		GEODE_AS_STATIC_FUNCTION(getMainLevel) 
	#endif

	#ifndef GEODE_STATICS_getMapPacks
		#define GEODE_STATICS_getMapPacks
		GEODE_AS_STATIC_FUNCTION(getMapPacks) 
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

	#ifndef GEODE_STATICS_getSavedDailyLevel
		#define GEODE_STATICS_getSavedDailyLevel
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntletLevel
		#define GEODE_STATICS_getSavedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevel
		#define GEODE_STATICS_getSavedLevel
		GEODE_AS_STATIC_FUNCTION(getSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelLists
		#define GEODE_STATICS_getSavedLevelLists
		GEODE_AS_STATIC_FUNCTION(getSavedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevels
		#define GEODE_STATICS_getSavedLevels
		GEODE_AS_STATIC_FUNCTION(getSavedLevels) 
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

	#ifndef GEODE_STATICS_getTimeLeft
		#define GEODE_STATICS_getTimeLeft
		GEODE_AS_STATIC_FUNCTION(getTimeLeft) 
	#endif

	#ifndef GEODE_STATICS_getTopArtists
		#define GEODE_STATICS_getTopArtists
		GEODE_AS_STATIC_FUNCTION(getTopArtists) 
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

	#ifndef GEODE_STATICS_hasDownloadedLevel
		#define GEODE_STATICS_hasDownloadedLevel
		GEODE_AS_STATIC_FUNCTION(hasDownloadedLevel) 
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

	#ifndef GEODE_STATICS_keyHasTimer
		#define GEODE_STATICS_keyHasTimer
		GEODE_AS_STATIC_FUNCTION(keyHasTimer) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromCommentKey
		#define GEODE_STATICS_levelIDFromCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromCommentKey) 
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

	#ifndef GEODE_STATICS_onDeleteUserMessagesCompleted
		#define GEODE_STATICS_onDeleteUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteUserMessagesCompleted) 
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

	#ifndef GEODE_STATICS_onRateStarsCompleted
		#define GEODE_STATICS_onRateStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onRateStarsCompleted) 
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

	#ifndef GEODE_STATICS_onSetLevelStarsCompleted
		#define GEODE_STATICS_onSetLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelStarsCompleted) 
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

	#ifndef GEODE_STATICS_onUploadUserMessageCompleted
		#define GEODE_STATICS_onUploadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadUserMessageCompleted) 
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

	#ifndef GEODE_STATICS_resetCommentTimersForAccountID
		#define GEODE_STATICS_resetCommentTimersForAccountID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForAccountID) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForLevelID
		#define GEODE_STATICS_resetCommentTimersForLevelID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForLevelID) 
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

	#ifndef GEODE_STATICS_saveFetchedLevels
		#define GEODE_STATICS_saveFetchedLevels
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevels) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_saveLevelList
		#define GEODE_STATICS_saveLevelList
		GEODE_AS_STATIC_FUNCTION(saveLevelList) 
	#endif

	#ifndef GEODE_STATICS_setDiffVal
		#define GEODE_STATICS_setDiffVal
		GEODE_AS_STATIC_FUNCTION(setDiffVal) 
	#endif

	#ifndef GEODE_STATICS_setLenVal
		#define GEODE_STATICS_setLenVal
		GEODE_AS_STATIC_FUNCTION(setLenVal) 
	#endif

	#ifndef GEODE_STATICS_storeCommentsResult
		#define GEODE_STATICS_storeCommentsResult
		GEODE_AS_STATIC_FUNCTION(storeCommentsResult) 
	#endif

	#ifndef GEODE_STATICS_storeSearchResult
		#define GEODE_STATICS_storeSearchResult
		GEODE_AS_STATIC_FUNCTION(storeSearchResult) 
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

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
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

	#ifndef GEODE_STATICS_updateLevelRewards
		#define GEODE_STATICS_updateLevelRewards
		GEODE_AS_STATIC_FUNCTION(updateLevelRewards) 
	#endif

	#ifndef GEODE_STATICS_updateSavedLevelList
		#define GEODE_STATICS_updateSavedLevelList
		GEODE_AS_STATIC_FUNCTION(updateSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_updateUserScore
		#define GEODE_STATICS_updateUserScore
		GEODE_AS_STATIC_FUNCTION(updateUserScore) 
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

	#ifndef GEODE_STATICS_uploadLevelList
		#define GEODE_STATICS_uploadLevelList
		GEODE_AS_STATIC_FUNCTION(uploadLevelList) 
	#endif

	#ifndef GEODE_STATICS_uploadUserMessage
		#define GEODE_STATICS_uploadUserMessage
		GEODE_AS_STATIC_FUNCTION(uploadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_userNameForUserID
		#define GEODE_STATICS_userNameForUserID
		GEODE_AS_STATIC_FUNCTION(userNameForUserID) 
	#endif

	#ifndef GEODE_STATICS_verifyContainerOnlyHasLevels
		#define GEODE_STATICS_verifyContainerOnlyHasLevels
		GEODE_AS_STATIC_FUNCTION(verifyContainerOnlyHasLevels) 
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
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16ab90, Default, GameLevelManager, responseToDict, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142d10, Default, GameLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x144290, Thiscall, GameLevelManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x161170, Thiscall, GameLevelManager, acceptFriendRequest, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, accountIDForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149b20, Thiscall, GameLevelManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, areGauntletsLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, banUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x161f00, Thiscall, GameLevelManager, blockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14a6e0, Thiscall, GameLevelManager, cleanupDailyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createAndGetAccountComments, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15cfe0, Thiscall, GameLevelManager, createAndGetCommentsFull, gd::string, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createAndGetLevelComments, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x146c30, Thiscall, GameLevelManager, createAndGetLevelLists, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1466f0, Thiscall, GameLevelManager, createAndGetLevels, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x146ed0, Thiscall, GameLevelManager, createAndGetMapPacks, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147170, Thiscall, GameLevelManager, createAndGetScores, gd::string, GJScoreType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x144870, Thiscall, GameLevelManager, createNewLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x145320, Thiscall, GameLevelManager, createNewLevelList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createPageInfo, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14b410, Thiscall, GameLevelManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteAccountComment, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15f070, Thiscall, GameLevelManager, deleteComment, int, CommentType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x160b70, Thiscall, GameLevelManager, deleteFriendRequests, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x145050, Thiscall, GameLevelManager, deleteLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteLevelComment, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x145900, Thiscall, GameLevelManager, deleteLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteSentFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1544e0, Thiscall, GameLevelManager, deleteServerLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x150420, Thiscall, GameLevelManager, deleteServerLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteSmartTemplate, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15b4b0, Thiscall, GameLevelManager, deleteUserMessages, GJUserMessage*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151e00, Thiscall, GameLevelManager, downloadLevel, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15aa80, Thiscall, GameLevelManager, downloadUserMessage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14af00, Thiscall, GameLevelManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14ab40, Thiscall, GameLevelManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, followUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, friendRequestFromAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1633a0, Thiscall, GameLevelManager, friendRequestWasRemoved, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getAccountCommentKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c870, Thiscall, GameLevelManager, getAccountComments, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getActiveDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getActiveSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getAllSmartTemplates, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getAllUsedSongIDs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14c5b0, Thiscall, GameLevelManager, getBasePostString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getCommentKey, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148700, Thiscall, GameLevelManager, getCompletedDailyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148900, Thiscall, GameLevelManager, getCompletedEventLevels, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getCompletedGauntletDemons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getCompletedGauntletLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1478a0, Thiscall, GameLevelManager, getCompletedLevels, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1484f0, Thiscall, GameLevelManager, getCompletedWeeklyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDailyTimer, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDeleteCommentKey, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDeleteMessageKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147a30, Thiscall, GameLevelManager, getDemonLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDescKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d4b0, Thiscall, GameLevelManager, getDifficultyStr, bool, bool, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDiffKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDiffVal, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14aa10, Thiscall, GameLevelManager, getFolderName, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getFriendRequestKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15fcc0, Thiscall, GameLevelManager, getFriendRequests, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getGauntletKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151ab0, Thiscall, GameLevelManager, getGauntletLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151200, Thiscall, GameLevelManager, getGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getGauntletSearchKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167510, Thiscall, GameLevelManager, getGJChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168910, Thiscall, GameLevelManager, getGJDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x166020, Thiscall, GameLevelManager, getGJRewards, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164ef0, Thiscall, GameLevelManager, getGJSecretReward, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x159e10, Thiscall, GameLevelManager, getGJUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getHighestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getIntForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLeaderboardKey, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157980, Thiscall, GameLevelManager, getLeaderboardScores, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d760, Thiscall, GameLevelManager, getLengthStr, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLenKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLenVal, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15be00, Thiscall, GameLevelManager, getLevelComments, int, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelDownloadKey, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x158040, Thiscall, GameLevelManager, getLevelLeaderboard, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelLeaderboardKey, int, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelListKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x150760, Thiscall, GameLevelManager, getLevelLists, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15f860, Thiscall, GameLevelManager, getLevelRateInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14edc0, Thiscall, GameLevelManager, getLevelSaveData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLikeAccountItemKey, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLikeItemKey, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x144800, Thiscall, GameLevelManager, getLocalLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLocalLevelByName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1452b0, Thiscall, GameLevelManager, getLocalLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLowestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x144450, Thiscall, GameLevelManager, getMainLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getMapPackKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f4f0, Thiscall, GameLevelManager, getMapPacks, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getMessageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getMessagesKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getNews, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getNextFreeTemplateID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x144b30, Thiscall, GameLevelManager, getNextLevelName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14dc70, Thiscall, GameLevelManager, getOnlineLevels, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149970, Thiscall, GameLevelManager, getPageInfo, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getPostCommentKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getRateStarsKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getReportKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148be0, Thiscall, GameLevelManager, getSavedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedDailyLevelFromLevelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedGauntlet, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148cb0, Thiscall, GameLevelManager, getSavedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148b10, Thiscall, GameLevelManager, getSavedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147610, Thiscall, GameLevelManager, getSavedLevelLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147450, Thiscall, GameLevelManager, getSavedLevels, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedMapPack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSearchScene, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15d5a0, Thiscall, GameLevelManager, getSplitIntFromKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147c30, Thiscall, GameLevelManager, getStarLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15d9b0, Thiscall, GameLevelManager, getStoredLevelComments, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149880, Thiscall, GameLevelManager, getStoredOnlineLevels, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1630a0, Thiscall, GameLevelManager, getStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getStoredUserMessage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getStoredUserMessageReply, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149ed0, Thiscall, GameLevelManager, getTimeLeft, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x158fb0, Thiscall, GameLevelManager, getTopArtists, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getTopArtistsKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getUploadMessageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getUserInfoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x162990, Thiscall, GameLevelManager, getUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15a1c0, Thiscall, GameLevelManager, getUserMessages, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x159750, Thiscall, GameLevelManager, getUsers, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1494c0, Thiscall, GameLevelManager, gotoLevelPage, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142ff0, Thiscall, GameLevelManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, hasDailyStateBeenLoaded, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1537b0, Thiscall, GameLevelManager, hasDownloadedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, hasDownloadedList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164e10, Thiscall, GameLevelManager, hasLikedAccountItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164e10, Thiscall, GameLevelManager, hasLikedItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164d80, Thiscall, GameLevelManager, hasLikedItemFullCheck, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x154410, Thiscall, GameLevelManager, hasRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x154340, Thiscall, GameLevelManager, hasRatedLevelStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a6b0, Thiscall, GameLevelManager, hasReportedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15bcb0, Thiscall, GameLevelManager, invalidateMessages, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163560, Thiscall, GameLevelManager, invalidateRequests, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, invalidateUserList, UserListType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149a60, Thiscall, GameLevelManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14a940, Thiscall, GameLevelManager, isFollowingUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149d90, Thiscall, GameLevelManager, isTimeValid, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, isUpdateValid, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, itemIDFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14a020, Thiscall, GameLevelManager, keyHasTimer, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15d6a0, Thiscall, GameLevelManager, levelIDFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, levelIDFromPostCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, likeFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163c60, Thiscall, GameLevelManager, likeItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14a190, Thiscall, GameLevelManager, limitSavedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149c90, Thiscall, GameLevelManager, makeTimeStamp, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164c10, Thiscall, GameLevelManager, markItemAsLiked, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x153690, Thiscall, GameLevelManager, markLevelAsDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markLevelAsRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markLevelAsRatedStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markLevelAsReported, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markListAsDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15baf0, Thiscall, GameLevelManager, messageWasRemoved, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x161490, Thiscall, GameLevelManager, onAcceptFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x154a50, Thiscall, GameLevelManager, onBanUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x162210, Thiscall, GameLevelManager, onBlockUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15f550, Thiscall, GameLevelManager, onDeleteCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x160f70, Thiscall, GameLevelManager, onDeleteFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1548d0, Thiscall, GameLevelManager, onDeleteServerLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onDeleteServerLevelListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15b920, Thiscall, GameLevelManager, onDeleteUserMessagesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onDownloadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15acc0, Thiscall, GameLevelManager, onDownloadUserMessageCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15caa0, Thiscall, GameLevelManager, onGetAccountCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ff00, Thiscall, GameLevelManager, onGetFriendRequestsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1514f0, Thiscall, GameLevelManager, onGetGauntletsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x167970, Thiscall, GameLevelManager, onGetGJChallengesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x168df0, Thiscall, GameLevelManager, onGetGJDailyLevelStateCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x166790, Thiscall, GameLevelManager, onGetGJRewardsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1653a0, Thiscall, GameLevelManager, onGetGJSecretRewardCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15a030, Thiscall, GameLevelManager, onGetGJUserInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157d70, Thiscall, GameLevelManager, onGetLeaderboardScoresCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c330, Thiscall, GameLevelManager, onGetLevelCommentsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x158d20, Thiscall, GameLevelManager, onGetLevelLeaderboardCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1509f0, Thiscall, GameLevelManager, onGetLevelListsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15fb90, Thiscall, GameLevelManager, onGetLevelRateInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f0a0, Thiscall, GameLevelManager, onGetLevelSaveDataCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f700, Thiscall, GameLevelManager, onGetMapPacksCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onGetNewsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14e4d0, Thiscall, GameLevelManager, onGetOnlineLevelsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1592d0, Thiscall, GameLevelManager, onGetTopArtistsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x162ba0, Thiscall, GameLevelManager, onGetUserListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15a400, Thiscall, GameLevelManager, onGetUserMessagesCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1599b0, Thiscall, GameLevelManager, onGetUsersCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164270, Thiscall, GameLevelManager, onLikeItemCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142f00, Thiscall, GameLevelManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x155780, Thiscall, GameLevelManager, onRateDemonCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onRateLevelAdminCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x154150, Thiscall, GameLevelManager, onRateStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onReadFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x161cb0, Thiscall, GameLevelManager, onRemoveFriendCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a520, Thiscall, GameLevelManager, onReportLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1649a0, Thiscall, GameLevelManager, onRequestUserAccessCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x169b40, Thiscall, GameLevelManager, onRestoreItemsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onSetLevelFeaturedCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x155ad0, Thiscall, GameLevelManager, onSetLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onSubmitUserInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1550b0, Thiscall, GameLevelManager, onSuggestLevelStarsCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x162730, Thiscall, GameLevelManager, onUnblockUserCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163a00, Thiscall, GameLevelManager, onUpdateDescriptionCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onUpdateLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157650, Thiscall, GameLevelManager, onUpdateUserScoreCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15e370, Thiscall, GameLevelManager, onUploadCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1609a0, Thiscall, GameLevelManager, onUploadFriendRequestCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d2a0, Thiscall, GameLevelManager, onUploadLevelCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onUploadLevelListCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15b290, Thiscall, GameLevelManager, onUploadUserMessageCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, pageFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, parseRestoreData, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, performNetworkTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142d60, Thiscall, GameLevelManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x152370, Thiscall, GameLevelManager, processOnDownloadLevelCompleted, gd::string, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14a430, Thiscall, GameLevelManager, purgeUnusedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x155350, Thiscall, GameLevelManager, rateDemon, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, rateLevelAdmin, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x153ac0, Thiscall, GameLevelManager, rateStars, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x161680, Thiscall, GameLevelManager, readFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a960, Thiscall, GameLevelManager, removeDelimiterChars, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149be0, Thiscall, GameLevelManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x161990, Thiscall, GameLevelManager, removeFriend, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removeLevelDownloadedKeysFromDict, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1628e0, Thiscall, GameLevelManager, removeUserFromList, int, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a280, Thiscall, GameLevelManager, reportLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1646c0, Thiscall, GameLevelManager, requestUserAccess, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetAccountComments, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetAllTimers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15eed0, Thiscall, GameLevelManager, resetCommentTimersForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ed00, Thiscall, GameLevelManager, resetCommentTimersForLevelID, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetStoredUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163230, Thiscall, GameLevelManager, resetStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14a0e0, Thiscall, GameLevelManager, resetTimerForKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, restoreItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveFetchedLevelLists, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1469a0, Thiscall, GameLevelManager, saveFetchedLevels, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveFetchedMapPacks, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveGauntlet, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148d80, Thiscall, GameLevelManager, saveLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x150ee0, Thiscall, GameLevelManager, saveLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveLocalScore, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveMapPack, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setActiveSmartTemplate, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setBoolForKey, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a780, Thiscall, GameLevelManager, setDiffVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setFolderName, int, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setIntForKey, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a870, Thiscall, GameLevelManager, setLenVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setLevelFeatured, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setLevelStars, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, specialFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15d7b0, Thiscall, GameLevelManager, storeCommentsResult, cocos2d::CCArray*, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeDailyLevelState, int, int, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeFriendRequest, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149670, Thiscall, GameLevelManager, storeSearchResult, cocos2d::CCArray*, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeUserInfo, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeUserMessage, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeUserMessageReply, int, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x145d10, Thiscall, GameLevelManager, storeUserName, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x145a10, Thiscall, GameLevelManager, storeUserNames, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x169e40, Thiscall, GameLevelManager, submitUserInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x154d90, Thiscall, GameLevelManager, suggestLevelStars, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x146070, Thiscall, GameLevelManager, tryGetUsername, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, typeFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, typeFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x162410, Thiscall, GameLevelManager, unblockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, unfollowUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, unrateLevelAdmin, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1636b0, Thiscall, GameLevelManager, updateDescription, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x153880, Thiscall, GameLevelManager, updateLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1476c0, Thiscall, GameLevelManager, updateLevelOrders, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, updateLevelRankAdmin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1463c0, Thiscall, GameLevelManager, updateLevelRewards, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x150fc0, Thiscall, GameLevelManager, updateSavedLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, updateUsernames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x155c60, Thiscall, GameLevelManager, updateUserScore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, uploadAccountComment, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15daa0, Thiscall, GameLevelManager, uploadComment, gd::string, CommentType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x160590, Thiscall, GameLevelManager, uploadFriendRequest, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14c7c0, Thiscall, GameLevelManager, uploadLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, uploadLevelComment, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14fdf0, Thiscall, GameLevelManager, uploadLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ae40, Thiscall, GameLevelManager, uploadUserMessage, int, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, userIDForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, userInfoForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x145ef0, Thiscall, GameLevelManager, userNameForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14b1a0, Thiscall, GameLevelManager, verifyContainerOnlyHasLevels, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, verifyLevelState, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d9b0, Thiscall, GameLevelManager, writeSpecialFilters, GJSearchObject*)
		}
	};
}
