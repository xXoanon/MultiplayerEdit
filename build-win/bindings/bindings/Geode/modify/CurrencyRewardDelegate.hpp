#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_currencyWillExit
		#define GEODE_CONCEPT_CHECK_currencyWillExit
		GEODE_CONCEPT_FUNCTION_CHECK(currencyWillExit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencyRewardDelegate> : ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>>;
		using ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>>::ModifyBase;
		using Base = CurrencyRewardDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardDelegate, currencyWillExit, CurrencyRewardLayer*)
		}
	};
}
