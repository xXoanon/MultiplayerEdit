#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ConfigureValuePopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_valuePopupClosed
		#define GEODE_CONCEPT_CHECK_valuePopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(valuePopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ConfigureValuePopupDelegate> : ModifyBase<ModifyDerive<Der, ConfigureValuePopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ConfigureValuePopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, ConfigureValuePopupDelegate>>::ModifyBase;
		using Base = ConfigureValuePopupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ConfigureValuePopupDelegate, valuePopupClosed, ConfigureValuePopup*, float)
		}
	};
}
