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

	#ifndef GEODE_STATICS_actionWithSize
		#define GEODE_STATICS_actionWithSize
		GEODE_AS_STATIC_FUNCTION(actionWithSize) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionWithSize
		#define GEODE_CONCEPT_CHECK_actionWithSize
		GEODE_CONCEPT_FUNCTION_CHECK(actionWithSize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionFadeDown> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeDown>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeDown>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeDown>>::ModifyBase;
		using Base = cocos2d::CCTransitionFadeDown;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionFadeDown@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionFadeDown, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionFadeDown@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionFadeDown)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionFadeDown::create)), Default, cocos2d::CCTransitionFadeDown, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCTransitionFadeDown::actionWithSize)), Thiscall, cocos2d::CCTransitionFadeDown, actionWithSize, cocos2d::CCSize const&)
		}
	};
}
