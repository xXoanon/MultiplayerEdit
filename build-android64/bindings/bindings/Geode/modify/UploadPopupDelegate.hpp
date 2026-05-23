#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadPopupDelegate> : ModifyBase<ModifyDerive<Der, UploadPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadPopupDelegate>>::ModifyBase;
		using Base = UploadPopupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UploadPopupDelegate, onClosePopup, UploadActionPopup*)
		}
	};
}
