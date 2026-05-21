#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_invoke
		#define GEODE_STATICS_invoke
		GEODE_AS_STATIC_FUNCTION(invoke) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invoke
		#define GEODE_CONCEPT_CHECK_invoke
		GEODE_CONCEPT_FUNCTION_CHECK(invoke) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCInvocation> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCInvocation>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCInvocation>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCInvocation>>::ModifyBase;
		using Base = cocos2d::extension::CCInvocation;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCInvocation::create)), Default, cocos2d::extension::CCInvocation, create, cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, cocos2d::extension::CCControlEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::extension::CCInvocation::invoke)), Thiscall, cocos2d::extension::CCInvocation, invoke, cocos2d::CCObject*)
		}
	};
}
