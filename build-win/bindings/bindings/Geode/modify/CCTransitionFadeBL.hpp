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
	struct ModifyDerive<Der, cocos2d::CCTransitionFadeBL> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeBL>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeBL>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeBL>>::ModifyBase;
		using Base = cocos2d::CCTransitionFadeBL;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionFadeBL@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionFadeBL, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionFadeBL@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionFadeBL)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionFadeBL::create)), Default, cocos2d::CCTransitionFadeBL, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCTransitionFadeBL::actionWithSize)), Thiscall, cocos2d::CCTransitionFadeBL, actionWithSize, cocos2d::CCSize const&)
		}
	};
}
