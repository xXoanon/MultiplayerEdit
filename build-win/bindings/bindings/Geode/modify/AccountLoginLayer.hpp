#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountLoginLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_loginAccountFinished
		#define GEODE_STATICS_loginAccountFinished
		GEODE_AS_STATIC_FUNCTION(loginAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_loginAccountFailed
		#define GEODE_STATICS_loginAccountFailed
		GEODE_AS_STATIC_FUNCTION(loginAccountFailed) 
	#endif

	#ifndef GEODE_STATICS_createTextBackground
		#define GEODE_STATICS_createTextBackground
		GEODE_AS_STATIC_FUNCTION(createTextBackground) 
	#endif

	#ifndef GEODE_STATICS_createTextInput
		#define GEODE_STATICS_createTextInput
		GEODE_AS_STATIC_FUNCTION(createTextInput) 
	#endif

	#ifndef GEODE_STATICS_createTextLabel
		#define GEODE_STATICS_createTextLabel
		GEODE_AS_STATIC_FUNCTION(createTextLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onForgotPassword
		#define GEODE_STATICS_onForgotPassword
		GEODE_AS_STATIC_FUNCTION(onForgotPassword) 
	#endif

	#ifndef GEODE_STATICS_onForgotUser
		#define GEODE_STATICS_onForgotUser
		GEODE_AS_STATIC_FUNCTION(onForgotUser) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_resetLabel
		#define GEODE_STATICS_resetLabel
		GEODE_AS_STATIC_FUNCTION(resetLabel) 
	#endif

	#ifndef GEODE_STATICS_toggleUI
		#define GEODE_STATICS_toggleUI
		GEODE_AS_STATIC_FUNCTION(toggleUI) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loginAccountFinished
		#define GEODE_CONCEPT_CHECK_loginAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loginAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loginAccountFailed
		#define GEODE_CONCEPT_CHECK_loginAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loginAccountFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextBackground
		#define GEODE_CONCEPT_CHECK_createTextBackground
		GEODE_CONCEPT_FUNCTION_CHECK(createTextBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextInput
		#define GEODE_CONCEPT_CHECK_createTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(createTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextLabel
		#define GEODE_CONCEPT_CHECK_createTextLabel
		GEODE_CONCEPT_FUNCTION_CHECK(createTextLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableNodes
		#define GEODE_CONCEPT_CHECK_disableNodes
		GEODE_CONCEPT_FUNCTION_CHECK(disableNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideLoadingUI
		#define GEODE_CONCEPT_CHECK_hideLoadingUI
		GEODE_CONCEPT_FUNCTION_CHECK(hideLoadingUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onForgotPassword
		#define GEODE_CONCEPT_CHECK_onForgotPassword
		GEODE_CONCEPT_FUNCTION_CHECK(onForgotPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onForgotUser
		#define GEODE_CONCEPT_CHECK_onForgotUser
		GEODE_CONCEPT_FUNCTION_CHECK(onForgotUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmit
		#define GEODE_CONCEPT_CHECK_onSubmit
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLabel
		#define GEODE_CONCEPT_CHECK_resetLabel
		GEODE_CONCEPT_FUNCTION_CHECK(resetLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLabels
		#define GEODE_CONCEPT_CHECK_resetLabels
		GEODE_CONCEPT_FUNCTION_CHECK(resetLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoadingUI
		#define GEODE_CONCEPT_CHECK_showLoadingUI
		GEODE_CONCEPT_FUNCTION_CHECK(showLoadingUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleUI
		#define GEODE_CONCEPT_CHECK_toggleUI
		GEODE_CONCEPT_FUNCTION_CHECK(toggleUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountLoginLayer> : ModifyBase<ModifyDerive<Der, AccountLoginLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountLoginLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountLoginLayer>>::ModifyBase;
		using Base = AccountLoginLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b770, Default, AccountLoginLayer, create, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, AccountLoginLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cff0, Thiscall, AccountLoginLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cba0, Thiscall, AccountLoginLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLoginLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d0c0, Thiscall, AccountLoginLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLoginLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c790, Thiscall, AccountLoginLayer, loginAccountFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c9e0, Thiscall, AccountLoginLayer, loginAccountFailed, AccountError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c500, Thiscall, AccountLoginLayer, createTextBackground, cocos2d::CCPoint, char const*, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c6a0, Thiscall, AccountLoginLayer, createTextInput, cocos2d::CCPoint, cocos2d::CCSize, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c5c0, Thiscall, AccountLoginLayer, createTextLabel, cocos2d::CCPoint, char const*, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLoginLayer, disableNodes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLoginLayer, hideLoadingUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b910, Thiscall, AccountLoginLayer, init, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cfa0, Thiscall, AccountLoginLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c4e0, Thiscall, AccountLoginLayer, onForgotPassword, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c4c0, Thiscall, AccountLoginLayer, onForgotUser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc10, Thiscall, AccountLoginLayer, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cb20, Thiscall, AccountLoginLayer, resetLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLoginLayer, resetLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLoginLayer, showLoadingUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d050, Thiscall, AccountLoginLayer, toggleUI, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ca20, Thiscall, AccountLoginLayer, updateLabel, AccountError)
		}
	};
}
