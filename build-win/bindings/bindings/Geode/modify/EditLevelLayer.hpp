#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
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

	#ifndef GEODE_STATICS_closeTextInputs
		#define GEODE_STATICS_closeTextInputs
		GEODE_AS_STATIC_FUNCTION(closeTextInputs) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToTop
		#define GEODE_STATICS_confirmMoveToTop
		GEODE_AS_STATIC_FUNCTION(confirmMoveToTop) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onGuidelines
		#define GEODE_STATICS_onGuidelines
		GEODE_AS_STATIC_FUNCTION(onGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onLevelOptions
		#define GEODE_STATICS_onLevelOptions
		GEODE_AS_STATIC_FUNCTION(onLevelOptions) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onSetFolder
		#define GEODE_STATICS_onSetFolder
		GEODE_AS_STATIC_FUNCTION(onSetFolder) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescription
		#define GEODE_STATICS_onUpdateDescription
		GEODE_AS_STATIC_FUNCTION(onUpdateDescription) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelName
		#define GEODE_STATICS_verifyLevelName
		GEODE_AS_STATIC_FUNCTION(verifyLevelName) 
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

	#ifndef GEODE_CONCEPT_CHECK_setIDPopupClosed
		#define GEODE_CONCEPT_CHECK_setIDPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setIDPopupClosed) 
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

	#ifndef GEODE_CONCEPT_CHECK_closeTextInputs
		#define GEODE_CONCEPT_CHECK_closeTextInputs
		GEODE_CONCEPT_FUNCTION_CHECK(closeTextInputs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmClone
		#define GEODE_CONCEPT_CHECK_confirmClone
		GEODE_CONCEPT_FUNCTION_CHECK(confirmClone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmDelete
		#define GEODE_CONCEPT_CHECK_confirmDelete
		GEODE_CONCEPT_FUNCTION_CHECK(confirmDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmMoveToTop
		#define GEODE_CONCEPT_CHECK_confirmMoveToTop
		GEODE_CONCEPT_FUNCTION_CHECK(confirmMoveToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClone
		#define GEODE_CONCEPT_CHECK_onClone
		GEODE_CONCEPT_FUNCTION_CHECK(onClone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEdit
		#define GEODE_CONCEPT_CHECK_onEdit
		GEODE_CONCEPT_FUNCTION_CHECK(onEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGuidelines
		#define GEODE_CONCEPT_CHECK_onGuidelines
		GEODE_CONCEPT_FUNCTION_CHECK(onGuidelines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelInfo
		#define GEODE_CONCEPT_CHECK_onLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelLeaderboard
		#define GEODE_CONCEPT_CHECK_onLevelLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelOptions
		#define GEODE_CONCEPT_CHECK_onLevelOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMoveToTop
		#define GEODE_CONCEPT_CHECK_onMoveToTop
		GEODE_CONCEPT_FUNCTION_CHECK(onMoveToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetFolder
		#define GEODE_CONCEPT_CHECK_onSetFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onSetFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShare
		#define GEODE_CONCEPT_CHECK_onShare
		GEODE_CONCEPT_FUNCTION_CHECK(onShare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTest
		#define GEODE_CONCEPT_CHECK_onTest
		GEODE_CONCEPT_FUNCTION_CHECK(onTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateDescription
		#define GEODE_CONCEPT_CHECK_onUpdateDescription
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep2
		#define GEODE_CONCEPT_CHECK_playStep2
		GEODE_CONCEPT_FUNCTION_CHECK(playStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep3
		#define GEODE_CONCEPT_CHECK_playStep3
		GEODE_CONCEPT_FUNCTION_CHECK(playStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelInfo
		#define GEODE_CONCEPT_CHECK_setupLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDescText
		#define GEODE_CONCEPT_CHECK_updateDescText
		GEODE_CONCEPT_FUNCTION_CHECK(updateDescText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyLevelName
		#define GEODE_CONCEPT_CHECK_verifyLevelName
		GEODE_CONCEPT_FUNCTION_CHECK(verifyLevelName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditLevelLayer> : ModifyBase<ModifyDerive<Der, EditLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, EditLevelLayer>>::ModifyBase;
		using Base = EditLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditLevelLayer, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd52b0, Default, EditLevelLayer, scene, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9aa0, Thiscall, EditLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9ab0, Thiscall, EditLevelLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9580, Thiscall, EditLevelLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8c40, Thiscall, EditLevelLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7af0, Thiscall, EditLevelLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd74f0, Thiscall, EditLevelLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7c60, Thiscall, EditLevelLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9b20, Thiscall, EditLevelLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9c60, Thiscall, EditLevelLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9ae0, Thiscall, EditLevelLayer, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7490, Thiscall, EditLevelLayer, closeTextInputs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd92a0, Thiscall, EditLevelLayer, confirmClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8b00, Thiscall, EditLevelLayer, confirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd93c0, Thiscall, EditLevelLayer, confirmMoveToTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5440, Thiscall, EditLevelLayer, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9610, Thiscall, EditLevelLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditLevelLayer, onClone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditLevelLayer, onDelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd82b0, Thiscall, EditLevelLayer, onEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6810, Thiscall, EditLevelLayer, onGuidelines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9180, Thiscall, EditLevelLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6a30, Thiscall, EditLevelLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6980, Thiscall, EditLevelLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6a00, Thiscall, EditLevelLayer, onLevelOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditLevelLayer, onMoveToTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7e50, Thiscall, EditLevelLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd94f0, Thiscall, EditLevelLayer, onSetFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8450, Thiscall, EditLevelLayer, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditLevelLayer, onTest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8180, Thiscall, EditLevelLayer, onUpdateDescription, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8010, Thiscall, EditLevelLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd80f0, Thiscall, EditLevelLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c50, Thiscall, EditLevelLayer, setupLevelInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditLevelLayer, updateDescText, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd97c0, Thiscall, EditLevelLayer, verifyLevelName, )
		}
	};
}
