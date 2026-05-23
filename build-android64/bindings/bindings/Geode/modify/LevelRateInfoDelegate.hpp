#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelRateInfoDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_rateInfoFinished
		#define GEODE_CONCEPT_CHECK_rateInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rateInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateInfoFailed
		#define GEODE_CONCEPT_CHECK_rateInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(rateInfoFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelRateInfoDelegate> : ModifyBase<ModifyDerive<Der, LevelRateInfoDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelRateInfoDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelRateInfoDelegate>>::ModifyBase;
		using Base = LevelRateInfoDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelRateInfoDelegate, rateInfoFinished, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelRateInfoDelegate, rateInfoFailed, int, int)
		}
	};
}
