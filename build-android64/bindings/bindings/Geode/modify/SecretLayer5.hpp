#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer5.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
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

	#ifndef GEODE_STATICS_fadeInMessage
		#define GEODE_STATICS_fadeInMessage
		GEODE_AS_STATIC_FUNCTION(fadeInMessage) 
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

	#ifndef GEODE_STATICS_getMessage
		#define GEODE_STATICS_getMessage
		GEODE_AS_STATIC_FUNCTION(getMessage) 
	#endif

	#ifndef GEODE_STATICS_handleSecretResponse
		#define GEODE_STATICS_handleSecretResponse
		GEODE_AS_STATIC_FUNCTION(handleSecretResponse) 
	#endif

	#ifndef GEODE_STATICS_hideTextInput
		#define GEODE_STATICS_hideTextInput
		GEODE_AS_STATIC_FUNCTION(hideTextInput) 
	#endif

	#ifndef GEODE_STATICS_incrementChatIdx
		#define GEODE_STATICS_incrementChatIdx
		GEODE_AS_STATIC_FUNCTION(incrementChatIdx) 
	#endif

	#ifndef GEODE_STATICS_nodeWithTag
		#define GEODE_STATICS_nodeWithTag
		GEODE_AS_STATIC_FUNCTION(nodeWithTag) 
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

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SecretLayer5D2Ev")), Default, SecretLayer5)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::create)), Default, SecretLayer5, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::scene)), Default, SecretLayer5, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SecretLayer5::init)), Default, SecretLayer5, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SecretLayer5::onExit)), Default, SecretLayer5, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, int>::func(&SecretLayer5::updateTweenActionInt)), Default, SecretLayer5, updateTweenActionInt, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SecretLayer5::keyBackClicked)), Default, SecretLayer5, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SecretLayer5::textInputOpened)), Default, SecretLayer5, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SecretLayer5::textInputClosed)), Default, SecretLayer5, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SecretLayer5::textChanged)), Default, SecretLayer5, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&SecretLayer5::FLAlert_Clicked)), Default, SecretLayer5, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<DialogLayer*>::func(&SecretLayer5::dialogClosed)), Default, SecretLayer5, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SecretLayer526onlineRewardStatusFinishedESs")), Default, SecretLayer5, onlineRewardStatusFinished, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SecretLayer5::onlineRewardStatusFailed)), Default, SecretLayer5, onlineRewardStatusFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::animateHead)), Default, SecretLayer5, animateHead, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::claimOnlineReward)), Default, SecretLayer5, claimOnlineReward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::fadeInMessage)), Default, SecretLayer5, fadeInMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::fadeInSubmitMessage)), Default, SecretLayer5, fadeInSubmitMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::fadeOutMessage)), Default, SecretLayer5, fadeOutMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::finishLoadingState)), Default, SecretLayer5, finishLoadingState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::getMessage)), Default, SecretLayer5, getMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::handleSecretResponse)), Default, SecretLayer5, handleSecretResponse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::hideTextInput)), Default, SecretLayer5, hideTextInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::incrementChatIdx)), Default, SecretLayer5, incrementChatIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SecretLayer5::nodeWithTag)), Default, SecretLayer5, nodeWithTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SecretLayer5::onBack)), Default, SecretLayer5, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SecretLayer5::onSubmit)), Default, SecretLayer5, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::playWinSFX)), Default, SecretLayer5, playWinSFX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SecretLayer5::showDialog)), Default, SecretLayer5, showDialog, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::showFailAnimation)), Default, SecretLayer5, showFailAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::showFirstDialog)), Default, SecretLayer5, showFirstDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::showSuccessAnimation)), Default, SecretLayer5, showSuccessAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::showTextInput)), Default, SecretLayer5, showTextInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SecretLayer5::unlockUI)), Default, SecretLayer5, unlockUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SecretLayer518updateMessageLabelESs")), Default, SecretLayer5, updateMessageLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&SecretLayer5::updateSearchLabel)), Default, SecretLayer5, updateSearchLabel, char const*)
		}
	};
}
