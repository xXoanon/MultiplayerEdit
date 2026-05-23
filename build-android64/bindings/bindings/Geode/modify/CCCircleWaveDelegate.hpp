#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCircleWaveDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		#define GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(circleWaveWillBeRemoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCircleWaveDelegate> : ModifyBase<ModifyDerive<Der, CCCircleWaveDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCircleWaveDelegate>>;
		using ModifyBase<ModifyDerive<Der, CCCircleWaveDelegate>>::ModifyBase;
		using Base = CCCircleWaveDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCircleWaveDelegate, circleWaveWillBeRemoved, CCCircleWave*)
		}
	};
}
