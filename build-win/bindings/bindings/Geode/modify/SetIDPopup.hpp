#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetIDPopup.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancel
		#define GEODE_STATICS_onCancel
		GEODE_AS_STATIC_FUNCTION(onCancel) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onItemIDArrow
		#define GEODE_STATICS_onItemIDArrow
		GEODE_AS_STATIC_FUNCTION(onItemIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onResetValue
		#define GEODE_STATICS_onResetValue
		GEODE_AS_STATIC_FUNCTION(onResetValue) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueChanged
		#define GEODE_CONCEPT_CHECK_valueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(valueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancel
		#define GEODE_CONCEPT_CHECK_onCancel
		GEODE_CONCEPT_FUNCTION_CHECK(onCancel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onItemIDArrow
		#define GEODE_CONCEPT_CHECK_onItemIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onItemIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetValue
		#define GEODE_CONCEPT_CHECK_onResetValue
		GEODE_CONCEPT_FUNCTION_CHECK(onResetValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetIDPopup> : ModifyBase<ModifyDerive<Der, SetIDPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetIDPopup>>;
		using ModifyBase<ModifyDerive<Der, SetIDPopup>>::ModifyBase;
		using Base = SetIDPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x28ddb0, Thiscall, SetIDPopup, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x29b170, Thiscall, SetIDPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b210, Default, SetIDPopup, create, int, int, int, gd::string, gd::string, bool, int, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c0f0, Thiscall, SetIDPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bf20, Thiscall, SetIDPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b850, Thiscall, SetIDPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bd70, Thiscall, SetIDPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetIDPopup, valueChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29b340, Thiscall, SetIDPopup, init, int, int, int, gd::string, gd::string, bool, int, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bfb0, Thiscall, SetIDPopup, onCancel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c050, Thiscall, SetIDPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bd00, Thiscall, SetIDPopup, onItemIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29bd50, Thiscall, SetIDPopup, onResetValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29be70, Thiscall, SetIDPopup, updateTextInputLabel, )
		}
	};
}
