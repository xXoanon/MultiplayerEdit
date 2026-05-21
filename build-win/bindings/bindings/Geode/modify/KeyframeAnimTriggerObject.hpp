#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeyframeAnimTriggerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeyframeAnimTriggerObject> : ModifyBase<ModifyDerive<Der, KeyframeAnimTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeyframeAnimTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, KeyframeAnimTriggerObject>>::ModifyBase;
		using Base = KeyframeAnimTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeyframeAnimTriggerObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b1590, Thiscall, KeyframeAnimTriggerObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b1a00, Thiscall, KeyframeAnimTriggerObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b1600, Thiscall, KeyframeAnimTriggerObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
