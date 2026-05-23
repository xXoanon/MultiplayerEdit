#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJShaderState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_stopTweenAction
		#define GEODE_STATICS_stopTweenAction
		GEODE_AS_STATIC_FUNCTION(stopTweenAction) 
	#endif

	#ifndef GEODE_STATICS_timesyncShaderAction
		#define GEODE_STATICS_timesyncShaderAction
		GEODE_AS_STATIC_FUNCTION(timesyncShaderAction) 
	#endif

	#ifndef GEODE_STATICS_timesyncShaderActions
		#define GEODE_STATICS_timesyncShaderActions
		GEODE_AS_STATIC_FUNCTION(timesyncShaderActions) 
	#endif

	#ifndef GEODE_STATICS_tweenValue
		#define GEODE_STATICS_tweenValue
		GEODE_AS_STATIC_FUNCTION(tweenValue) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_updateTweenActions
		#define GEODE_STATICS_updateTweenActions
		GEODE_AS_STATIC_FUNCTION(updateTweenActions) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopTweenAction
		#define GEODE_CONCEPT_CHECK_stopTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(stopTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timesyncShaderAction
		#define GEODE_CONCEPT_CHECK_timesyncShaderAction
		GEODE_CONCEPT_FUNCTION_CHECK(timesyncShaderAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timesyncShaderActions
		#define GEODE_CONCEPT_CHECK_timesyncShaderActions
		GEODE_CONCEPT_FUNCTION_CHECK(timesyncShaderActions) 
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
	struct ModifyDerive<Der, GJShaderState> : ModifyBase<ModifyDerive<Der, GJShaderState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJShaderState>>;
		using ModifyBase<ModifyDerive<Der, GJShaderState>>::ModifyBase;
		using Base = GJShaderState;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJShaderState::reset)), Default, GJShaderState, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJShaderState::stopTweenAction)), Default, GJShaderState, stopTweenAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJShaderState::timesyncShaderAction)), Default, GJShaderState, timesyncShaderAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJShaderState::timesyncShaderActions)), Default, GJShaderState, timesyncShaderActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, int, float, int, float>::func(&GJShaderState::tweenValue)), Default, GJShaderState, tweenValue, float, float, int, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&GJShaderState::updateTweenAction)), Default, GJShaderState, updateTweenAction, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJShaderState::updateTweenActions)), Default, GJShaderState, updateTweenActions, float)
		}
	};
}
