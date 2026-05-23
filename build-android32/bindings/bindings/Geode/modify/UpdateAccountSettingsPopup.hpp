#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UpdateAccountSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_updateSettingsFinished
		#define GEODE_STATICS_updateSettingsFinished
		GEODE_AS_STATIC_FUNCTION(updateSettingsFinished) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFailed
		#define GEODE_STATICS_updateSettingsFailed
		GEODE_AS_STATIC_FUNCTION(updateSettingsFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSettingsFinished
		#define GEODE_CONCEPT_CHECK_updateSettingsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSettingsFailed
		#define GEODE_CONCEPT_CHECK_updateSettingsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UpdateAccountSettingsPopup> : ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>>::ModifyBase;
		using Base = UpdateAccountSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26UpdateAccountSettingsPopupD2Ev")), Default, UpdateAccountSettingsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26UpdateAccountSettingsPopup6createEP22GJAccountSettingsLayeriiiSsSsSsSsSsSsSs")), Default, UpdateAccountSettingsPopup, create, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UpdateAccountSettingsPopup::keyBackClicked)), Default, UpdateAccountSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UpdateAccountSettingsPopup::updateSettingsFinished)), Default, UpdateAccountSettingsPopup, updateSettingsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&UpdateAccountSettingsPopup::updateSettingsFailed)), Default, UpdateAccountSettingsPopup, updateSettingsFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26UpdateAccountSettingsPopup4initEP22GJAccountSettingsLayeriiiSsSsSsSsSsSsSs")), Default, UpdateAccountSettingsPopup, init, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&UpdateAccountSettingsPopup::onClose)), Default, UpdateAccountSettingsPopup, onClose, cocos2d::CCObject*)
		}
	};
}
