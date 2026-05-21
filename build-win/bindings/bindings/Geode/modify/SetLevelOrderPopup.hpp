#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetLevelOrderPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onOrderButton
		#define GEODE_STATICS_onOrderButton
		GEODE_AS_STATIC_FUNCTION(onOrderButton) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOrderButton
		#define GEODE_CONCEPT_CHECK_onOrderButton
		GEODE_CONCEPT_FUNCTION_CHECK(onOrderButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetLevelOrderPopup> : ModifyBase<ModifyDerive<Der, SetLevelOrderPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetLevelOrderPopup>>;
		using ModifyBase<ModifyDerive<Der, SetLevelOrderPopup>>::ModifyBase;
		using Base = SetLevelOrderPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetLevelOrderPopup, create, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308ed0, Thiscall, SetLevelOrderPopup, init, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3091a0, Thiscall, SetLevelOrderPopup, onOrderButton, cocos2d::CCObject*)
		}
	};
}
