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

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif

	#ifndef GEODE_STATICS_actionWithSize
		#define GEODE_STATICS_actionWithSize
		GEODE_AS_STATIC_FUNCTION(actionWithSize) 
	#endif

	#ifndef GEODE_STATICS_easeActionWithAction
		#define GEODE_STATICS_easeActionWithAction
		GEODE_AS_STATIC_FUNCTION(easeActionWithAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneOrder
		#define GEODE_CONCEPT_CHECK_sceneOrder
		GEODE_CONCEPT_FUNCTION_CHECK(sceneOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionWithSize
		#define GEODE_CONCEPT_CHECK_actionWithSize
		GEODE_CONCEPT_FUNCTION_CHECK(actionWithSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_easeActionWithAction
		#define GEODE_CONCEPT_CHECK_easeActionWithAction
		GEODE_CONCEPT_FUNCTION_CHECK(easeActionWithAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionFadeTR> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeTR>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeTR>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionFadeTR>>::ModifyBase;
		using Base = cocos2d::CCTransitionFadeTR;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionFadeTR@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionFadeTR, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionFadeTR@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionFadeTR)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionFadeTR::create)), Default, cocos2d::CCTransitionFadeTR, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionFadeTR::onEnter)), Thiscall, cocos2d::CCTransitionFadeTR, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionFadeTR::sceneOrder)), Thiscall, cocos2d::CCTransitionFadeTR, sceneOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCTransitionFadeTR::actionWithSize)), Thiscall, cocos2d::CCTransitionFadeTR, actionWithSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCTransitionFadeTR::easeActionWithAction)), Thiscall, cocos2d::CCTransitionFadeTR, easeActionWithAction, cocos2d::CCActionInterval*)
		}
	};
}
