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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_progressTimerNodeWithRenderTexture
		#define GEODE_CONCEPT_CHECK_progressTimerNodeWithRenderTexture
		GEODE_CONCEPT_FUNCTION_CHECK(progressTimerNodeWithRenderTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionProgressRadialCW> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgressRadialCW>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgressRadialCW>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionProgressRadialCW>>::ModifyBase;
		using Base = cocos2d::CCTransitionProgressRadialCW;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionProgressRadialCW::create)), Default, cocos2d::CCTransitionProgressRadialCW, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRenderTexture*>::func(&cocos2d::CCTransitionProgressRadialCW::progressTimerNodeWithRenderTexture)), Thiscall, cocos2d::CCTransitionProgressRadialCW, progressTimerNodeWithRenderTexture, cocos2d::CCRenderTexture*)
		}
	};
}
