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

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCatmullRomTo> : ModifyBase<ModifyDerive<Der, cocos2d::CCCatmullRomTo>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCatmullRomTo>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCatmullRomTo>>::ModifyBase;
		using Base = cocos2d::CCCatmullRomTo;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCPointArray*>::func(&cocos2d::CCCatmullRomTo::create)), Default, cocos2d::CCCatmullRomTo, create, float, cocos2d::CCPointArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCPointArray*>::func(&cocos2d::CCCatmullRomTo::initWithDuration)), Thiscall, cocos2d::CCCatmullRomTo, initWithDuration, float, cocos2d::CCPointArray*)
		}
	};
}
