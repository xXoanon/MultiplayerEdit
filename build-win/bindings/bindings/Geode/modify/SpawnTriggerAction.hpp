#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpawnTriggerAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_isFinished
		#define GEODE_CONCEPT_CHECK_isFinished
		GEODE_CONCEPT_FUNCTION_CHECK(isFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpawnTriggerAction> : ModifyBase<ModifyDerive<Der, SpawnTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpawnTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, SpawnTriggerAction>>::ModifyBase;
		using Base = SpawnTriggerAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpawnTriggerAction, isFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpawnTriggerAction, step, float)
		}
	};
}
