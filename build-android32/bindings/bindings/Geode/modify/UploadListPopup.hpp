#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadListPopup.hpp>
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

	#ifndef GEODE_STATICS_listUploadFinished
		#define GEODE_STATICS_listUploadFinished
		GEODE_AS_STATIC_FUNCTION(listUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_listUploadFailed
		#define GEODE_STATICS_listUploadFailed
		GEODE_AS_STATIC_FUNCTION(listUploadFailed) 
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

	#ifndef GEODE_STATICS_onReturnToList
		#define GEODE_STATICS_onReturnToList
		GEODE_AS_STATIC_FUNCTION(onReturnToList) 
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

	#ifndef GEODE_CONCEPT_CHECK_listUploadFinished
		#define GEODE_CONCEPT_CHECK_listUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(listUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listUploadFailed
		#define GEODE_CONCEPT_CHECK_listUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(listUploadFailed) 
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

	#ifndef GEODE_CONCEPT_CHECK_onReturnToList
		#define GEODE_CONCEPT_CHECK_onReturnToList
		GEODE_CONCEPT_FUNCTION_CHECK(onReturnToList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadListPopup> : ModifyBase<ModifyDerive<Der, UploadListPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadListPopup>>;
		using ModifyBase<ModifyDerive<Der, UploadListPopup>>::ModifyBase;
		using Base = UploadListPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15UploadListPopupD2Ev")), Default, UploadListPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&UploadListPopup::create)), Default, UploadListPopup, create, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UploadListPopup::keyBackClicked)), Default, UploadListPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UploadListPopup::show)), Default, UploadListPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJLevelList*>::func(&UploadListPopup::listUploadFinished)), Default, UploadListPopup, listUploadFinished, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJLevelList*, int>::func(&UploadListPopup::listUploadFailed)), Default, UploadListPopup, listUploadFailed, GJLevelList*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*>::func(&UploadListPopup::init)), Default, UploadListPopup, init, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UploadListPopup::onBack)), Default, UploadListPopup, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UploadListPopup::onClose)), Default, UploadListPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UploadListPopup::onReturnToList)), Default, UploadListPopup, onReturnToList, cocos2d::CCObject*)
		}
	};
}
