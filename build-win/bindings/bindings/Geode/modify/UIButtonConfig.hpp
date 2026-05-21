#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UIButtonConfig.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resetOneBtn
		#define GEODE_STATICS_resetOneBtn
		GEODE_AS_STATIC_FUNCTION(resetOneBtn) 
	#endif

    
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17a9f0, Thiscall, UIButtonConfig, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17aa60, Thiscall, UIButtonConfig, resetOneBtn, )
		}
	};
}
