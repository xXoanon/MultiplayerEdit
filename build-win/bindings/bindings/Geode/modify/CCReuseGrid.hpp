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

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_initWithTimes
		#define GEODE_STATICS_initWithTimes
		GEODE_AS_STATIC_FUNCTION(initWithTimes) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTimes
		#define GEODE_CONCEPT_CHECK_initWithTimes
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTimes) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCReuseGrid> : ModifyBase<ModifyDerive<Der, cocos2d::CCReuseGrid>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCReuseGrid>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCReuseGrid>>::ModifyBase;
		using Base = cocos2d::CCReuseGrid;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCReuseGrid::create)), Default, cocos2d::CCReuseGrid, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCReuseGrid::startWithTarget)), Thiscall, cocos2d::CCReuseGrid, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCReuseGrid::initWithTimes)), Thiscall, cocos2d::CCReuseGrid, initWithTimes, int)
		}
	};
}
