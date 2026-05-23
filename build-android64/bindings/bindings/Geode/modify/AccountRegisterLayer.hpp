#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountRegisterLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_allowTextInput
		#define GEODE_STATICS_allowTextInput
		GEODE_AS_STATIC_FUNCTION(allowTextInput) 
	#endif

	#ifndef GEODE_STATICS_registerAccountFinished
		#define GEODE_STATICS_registerAccountFinished
		GEODE_AS_STATIC_FUNCTION(registerAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_registerAccountFailed
		#define GEODE_STATICS_registerAccountFailed
		GEODE_AS_STATIC_FUNCTION(registerAccountFailed) 
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

	#ifndef GEODE_STATICS_disableNodes
		#define GEODE_STATICS_disableNodes
		GEODE_AS_STATIC_FUNCTION(disableNodes) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingUI
		#define GEODE_STATICS_hideLoadingUI
		GEODE_AS_STATIC_FUNCTION(hideLoadingUI) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_resetLabel
		#define GEODE_STATICS_resetLabel
		GEODE_AS_STATIC_FUNCTION(resetLabel) 
	#endif

	#ifndef GEODE_STATICS_resetLabels
		#define GEODE_STATICS_resetLabels
		GEODE_AS_STATIC_FUNCTION(resetLabels) 
	#endif

	#ifndef GEODE_STATICS_showLoadingUI
		#define GEODE_STATICS_showLoadingUI
		GEODE_AS_STATIC_FUNCTION(showLoadingUI) 
	#endif

	#ifndef GEODE_STATICS_toggleUI
		#define GEODE_STATICS_toggleUI
		GEODE_AS_STATIC_FUNCTION(toggleUI) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_validEmail
		#define GEODE_STATICS_validEmail
		GEODE_AS_STATIC_FUNCTION(validEmail) 
	#endif

	#ifndef GEODE_STATICS_validPassword
		#define GEODE_STATICS_validPassword
		GEODE_AS_STATIC_FUNCTION(validPassword) 
	#endif

	#ifndef GEODE_STATICS_validUser
		#define GEODE_STATICS_validUser
		GEODE_AS_STATIC_FUNCTION(validUser) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allowTextInput
		#define GEODE_CONCEPT_CHECK_allowTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(allowTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerAccountFinished
		#define GEODE_CONCEPT_CHECK_registerAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(registerAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerAccountFailed
		#define GEODE_CONCEPT_CHECK_registerAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(registerAccountFailed) 
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

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
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

	#ifndef GEODE_CONCEPT_CHECK_validEmail
		#define GEODE_CONCEPT_CHECK_validEmail
		GEODE_CONCEPT_FUNCTION_CHECK(validEmail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_validPassword
		#define GEODE_CONCEPT_CHECK_validPassword
		GEODE_CONCEPT_FUNCTION_CHECK(validPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_validUser
		#define GEODE_CONCEPT_CHECK_validUser
		GEODE_CONCEPT_FUNCTION_CHECK(validUser) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountRegisterLayer> : ModifyBase<ModifyDerive<Der, AccountRegisterLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountRegisterLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountRegisterLayer>>::ModifyBase;
		using Base = AccountRegisterLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20AccountRegisterLayerD2Ev")), Default, AccountRegisterLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AccountRegisterLayer::create)), Default, AccountRegisterLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AccountRegisterLayer::init)), Default, AccountRegisterLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AccountRegisterLayer::registerWithTouchDispatcher)), Default, AccountRegisterLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AccountRegisterLayer::keyBackClicked)), Default, AccountRegisterLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&AccountRegisterLayer::FLAlert_Clicked)), Default, AccountRegisterLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textInputOpened)), Default, AccountRegisterLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textInputClosed)), Default, AccountRegisterLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textChanged)), Default, AccountRegisterLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*, float>::func(&AccountRegisterLayer::textInputShouldOffset)), Default, AccountRegisterLayer, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textInputReturn)), Default, AccountRegisterLayer, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::allowTextInput)), Default, AccountRegisterLayer, allowTextInput, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AccountRegisterLayer::registerAccountFinished)), Default, AccountRegisterLayer, registerAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<AccountError>::func(&AccountRegisterLayer::registerAccountFailed)), Default, AccountRegisterLayer, registerAccountFailed, AccountError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCSize>::func(&AccountRegisterLayer::createTextBackground)), Default, AccountRegisterLayer, createTextBackground, cocos2d::CCPoint, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20AccountRegisterLayer15createTextInputEN7cocos2d7CCPointENS0_6CCSizeESsi")), Default, AccountRegisterLayer, createTextInput, cocos2d::CCPoint, cocos2d::CCSize, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20AccountRegisterLayer15createTextLabelEN7cocos2d7CCPointESsNS0_6CCSizeE")), Default, AccountRegisterLayer, createTextLabel, cocos2d::CCPoint, gd::string, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AccountRegisterLayer::disableNodes)), Default, AccountRegisterLayer, disableNodes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AccountRegisterLayer::hideLoadingUI)), Default, AccountRegisterLayer, hideLoadingUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&AccountRegisterLayer::onClose)), Default, AccountRegisterLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&AccountRegisterLayer::onSubmit)), Default, AccountRegisterLayer, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&AccountRegisterLayer::resetLabel)), Default, AccountRegisterLayer, resetLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AccountRegisterLayer::resetLabels)), Default, AccountRegisterLayer, resetLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AccountRegisterLayer::showLoadingUI)), Default, AccountRegisterLayer, showLoadingUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&AccountRegisterLayer::toggleUI)), Default, AccountRegisterLayer, toggleUI, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<AccountError>::func(&AccountRegisterLayer::updateLabel)), Default, AccountRegisterLayer, updateLabel, AccountError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20AccountRegisterLayer10validEmailESs")), Default, AccountRegisterLayer, validEmail, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20AccountRegisterLayer13validPasswordESs")), Default, AccountRegisterLayer, validPassword, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20AccountRegisterLayer9validUserESs")), Default, AccountRegisterLayer, validUser, gd::string)
		}
	};
}
