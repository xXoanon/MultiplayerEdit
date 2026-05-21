#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TOSPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPrivacy
		#define GEODE_STATICS_onPrivacy
		GEODE_AS_STATIC_FUNCTION(onPrivacy) 
	#endif

	#ifndef GEODE_STATICS_onTOS
		#define GEODE_STATICS_onTOS
		GEODE_AS_STATIC_FUNCTION(onTOS) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrivacy
		#define GEODE_CONCEPT_CHECK_onPrivacy
		GEODE_CONCEPT_FUNCTION_CHECK(onPrivacy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTOS
		#define GEODE_CONCEPT_CHECK_onTOS
		GEODE_CONCEPT_FUNCTION_CHECK(onTOS) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TOSPopup> : ModifyBase<ModifyDerive<Der, TOSPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TOSPopup>>;
		using ModifyBase<ModifyDerive<Der, TOSPopup>>::ModifyBase;
		using Base = TOSPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TOSPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29df90, Thiscall, TOSPopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TOSPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e620, Thiscall, TOSPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e5e0, Thiscall, TOSPopup, onPrivacy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e600, Thiscall, TOSPopup, onTOS, cocos2d::CCObject*)
		}
	};
}
