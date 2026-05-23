#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NumberInputDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_numberInputClosed
		#define GEODE_CONCEPT_CHECK_numberInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(numberInputClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NumberInputDelegate> : ModifyBase<ModifyDerive<Der, NumberInputDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NumberInputDelegate>>;
		using ModifyBase<ModifyDerive<Der, NumberInputDelegate>>::ModifyBase;
		using Base = NumberInputDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NumberInputDelegate, numberInputClosed, NumberInputLayer*)
		}
	};
}
