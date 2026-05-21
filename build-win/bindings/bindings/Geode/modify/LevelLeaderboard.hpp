#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelLeaderboard.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_getLocalScores
		#define GEODE_STATICS_getLocalScores
		GEODE_AS_STATIC_FUNCTION(getLocalScores) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadScores
		#define GEODE_STATICS_loadScores
		GEODE_AS_STATIC_FUNCTION(loadScores) 
	#endif

	#ifndef GEODE_STATICS_onChangeMode
		#define GEODE_STATICS_onChangeMode
		GEODE_AS_STATIC_FUNCTION(onChangeMode) 
	#endif

	#ifndef GEODE_STATICS_onChangeType
		#define GEODE_STATICS_onChangeType
		GEODE_AS_STATIC_FUNCTION(onChangeType) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteLocalScores
		#define GEODE_STATICS_onDeleteLocalScores
		GEODE_AS_STATIC_FUNCTION(onDeleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_reloadLeaderboard
		#define GEODE_STATICS_reloadLeaderboard
		GEODE_AS_STATIC_FUNCTION(reloadLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_setupLeaderboard
		#define GEODE_STATICS_setupLeaderboard
		GEODE_AS_STATIC_FUNCTION(setupLeaderboard) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFailed
		#define GEODE_CONCEPT_CHECK_updateUserScoreFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLocalScores
		#define GEODE_CONCEPT_CHECK_deleteLocalScores
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLocalScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalScores
		#define GEODE_CONCEPT_CHECK_getLocalScores
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteButton
		#define GEODE_CONCEPT_CHECK_getSpriteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadScores
		#define GEODE_CONCEPT_CHECK_loadScores
		GEODE_CONCEPT_FUNCTION_CHECK(loadScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeMode
		#define GEODE_CONCEPT_CHECK_onChangeMode
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeType
		#define GEODE_CONCEPT_CHECK_onChangeType
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteLocalScores
		#define GEODE_CONCEPT_CHECK_onDeleteLocalScores
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteLocalScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadLeaderboard
		#define GEODE_CONCEPT_CHECK_reloadLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(reloadLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLeaderboard
		#define GEODE_CONCEPT_CHECK_setupLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(setupLeaderboard) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelLeaderboard> : ModifyBase<ModifyDerive<Der, LevelLeaderboard>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelLeaderboard>>;
		using ModifyBase<ModifyDerive<Der, LevelLeaderboard>>::ModifyBase;
		using Base = LevelLeaderboard;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3009d0, Default, LevelLeaderboard, create, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, LevelLeaderboard, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, LevelLeaderboard, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, LevelLeaderboard, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302b90, Thiscall, LevelLeaderboard, loadLeaderboardFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302c30, Thiscall, LevelLeaderboard, loadLeaderboardFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x301fc0, Thiscall, LevelLeaderboard, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3025e0, Thiscall, LevelLeaderboard, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3025f0, Thiscall, LevelLeaderboard, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelLeaderboard, deleteLocalScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302140, Thiscall, LevelLeaderboard, getLocalScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x301ca0, Thiscall, LevelLeaderboard, getSpriteButton, gd::string, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300b10, Thiscall, LevelLeaderboard, init, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302990, Thiscall, LevelLeaderboard, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302310, Thiscall, LevelLeaderboard, loadScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302790, Thiscall, LevelLeaderboard, onChangeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3026f0, Thiscall, LevelLeaderboard, onChangeType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, LevelLeaderboard, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x301e80, Thiscall, LevelLeaderboard, onDeleteLocalScores, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302810, Thiscall, LevelLeaderboard, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302600, Thiscall, LevelLeaderboard, reloadLeaderboard, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x302d40, Thiscall, LevelLeaderboard, setupLeaderboard, cocos2d::CCArray*)
		}
	};
}
