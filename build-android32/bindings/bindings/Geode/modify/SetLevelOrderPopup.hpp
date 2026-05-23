#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetLevelOrderPopup.hpp>
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&SetLevelOrderPopup::create)), Default, SetLevelOrderPopup, create, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int>::func(&SetLevelOrderPopup::init)), Default, SetLevelOrderPopup, init, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetLevelOrderPopup::onOrderButton)), Default, SetLevelOrderPopup, onOrderButton, cocos2d::CCObject*)
		}
	};
}
