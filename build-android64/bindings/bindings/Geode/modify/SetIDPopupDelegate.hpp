#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_setIDPopupClosed
		#define GEODE_CONCEPT_CHECK_setIDPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setIDPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetIDPopupDelegate> : ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>>::ModifyBase;
		using Base = SetIDPopupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetIDPopupDelegate, setIDPopupClosed, SetIDPopup*, int)
		}
	};
}
