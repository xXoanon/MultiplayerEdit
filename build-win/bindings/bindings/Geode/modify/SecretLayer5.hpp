#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer5.hpp>
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

	#ifndef GEODE_STATICS_updateTweenActionInt
		#define GEODE_STATICS_updateTweenActionInt
		GEODE_AS_STATIC_FUNCTION(updateTweenActionInt) 
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

	#ifndef GEODE_STATICS_onlineRewardStatusFinished
		#define GEODE_STATICS_onlineRewardStatusFinished
		GEODE_AS_STATIC_FUNCTION(onlineRewardStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_onlineRewardStatusFailed
		#define GEODE_STATICS_onlineRewardStatusFailed
		GEODE_AS_STATIC_FUNCTION(onlineRewardStatusFailed) 
	#endif

	#ifndef GEODE_STATICS_animateHead
		#define GEODE_STATICS_animateHead
		GEODE_AS_STATIC_FUNCTION(animateHead) 
	#endif

	#ifndef GEODE_STATICS_claimOnlineReward
		#define GEODE_STATICS_claimOnlineReward
		GEODE_AS_STATIC_FUNCTION(claimOnlineReward) 
	#endif

	#ifndef GEODE_STATICS_fadeInSubmitMessage
		#define GEODE_STATICS_fadeInSubmitMessage
		GEODE_AS_STATIC_FUNCTION(fadeInSubmitMessage) 
	#endif

	#ifndef GEODE_STATICS_fadeOutMessage
		#define GEODE_STATICS_fadeOutMessage
		GEODE_AS_STATIC_FUNCTION(fadeOutMessage) 
	#endif

	#ifndef GEODE_STATICS_finishLoadingState
		#define GEODE_STATICS_finishLoadingState
		GEODE_AS_STATIC_FUNCTION(finishLoadingState) 
	#endif

	#ifndef GEODE_STATICS_handleSecretResponse
		#define GEODE_STATICS_handleSecretResponse
		GEODE_AS_STATIC_FUNCTION(handleSecretResponse) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_playWinSFX
		#define GEODE_STATICS_playWinSFX
		GEODE_AS_STATIC_FUNCTION(playWinSFX) 
	#endif

	#ifndef GEODE_STATICS_showDialog
		#define GEODE_STATICS_showDialog
		GEODE_AS_STATIC_FUNCTION(showDialog) 
	#endif

	#ifndef GEODE_STATICS_showFailAnimation
		#define GEODE_STATICS_showFailAnimation
		GEODE_AS_STATIC_FUNCTION(showFailAnimation) 
	#endif

	#ifndef GEODE_STATICS_showFirstDialog
		#define GEODE_STATICS_showFirstDialog
		GEODE_AS_STATIC_FUNCTION(showFirstDialog) 
	#endif

	#ifndef GEODE_STATICS_showSuccessAnimation
		#define GEODE_STATICS_showSuccessAnimation
		GEODE_AS_STATIC_FUNCTION(showSuccessAnimation) 
	#endif

	#ifndef GEODE_STATICS_showTextInput
		#define GEODE_STATICS_showTextInput
		GEODE_AS_STATIC_FUNCTION(showTextInput) 
	#endif

	#ifndef GEODE_STATICS_unlockUI
		#define GEODE_STATICS_unlockUI
		GEODE_AS_STATIC_FUNCTION(unlockUI) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateTweenActionInt
		#define GEODE_CONCEPT_CHECK_updateTweenActionInt
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenActionInt) 
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

	#ifndef GEODE_CONCEPT_CHECK_onlineRewardStatusFinished
		#define GEODE_CONCEPT_CHECK_onlineRewardStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(onlineRewardStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onlineRewardStatusFailed
		#define GEODE_CONCEPT_CHECK_onlineRewardStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(onlineRewardStatusFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateHead
		#define GEODE_CONCEPT_CHECK_animateHead
		GEODE_CONCEPT_FUNCTION_CHECK(animateHead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimOnlineReward
		#define GEODE_CONCEPT_CHECK_claimOnlineReward
		GEODE_CONCEPT_FUNCTION_CHECK(claimOnlineReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMessage
		#define GEODE_CONCEPT_CHECK_fadeInMessage
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInSubmitMessage
		#define GEODE_CONCEPT_CHECK_fadeInSubmitMessage
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInSubmitMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutMessage
		#define GEODE_CONCEPT_CHECK_fadeOutMessage
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishLoadingState
		#define GEODE_CONCEPT_CHECK_finishLoadingState
		GEODE_CONCEPT_FUNCTION_CHECK(finishLoadingState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessage
		#define GEODE_CONCEPT_CHECK_getMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleSecretResponse
		#define GEODE_CONCEPT_CHECK_handleSecretResponse
		GEODE_CONCEPT_FUNCTION_CHECK(handleSecretResponse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideTextInput
		#define GEODE_CONCEPT_CHECK_hideTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(hideTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementChatIdx
		#define GEODE_CONCEPT_CHECK_incrementChatIdx
		GEODE_CONCEPT_FUNCTION_CHECK(incrementChatIdx) 
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

	#ifndef GEODE_CONCEPT_CHECK_playWinSFX
		#define GEODE_CONCEPT_CHECK_playWinSFX
		GEODE_CONCEPT_FUNCTION_CHECK(playWinSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDialog
		#define GEODE_CONCEPT_CHECK_showDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFailAnimation
		#define GEODE_CONCEPT_CHECK_showFailAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(showFailAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFirstDialog
		#define GEODE_CONCEPT_CHECK_showFirstDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showFirstDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showSuccessAnimation
		#define GEODE_CONCEPT_CHECK_showSuccessAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(showSuccessAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTextInput
		#define GEODE_CONCEPT_CHECK_showTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(showTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockUI
		#define GEODE_CONCEPT_CHECK_unlockUI
		GEODE_CONCEPT_FUNCTION_CHECK(unlockUI) 
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
	struct ModifyDerive<Der, SecretLayer5> : ModifyBase<ModifyDerive<Der, SecretLayer5>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer5>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer5>>::ModifyBase;
		using Base = SecretLayer5;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f4030, Thiscall, SecretLayer5, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9910, Thiscall, SecretLayer5, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5740, Thiscall, SecretLayer5, updateTweenActionInt, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f8000, Thiscall, SecretLayer5, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7350, Thiscall, SecretLayer5, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f74a0, Thiscall, SecretLayer5, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f74a0, Thiscall, SecretLayer5, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6a20, Thiscall, SecretLayer5, onlineRewardStatusFinished, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6b90, Thiscall, SecretLayer5, onlineRewardStatusFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f53d0, Thiscall, SecretLayer5, animateHead, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6800, Thiscall, SecretLayer5, claimOnlineReward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, fadeInMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f51d0, Thiscall, SecretLayer5, fadeInSubmitMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f53a0, Thiscall, SecretLayer5, fadeOutMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5790, Thiscall, SecretLayer5, finishLoadingState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, getMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f57b0, Thiscall, SecretLayer5, handleSecretResponse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, hideTextInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, incrementChatIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, nodeWithTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7f80, Thiscall, SecretLayer5, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6c30, Thiscall, SecretLayer5, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6770, Thiscall, SecretLayer5, playWinSFX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer5, showDialog, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5810, Thiscall, SecretLayer5, showFailAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7860, Thiscall, SecretLayer5, showFirstDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5dd0, Thiscall, SecretLayer5, showSuccessAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6bd0, Thiscall, SecretLayer5, showTextInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6a10, Thiscall, SecretLayer5, unlockUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer5, updateMessageLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7570, Thiscall, SecretLayer5, updateSearchLabel, char const*)
		}
	};
}
