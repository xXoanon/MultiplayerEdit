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

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_isDone
		#define GEODE_STATICS_isDone
		GEODE_AS_STATIC_FUNCTION(isDone) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDone
		#define GEODE_CONCEPT_CHECK_isDone
		GEODE_CONCEPT_FUNCTION_CHECK(isDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTarget
		#define GEODE_CONCEPT_CHECK_initWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFollow> : ModifyBase<ModifyDerive<Der, cocos2d::CCFollow>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFollow>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFollow>>::ModifyBase;
		using Base = cocos2d::CCFollow;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCFollow@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCFollow)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCRect const&>::func(&cocos2d::CCFollow::create)), Default, cocos2d::CCFollow, create, cocos2d::CCNode*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCFollow::copyWithZone)), Thiscall, cocos2d::CCFollow, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCFollow::step)), Thiscall, cocos2d::CCFollow, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFollow::isDone)), Thiscall, cocos2d::CCFollow, isDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFollow::stop)), Thiscall, cocos2d::CCFollow, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCRect const&>::func(&cocos2d::CCFollow::initWithTarget)), Thiscall, cocos2d::CCFollow, initWithTarget, cocos2d::CCNode*, cocos2d::CCRect const&)
		}
	};
}
