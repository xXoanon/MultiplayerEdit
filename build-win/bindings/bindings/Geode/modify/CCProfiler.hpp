#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedProfiler
		#define GEODE_STATICS_sharedProfiler
		GEODE_AS_STATIC_FUNCTION(sharedProfiler) 
	#endif

	#ifndef GEODE_STATICS_createAndAddTimerWithName
		#define GEODE_STATICS_createAndAddTimerWithName
		GEODE_AS_STATIC_FUNCTION(createAndAddTimerWithName) 
	#endif

	#ifndef GEODE_STATICS_displayTimers
		#define GEODE_STATICS_displayTimers
		GEODE_AS_STATIC_FUNCTION(displayTimers) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_releaseAllTimers
		#define GEODE_STATICS_releaseAllTimers
		GEODE_AS_STATIC_FUNCTION(releaseAllTimers) 
	#endif

	#ifndef GEODE_STATICS_releaseTimer
		#define GEODE_STATICS_releaseTimer
		GEODE_AS_STATIC_FUNCTION(releaseTimer) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedProfiler
		#define GEODE_CONCEPT_CHECK_sharedProfiler
		GEODE_CONCEPT_FUNCTION_CHECK(sharedProfiler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndAddTimerWithName
		#define GEODE_CONCEPT_CHECK_createAndAddTimerWithName
		GEODE_CONCEPT_FUNCTION_CHECK(createAndAddTimerWithName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayTimers
		#define GEODE_CONCEPT_CHECK_displayTimers
		GEODE_CONCEPT_FUNCTION_CHECK(displayTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseAllTimers
		#define GEODE_CONCEPT_CHECK_releaseAllTimers
		GEODE_CONCEPT_FUNCTION_CHECK(releaseAllTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseTimer
		#define GEODE_CONCEPT_CHECK_releaseTimer
		GEODE_CONCEPT_FUNCTION_CHECK(releaseTimer) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCProfiler> : ModifyBase<ModifyDerive<Der, cocos2d::CCProfiler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCProfiler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCProfiler>>::ModifyBase;
		using Base = cocos2d::CCProfiler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCProfiler@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCProfiler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProfiler::sharedProfiler)), Default, cocos2d::CCProfiler, sharedProfiler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCProfiler::createAndAddTimerWithName)), Thiscall, cocos2d::CCProfiler, createAndAddTimerWithName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProfiler::displayTimers)), Thiscall, cocos2d::CCProfiler, displayTimers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProfiler::init)), Thiscall, cocos2d::CCProfiler, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProfiler::releaseAllTimers)), Thiscall, cocos2d::CCProfiler, releaseAllTimers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCProfiler::releaseTimer)), Thiscall, cocos2d::CCProfiler, releaseTimer, char const*)
		}
	};
}
