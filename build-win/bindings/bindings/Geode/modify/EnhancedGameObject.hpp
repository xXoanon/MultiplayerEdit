#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnhancedGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_animationTriggered
		#define GEODE_STATICS_animationTriggered
		GEODE_AS_STATIC_FUNCTION(animationTriggered) 
	#endif

	#ifndef GEODE_STATICS_activatedByPlayer
		#define GEODE_STATICS_activatedByPlayer
		GEODE_AS_STATIC_FUNCTION(activatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivatedByPlayer
		#define GEODE_STATICS_hasBeenActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivated
		#define GEODE_STATICS_hasBeenActivated
		GEODE_AS_STATIC_FUNCTION(hasBeenActivated) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_canAllowMultiActivate
		#define GEODE_STATICS_canAllowMultiActivate
		GEODE_AS_STATIC_FUNCTION(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_getHasSyncedAnimation
		#define GEODE_STATICS_getHasSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_getHasRotateAction
		#define GEODE_STATICS_getHasRotateAction
		GEODE_AS_STATIC_FUNCTION(getHasRotateAction) 
	#endif

	#ifndef GEODE_STATICS_canMultiActivate
		#define GEODE_STATICS_canMultiActivate
		GEODE_AS_STATIC_FUNCTION(canMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_powerOnObject
		#define GEODE_STATICS_powerOnObject
		GEODE_AS_STATIC_FUNCTION(powerOnObject) 
	#endif

	#ifndef GEODE_STATICS_powerOffObject
		#define GEODE_STATICS_powerOffObject
		GEODE_AS_STATIC_FUNCTION(powerOffObject) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateAnimateOnTrigger
		#define GEODE_STATICS_updateAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(updateAnimateOnTrigger) 
	#endif

	#ifndef GEODE_STATICS_createRotateAction
		#define GEODE_STATICS_createRotateAction
		GEODE_AS_STATIC_FUNCTION(createRotateAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setupAnimationVariables
		#define GEODE_STATICS_setupAnimationVariables
		GEODE_AS_STATIC_FUNCTION(setupAnimationVariables) 
	#endif

	#ifndef GEODE_STATICS_updateRotateAction
		#define GEODE_STATICS_updateRotateAction
		GEODE_AS_STATIC_FUNCTION(updateRotateAction) 
	#endif

	#ifndef GEODE_STATICS_updateUserCoin
		#define GEODE_STATICS_updateUserCoin
		GEODE_AS_STATIC_FUNCTION(updateUserCoin) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateObject
		#define GEODE_CONCEPT_CHECK_deactivateObject
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationTriggered
		#define GEODE_CONCEPT_CHECK_animationTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(animationTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatedByPlayer
		#define GEODE_CONCEPT_CHECK_activatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(activatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivated
		#define GEODE_CONCEPT_CHECK_hasBeenActivated
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveColors
		#define GEODE_CONCEPT_CHECK_saveActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAllowMultiActivate
		#define GEODE_CONCEPT_CHECK_canAllowMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		#define GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRotateAction
		#define GEODE_CONCEPT_CHECK_getHasRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canMultiActivate
		#define GEODE_CONCEPT_CHECK_canMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOnObject
		#define GEODE_CONCEPT_CHECK_powerOnObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOffObject
		#define GEODE_CONCEPT_CHECK_powerOffObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOffObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stateSensitiveOff
		#define GEODE_CONCEPT_CHECK_stateSensitiveOff
		GEODE_CONCEPT_FUNCTION_CHECK(stateSensitiveOff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSyncedAnimation
		#define GEODE_CONCEPT_CHECK_updateSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimateOnTrigger
		#define GEODE_CONCEPT_CHECK_updateAnimateOnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimateOnTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRotateAction
		#define GEODE_CONCEPT_CHECK_createRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(createRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_previewAnimateOnTrigger
		#define GEODE_CONCEPT_CHECK_previewAnimateOnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(previewAnimateOnTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshRotateAction
		#define GEODE_CONCEPT_CHECK_refreshRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(refreshRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSyncedAnimation
		#define GEODE_CONCEPT_CHECK_resetSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(resetSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAnimationVariables
		#define GEODE_CONCEPT_CHECK_setupAnimationVariables
		GEODE_CONCEPT_FUNCTION_CHECK(setupAnimationVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAnimation
		#define GEODE_CONCEPT_CHECK_triggerAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRotateAction
		#define GEODE_CONCEPT_CHECK_updateRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateState
		#define GEODE_CONCEPT_CHECK_updateState
		GEODE_CONCEPT_FUNCTION_CHECK(updateState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserCoin
		#define GEODE_CONCEPT_CHECK_updateUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_waitForAnimationTrigger
		#define GEODE_CONCEPT_CHECK_waitForAnimationTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(waitForAnimationTrigger) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EnhancedGameObject> : ModifyBase<ModifyDerive<Der, EnhancedGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnhancedGameObject>>;
		using ModifyBase<ModifyDerive<Der, EnhancedGameObject>>::ModifyBase;
		using Base = EnhancedGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x18b500, Thiscall, EnhancedGameObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4f70, Thiscall, EnhancedGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4930, Thiscall, EnhancedGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a6a70, Thiscall, EnhancedGameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4c40, Thiscall, EnhancedGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a6bd0, Thiscall, EnhancedGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4a80, Thiscall, EnhancedGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a49e0, Thiscall, EnhancedGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4b70, Thiscall, EnhancedGameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4a90, Thiscall, EnhancedGameObject, activatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4af0, Thiscall, EnhancedGameObject, hasBeenActivatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4b50, Thiscall, EnhancedGameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4bd0, Thiscall, EnhancedGameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a47d0, Thiscall, EnhancedGameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b5e0, Thiscall, EnhancedGameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b5f0, Thiscall, EnhancedGameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4a60, Thiscall, EnhancedGameObject, canMultiActivate, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4a20, Thiscall, EnhancedGameObject, powerOnObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4a40, Thiscall, EnhancedGameObject, powerOffObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, stateSensitiveOff, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7db0, Thiscall, EnhancedGameObject, updateSyncedAnimation, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9a70, Thiscall, EnhancedGameObject, updateAnimateOnTrigger, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7280, Thiscall, EnhancedGameObject, createRotateAction, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4780, Thiscall, EnhancedGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, previewAnimateOnTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, refreshRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, resetSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9b70, Thiscall, EnhancedGameObject, setupAnimationVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, triggerAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7310, Thiscall, EnhancedGameObject, updateRotateAction, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, updateState, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a68f0, Thiscall, EnhancedGameObject, updateUserCoin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EnhancedGameObject, waitForAnimationTrigger, )
		}
	};
}
