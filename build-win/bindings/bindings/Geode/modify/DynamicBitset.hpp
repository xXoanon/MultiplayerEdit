#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DynamicBitset.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_resize
		#define GEODE_STATICS_resize
		GEODE_AS_STATIC_FUNCTION(resize) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_resize
		#define GEODE_CONCEPT_CHECK_resize
		GEODE_CONCEPT_FUNCTION_CHECK(resize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DynamicBitset> : ModifyBase<ModifyDerive<Der, DynamicBitset>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DynamicBitset>>;
		using ModifyBase<ModifyDerive<Der, DynamicBitset>>::ModifyBase;
		using Base = DynamicBitset;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a4d00, Thiscall, DynamicBitset, resize, size_t)
		}
	};
}
