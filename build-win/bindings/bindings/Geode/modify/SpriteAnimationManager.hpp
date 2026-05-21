#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpriteAnimationManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createAnimations
		#define GEODE_STATICS_createAnimations
		GEODE_AS_STATIC_FUNCTION(createAnimations) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_callAnimationFinished
		#define GEODE_STATICS_callAnimationFinished
		GEODE_AS_STATIC_FUNCTION(callAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_executeAnimation
		#define GEODE_STATICS_executeAnimation
		GEODE_AS_STATIC_FUNCTION(executeAnimation) 
	#endif

	#ifndef GEODE_STATICS_getPrio
		#define GEODE_STATICS_getPrio
		GEODE_AS_STATIC_FUNCTION(getPrio) 
	#endif

	#ifndef GEODE_STATICS_initWithOwner
		#define GEODE_STATICS_initWithOwner
		GEODE_AS_STATIC_FUNCTION(initWithOwner) 
	#endif

	#ifndef GEODE_STATICS_loadAnimations
		#define GEODE_STATICS_loadAnimations
		GEODE_AS_STATIC_FUNCTION(loadAnimations) 
	#endif

	#ifndef GEODE_STATICS_overridePrio
		#define GEODE_STATICS_overridePrio
		GEODE_AS_STATIC_FUNCTION(overridePrio) 
	#endif

	#ifndef GEODE_STATICS_queueAnimation
		#define GEODE_STATICS_queueAnimation
		GEODE_AS_STATIC_FUNCTION(queueAnimation) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_storeAnimation
		#define GEODE_STATICS_storeAnimation
		GEODE_AS_STATIC_FUNCTION(storeAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createAnimations
		#define GEODE_CONCEPT_CHECK_createAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(createAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithOwner
		#define GEODE_CONCEPT_CHECK_createWithOwner
		GEODE_CONCEPT_FUNCTION_CHECK(createWithOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_callAnimationFinished
		#define GEODE_CONCEPT_CHECK_callAnimationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(callAnimationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doCleanup
		#define GEODE_CONCEPT_CHECK_doCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(doCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_executeAnimation
		#define GEODE_CONCEPT_CHECK_executeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(executeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishAnimation
		#define GEODE_CONCEPT_CHECK_finishAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(finishAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnimType
		#define GEODE_CONCEPT_CHECK_getAnimType
		GEODE_CONCEPT_FUNCTION_CHECK(getAnimType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrio
		#define GEODE_CONCEPT_CHECK_getPrio
		GEODE_CONCEPT_FUNCTION_CHECK(getPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithOwner
		#define GEODE_CONCEPT_CHECK_initWithOwner
		GEODE_CONCEPT_FUNCTION_CHECK(initWithOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadAnimations
		#define GEODE_CONCEPT_CHECK_loadAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(loadAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetCurrentAnimation
		#define GEODE_CONCEPT_CHECK_offsetCurrentAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(offsetCurrentAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overridePrio
		#define GEODE_CONCEPT_CHECK_overridePrio
		GEODE_CONCEPT_FUNCTION_CHECK(overridePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSound
		#define GEODE_CONCEPT_CHECK_playSound
		GEODE_CONCEPT_FUNCTION_CHECK(playSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSoundForAnimation
		#define GEODE_CONCEPT_CHECK_playSoundForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playSoundForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueAnimation
		#define GEODE_CONCEPT_CHECK_queueAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(queueAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAnimState
		#define GEODE_CONCEPT_CHECK_resetAnimState
		GEODE_CONCEPT_FUNCTION_CHECK(resetAnimState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAnimation
		#define GEODE_CONCEPT_CHECK_runAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(runAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runQueuedAnimation
		#define GEODE_CONCEPT_CHECK_runQueuedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(runQueuedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAnimations
		#define GEODE_CONCEPT_CHECK_stopAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(stopAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeAnimation
		#define GEODE_CONCEPT_CHECK_storeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(storeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSoundForAnimation
		#define GEODE_CONCEPT_CHECK_storeSoundForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(storeSoundForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToFirstFrameOfAnimation
		#define GEODE_CONCEPT_CHECK_switchToFirstFrameOfAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(switchToFirstFrameOfAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimationSpeed
		#define GEODE_CONCEPT_CHECK_updateAnimationSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimationSpeed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpriteAnimationManager> : ModifyBase<ModifyDerive<Der, SpriteAnimationManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpriteAnimationManager>>;
		using ModifyBase<ModifyDerive<Der, SpriteAnimationManager>>::ModifyBase;
		using Base = SpriteAnimationManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x72fd0, Default, SpriteAnimationManager, createAnimations, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, createWithOwner, CCAnimatedSprite*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74620, Thiscall, SpriteAnimationManager, animationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74670, Thiscall, SpriteAnimationManager, callAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, doCleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73f60, Thiscall, SpriteAnimationManager, executeAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, finishAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, getAnimType, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74750, Thiscall, SpriteAnimationManager, getPrio, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x72390, Thiscall, SpriteAnimationManager, initWithOwner, CCAnimatedSprite*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x72600, Thiscall, SpriteAnimationManager, loadAnimations, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, offsetCurrentAnimation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74450, Thiscall, SpriteAnimationManager, overridePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, playSound, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, playSoundForAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74540, Thiscall, SpriteAnimationManager, queueAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, resetAnimState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73e00, Thiscall, SpriteAnimationManager, runAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, runQueuedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, stopAnimations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73b90, Thiscall, SpriteAnimationManager, storeAnimation, cocos2d::CCAnimate*, cocos2d::CCAnimate*, gd::string, int, spriteMode, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, storeSoundForAnimation, cocos2d::CCString*, gd::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, switchToFirstFrameOfAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, updateAnimationSpeed, float)
		}
	};
}
