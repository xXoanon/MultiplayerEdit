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

	#ifndef GEODE_STATICS_execute
		#define GEODE_STATICS_execute
		GEODE_AS_STATIC_FUNCTION(execute) 
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

	#ifndef GEODE_CONCEPT_CHECK_execute
		#define GEODE_CONCEPT_CHECK_execute
		GEODE_CONCEPT_FUNCTION_CHECK(execute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTarget
		#define GEODE_CONCEPT_CHECK_initWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCallFuncO> : ModifyBase<ModifyDerive<Der, cocos2d::CCCallFuncO>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCallFuncO>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCallFuncO>>::ModifyBase;
		using Base = cocos2d::CCCallFuncO;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCCallFuncO@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCCallFuncO, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCCallFuncO@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCCallFuncO)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCObject*>::func(&cocos2d::CCCallFuncO::create)), Default, cocos2d::CCCallFuncO, create, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCCallFuncO::copyWithZone)), Thiscall, cocos2d::CCCallFuncO, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCCallFuncO::execute)), Thiscall, cocos2d::CCCallFuncO, execute, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCObject*>::func(&cocos2d::CCCallFuncO::initWithTarget)), Thiscall, cocos2d::CCCallFuncO, initWithTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCObject*)
		}
	};
}
