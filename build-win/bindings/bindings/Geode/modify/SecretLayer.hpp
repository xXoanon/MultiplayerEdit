#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
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

	#ifndef GEODE_CONCEPT_CHECK_getBasicMessage
		#define GEODE_CONCEPT_CHECK_getBasicMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getBasicMessage) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateMessageLabel
		#define GEODE_CONCEPT_CHECK_updateMessageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateMessageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSearchLabel
		#define GEODE_CONCEPT_CHECK_updateSearchLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateSearchLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer> : ModifyBase<ModifyDerive<Der, SecretLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer>>::ModifyBase;
		using Base = SecretLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dca70, Thiscall, SecretLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e1f20, Thiscall, SecretLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3df820, Thiscall, SecretLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3df970, Thiscall, SecretLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3df970, Thiscall, SecretLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e0d20, Thiscall, SecretLayer, getBasicMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dfdc0, Thiscall, SecretLayer, getMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dffb0, Thiscall, SecretLayer, getThreadMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer, nodeWithTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e1e80, Thiscall, SecretLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dddb0, Thiscall, SecretLayer, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e1a00, Thiscall, SecretLayer, playCoinEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer, selectAThread, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dfd30, Thiscall, SecretLayer, updateMessageLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dfa40, Thiscall, SecretLayer, updateSearchLabel, char const*)
		}
	};
}
