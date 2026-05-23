#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RateLevelDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_rateLevelClosed
		#define GEODE_CONCEPT_CHECK_rateLevelClosed
		GEODE_CONCEPT_FUNCTION_CHECK(rateLevelClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RateLevelDelegate> : ModifyBase<ModifyDerive<Der, RateLevelDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RateLevelDelegate>>;
		using ModifyBase<ModifyDerive<Der, RateLevelDelegate>>::ModifyBase;
		using Base = RateLevelDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(RateLevelDelegate, rateLevelClosed, )
		}
	};
}
