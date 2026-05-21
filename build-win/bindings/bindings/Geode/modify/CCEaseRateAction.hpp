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

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
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
	struct ModifyDerive<Der, cocos2d::CCEaseRateAction> : ModifyBase<ModifyDerive<Der, cocos2d::CCEaseRateAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEaseRateAction>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEaseRateAction>>::ModifyBase;
		using Base = cocos2d::CCEaseRateAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCEaseRateAction@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCEaseRateAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*, float>::func(&cocos2d::CCEaseRateAction::create)), Default, cocos2d::CCEaseRateAction, create, cocos2d::CCActionInterval*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCEaseRateAction::copyWithZone)), Thiscall, cocos2d::CCEaseRateAction, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEaseRateAction::reverse)), Thiscall, cocos2d::CCEaseRateAction, reverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*, float>::func(&cocos2d::CCEaseRateAction::initWithAction)), Thiscall, cocos2d::CCEaseRateAction, initWithAction, cocos2d::CCActionInterval*, float)
		}
	};
}
