#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer4.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_onChest01
		#define GEODE_STATICS_onChest01
		GEODE_AS_STATIC_FUNCTION(onChest01) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_showDialog
		#define GEODE_STATICS_showDialog
		GEODE_AS_STATIC_FUNCTION(showDialog) 
	#endif

	#ifndef GEODE_STATICS_showFirstDialog
		#define GEODE_STATICS_showFirstDialog
		GEODE_AS_STATIC_FUNCTION(showFirstDialog) 
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

	#ifndef GEODE_CONCEPT_CHECK_onChest01
		#define GEODE_CONCEPT_CHECK_onChest01
		GEODE_CONCEPT_FUNCTION_CHECK(onChest01) 
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

	#ifndef GEODE_CONCEPT_CHECK_showDialog
		#define GEODE_CONCEPT_CHECK_showDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFirstDialog
		#define GEODE_CONCEPT_CHECK_showFirstDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showFirstDialog) 
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
	struct ModifyDerive<Der, SecretLayer4> : ModifyBase<ModifyDerive<Der, SecretLayer4>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer4>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer4>>::ModifyBase;
		using Base = SecretLayer4;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer4, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer4, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3efb20, Thiscall, SecretLayer4, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9910, Thiscall, SecretLayer4, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f3720, Thiscall, SecretLayer4, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6d80, Thiscall, SecretLayer4, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6ed0, Thiscall, SecretLayer4, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6ed0, Thiscall, SecretLayer4, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer4, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer4, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f2e00, Thiscall, SecretLayer4, getBasicMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8750, Thiscall, SecretLayer4, getErrorMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f2260, Thiscall, SecretLayer4, getMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f2440, Thiscall, SecretLayer4, getThreadMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer4, nodeWithTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f3670, Thiscall, SecretLayer4, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f0be0, Thiscall, SecretLayer4, onChest01, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f0d50, Thiscall, SecretLayer4, onSubmit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer4, playCoinEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer4, selectAThread, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer4, showDialog, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f2860, Thiscall, SecretLayer4, showFirstDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e7290, Thiscall, SecretLayer4, updateMessageLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e6fa0, Thiscall, SecretLayer4, updateSearchLabel, char const*)
		}
	};
}
