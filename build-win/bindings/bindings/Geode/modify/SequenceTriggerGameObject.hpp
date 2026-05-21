#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SequenceTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
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

	#ifndef GEODE_CONCEPT_CHECK_addCount
		#define GEODE_CONCEPT_CHECK_addCount
		GEODE_CONCEPT_FUNCTION_CHECK(addCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTarget
		#define GEODE_CONCEPT_CHECK_addTarget
		GEODE_CONCEPT_FUNCTION_CHECK(addTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteTarget
		#define GEODE_CONCEPT_CHECK_deleteTarget
		GEODE_CONCEPT_FUNCTION_CHECK(deleteTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderTarget
		#define GEODE_CONCEPT_CHECK_reorderTarget
		GEODE_CONCEPT_FUNCTION_CHECK(reorderTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSequenceTotalCount
		#define GEODE_CONCEPT_CHECK_updateSequenceTotalCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateSequenceTotalCount) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SequenceTriggerGameObject> : ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>>::ModifyBase;
		using Base = SequenceTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SequenceTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b4820, Thiscall, SequenceTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b4840, Thiscall, SequenceTriggerGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b4870, Thiscall, SequenceTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b4c90, Thiscall, SequenceTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b4fc0, Thiscall, SequenceTriggerGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SequenceTriggerGameObject, addCount, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SequenceTriggerGameObject, addTarget, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SequenceTriggerGameObject, deleteTarget, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SequenceTriggerGameObject, reorderTarget, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SequenceTriggerGameObject, updateSequenceTotalCount, )
		}
	};
}
