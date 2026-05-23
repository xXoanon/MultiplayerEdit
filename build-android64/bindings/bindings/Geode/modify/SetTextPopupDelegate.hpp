#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetTextPopupDelegate> : ModifyBase<ModifyDerive<Der, SetTextPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetTextPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, SetTextPopupDelegate>>::ModifyBase;
		using Base = SetTextPopupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetTextPopupDelegate, setTextPopupClosed, SetTextPopup*, gd::string)
		}
	};
}
