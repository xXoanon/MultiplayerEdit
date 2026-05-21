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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCStopGrid> : ModifyBase<ModifyDerive<Der, cocos2d::CCStopGrid>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCStopGrid>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCStopGrid>>::ModifyBase;
		using Base = cocos2d::CCStopGrid;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCStopGrid::create)), Default, cocos2d::CCStopGrid, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCStopGrid::startWithTarget)), Thiscall, cocos2d::CCStopGrid, startWithTarget, cocos2d::CCNode*)
		}
	};
}
