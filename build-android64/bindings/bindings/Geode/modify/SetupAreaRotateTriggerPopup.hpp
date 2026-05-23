#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaRotateTriggerPopup.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAreaRotateTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaRotateTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaRotateTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaRotateTriggerPopup>>::ModifyBase;
		using Base = SetupAreaRotateTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EnterEffectObject*, cocos2d::CCArray*>::func(&SetupAreaRotateTriggerPopup::create)), Default, SetupAreaRotateTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EnterEffectObject*, cocos2d::CCArray*>::func(&SetupAreaRotateTriggerPopup::init)), Default, SetupAreaRotateTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
		}
	};
}
