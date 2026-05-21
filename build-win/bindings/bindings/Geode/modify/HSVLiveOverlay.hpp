#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVLiveOverlay.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_hsvChanged
		#define GEODE_STATICS_hsvChanged
		GEODE_AS_STATIC_FUNCTION(hsvChanged) 
	#endif

	#ifndef GEODE_STATICS_closeColorSelect
		#define GEODE_STATICS_closeColorSelect
		GEODE_AS_STATIC_FUNCTION(closeColorSelect) 
	#endif

	#ifndef GEODE_STATICS_createHSVWidget
		#define GEODE_STATICS_createHSVWidget
		GEODE_AS_STATIC_FUNCTION(createHSVWidget) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSelectTab
		#define GEODE_STATICS_onSelectTab
		GEODE_AS_STATIC_FUNCTION(onSelectTab) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvChanged
		#define GEODE_CONCEPT_CHECK_hsvChanged
		GEODE_CONCEPT_FUNCTION_CHECK(hsvChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeColorSelect
		#define GEODE_CONCEPT_CHECK_closeColorSelect
		GEODE_CONCEPT_FUNCTION_CHECK(closeColorSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createHSVWidget
		#define GEODE_CONCEPT_CHECK_createHSVWidget
		GEODE_CONCEPT_FUNCTION_CHECK(createHSVWidget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectTab
		#define GEODE_CONCEPT_CHECK_onSelectTab
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleControls
		#define GEODE_CONCEPT_CHECK_toggleControls
		GEODE_CONCEPT_FUNCTION_CHECK(toggleControls) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVLiveOverlay> : ModifyBase<ModifyDerive<Der, HSVLiveOverlay>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVLiveOverlay>>;
		using ModifyBase<ModifyDerive<Der, HSVLiveOverlay>>::ModifyBase;
		using Base = HSVLiveOverlay;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(HSVLiveOverlay, create, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba280, Thiscall, HSVLiveOverlay, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8baf0, Thiscall, HSVLiveOverlay, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba2d0, Thiscall, HSVLiveOverlay, hsvChanged, ConfigureHSVWidget*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba060, Thiscall, HSVLiveOverlay, closeColorSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba0e0, Thiscall, HSVLiveOverlay, createHSVWidget, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b9e60, Thiscall, HSVLiveOverlay, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b99c0, Thiscall, HSVLiveOverlay, init, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba0b0, Thiscall, HSVLiveOverlay, onSelectTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(HSVLiveOverlay, toggleControls, bool)
		}
	};
}
