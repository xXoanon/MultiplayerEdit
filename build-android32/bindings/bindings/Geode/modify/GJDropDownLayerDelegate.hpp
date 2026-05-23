#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		#define GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		GEODE_CONCEPT_FUNCTION_CHECK(dropDownLayerWillClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJDropDownLayerDelegate> : ModifyBase<ModifyDerive<Der, GJDropDownLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDropDownLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJDropDownLayerDelegate>>::ModifyBase;
		using Base = GJDropDownLayerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayerDelegate, dropDownLayerWillClose, GJDropDownLayer*)
		}
	};
}
