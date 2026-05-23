#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListButtonBarDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_listButtonBarSwitchedPage
		#define GEODE_CONCEPT_CHECK_listButtonBarSwitchedPage
		GEODE_CONCEPT_FUNCTION_CHECK(listButtonBarSwitchedPage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ListButtonBarDelegate> : ModifyBase<ModifyDerive<Der, ListButtonBarDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListButtonBarDelegate>>;
		using ModifyBase<ModifyDerive<Der, ListButtonBarDelegate>>::ModifyBase;
		using Base = ListButtonBarDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ListButtonBarDelegate, listButtonBarSwitchedPage, ListButtonBar*, int)
		}
	};
}
