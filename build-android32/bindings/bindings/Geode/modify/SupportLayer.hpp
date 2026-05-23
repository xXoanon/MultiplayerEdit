#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SupportLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_onCocos2d
		#define GEODE_STATICS_onCocos2d
		GEODE_AS_STATIC_FUNCTION(onCocos2d) 
	#endif

	#ifndef GEODE_STATICS_onEmail
		#define GEODE_STATICS_onEmail
		GEODE_AS_STATIC_FUNCTION(onEmail) 
	#endif

	#ifndef GEODE_STATICS_onGetReward
		#define GEODE_STATICS_onGetReward
		GEODE_AS_STATIC_FUNCTION(onGetReward) 
	#endif

	#ifndef GEODE_STATICS_onLinks
		#define GEODE_STATICS_onLinks
		GEODE_AS_STATIC_FUNCTION(onLinks) 
	#endif

	#ifndef GEODE_STATICS_onLowDetail
		#define GEODE_STATICS_onLowDetail
		GEODE_AS_STATIC_FUNCTION(onLowDetail) 
	#endif

	#ifndef GEODE_STATICS_onPrivacy
		#define GEODE_STATICS_onPrivacy
		GEODE_AS_STATIC_FUNCTION(onPrivacy) 
	#endif

	#ifndef GEODE_STATICS_onRequestAccess
		#define GEODE_STATICS_onRequestAccess
		GEODE_AS_STATIC_FUNCTION(onRequestAccess) 
	#endif

	#ifndef GEODE_STATICS_onRobTop
		#define GEODE_STATICS_onRobTop
		GEODE_AS_STATIC_FUNCTION(onRobTop) 
	#endif

	#ifndef GEODE_STATICS_onSFX
		#define GEODE_STATICS_onSFX
		GEODE_AS_STATIC_FUNCTION(onSFX) 
	#endif

	#ifndef GEODE_STATICS_onTOS
		#define GEODE_STATICS_onTOS
		GEODE_AS_STATIC_FUNCTION(onTOS) 
	#endif

	#ifndef GEODE_STATICS_sendSupportMail
		#define GEODE_STATICS_sendSupportMail
		GEODE_AS_STATIC_FUNCTION(sendSupportMail) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCocos2d
		#define GEODE_CONCEPT_CHECK_onCocos2d
		GEODE_CONCEPT_FUNCTION_CHECK(onCocos2d) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmail
		#define GEODE_CONCEPT_CHECK_onEmail
		GEODE_CONCEPT_FUNCTION_CHECK(onEmail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetReward
		#define GEODE_CONCEPT_CHECK_onGetReward
		GEODE_CONCEPT_FUNCTION_CHECK(onGetReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLinks
		#define GEODE_CONCEPT_CHECK_onLinks
		GEODE_CONCEPT_FUNCTION_CHECK(onLinks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLowDetail
		#define GEODE_CONCEPT_CHECK_onLowDetail
		GEODE_CONCEPT_FUNCTION_CHECK(onLowDetail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrivacy
		#define GEODE_CONCEPT_CHECK_onPrivacy
		GEODE_CONCEPT_FUNCTION_CHECK(onPrivacy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRequestAccess
		#define GEODE_CONCEPT_CHECK_onRequestAccess
		GEODE_CONCEPT_FUNCTION_CHECK(onRequestAccess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRobTop
		#define GEODE_CONCEPT_CHECK_onRobTop
		GEODE_CONCEPT_FUNCTION_CHECK(onRobTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSFX
		#define GEODE_CONCEPT_CHECK_onSFX
		GEODE_CONCEPT_FUNCTION_CHECK(onSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTOS
		#define GEODE_CONCEPT_CHECK_onTOS
		GEODE_CONCEPT_FUNCTION_CHECK(onTOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sendSupportMail
		#define GEODE_CONCEPT_CHECK_sendSupportMail
		GEODE_CONCEPT_FUNCTION_CHECK(sendSupportMail) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SupportLayer> : ModifyBase<ModifyDerive<Der, SupportLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SupportLayer>>;
		using ModifyBase<ModifyDerive<Der, SupportLayer>>::ModifyBase;
		using Base = SupportLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SupportLayerD2Ev")), Default, SupportLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SupportLayer::create)), Default, SupportLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SupportLayer::customSetup)), Default, SupportLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&SupportLayer::uploadActionFinished)), Default, SupportLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&SupportLayer::uploadActionFailed)), Default, SupportLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<UploadActionPopup*>::func(&SupportLayer::onClosePopup)), Default, SupportLayer, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&SupportLayer::FLAlert_Clicked)), Default, SupportLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SupportLayer18createToggleButtonESsMN7cocos2d8CCObjectEFvPS1_EbPNS0_6CCMenuENS0_7CCPointEPNS0_7CCArrayE")), Default, SupportLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SupportLayer::exitLayer)), Default, SupportLayer, exitLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onCocos2d)), Default, SupportLayer, onCocos2d, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onEmail)), Default, SupportLayer, onEmail, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onGetReward)), Default, SupportLayer, onGetReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onLinks)), Default, SupportLayer, onLinks, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onLowDetail)), Default, SupportLayer, onLowDetail, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onPrivacy)), Default, SupportLayer, onPrivacy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onRequestAccess)), Default, SupportLayer, onRequestAccess, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onRobTop)), Default, SupportLayer, onRobTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onSFX)), Default, SupportLayer, onSFX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SupportLayer::onTOS)), Default, SupportLayer, onTOS, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SupportLayer::sendSupportMail)), Default, SupportLayer, sendSupportMail, )
		}
	};
}
