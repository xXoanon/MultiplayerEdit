#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resetDelta
		#define GEODE_STATICS_resetDelta
		GEODE_AS_STATIC_FUNCTION(resetDelta) 
	#endif

	#ifndef GEODE_STATICS_runFollowCommand
		#define GEODE_STATICS_runFollowCommand
		GEODE_AS_STATIC_FUNCTION(runFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_runMoveCommand
		#define GEODE_STATICS_runMoveCommand
		GEODE_AS_STATIC_FUNCTION(runMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_runPlayerFollowCommand
		#define GEODE_STATICS_runPlayerFollowCommand
		GEODE_AS_STATIC_FUNCTION(runPlayerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_runRotateCommand
		#define GEODE_STATICS_runRotateCommand
		GEODE_AS_STATIC_FUNCTION(runRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_runTransformCommand
		#define GEODE_STATICS_runTransformCommand
		GEODE_AS_STATIC_FUNCTION(runTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_stepTransformCommand
		#define GEODE_STATICS_stepTransformCommand
		GEODE_AS_STATIC_FUNCTION(stepTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_updateAction
		#define GEODE_STATICS_updateAction
		GEODE_AS_STATIC_FUNCTION(updateAction) 
	#endif

	#ifndef GEODE_STATICS_updateEffectAction
		#define GEODE_STATICS_updateEffectAction
		GEODE_AS_STATIC_FUNCTION(updateEffectAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDelta
		#define GEODE_CONCEPT_CHECK_resetDelta
		GEODE_CONCEPT_FUNCTION_CHECK(resetDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runFollowCommand
		#define GEODE_CONCEPT_CHECK_runFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runMoveCommand
		#define GEODE_CONCEPT_CHECK_runMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runPlayerFollowCommand
		#define GEODE_CONCEPT_CHECK_runPlayerFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runPlayerFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runRotateCommand
		#define GEODE_CONCEPT_CHECK_runRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runTransformCommand
		#define GEODE_CONCEPT_CHECK_runTransformCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runTransformCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stepTransformCommand
		#define GEODE_CONCEPT_CHECK_stepTransformCommand
		GEODE_CONCEPT_FUNCTION_CHECK(stepTransformCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAction
		#define GEODE_CONCEPT_CHECK_updateAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffectAction
		#define GEODE_CONCEPT_CHECK_updateEffectAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffectAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GroupCommandObject2> : ModifyBase<ModifyDerive<Der, GroupCommandObject2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GroupCommandObject2>>;
		using ModifyBase<ModifyDerive<Der, GroupCommandObject2>>::ModifyBase;
		using Base = GroupCommandObject2;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19GroupCommandObject2C2Ev")), Default, GroupCommandObject2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GroupCommandObject2::reset)), Default, GroupCommandObject2, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GroupCommandObject2::resetDelta)), Default, GroupCommandObject2, resetDelta, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<double, double, double>::func(&GroupCommandObject2::runFollowCommand)), Default, GroupCommandObject2, runFollowCommand, double, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, double, int, double, bool, bool, bool, bool, double, double>::func(&GroupCommandObject2::runMoveCommand)), Default, GroupCommandObject2, runMoveCommand, cocos2d::CCPoint, double, int, double, bool, bool, bool, bool, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<double, double, int, double, double>::func(&GroupCommandObject2::runPlayerFollowCommand)), Default, GroupCommandObject2, runPlayerFollowCommand, double, double, int, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<double, double, int, double, bool, int>::func(&GroupCommandObject2::runRotateCommand)), Default, GroupCommandObject2, runRotateCommand, double, double, int, double, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<double, int, double>::func(&GroupCommandObject2::runTransformCommand)), Default, GroupCommandObject2, runTransformCommand, double, int, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GroupCommandObject2::step)), Default, GroupCommandObject2, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, bool, bool>::func(&GroupCommandObject2::stepTransformCommand)), Default, GroupCommandObject2, stepTransformCommand, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&GroupCommandObject2::updateAction)), Default, GroupCommandObject2, updateAction, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&GroupCommandObject2::updateEffectAction)), Default, GroupCommandObject2, updateEffectAction, float, int)
		}
	};
}
