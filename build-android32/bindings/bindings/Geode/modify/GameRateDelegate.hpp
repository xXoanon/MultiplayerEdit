#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameRateDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_updateRate
		#define GEODE_CONCEPT_CHECK_updateRate
		GEODE_CONCEPT_FUNCTION_CHECK(updateRate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameRateDelegate> : ModifyBase<ModifyDerive<Der, GameRateDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameRateDelegate>>;
		using ModifyBase<ModifyDerive<Der, GameRateDelegate>>::ModifyBase;
		using Base = GameRateDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameRateDelegate, updateRate, )
		}
	};
}
