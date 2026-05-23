#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RandTriggerGameObject.hpp>
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

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getRandomGroupID
		#define GEODE_STATICS_getRandomGroupID
		GEODE_AS_STATIC_FUNCTION(getRandomGroupID) 
	#endif

	#ifndef GEODE_STATICS_getTotalChance
		#define GEODE_STATICS_getTotalChance
		GEODE_AS_STATIC_FUNCTION(getTotalChance) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomGroupID
		#define GEODE_CONCEPT_CHECK_getRandomGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalChance
		#define GEODE_CONCEPT_CHECK_getTotalChance
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalChance) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RandTriggerGameObject> : ModifyBase<ModifyDerive<Der, RandTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>::ModifyBase;
		using Base = RandTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&RandTriggerGameObject::create)), Default, RandTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RandTriggerGameObject::init)), Default, RandTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21RandTriggerGameObject13triggerObjectEP15GJBaseGameLayeriPKSt6vectorIiSaIiEE")), Default, RandTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21RandTriggerGameObject17customObjectSetupERSt6vectorISsSaISsEERS0_IPvSaIS4_EE")), Default, RandTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&RandTriggerGameObject::getSaveString)), Default, RandTriggerGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&RandTriggerGameObject::getRandomGroupID)), Default, RandTriggerGameObject, getRandomGroupID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&RandTriggerGameObject::getTotalChance)), Default, RandTriggerGameObject, getTotalChance, )
		}
	};
}
