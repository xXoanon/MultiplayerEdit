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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

	#ifndef GEODE_STATICS_execute
		#define GEODE_STATICS_execute
		GEODE_AS_STATIC_FUNCTION(execute) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTarget
		#define GEODE_CONCEPT_CHECK_initWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_execute
		#define GEODE_CONCEPT_CHECK_execute
		GEODE_CONCEPT_FUNCTION_CHECK(execute) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCallFunc> : ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>>::ModifyBase;
		using Base = cocos2d::CCCallFunc;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCCallFunc@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCCallFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_CallFunc>::func(&cocos2d::CCCallFunc::create)), Default, cocos2d::CCCallFunc, create, cocos2d::CCObject*, cocos2d::SEL_CallFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCCallFunc::copyWithZone)), Thiscall, cocos2d::CCCallFunc, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCCallFunc::update)), Thiscall, cocos2d::CCCallFunc, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCCallFunc::initWithTarget)), Thiscall, cocos2d::CCCallFunc, initWithTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCCallFunc::execute)), Thiscall, cocos2d::CCCallFunc, execute, )
		}
	};
}
