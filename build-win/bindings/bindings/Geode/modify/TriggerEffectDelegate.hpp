#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TriggerEffectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_toggleGroupTriggered
		#define GEODE_CONCEPT_CHECK_toggleGroupTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroupTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnObject
		#define GEODE_CONCEPT_CHECK_spawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(spawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnAbuse
		#define GEODE_CONCEPT_CHECK_checkSpawnAbuse
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnAbuse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TriggerEffectDelegate> : ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>>;
		using ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>>::ModifyBase;
		using Base = TriggerEffectDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TriggerEffectDelegate, toggleGroupTriggered, int, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TriggerEffectDelegate, spawnGroup, int, bool, double, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TriggerEffectDelegate, spawnObject, GameObject*, double, gd::vector<int> const&)
		}
	};
}
