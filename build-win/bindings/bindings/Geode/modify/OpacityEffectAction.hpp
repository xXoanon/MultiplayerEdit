#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OpacityEffectAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OpacityEffectAction> : ModifyBase<ModifyDerive<Der, OpacityEffectAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OpacityEffectAction>>;
		using ModifyBase<ModifyDerive<Der, OpacityEffectAction>>::ModifyBase;
		using Base = OpacityEffectAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OpacityEffectAction, step, float)
		}
	};
}
