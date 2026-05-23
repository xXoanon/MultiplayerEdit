#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectSettingDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_selectSettingClosed
		#define GEODE_CONCEPT_CHECK_selectSettingClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectSettingClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectSettingDelegate> : ModifyBase<ModifyDerive<Der, SelectSettingDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectSettingDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectSettingDelegate>>::ModifyBase;
		using Base = SelectSettingDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSettingDelegate, selectSettingClosed, SelectSettingLayer*)
		}
	};
}
