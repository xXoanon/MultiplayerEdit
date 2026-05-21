#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_controlTweenAction
		#define GEODE_STATICS_controlTweenAction
		GEODE_AS_STATIC_FUNCTION(controlTweenAction) 
	#endif

	#ifndef GEODE_STATICS_getGameObjectPhysics
		#define GEODE_STATICS_getGameObjectPhysics
		GEODE_AS_STATIC_FUNCTION(getGameObjectPhysics) 
	#endif

	#ifndef GEODE_STATICS_processStateTriggers
		#define GEODE_STATICS_processStateTriggers
		GEODE_AS_STATIC_FUNCTION(processStateTriggers) 
	#endif

	#ifndef GEODE_STATICS_tweenValue
		#define GEODE_STATICS_tweenValue
		GEODE_AS_STATIC_FUNCTION(tweenValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_controlTweenAction
		#define GEODE_CONCEPT_CHECK_controlTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(controlTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameObjectPhysics
		#define GEODE_CONCEPT_CHECK_getGameObjectPhysics
		GEODE_CONCEPT_FUNCTION_CHECK(getGameObjectPhysics) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processStateTriggers
		#define GEODE_CONCEPT_CHECK_processStateTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(processStateTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopTweenAction
		#define GEODE_CONCEPT_CHECK_stopTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(stopTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenValue
		#define GEODE_CONCEPT_CHECK_tweenValue
		GEODE_CONCEPT_FUNCTION_CHECK(tweenValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenActions
		#define GEODE_CONCEPT_CHECK_updateTweenActions
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenActions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameState> : ModifyBase<ModifyDerive<Der, GJGameState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameState>>;
		using ModifyBase<ModifyDerive<Der, GJGameState>>::ModifyBase;
		using Base = GJGameState;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x205460, Thiscall, GJGameState, controlTweenAction, int, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x205660, Thiscall, GJGameState, getGameObjectPhysics, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2054f0, Thiscall, GJGameState, processStateTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameState, stopTweenAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2053a0, Thiscall, GJGameState, tweenValue, float, float, int, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameState, updateTweenAction, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameState, updateTweenActions, float)
		}
	};
}
