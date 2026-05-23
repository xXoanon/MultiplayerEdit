#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectSFXSortDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_sortSelectClosed
		#define GEODE_CONCEPT_CHECK_sortSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sortSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectSFXSortDelegate> : ModifyBase<ModifyDerive<Der, SelectSFXSortDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectSFXSortDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectSFXSortDelegate>>::ModifyBase;
		using Base = SelectSFXSortDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSFXSortDelegate, sortSelectClosed, SelectSFXSortLayer*)
		}
	};
}
