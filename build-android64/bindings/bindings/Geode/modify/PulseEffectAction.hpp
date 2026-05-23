#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PulseEffectAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_isFinished
		#define GEODE_STATICS_isFinished
		GEODE_AS_STATIC_FUNCTION(isFinished) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_valueForDelta
		#define GEODE_STATICS_valueForDelta
		GEODE_AS_STATIC_FUNCTION(valueForDelta) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_isFinished
		#define GEODE_CONCEPT_CHECK_isFinished
		GEODE_CONCEPT_FUNCTION_CHECK(isFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueForDelta
		#define GEODE_CONCEPT_CHECK_valueForDelta
		GEODE_CONCEPT_FUNCTION_CHECK(valueForDelta) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PulseEffectAction> : ModifyBase<ModifyDerive<Der, PulseEffectAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PulseEffectAction>>;
		using ModifyBase<ModifyDerive<Der, PulseEffectAction>>::ModifyBase;
		using Base = PulseEffectAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PulseEffectAction::isFinished)), Default, PulseEffectAction, isFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&PulseEffectAction::step)), Default, PulseEffectAction, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float>::func(&PulseEffectAction::valueForDelta)), Default, PulseEffectAction, valueForDelta, float, float, float, float)
		}
	};
}
