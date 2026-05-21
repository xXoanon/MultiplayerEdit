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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294570, Default, UpdateAccountSettingsPopup, create, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295170, Thiscall, UpdateAccountSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294f30, Thiscall, UpdateAccountSettingsPopup, updateSettingsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295030, Thiscall, UpdateAccountSettingsPopup, updateSettingsFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294860, Thiscall, UpdateAccountSettingsPopup, init, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2950f0, Thiscall, UpdateAccountSettingsPopup, onClose, cocos2d::CCObject*)
		}
	};
}
