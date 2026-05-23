#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnterEffectInstance.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animateValue
		#define GEODE_STATICS_animateValue
		GEODE_AS_STATIC_FUNCTION(animateValue) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_loadTransitions
		#define GEODE_STATICS_loadTransitions
		GEODE_AS_STATIC_FUNCTION(loadTransitions) 
	#endif

	#ifndef GEODE_STATICS_loadValuesFromObject
		#define GEODE_STATICS_loadValuesFromObject
		GEODE_AS_STATIC_FUNCTION(loadValuesFromObject) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

	#ifndef GEODE_STATICS_updateTransitions
		#define GEODE_STATICS_updateTransitions
		GEODE_AS_STATIC_FUNCTION(updateTransitions) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_animateValue
		#define GEODE_CONCEPT_CHECK_animateValue
		GEODE_CONCEPT_FUNCTION_CHECK(animateValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadTransitions
		#define GEODE_CONCEPT_CHECK_loadTransitions
		GEODE_CONCEPT_FUNCTION_CHECK(loadTransitions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadValuesFromObject
		#define GEODE_CONCEPT_CHECK_loadValuesFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadValuesFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTransitions
		#define GEODE_CONCEPT_CHECK_updateTransitions
		GEODE_CONCEPT_FUNCTION_CHECK(updateTransitions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EnterEffectInstance> : ModifyBase<ModifyDerive<Der, EnterEffectInstance>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnterEffectInstance>>;
		using ModifyBase<ModifyDerive<Der, EnterEffectInstance>>::ModifyBase;
		using Base = EnterEffectInstance;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float, float, float, int, float, int>::func(&EnterEffectInstance::animateValue)), Default, EnterEffectInstance, animateValue, int, float, float, float, int, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&EnterEffectInstance::getValue)), Default, EnterEffectInstance, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EnterEffectObject*, float>::func(&EnterEffectInstance::loadTransitions)), Default, EnterEffectInstance, loadTransitions, EnterEffectObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EnterEffectObject*>::func(&EnterEffectInstance::loadValuesFromObject)), Default, EnterEffectInstance, loadValuesFromObject, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&EnterEffectInstance::setValue)), Default, EnterEffectInstance, setValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, GJBaseGameLayer*>::func(&EnterEffectInstance::updateTransitions)), Default, EnterEffectInstance, updateTransitions, float, GJBaseGameLayer*)
		}
	};
}
