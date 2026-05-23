#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_hsvPopupClosed
		#define GEODE_CONCEPT_CHECK_hsvPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(hsvPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvChanged
		#define GEODE_CONCEPT_CHECK_hsvChanged
		GEODE_CONCEPT_FUNCTION_CHECK(hsvChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVWidgetDelegate> : ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>>;
		using ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>>::ModifyBase;
		using Base = HSVWidgetDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(HSVWidgetDelegate, hsvPopupClosed, HSVWidgetPopup*, cocos2d::ccHSVValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(HSVWidgetDelegate, hsvChanged, ConfigureHSVWidget*)
		}
	};
}
