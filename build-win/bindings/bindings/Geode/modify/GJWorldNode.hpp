#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJWorldNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addDotsToLevel
		#define GEODE_STATICS_addDotsToLevel
		GEODE_AS_STATIC_FUNCTION(addDotsToLevel) 
	#endif

	#ifndef GEODE_STATICS_dotPositionForLevel
		#define GEODE_STATICS_dotPositionForLevel
		GEODE_AS_STATIC_FUNCTION(dotPositionForLevel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLevel
		#define GEODE_STATICS_onLevel
		GEODE_AS_STATIC_FUNCTION(onLevel) 
	#endif

	#ifndef GEODE_STATICS_playStep1
		#define GEODE_STATICS_playStep1
		GEODE_AS_STATIC_FUNCTION(playStep1) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_positionForLevelButton
		#define GEODE_STATICS_positionForLevelButton
		GEODE_AS_STATIC_FUNCTION(positionForLevelButton) 
	#endif

	#ifndef GEODE_STATICS_unlockActiveItem
		#define GEODE_STATICS_unlockActiveItem
		GEODE_AS_STATIC_FUNCTION(unlockActiveItem) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDotsToLevel
		#define GEODE_CONCEPT_CHECK_addDotsToLevel
		GEODE_CONCEPT_FUNCTION_CHECK(addDotsToLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dotPositionForLevel
		#define GEODE_CONCEPT_CHECK_dotPositionForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(dotPositionForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevel
		#define GEODE_CONCEPT_CHECK_onLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep1
		#define GEODE_CONCEPT_CHECK_playStep1
		GEODE_CONCEPT_FUNCTION_CHECK(playStep1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep2
		#define GEODE_CONCEPT_CHECK_playStep2
		GEODE_CONCEPT_FUNCTION_CHECK(playStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep3
		#define GEODE_CONCEPT_CHECK_playStep3
		GEODE_CONCEPT_FUNCTION_CHECK(playStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForLevelButton
		#define GEODE_CONCEPT_CHECK_positionForLevelButton
		GEODE_CONCEPT_FUNCTION_CHECK(positionForLevelButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockActiveItem
		#define GEODE_CONCEPT_CHECK_unlockActiveItem
		GEODE_CONCEPT_FUNCTION_CHECK(unlockActiveItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJWorldNode> : ModifyBase<ModifyDerive<Der, GJWorldNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJWorldNode>>;
		using ModifyBase<ModifyDerive<Der, GJWorldNode>>::ModifyBase;
		using Base = GJWorldNode;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, create, int, WorldSelectLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, addDotsToLevel, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, dotPositionForLevel, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, init, int, WorldSelectLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, onLevel, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, playStep1, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, playStep2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, playStep3, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, positionForLevelButton, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJWorldNode, unlockActiveItem, )
		}
	};
}
