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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
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

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
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
	struct ModifyDerive<Der, cocos2d::CCAccelDeccelAmplitude> : ModifyBase<ModifyDerive<Der, cocos2d::CCAccelDeccelAmplitude>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCAccelDeccelAmplitude>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCAccelDeccelAmplitude>>::ModifyBase;
		using Base = cocos2d::CCAccelDeccelAmplitude;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCAccelDeccelAmplitude@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCAccelDeccelAmplitude)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAction*, float>::func(&cocos2d::CCAccelDeccelAmplitude::create)), Default, cocos2d::CCAccelDeccelAmplitude, create, cocos2d::CCAction*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCAccelDeccelAmplitude::startWithTarget)), Thiscall, cocos2d::CCAccelDeccelAmplitude, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCAccelDeccelAmplitude::update)), Thiscall, cocos2d::CCAccelDeccelAmplitude, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAccelDeccelAmplitude::reverse)), Thiscall, cocos2d::CCAccelDeccelAmplitude, reverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAction*, float>::func(&cocos2d::CCAccelDeccelAmplitude::initWithAction)), Thiscall, cocos2d::CCAccelDeccelAmplitude, initWithAction, cocos2d::CCAction*, float)
		}
	};
}
