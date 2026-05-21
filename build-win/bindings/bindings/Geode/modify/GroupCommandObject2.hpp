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

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_updateAction
		#define GEODE_STATICS_updateAction
		GEODE_AS_STATIC_FUNCTION(updateAction) 
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

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x257690, Thiscall, GroupCommandObject2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257700, Thiscall, GroupCommandObject2, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, resetDelta, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, runFollowCommand, double, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, runMoveCommand, cocos2d::CCPoint, double, int, double, bool, bool, bool, bool, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, runPlayerFollowCommand, double, double, int, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, runRotateCommand, double, double, int, double, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, runTransformCommand, double, int, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257900, Thiscall, GroupCommandObject2, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, stepTransformCommand, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2579d0, Thiscall, GroupCommandObject2, updateAction, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GroupCommandObject2, updateEffectAction, float, int)
		}
	};
}
