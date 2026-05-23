#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UIButtonConfig.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetOneBtn
		#define GEODE_CONCEPT_CHECK_resetOneBtn
		GEODE_CONCEPT_FUNCTION_CHECK(resetOneBtn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UIButtonConfig> : ModifyBase<ModifyDerive<Der, UIButtonConfig>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UIButtonConfig>>;
		using ModifyBase<ModifyDerive<Der, UIButtonConfig>>::ModifyBase;
		using Base = UIButtonConfig;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UIButtonConfig, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UIButtonConfig, resetOneBtn, )
		}
	};
}
