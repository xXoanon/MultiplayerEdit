#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXTriggerGameObject.hpp>
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

	#ifndef GEODE_STATICS_getSFXRefID
		#define GEODE_STATICS_getSFXRefID
		GEODE_AS_STATIC_FUNCTION(getSFXRefID) 
	#endif

	#ifndef GEODE_STATICS_getUniqueSFXID
		#define GEODE_STATICS_getUniqueSFXID
		GEODE_AS_STATIC_FUNCTION(getUniqueSFXID) 
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

	#ifndef GEODE_CONCEPT_CHECK_getSFXRefID
		#define GEODE_CONCEPT_CHECK_getSFXRefID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXRefID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUniqueSFXID
		#define GEODE_CONCEPT_CHECK_getUniqueSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getUniqueSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXTriggerGameObject> : ModifyBase<ModifyDerive<Der, SFXTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SFXTriggerGameObject>>::ModifyBase;
		using Base = SFXTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&SFXTriggerGameObject::create)), Default, SFXTriggerGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20SFXTriggerGameObject17customObjectSetupERSt6vectorISsSaISsEERS0_IPvSaIS4_EE")), Default, SFXTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&SFXTriggerGameObject::getSaveString)), Default, SFXTriggerGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXTriggerGameObject::getSFXRefID)), Default, SFXTriggerGameObject, getSFXRefID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXTriggerGameObject::getUniqueSFXID)), Default, SFXTriggerGameObject, getUniqueSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&SFXTriggerGameObject::init)), Default, SFXTriggerGameObject, init, char const*)
		}
	};
}
