#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAudioTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_addProxVolControls
		#define GEODE_STATICS_addProxVolControls
		GEODE_AS_STATIC_FUNCTION(addProxVolControls) 
	#endif

	#ifndef GEODE_STATICS_addTimeControls
		#define GEODE_STATICS_addTimeControls
		GEODE_AS_STATIC_FUNCTION(addTimeControls) 
	#endif

	#ifndef GEODE_STATICS_onProxMode
		#define GEODE_STATICS_onProxMode
		GEODE_AS_STATIC_FUNCTION(onProxMode) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialGroup
		#define GEODE_STATICS_updateSpecialGroup
		GEODE_AS_STATIC_FUNCTION(updateSpecialGroup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addProxVolControls
		#define GEODE_CONCEPT_CHECK_addProxVolControls
		GEODE_CONCEPT_FUNCTION_CHECK(addProxVolControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTimeControls
		#define GEODE_CONCEPT_CHECK_addTimeControls
		GEODE_CONCEPT_FUNCTION_CHECK(addTimeControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProxMode
		#define GEODE_CONCEPT_CHECK_onProxMode
		GEODE_CONCEPT_FUNCTION_CHECK(onProxMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialGroup
		#define GEODE_CONCEPT_CHECK_updateSpecialGroup
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialGroup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAudioTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAudioTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAudioTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAudioTriggerPopup>>::ModifyBase;
		using Base = SetupAudioTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupAudioTriggerPopup::valueDidChange)), Default, SetupAudioTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupAudioTriggerPopup::addProxVolControls)), Default, SetupAudioTriggerPopup, addProxVolControls, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupAudioTriggerPopup::addTimeControls)), Default, SetupAudioTriggerPopup, addTimeControls, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupAudioTriggerPopup::onProxMode)), Default, SetupAudioTriggerPopup, onProxMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupAudioTriggerPopup::updateSpecialGroup)), Default, SetupAudioTriggerPopup, updateSpecialGroup, )
		}
	};
}
