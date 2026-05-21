#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_appendIn
		#define GEODE_STATICS_appendIn
		GEODE_AS_STATIC_FUNCTION(appendIn) 
	#endif

	#ifndef GEODE_STATICS_isTargetPaused
		#define GEODE_STATICS_isTargetPaused
		GEODE_AS_STATIC_FUNCTION(isTargetPaused) 
	#endif

	#ifndef GEODE_STATICS_pauseAllTargets
		#define GEODE_STATICS_pauseAllTargets
		GEODE_AS_STATIC_FUNCTION(pauseAllTargets) 
	#endif

	#ifndef GEODE_STATICS_pauseAllTargetsWithMinPriority
		#define GEODE_STATICS_pauseAllTargetsWithMinPriority
		GEODE_AS_STATIC_FUNCTION(pauseAllTargetsWithMinPriority) 
	#endif

	#ifndef GEODE_STATICS_pauseTarget
		#define GEODE_STATICS_pauseTarget
		GEODE_AS_STATIC_FUNCTION(pauseTarget) 
	#endif

	#ifndef GEODE_STATICS_priorityIn
		#define GEODE_STATICS_priorityIn
		GEODE_AS_STATIC_FUNCTION(priorityIn) 
	#endif

	#ifndef GEODE_STATICS_removeHashElement
		#define GEODE_STATICS_removeHashElement
		GEODE_AS_STATIC_FUNCTION(removeHashElement) 
	#endif

	#ifndef GEODE_STATICS_removeUpdateFromHash
		#define GEODE_STATICS_removeUpdateFromHash
		GEODE_AS_STATIC_FUNCTION(removeUpdateFromHash) 
	#endif

	#ifndef GEODE_STATICS_resumeTarget
		#define GEODE_STATICS_resumeTarget
		GEODE_AS_STATIC_FUNCTION(resumeTarget) 
	#endif

	#ifndef GEODE_STATICS_resumeTargets
		#define GEODE_STATICS_resumeTargets
		GEODE_AS_STATIC_FUNCTION(resumeTargets) 
	#endif

	#ifndef GEODE_STATICS_scheduleScriptFunc
		#define GEODE_STATICS_scheduleScriptFunc
		GEODE_AS_STATIC_FUNCTION(scheduleScriptFunc) 
	#endif

	#ifndef GEODE_STATICS_scheduleSelector
		#define GEODE_STATICS_scheduleSelector
		GEODE_AS_STATIC_FUNCTION(scheduleSelector) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdateForTarget
		#define GEODE_STATICS_scheduleUpdateForTarget
		GEODE_AS_STATIC_FUNCTION(scheduleUpdateForTarget) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAll
		#define GEODE_STATICS_unscheduleAll
		GEODE_AS_STATIC_FUNCTION(unscheduleAll) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAllForTarget
		#define GEODE_STATICS_unscheduleAllForTarget
		GEODE_AS_STATIC_FUNCTION(unscheduleAllForTarget) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAllWithMinPriority
		#define GEODE_STATICS_unscheduleAllWithMinPriority
		GEODE_AS_STATIC_FUNCTION(unscheduleAllWithMinPriority) 
	#endif

	#ifndef GEODE_STATICS_unscheduleScriptEntry
		#define GEODE_STATICS_unscheduleScriptEntry
		GEODE_AS_STATIC_FUNCTION(unscheduleScriptEntry) 
	#endif

	#ifndef GEODE_STATICS_unscheduleSelector
		#define GEODE_STATICS_unscheduleSelector
		GEODE_AS_STATIC_FUNCTION(unscheduleSelector) 
	#endif

	#ifndef GEODE_STATICS_unscheduleUpdateForTarget
		#define GEODE_STATICS_unscheduleUpdateForTarget
		GEODE_AS_STATIC_FUNCTION(unscheduleUpdateForTarget) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_appendIn
		#define GEODE_CONCEPT_CHECK_appendIn
		GEODE_CONCEPT_FUNCTION_CHECK(appendIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTargetPaused
		#define GEODE_CONCEPT_CHECK_isTargetPaused
		GEODE_CONCEPT_FUNCTION_CHECK(isTargetPaused) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllTargets
		#define GEODE_CONCEPT_CHECK_pauseAllTargets
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllTargetsWithMinPriority
		#define GEODE_CONCEPT_CHECK_pauseAllTargetsWithMinPriority
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllTargetsWithMinPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseTarget
		#define GEODE_CONCEPT_CHECK_pauseTarget
		GEODE_CONCEPT_FUNCTION_CHECK(pauseTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_priorityIn
		#define GEODE_CONCEPT_CHECK_priorityIn
		GEODE_CONCEPT_FUNCTION_CHECK(priorityIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeHashElement
		#define GEODE_CONCEPT_CHECK_removeHashElement
		GEODE_CONCEPT_FUNCTION_CHECK(removeHashElement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeUpdateFromHash
		#define GEODE_CONCEPT_CHECK_removeUpdateFromHash
		GEODE_CONCEPT_FUNCTION_CHECK(removeUpdateFromHash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeTarget
		#define GEODE_CONCEPT_CHECK_resumeTarget
		GEODE_CONCEPT_FUNCTION_CHECK(resumeTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeTargets
		#define GEODE_CONCEPT_CHECK_resumeTargets
		GEODE_CONCEPT_FUNCTION_CHECK(resumeTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleScriptFunc
		#define GEODE_CONCEPT_CHECK_scheduleScriptFunc
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleScriptFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleSelector
		#define GEODE_CONCEPT_CHECK_scheduleSelector
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleSelector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleUpdateForTarget
		#define GEODE_CONCEPT_CHECK_scheduleUpdateForTarget
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleUpdateForTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleAll
		#define GEODE_CONCEPT_CHECK_unscheduleAll
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleAllForTarget
		#define GEODE_CONCEPT_CHECK_unscheduleAllForTarget
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleAllForTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleAllWithMinPriority
		#define GEODE_CONCEPT_CHECK_unscheduleAllWithMinPriority
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleAllWithMinPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleScriptEntry
		#define GEODE_CONCEPT_CHECK_unscheduleScriptEntry
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleScriptEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleSelector
		#define GEODE_CONCEPT_CHECK_unscheduleSelector
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleSelector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleUpdateForTarget
		#define GEODE_CONCEPT_CHECK_unscheduleUpdateForTarget
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleUpdateForTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCScheduler> : ModifyBase<ModifyDerive<Der, cocos2d::CCScheduler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCScheduler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCScheduler>>::ModifyBase;
		using Base = cocos2d::CCScheduler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCScheduler@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCScheduler, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCScheduler@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCScheduler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCScheduler::update)), Thiscall, cocos2d::CCScheduler, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_listEntry**, cocos2d::CCObject*, bool>::func(&cocos2d::CCScheduler::appendIn)), Thiscall, cocos2d::CCScheduler, appendIn, cocos2d::_listEntry**, cocos2d::CCObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCScheduler::isTargetPaused)), Thiscall, cocos2d::CCScheduler, isTargetPaused, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScheduler::pauseAllTargets)), Thiscall, cocos2d::CCScheduler, pauseAllTargets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCScheduler::pauseAllTargetsWithMinPriority)), Thiscall, cocos2d::CCScheduler, pauseAllTargetsWithMinPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCScheduler::pauseTarget)), Thiscall, cocos2d::CCScheduler, pauseTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_listEntry**, cocos2d::CCObject*, int, bool>::func(&cocos2d::CCScheduler::priorityIn)), Thiscall, cocos2d::CCScheduler, priorityIn, cocos2d::_listEntry**, cocos2d::CCObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_hashSelectorEntry*>::func(&cocos2d::CCScheduler::removeHashElement)), Thiscall, cocos2d::CCScheduler, removeHashElement, cocos2d::_hashSelectorEntry*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_listEntry*>::func(&cocos2d::CCScheduler::removeUpdateFromHash)), Thiscall, cocos2d::CCScheduler, removeUpdateFromHash, cocos2d::_listEntry*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCScheduler::resumeTarget)), Thiscall, cocos2d::CCScheduler, resumeTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSet*>::func(&cocos2d::CCScheduler::resumeTargets)), Thiscall, cocos2d::CCScheduler, resumeTargets, cocos2d::CCSet*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, float, bool>::func(&cocos2d::CCScheduler::scheduleScriptFunc)), Thiscall, cocos2d::CCScheduler, scheduleScriptFunc, unsigned int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, bool>::func(&cocos2d::CCScheduler::scheduleSelector)), Thiscall, cocos2d::CCScheduler, scheduleSelector, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool>::func(&cocos2d::CCScheduler::scheduleSelector)), Thiscall, cocos2d::CCScheduler, scheduleSelector, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int, bool>::func(&cocos2d::CCScheduler::scheduleUpdateForTarget)), Thiscall, cocos2d::CCScheduler, scheduleUpdateForTarget, cocos2d::CCObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScheduler::unscheduleAll)), Thiscall, cocos2d::CCScheduler, unscheduleAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCScheduler::unscheduleAllForTarget)), Thiscall, cocos2d::CCScheduler, unscheduleAllForTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCScheduler::unscheduleAllWithMinPriority)), Thiscall, cocos2d::CCScheduler, unscheduleAllWithMinPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCScheduler::unscheduleScriptEntry)), Thiscall, cocos2d::CCScheduler, unscheduleScriptEntry, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE, cocos2d::CCObject*>::func(&cocos2d::CCScheduler::unscheduleSelector)), Thiscall, cocos2d::CCScheduler, unscheduleSelector, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject const*>::func(&cocos2d::CCScheduler::unscheduleUpdateForTarget)), Thiscall, cocos2d::CCScheduler, unscheduleUpdateForTarget, cocos2d::CCObject const*)
		}
	};
}
