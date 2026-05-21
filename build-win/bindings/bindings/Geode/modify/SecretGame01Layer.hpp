#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretGame01Layer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_didSelectCorrectObject
		#define GEODE_STATICS_didSelectCorrectObject
		GEODE_AS_STATIC_FUNCTION(didSelectCorrectObject) 
	#endif

	#ifndef GEODE_STATICS_gameStep01
		#define GEODE_STATICS_gameStep01
		GEODE_AS_STATIC_FUNCTION(gameStep01) 
	#endif

	#ifndef GEODE_STATICS_gameStep02
		#define GEODE_STATICS_gameStep02
		GEODE_AS_STATIC_FUNCTION(gameStep02) 
	#endif

	#ifndef GEODE_STATICS_getCountForDifficulty
		#define GEODE_STATICS_getCountForDifficulty
		GEODE_AS_STATIC_FUNCTION(getCountForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getFrameForDifficulty
		#define GEODE_STATICS_getFrameForDifficulty
		GEODE_AS_STATIC_FUNCTION(getFrameForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getRowsForDifficulty
		#define GEODE_STATICS_getRowsForDifficulty
		GEODE_AS_STATIC_FUNCTION(getRowsForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getTimeForDifficulty
		#define GEODE_STATICS_getTimeForDifficulty
		GEODE_AS_STATIC_FUNCTION(getTimeForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_onSelectButton
		#define GEODE_STATICS_onSelectButton
		GEODE_AS_STATIC_FUNCTION(onSelectButton) 
	#endif

	#ifndef GEODE_STATICS_resetGame
		#define GEODE_STATICS_resetGame
		GEODE_AS_STATIC_FUNCTION(resetGame) 
	#endif

	#ifndef GEODE_STATICS_resetGameTimer
		#define GEODE_STATICS_resetGameTimer
		GEODE_AS_STATIC_FUNCTION(resetGameTimer) 
	#endif

	#ifndef GEODE_STATICS_scaleOutGame
		#define GEODE_STATICS_scaleOutGame
		GEODE_AS_STATIC_FUNCTION(scaleOutGame) 
	#endif

	#ifndef GEODE_STATICS_showGameOver
		#define GEODE_STATICS_showGameOver
		GEODE_AS_STATIC_FUNCTION(showGameOver) 
	#endif

	#ifndef GEODE_STATICS_showGameWon
		#define GEODE_STATICS_showGameWon
		GEODE_AS_STATIC_FUNCTION(showGameWon) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didSelectCorrectObject
		#define GEODE_CONCEPT_CHECK_didSelectCorrectObject
		GEODE_CONCEPT_FUNCTION_CHECK(didSelectCorrectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameStep01
		#define GEODE_CONCEPT_CHECK_gameStep01
		GEODE_CONCEPT_FUNCTION_CHECK(gameStep01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameStep02
		#define GEODE_CONCEPT_CHECK_gameStep02
		GEODE_CONCEPT_FUNCTION_CHECK(gameStep02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCountForDifficulty
		#define GEODE_CONCEPT_CHECK_getCountForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getCountForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFrameForDifficulty
		#define GEODE_CONCEPT_CHECK_getFrameForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getFrameForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRowsForDifficulty
		#define GEODE_CONCEPT_CHECK_getRowsForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getRowsForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeForDifficulty
		#define GEODE_CONCEPT_CHECK_getTimeForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectButton
		#define GEODE_CONCEPT_CHECK_onSelectButton
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGame
		#define GEODE_CONCEPT_CHECK_resetGame
		GEODE_CONCEPT_FUNCTION_CHECK(resetGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGameTimer
		#define GEODE_CONCEPT_CHECK_resetGameTimer
		GEODE_CONCEPT_FUNCTION_CHECK(resetGameTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleOutGame
		#define GEODE_CONCEPT_CHECK_scaleOutGame
		GEODE_CONCEPT_FUNCTION_CHECK(scaleOutGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGameOver
		#define GEODE_CONCEPT_CHECK_showGameOver
		GEODE_CONCEPT_FUNCTION_CHECK(showGameOver) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGameWon
		#define GEODE_CONCEPT_CHECK_showGameWon
		GEODE_CONCEPT_FUNCTION_CHECK(showGameWon) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretGame01Layer> : ModifyBase<ModifyDerive<Der, SecretGame01Layer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretGame01Layer>>;
		using ModifyBase<ModifyDerive<Der, SecretGame01Layer>>::ModifyBase;
		using Base = SecretGame01Layer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, didSelectCorrectObject, CCMenuItemSpriteExtra*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, gameStep01, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, gameStep02, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, getCountForDifficulty, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, getFrameForDifficulty, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, getRowsForDifficulty, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, getTimeForDifficulty, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, onSelectButton, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, resetGame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, resetGameTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, scaleOutGame, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, showGameOver, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretGame01Layer, showGameWon, )
		}
	};
}
