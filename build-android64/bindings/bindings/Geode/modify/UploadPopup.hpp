#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_levelUploadFinished
		#define GEODE_STATICS_levelUploadFinished
		GEODE_AS_STATIC_FUNCTION(levelUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUploadFailed
		#define GEODE_STATICS_levelUploadFailed
		GEODE_AS_STATIC_FUNCTION(levelUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onReturnToLevel
		#define GEODE_STATICS_onReturnToLevel
		GEODE_AS_STATIC_FUNCTION(onReturnToLevel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelUploadFinished
		#define GEODE_CONCEPT_CHECK_levelUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelUploadFailed
		#define GEODE_CONCEPT_CHECK_levelUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelUploadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReturnToLevel
		#define GEODE_CONCEPT_CHECK_onReturnToLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onReturnToLevel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadPopup> : ModifyBase<ModifyDerive<Der, UploadPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadPopup>>;
		using ModifyBase<ModifyDerive<Der, UploadPopup>>::ModifyBase;
		using Base = UploadPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11UploadPopupD2Ev")), Default, UploadPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&UploadPopup::create)), Default, UploadPopup, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UploadPopup::keyBackClicked)), Default, UploadPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UploadPopup::show)), Default, UploadPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJGameLevel*>::func(&UploadPopup::levelUploadFinished)), Default, UploadPopup, levelUploadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJGameLevel*>::func(&UploadPopup::levelUploadFailed)), Default, UploadPopup, levelUploadFailed, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&UploadPopup::init)), Default, UploadPopup, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UploadPopup::onBack)), Default, UploadPopup, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UploadPopup::onClose)), Default, UploadPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UploadPopup::onReturnToLevel)), Default, UploadPopup, onReturnToLevel, cocos2d::CCObject*)
		}
	};
}
