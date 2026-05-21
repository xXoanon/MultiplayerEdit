#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MPLobbyLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_joinLobbyFinished
		#define GEODE_STATICS_joinLobbyFinished
		GEODE_AS_STATIC_FUNCTION(joinLobbyFinished) 
	#endif

	#ifndef GEODE_STATICS_joinLobbyFailed
		#define GEODE_STATICS_joinLobbyFailed
		GEODE_AS_STATIC_FUNCTION(joinLobbyFailed) 
	#endif

	#ifndef GEODE_STATICS_updateComments
		#define GEODE_STATICS_updateComments
		GEODE_AS_STATIC_FUNCTION(updateComments) 
	#endif

	#ifndef GEODE_STATICS_didUploadMPComment
		#define GEODE_STATICS_didUploadMPComment
		GEODE_AS_STATIC_FUNCTION(didUploadMPComment) 
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

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onBtn1
		#define GEODE_STATICS_onBtn1
		GEODE_AS_STATIC_FUNCTION(onBtn1) 
	#endif

	#ifndef GEODE_STATICS_onBtn2
		#define GEODE_STATICS_onBtn2
		GEODE_AS_STATIC_FUNCTION(onBtn2) 
	#endif

	#ifndef GEODE_STATICS_onBtn3
		#define GEODE_STATICS_onBtn3
		GEODE_AS_STATIC_FUNCTION(onBtn3) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLobby
		#define GEODE_STATICS_onUpdateLobby
		GEODE_AS_STATIC_FUNCTION(onUpdateLobby) 
	#endif

	#ifndef GEODE_STATICS_postComment
		#define GEODE_STATICS_postComment
		GEODE_AS_STATIC_FUNCTION(postComment) 
	#endif

	#ifndef GEODE_STATICS_tryExitLobby
		#define GEODE_STATICS_tryExitLobby
		GEODE_AS_STATIC_FUNCTION(tryExitLobby) 
	#endif

	#ifndef GEODE_STATICS_updateLobby
		#define GEODE_STATICS_updateLobby
		GEODE_AS_STATIC_FUNCTION(updateLobby) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_joinLobbyFinished
		#define GEODE_CONCEPT_CHECK_joinLobbyFinished
		GEODE_CONCEPT_FUNCTION_CHECK(joinLobbyFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_joinLobbyFailed
		#define GEODE_CONCEPT_CHECK_joinLobbyFailed
		GEODE_CONCEPT_FUNCTION_CHECK(joinLobbyFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateComments
		#define GEODE_CONCEPT_CHECK_updateComments
		GEODE_CONCEPT_FUNCTION_CHECK(updateComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didUploadMPComment
		#define GEODE_CONCEPT_CHECK_didUploadMPComment
		GEODE_CONCEPT_FUNCTION_CHECK(didUploadMPComment) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn1
		#define GEODE_CONCEPT_CHECK_onBtn1
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn2
		#define GEODE_CONCEPT_CHECK_onBtn2
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn3
		#define GEODE_CONCEPT_CHECK_onBtn3
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onComment
		#define GEODE_CONCEPT_CHECK_onComment
		GEODE_CONCEPT_FUNCTION_CHECK(onComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLobby
		#define GEODE_CONCEPT_CHECK_onUpdateLobby
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLobby) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postComment
		#define GEODE_CONCEPT_CHECK_postComment
		GEODE_CONCEPT_FUNCTION_CHECK(postComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryExitLobby
		#define GEODE_CONCEPT_CHECK_tryExitLobby
		GEODE_CONCEPT_FUNCTION_CHECK(tryExitLobby) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLobby
		#define GEODE_CONCEPT_CHECK_updateLobby
		GEODE_CONCEPT_FUNCTION_CHECK(updateLobby) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MPLobbyLayer> : ModifyBase<ModifyDerive<Der, MPLobbyLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MPLobbyLayer>>;
		using ModifyBase<ModifyDerive<Der, MPLobbyLayer>>::ModifyBase;
		using Base = MPLobbyLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, create, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, scene, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, keyDown, cocos2d::enumKeyCodes, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, joinLobbyFinished, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, joinLobbyFailed, int, GJMPErrorCode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, updateComments, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, didUploadMPComment, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, textInputOpened, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, textInputClosed, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, keyUp, cocos2d::enumKeyCodes, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, FLAlert_Clicked, FLAlertLayer*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, uploadActionFinished, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, uploadActionFailed, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onClosePopup, UploadActionPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, init, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onBack, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onBtn1, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onBtn2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onBtn3, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onComment, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, onUpdateLobby, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, postComment, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, tryExitLobby, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MPLobbyLayer, updateLobby, float)
		}
	};
}
