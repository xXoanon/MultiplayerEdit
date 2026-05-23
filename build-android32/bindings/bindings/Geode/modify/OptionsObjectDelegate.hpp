#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsObjectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_stateChanged
		#define GEODE_CONCEPT_CHECK_stateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(stateChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsObjectDelegate> : ModifyBase<ModifyDerive<Der, OptionsObjectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsObjectDelegate>>;
		using ModifyBase<ModifyDerive<Der, OptionsObjectDelegate>>::ModifyBase;
		using Base = OptionsObjectDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsObjectDelegate, stateChanged, OptionsObject*)
		}
	};
}
