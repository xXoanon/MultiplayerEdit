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

	#ifndef GEODE_STATICS_progressTimerNodeWithRenderTexture
		#define GEODE_STATICS_progressTimerNodeWithRenderTexture
		GEODE_AS_STATIC_FUNCTION(progressTimerNodeWithRenderTexture) 
	#endif

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif

	#ifndef GEODE_STATICS_setupTransition
		#define GEODE_STATICS_setupTransition
		GEODE_AS_STATIC_FUNCTION(setupTransition) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_progressTimerNodeWithRenderTexture
		#define GEODE_CONCEPT_CHECK_progressTimerNodeWithRenderTexture
		GEODE_CONCEPT_FUNCTION_CHECK(progressTimerNodeWithRenderTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneOrder
		#define GEODE_CONCEPT_CHECK_sceneOrder
		GEODE_CONCEPT_FUNCTION_CHECK(sceneOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTransition
		#define GEODE_CONCEPT_CHECK_setupTransition
		GEODE_CONCEPT_FUNCTION_CHECK(setupTransition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionProgressInOut> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgressInOut>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgressInOut>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgressInOut>>::ModifyBase;
		using Base = cocos2d::CCTransitionProgressInOut;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionProgressInOut::create)), Default, cocos2d::CCTransitionProgressInOut, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRenderTexture*>::func(&cocos2d::CCTransitionProgressInOut::progressTimerNodeWithRenderTexture)), Thiscall, cocos2d::CCTransitionProgressInOut, progressTimerNodeWithRenderTexture, cocos2d::CCRenderTexture*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionProgressInOut::sceneOrder)), Thiscall, cocos2d::CCTransitionProgressInOut, sceneOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionProgressInOut::setupTransition)), Thiscall, cocos2d::CCTransitionProgressInOut, setupTransition, )
		}
	};
}
