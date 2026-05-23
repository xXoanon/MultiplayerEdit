#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectListIconDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_iconSelectClosed
		#define GEODE_CONCEPT_CHECK_iconSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(iconSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectListIconDelegate> : ModifyBase<ModifyDerive<Der, SelectListIconDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectListIconDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectListIconDelegate>>::ModifyBase;
		using Base = SelectListIconDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectListIconDelegate, iconSelectClosed, SelectListIconLayer*)
		}
	};
}
