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

	#ifndef GEODE_STATICS_getAmplitudeRate
		#define GEODE_STATICS_getAmplitudeRate
		GEODE_AS_STATIC_FUNCTION(getAmplitudeRate) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_setAmplitudeRate
		#define GEODE_STATICS_setAmplitudeRate
		GEODE_AS_STATIC_FUNCTION(setAmplitudeRate) 
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

	#ifndef GEODE_CONCEPT_CHECK_getAmplitudeRate
		#define GEODE_CONCEPT_CHECK_getAmplitudeRate
		GEODE_CONCEPT_FUNCTION_CHECK(getAmplitudeRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAmplitudeRate
		#define GEODE_CONCEPT_CHECK_setAmplitudeRate
		GEODE_CONCEPT_FUNCTION_CHECK(setAmplitudeRate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCActionInterval> : ModifyBase<ModifyDerive<Der, cocos2d::CCActionInterval>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCActionInterval>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCActionInterval>>::ModifyBase;
		using Base = cocos2d::CCActionInterval;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCActionInterval::create)), Default, cocos2d::CCActionInterval, create, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCActionInterval::copyWithZone)), Thiscall, cocos2d::CCActionInterval, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCActionInterval::isDone)), Thiscall, cocos2d::CCActionInterval, isDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCActionInterval::startWithTarget)), Thiscall, cocos2d::CCActionInterval, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCActionInterval::step)), Thiscall, cocos2d::CCActionInterval, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCActionInterval::reverse)), Thiscall, cocos2d::CCActionInterval, reverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCActionInterval::getAmplitudeRate)), Thiscall, cocos2d::CCActionInterval, getAmplitudeRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCActionInterval::initWithDuration)), Thiscall, cocos2d::CCActionInterval, initWithDuration, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCActionInterval::setAmplitudeRate)), Thiscall, cocos2d::CCActionInterval, setAmplitudeRate, float)
		}
	};
}
