#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_isDone
		#define GEODE_STATICS_isDone
		GEODE_AS_STATIC_FUNCTION(isDone) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

	#ifndef GEODE_STATICS_initWithAction
		#define GEODE_STATICS_initWithAction
		GEODE_AS_STATIC_FUNCTION(initWithAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDone
		#define GEODE_CONCEPT_CHECK_isDone
		GEODE_CONCEPT_FUNCTION_CHECK(isDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithAction
		#define GEODE_CONCEPT_CHECK_initWithAction
		GEODE_CONCEPT_FUNCTION_CHECK(initWithAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCRepeatForever> : ModifyBase<ModifyDerive<Der, cocos2d::CCRepeatForever>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCRepeatForever>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCRepeatForever>>::ModifyBase;
		using Base = cocos2d::CCRepeatForever;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCRepeatForever@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCRepeatForever)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCRepeatForever::create)), Default, cocos2d::CCRepeatForever, create, cocos2d::CCActionInterval*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCRepeatForever::copyWithZone)), Thiscall, cocos2d::CCRepeatForever, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRepeatForever::isDone)), Thiscall, cocos2d::CCRepeatForever, isDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCRepeatForever::startWithTarget)), Thiscall, cocos2d::CCRepeatForever, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCRepeatForever::step)), Thiscall, cocos2d::CCRepeatForever, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRepeatForever::reverse)), Thiscall, cocos2d::CCRepeatForever, reverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCRepeatForever::initWithAction)), Thiscall, cocos2d::CCRepeatForever, initWithAction, cocos2d::CCActionInterval*)
		}
	};
}
