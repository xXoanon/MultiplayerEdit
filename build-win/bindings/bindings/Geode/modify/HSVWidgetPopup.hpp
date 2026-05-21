#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVWidgetPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVWidgetPopup> : ModifyBase<ModifyDerive<Der, HSVWidgetPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVWidgetPopup>>;
		using ModifyBase<ModifyDerive<Der, HSVWidgetPopup>>::ModifyBase;
		using Base = HSVWidgetPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x964d0, Default, HSVWidgetPopup, create, cocos2d::ccHSVValue, HSVWidgetDelegate*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x96a00, Thiscall, HSVWidgetPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x965f0, Thiscall, HSVWidgetPopup, init, cocos2d::ccHSVValue, HSVWidgetDelegate*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x96920, Thiscall, HSVWidgetPopup, onClose, cocos2d::CCObject*)
		}
	};
}
