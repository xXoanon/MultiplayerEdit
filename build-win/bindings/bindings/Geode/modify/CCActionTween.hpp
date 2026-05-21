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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_updateTargetValue
		#define GEODE_STATICS_updateTargetValue
		GEODE_AS_STATIC_FUNCTION(updateTargetValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetValue
		#define GEODE_CONCEPT_CHECK_updateTargetValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCActionTween> : ModifyBase<ModifyDerive<Der, cocos2d::CCActionTween>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCActionTween>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCActionTween>>::ModifyBase;
		using Base = cocos2d::CCActionTween;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, char const*, float, float>::func(&cocos2d::CCActionTween::create)), Default, cocos2d::CCActionTween, create, float, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int, float, float>::func(&cocos2d::CCActionTween::create)), Default, cocos2d::CCActionTween, create, float, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCActionTween::update)), Thiscall, cocos2d::CCActionTween, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCActionTween::startWithTarget)), Thiscall, cocos2d::CCActionTween, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCActionTween::reverse)), Thiscall, cocos2d::CCActionTween, reverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, char const*, float, float>::func(&cocos2d::CCActionTween::initWithDuration)), Thiscall, cocos2d::CCActionTween, initWithDuration, float, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCActionTween::updateTargetValue)), Thiscall, cocos2d::CCActionTween, updateTargetValue, float)
		}
	};
}
