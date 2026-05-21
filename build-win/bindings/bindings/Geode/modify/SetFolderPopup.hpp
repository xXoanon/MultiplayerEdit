#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetFolderPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_valueChanged
		#define GEODE_STATICS_valueChanged
		GEODE_AS_STATIC_FUNCTION(valueChanged) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSetFolderName
		#define GEODE_STATICS_onSetFolderName
		GEODE_AS_STATIC_FUNCTION(onSetFolderName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueChanged
		#define GEODE_CONCEPT_CHECK_valueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(valueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetFolderName
		#define GEODE_CONCEPT_CHECK_onSetFolderName
		GEODE_CONCEPT_FUNCTION_CHECK(onSetFolderName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetFolderPopup> : ModifyBase<ModifyDerive<Der, SetFolderPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetFolderPopup>>;
		using ModifyBase<ModifyDerive<Der, SetFolderPopup>>::ModifyBase;
		using Base = SetFolderPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c4f0, Default, SetFolderPopup, create, int, bool, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c8b0, Thiscall, SetFolderPopup, valueChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29cbf0, Thiscall, SetFolderPopup, setTextPopupClosed, SetTextPopup*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c630, Thiscall, SetFolderPopup, init, int, bool, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c9f0, Thiscall, SetFolderPopup, onSetFolderName, cocos2d::CCObject*)
		}
	};
}
