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

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_progressTimerNodeWithRenderTexture
		#define GEODE_STATICS_progressTimerNodeWithRenderTexture
		GEODE_AS_STATIC_FUNCTION(progressTimerNodeWithRenderTexture) 
	#endif

	#ifndef GEODE_STATICS_setupTransition
		#define GEODE_STATICS_setupTransition
		GEODE_AS_STATIC_FUNCTION(setupTransition) 
	#endif

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_progressTimerNodeWithRenderTexture
		#define GEODE_CONCEPT_CHECK_progressTimerNodeWithRenderTexture
		GEODE_CONCEPT_FUNCTION_CHECK(progressTimerNodeWithRenderTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTransition
		#define GEODE_CONCEPT_CHECK_setupTransition
		GEODE_CONCEPT_FUNCTION_CHECK(setupTransition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneOrder
		#define GEODE_CONCEPT_CHECK_sceneOrder
		GEODE_CONCEPT_FUNCTION_CHECK(sceneOrder) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionProgress> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgress>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgress>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgress>>::ModifyBase;
		using Base = cocos2d::CCTransitionProgress;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionProgress@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionProgress, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionProgress::create)), Default, cocos2d::CCTransitionProgress, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionProgress::onEnter)), Thiscall, cocos2d::CCTransitionProgress, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionProgress::onExit)), Thiscall, cocos2d::CCTransitionProgress, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRenderTexture*>::func(&cocos2d::CCTransitionProgress::progressTimerNodeWithRenderTexture)), Thiscall, cocos2d::CCTransitionProgress, progressTimerNodeWithRenderTexture, cocos2d::CCRenderTexture*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionProgress::setupTransition)), Thiscall, cocos2d::CCTransitionProgress, setupTransition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionProgress::sceneOrder)), Thiscall, cocos2d::CCTransitionProgress, sceneOrder, )
		}
	};
}
