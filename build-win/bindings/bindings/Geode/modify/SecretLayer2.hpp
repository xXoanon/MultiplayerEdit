#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer2.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_getBasicMessage
		#define GEODE_STATICS_getBasicMessage
		GEODE_AS_STATIC_FUNCTION(getBasicMessage) 
	#endif

	#ifndef GEODE_STATICS_getErrorMessage
		#define GEODE_STATICS_getErrorMessage
		GEODE_AS_STATIC_FUNCTION(getErrorMessage) 
	#endif

	#ifndef GEODE_STATICS_getMessage
		#define GEODE_STATICS_getMessage
		GEODE_AS_STATIC_FUNCTION(getMessage) 
	#endif

	#ifndef GEODE_STATICS_getThreadMessage
		#define GEODE_STATICS_getThreadMessage
		GEODE_AS_STATIC_FUNCTION(getThreadMessage) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onDoor
		#define GEODE_STATICS_onDoor
		GEODE_AS_STATIC_FUNCTION(onDoor) 
	#endif

	#ifndef GEODE_STATICS_onSecretLevel
		#define GEODE_STATICS_onSecretLevel
		GEODE_AS_STATIC_FUNCTION(onSecretLevel) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_showCompletedLevel
		#define GEODE_STATICS_showCompletedLevel
		GEODE_AS_STATIC_FUNCTION(showCompletedLevel) 
	#endif

	#ifndef GEODE_STATICS_showSecretLevel
		#define GEODE_STATICS_showSecretLevel
		GEODE_AS_STATIC_FUNCTION(showSecretLevel) 
	#endif

	#ifndef GEODE_STATICS_updateMessageLabel
		#define GEODE_STATICS_updateMessageLabel
		GEODE_AS_STATIC_FUNCTION(updateMessageLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSearchLabel
		#define GEODE_STATICS_updateSearchLabel
		GEODE_AS_STATIC_FUNCTION(updateSearchLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBasicMessage
		#define GEODE_CONCEPT_CHECK_getBasicMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getBasicMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getErrorMessage
		#define GEODE_CONCEPT_CHECK_getErrorMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getErrorMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessage
		#define GEODE_CONCEPT_CHECK_getMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreadMessage
		#define GEODE_CONCEPT_CHECK_getThreadMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getThreadMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nodeWithTag
		#define GEODE_CONCEPT_CHECK_nodeWithTag
		GEODE_CONCEPT_FUNCTION_CHECK(nodeWithTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDoor
		#define GEODE_CONCEPT_CHECK_onDoor
		GEODE_CONCEPT_FUNCTION_CHECK(onDoor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSecretLevel
		#define GEODE_CONCEPT_CHECK_onSecretLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onSecretLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmit
		#define GEODE_CONCEPT_CHECK_onSubmit
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playCoinEffect
		#define GEODE_CONCEPT_CHECK_playCoinEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playCoinEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectAThread
		#define GEODE_CONCEPT_CHECK_selectAThread
		GEODE_CONCEPT_FUNCTION_CHECK(selectAThread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompletedLevel
		#define GEODE_CONCEPT_CHECK_showCompletedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(showCompletedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showSecretLevel
		#define GEODE_CONCEPT_CHECK_showSecretLevel
		GEODE_CONCEPT_FUNCTION_CHECK(showSecretLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMessageLabel
		#define GEODE_CONCEPT_CHECK_updateMessageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateMessageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSearchLabel
		#define GEODE_CONCEPT_CHECK_updateSearchLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateSearchLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer2> : ModifyBase<ModifyDerive<Der, SecretLayer2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer2>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer2>>::ModifyBase;
		using Base = SecretLayer2;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer2, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2160, Default, SecretLayer2, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e22e0, Thiscall, SecretLayer2, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9910, Thiscall, SecretLayer2, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9900, Thiscall, SecretLayer2, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6d80, Thiscall, SecretLayer2, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6ed0, Thiscall, SecretLayer2, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6ed0, Thiscall, SecretLayer2, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer2, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e45c0, Thiscall, SecretLayer2, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e7bf0, Thiscall, SecretLayer2, getBasicMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8750, Thiscall, SecretLayer2, getErrorMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e7320, Thiscall, SecretLayer2, getMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e7500, Thiscall, SecretLayer2, getThreadMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer2, nodeWithTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9850, Thiscall, SecretLayer2, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4910, Thiscall, SecretLayer2, onDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e4660, Thiscall, SecretLayer2, onSecretLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e5270, Thiscall, SecretLayer2, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e93d0, Thiscall, SecretLayer2, playCoinEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer2, selectAThread, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e3910, Thiscall, SecretLayer2, showCompletedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e37a0, Thiscall, SecretLayer2, showSecretLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e7290, Thiscall, SecretLayer2, updateMessageLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6fa0, Thiscall, SecretLayer2, updateSearchLabel, char const*)
		}
	};
}
