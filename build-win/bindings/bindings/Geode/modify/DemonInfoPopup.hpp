#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DemonInfoPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromString
		#define GEODE_STATICS_createFromString
		GEODE_AS_STATIC_FUNCTION(createFromString) 
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

	#ifndef GEODE_CONCEPT_CHECK_createFromString
		#define GEODE_CONCEPT_CHECK_createFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createFromString) 
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
	struct ModifyDerive<Der, DemonInfoPopup> : ModifyBase<ModifyDerive<Der, DemonInfoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DemonInfoPopup>>;
		using ModifyBase<ModifyDerive<Der, DemonInfoPopup>>::ModifyBase;
		using Base = DemonInfoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c7050, Default, DemonInfoPopup, create, int, int, int, int, int, int, int, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c6c80, Default, DemonInfoPopup, createFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, DemonInfoPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c71b0, Thiscall, DemonInfoPopup, init, int, int, int, int, int, int, int, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, DemonInfoPopup, onClose, cocos2d::CCObject*)
		}
	};
}
