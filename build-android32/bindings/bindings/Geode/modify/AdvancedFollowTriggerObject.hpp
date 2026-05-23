#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdvancedFollowTriggerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getAdvancedFollowID
		#define GEODE_STATICS_getAdvancedFollowID
		GEODE_AS_STATIC_FUNCTION(getAdvancedFollowID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAdvancedFollowID
		#define GEODE_CONCEPT_CHECK_getAdvancedFollowID
		GEODE_CONCEPT_FUNCTION_CHECK(getAdvancedFollowID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdvancedFollowTriggerObject> : ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>>::ModifyBase;
		using Base = AdvancedFollowTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AdvancedFollowTriggerObject::create)), Default, AdvancedFollowTriggerObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN27AdvancedFollowTriggerObject17customObjectSetupERSt6vectorISsSaISsEERS0_IPvSaIS4_EE")), Default, AdvancedFollowTriggerObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&AdvancedFollowTriggerObject::getSaveString)), Default, AdvancedFollowTriggerObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AdvancedFollowTriggerObject::getAdvancedFollowID)), Default, AdvancedFollowTriggerObject, getAdvancedFollowID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AdvancedFollowTriggerObject::init)), Default, AdvancedFollowTriggerObject, init, char const*)
		}
	};
}
