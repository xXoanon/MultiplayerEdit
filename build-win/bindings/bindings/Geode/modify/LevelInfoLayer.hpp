#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_numberInputClosed
		#define GEODE_STATICS_numberInputClosed
		GEODE_AS_STATIC_FUNCTION(numberInputClosed) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFinished
		#define GEODE_STATICS_levelDownloadFinished
		GEODE_AS_STATIC_FUNCTION(levelDownloadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFailed
		#define GEODE_STATICS_levelDownloadFailed
		GEODE_AS_STATIC_FUNCTION(levelDownloadFailed) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFinished
		#define GEODE_STATICS_levelUpdateFinished
		GEODE_AS_STATIC_FUNCTION(levelUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFailed
		#define GEODE_STATICS_levelUpdateFailed
		GEODE_AS_STATIC_FUNCTION(levelUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFinished
		#define GEODE_STATICS_levelDeleteFinished
		GEODE_AS_STATIC_FUNCTION(levelDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFailed
		#define GEODE_STATICS_levelDeleteFailed
		GEODE_AS_STATIC_FUNCTION(levelDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_rateLevelClosed
		#define GEODE_STATICS_rateLevelClosed
		GEODE_AS_STATIC_FUNCTION(rateLevelClosed) 
	#endif

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToBottom
		#define GEODE_STATICS_confirmMoveToBottom
		GEODE_AS_STATIC_FUNCTION(confirmMoveToBottom) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToTop
		#define GEODE_STATICS_confirmMoveToTop
		GEODE_AS_STATIC_FUNCTION(confirmMoveToTop) 
	#endif

	#ifndef GEODE_STATICS_confirmOwnerDelete
		#define GEODE_STATICS_confirmOwnerDelete
		GEODE_AS_STATIC_FUNCTION(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadLevelStep
		#define GEODE_STATICS_loadLevelStep
		GEODE_AS_STATIC_FUNCTION(loadLevelStep) 
	#endif

	#ifndef GEODE_STATICS_onAddToList
		#define GEODE_STATICS_onAddToList
		GEODE_AS_STATIC_FUNCTION(onAddToList) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onFavorite
		#define GEODE_STATICS_onFavorite
		GEODE_AS_STATIC_FUNCTION(onFavorite) 
	#endif

	#ifndef GEODE_STATICS_onGarage
		#define GEODE_STATICS_onGarage
		GEODE_AS_STATIC_FUNCTION(onGarage) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onLevelOptions
		#define GEODE_STATICS_onLevelOptions
		GEODE_AS_STATIC_FUNCTION(onLevelOptions) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onRateDemon
		#define GEODE_STATICS_onRateDemon
		GEODE_AS_STATIC_FUNCTION(onRateDemon) 
	#endif

	#ifndef GEODE_STATICS_onRateStars
		#define GEODE_STATICS_onRateStars
		GEODE_AS_STATIC_FUNCTION(onRateStars) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsMod
		#define GEODE_STATICS_onRateStarsMod
		GEODE_AS_STATIC_FUNCTION(onRateStarsMod) 
	#endif

	#ifndef GEODE_STATICS_onSetFolder
		#define GEODE_STATICS_onSetFolder
		GEODE_AS_STATIC_FUNCTION(onSetFolder) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_playStep4
		#define GEODE_STATICS_playStep4
		GEODE_AS_STATIC_FUNCTION(playStep4) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_setupPlatformerStats
		#define GEODE_STATICS_setupPlatformerStats
		GEODE_AS_STATIC_FUNCTION(setupPlatformerStats) 
	#endif

	#ifndef GEODE_STATICS_setupProgressBars
		#define GEODE_STATICS_setupProgressBars
		GEODE_AS_STATIC_FUNCTION(setupProgressBars) 
	#endif

	#ifndef GEODE_STATICS_shouldDownloadLevel
		#define GEODE_STATICS_shouldDownloadLevel
		GEODE_AS_STATIC_FUNCTION(shouldDownloadLevel) 
	#endif

	#ifndef GEODE_STATICS_showUpdateAlert
		#define GEODE_STATICS_showUpdateAlert
		GEODE_AS_STATIC_FUNCTION(showUpdateAlert) 
	#endif

	#ifndef GEODE_STATICS_tryCloneLevel
		#define GEODE_STATICS_tryCloneLevel
		GEODE_AS_STATIC_FUNCTION(tryCloneLevel) 
	#endif

	#ifndef GEODE_STATICS_updateLabelValues
		#define GEODE_STATICS_updateLabelValues
		GEODE_AS_STATIC_FUNCTION(updateLabelValues) 
	#endif

	#ifndef GEODE_STATICS_updateSideButtons
		#define GEODE_STATICS_updateSideButtons
		GEODE_AS_STATIC_FUNCTION(updateSideButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberInputClosed
		#define GEODE_CONCEPT_CHECK_numberInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(numberInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDownloadFinished
		#define GEODE_CONCEPT_CHECK_levelDownloadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelDownloadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDownloadFailed
		#define GEODE_CONCEPT_CHECK_levelDownloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelDownloadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelUpdateFinished
		#define GEODE_CONCEPT_CHECK_levelUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelUpdateFailed
		#define GEODE_CONCEPT_CHECK_levelUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDeleteFinished
		#define GEODE_CONCEPT_CHECK_levelDeleteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelDeleteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDeleteFailed
		#define GEODE_CONCEPT_CHECK_levelDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelDeleteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateLevelClosed
		#define GEODE_CONCEPT_CHECK_rateLevelClosed
		GEODE_CONCEPT_FUNCTION_CHECK(rateLevelClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likedItem
		#define GEODE_CONCEPT_CHECK_likedItem
		GEODE_CONCEPT_FUNCTION_CHECK(likedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIDPopupClosed
		#define GEODE_CONCEPT_CHECK_setIDPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setIDPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmClone
		#define GEODE_CONCEPT_CHECK_confirmClone
		GEODE_CONCEPT_FUNCTION_CHECK(confirmClone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmDelete
		#define GEODE_CONCEPT_CHECK_confirmDelete
		GEODE_CONCEPT_FUNCTION_CHECK(confirmDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmMoveToBottom
		#define GEODE_CONCEPT_CHECK_confirmMoveToBottom
		GEODE_CONCEPT_FUNCTION_CHECK(confirmMoveToBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmMoveToTop
		#define GEODE_CONCEPT_CHECK_confirmMoveToTop
		GEODE_CONCEPT_FUNCTION_CHECK(confirmMoveToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmOwnerDelete
		#define GEODE_CONCEPT_CHECK_confirmOwnerDelete
		GEODE_CONCEPT_FUNCTION_CHECK(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadLevel
		#define GEODE_CONCEPT_CHECK_downloadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(downloadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementDislikes
		#define GEODE_CONCEPT_CHECK_incrementDislikes
		GEODE_CONCEPT_FUNCTION_CHECK(incrementDislikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementLikes
		#define GEODE_CONCEPT_CHECK_incrementLikes
		GEODE_CONCEPT_FUNCTION_CHECK(incrementLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelStep
		#define GEODE_CONCEPT_CHECK_loadLevelStep
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddToList
		#define GEODE_CONCEPT_CHECK_onAddToList
		GEODE_CONCEPT_FUNCTION_CHECK(onAddToList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClone
		#define GEODE_CONCEPT_CHECK_onClone
		GEODE_CONCEPT_FUNCTION_CHECK(onClone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFavorite
		#define GEODE_CONCEPT_CHECK_onFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(onFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGarage
		#define GEODE_CONCEPT_CHECK_onGarage
		GEODE_CONCEPT_FUNCTION_CHECK(onGarage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelInfo
		#define GEODE_CONCEPT_CHECK_onLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelLeaderboard
		#define GEODE_CONCEPT_CHECK_onLevelLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelOptions
		#define GEODE_CONCEPT_CHECK_onLevelOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLike
		#define GEODE_CONCEPT_CHECK_onLike
		GEODE_CONCEPT_FUNCTION_CHECK(onLike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOwnerDelete
		#define GEODE_CONCEPT_CHECK_onOwnerDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onOwnerDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayReplay
		#define GEODE_CONCEPT_CHECK_onPlayReplay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRate
		#define GEODE_CONCEPT_CHECK_onRate
		GEODE_CONCEPT_FUNCTION_CHECK(onRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateDemon
		#define GEODE_CONCEPT_CHECK_onRateDemon
		GEODE_CONCEPT_FUNCTION_CHECK(onRateDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateStars
		#define GEODE_CONCEPT_CHECK_onRateStars
		GEODE_CONCEPT_FUNCTION_CHECK(onRateStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateStarsMod
		#define GEODE_CONCEPT_CHECK_onRateStarsMod
		GEODE_CONCEPT_FUNCTION_CHECK(onRateStarsMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetFolder
		#define GEODE_CONCEPT_CHECK_onSetFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onSetFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep2
		#define GEODE_CONCEPT_CHECK_playStep2
		GEODE_CONCEPT_FUNCTION_CHECK(playStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep3
		#define GEODE_CONCEPT_CHECK_playStep3
		GEODE_CONCEPT_FUNCTION_CHECK(playStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep4
		#define GEODE_CONCEPT_CHECK_playStep4
		GEODE_CONCEPT_FUNCTION_CHECK(playStep4) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelInfo
		#define GEODE_CONCEPT_CHECK_setupLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPlatformerStats
		#define GEODE_CONCEPT_CHECK_setupPlatformerStats
		GEODE_CONCEPT_FUNCTION_CHECK(setupPlatformerStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupProgressBars
		#define GEODE_CONCEPT_CHECK_setupProgressBars
		GEODE_CONCEPT_FUNCTION_CHECK(setupProgressBars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDownloadLevel
		#define GEODE_CONCEPT_CHECK_shouldDownloadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDownloadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showSongWarning
		#define GEODE_CONCEPT_CHECK_showSongWarning
		GEODE_CONCEPT_FUNCTION_CHECK(showSongWarning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUpdateAlert
		#define GEODE_CONCEPT_CHECK_showUpdateAlert
		GEODE_CONCEPT_FUNCTION_CHECK(showUpdateAlert) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryCloneLevel
		#define GEODE_CONCEPT_CHECK_tryCloneLevel
		GEODE_CONCEPT_FUNCTION_CHECK(tryCloneLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowAd
		#define GEODE_CONCEPT_CHECK_tryShowAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelValues
		#define GEODE_CONCEPT_CHECK_updateLabelValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSideButtons
		#define GEODE_CONCEPT_CHECK_updateSideButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateSideButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelInfoLayer> : ModifyBase<ModifyDerive<Der, LevelInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelInfoLayer>>::ModifyBase;
		using Base = LevelInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f7110, Default, LevelInfoLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f70c0, Default, LevelInfoLayer, scene, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300820, Thiscall, LevelInfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300830, Thiscall, LevelInfoLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd690, Thiscall, LevelInfoLayer, numberInputClosed, NumberInputLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f99e0, Thiscall, LevelInfoLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fba60, Thiscall, LevelInfoLayer, levelDownloadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fbdd0, Thiscall, LevelInfoLayer, levelDownloadFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fbf00, Thiscall, LevelInfoLayer, levelUpdateFinished, GJGameLevel*, UpdateResponse)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fc060, Thiscall, LevelInfoLayer, levelUpdateFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fc190, Thiscall, LevelInfoLayer, levelDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fc2d0, Thiscall, LevelInfoLayer, levelDeleteFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe710, Thiscall, LevelInfoLayer, rateLevelClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe990, Thiscall, LevelInfoLayer, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300260, Thiscall, LevelInfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9bd0, Thiscall, LevelInfoLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fc410, Thiscall, LevelInfoLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd860, Thiscall, LevelInfoLayer, confirmClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd9d0, Thiscall, LevelInfoLayer, confirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ff2f0, Thiscall, LevelInfoLayer, confirmMoveToBottom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ff1b0, Thiscall, LevelInfoLayer, confirmMoveToTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fdb10, Thiscall, LevelInfoLayer, confirmOwnerDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9fa0, Thiscall, LevelInfoLayer, downloadLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, incrementDislikes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, incrementLikes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f7340, Thiscall, LevelInfoLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd260, Thiscall, LevelInfoLayer, loadLevelStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9990, Thiscall, LevelInfoLayer, onAddToList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300730, Thiscall, LevelInfoLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, onClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9c60, Thiscall, LevelInfoLayer, onFavorite, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9de0, Thiscall, LevelInfoLayer, onGarage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd3c0, Thiscall, LevelInfoLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fef60, Thiscall, LevelInfoLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9d00, Thiscall, LevelInfoLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fee10, Thiscall, LevelInfoLayer, onLevelOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe8a0, Thiscall, LevelInfoLayer, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, onOwnerDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fc430, Thiscall, LevelInfoLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, onPlayReplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fdf40, Thiscall, LevelInfoLayer, onRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe720, Thiscall, LevelInfoLayer, onRateDemon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe220, Thiscall, LevelInfoLayer, onRateStars, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe4e0, Thiscall, LevelInfoLayer, onRateStarsMod, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9b30, Thiscall, LevelInfoLayer, onSetFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fecd0, Thiscall, LevelInfoLayer, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2feeb0, Thiscall, LevelInfoLayer, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd0b0, Thiscall, LevelInfoLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd190, Thiscall, LevelInfoLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd310, Thiscall, LevelInfoLayer, playStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fae10, Thiscall, LevelInfoLayer, setupLevelInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fa2d0, Thiscall, LevelInfoLayer, setupPlatformerStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fa700, Thiscall, LevelInfoLayer, setupProgressBars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f9e70, Thiscall, LevelInfoLayer, shouldDownloadLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, showSongWarning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fbf70, Thiscall, LevelInfoLayer, showUpdateAlert, UpdateResponse)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd400, Thiscall, LevelInfoLayer, tryCloneLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelInfoLayer, tryShowAd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ff420, Thiscall, LevelInfoLayer, updateLabelValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fea00, Thiscall, LevelInfoLayer, updateSideButtons, )
		}
	};
}
