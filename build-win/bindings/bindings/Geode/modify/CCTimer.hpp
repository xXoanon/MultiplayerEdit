#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_timerWithScriptHandler
		#define GEODE_STATICS_timerWithScriptHandler
		GEODE_AS_STATIC_FUNCTION(timerWithScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_timerWithTarget
		#define GEODE_STATICS_timerWithTarget
		GEODE_AS_STATIC_FUNCTION(timerWithTarget) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_getInterval
		#define GEODE_STATICS_getInterval
		GEODE_AS_STATIC_FUNCTION(getInterval) 
	#endif

	#ifndef GEODE_STATICS_getSelector
		#define GEODE_STATICS_getSelector
		GEODE_AS_STATIC_FUNCTION(getSelector) 
	#endif

	#ifndef GEODE_STATICS_initWithScriptHandler
		#define GEODE_STATICS_initWithScriptHandler
		GEODE_AS_STATIC_FUNCTION(initWithScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

	#ifndef GEODE_STATICS_setInterval
		#define GEODE_STATICS_setInterval
		GEODE_AS_STATIC_FUNCTION(setInterval) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_timerWithScriptHandler
		#define GEODE_CONCEPT_CHECK_timerWithScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(timerWithScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timerWithTarget
		#define GEODE_CONCEPT_CHECK_timerWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(timerWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInterval
		#define GEODE_CONCEPT_CHECK_getInterval
		GEODE_CONCEPT_FUNCTION_CHECK(getInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelector
		#define GEODE_CONCEPT_CHECK_getSelector
		GEODE_CONCEPT_FUNCTION_CHECK(getSelector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithScriptHandler
		#define GEODE_CONCEPT_CHECK_initWithScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(initWithScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTarget
		#define GEODE_CONCEPT_CHECK_initWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInterval
		#define GEODE_CONCEPT_CHECK_setInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setInterval) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTimer> : ModifyBase<ModifyDerive<Der, cocos2d::CCTimer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTimer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTimer>>::ModifyBase;
		using Base = cocos2d::CCTimer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTimer@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTimer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&cocos2d::CCTimer::timerWithScriptHandler)), Default, cocos2d::CCTimer, timerWithScriptHandler, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_SCHEDULE>::func(&cocos2d::CCTimer::timerWithTarget)), Default, cocos2d::CCTimer, timerWithTarget, cocos2d::CCObject*, cocos2d::SEL_SCHEDULE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_SCHEDULE, float>::func(&cocos2d::CCTimer::timerWithTarget)), Default, cocos2d::CCTimer, timerWithTarget, cocos2d::CCObject*, cocos2d::SEL_SCHEDULE, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCTimer::update)), Thiscall, cocos2d::CCTimer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTimer::getInterval)), Thiscall, cocos2d::CCTimer, getInterval, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTimer::getSelector)), Thiscall, cocos2d::CCTimer, getSelector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&cocos2d::CCTimer::initWithScriptHandler)), Thiscall, cocos2d::CCTimer, initWithScriptHandler, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_SCHEDULE>::func(&cocos2d::CCTimer::initWithTarget)), Thiscall, cocos2d::CCTimer, initWithTarget, cocos2d::CCObject*, cocos2d::SEL_SCHEDULE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_SCHEDULE, float, unsigned int, float>::func(&cocos2d::CCTimer::initWithTarget)), Thiscall, cocos2d::CCTimer, initWithTarget, cocos2d::CCObject*, cocos2d::SEL_SCHEDULE, float, unsigned int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCTimer::setInterval)), Thiscall, cocos2d::CCTimer, setInterval, float)
		}
	};
}
