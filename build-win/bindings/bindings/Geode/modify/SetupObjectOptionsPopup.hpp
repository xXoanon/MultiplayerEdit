#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupObjectOptionsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAlwaysHide
		#define GEODE_STATICS_onAlwaysHide
		GEODE_AS_STATIC_FUNCTION(onAlwaysHide) 
	#endif

	#ifndef GEODE_STATICS_onApplyScaleStick
		#define GEODE_STATICS_onApplyScaleStick
		GEODE_AS_STATIC_FUNCTION(onApplyScaleStick) 
	#endif

	#ifndef GEODE_STATICS_onCenterEffect
		#define GEODE_STATICS_onCenterEffect
		GEODE_AS_STATIC_FUNCTION(onCenterEffect) 
	#endif

	#ifndef GEODE_STATICS_onDisableGlow
		#define GEODE_STATICS_onDisableGlow
		GEODE_AS_STATIC_FUNCTION(onDisableGlow) 
	#endif

	#ifndef GEODE_STATICS_onDisableObject
		#define GEODE_STATICS_onDisableObject
		GEODE_AS_STATIC_FUNCTION(onDisableObject) 
	#endif

	#ifndef GEODE_STATICS_onDontBoost
		#define GEODE_STATICS_onDontBoost
		GEODE_AS_STATIC_FUNCTION(onDontBoost) 
	#endif

	#ifndef GEODE_STATICS_onDontBoostX
		#define GEODE_STATICS_onDontBoostX
		GEODE_AS_STATIC_FUNCTION(onDontBoostX) 
	#endif

	#ifndef GEODE_STATICS_onDontEnter
		#define GEODE_STATICS_onDontEnter
		GEODE_AS_STATIC_FUNCTION(onDontEnter) 
	#endif

	#ifndef GEODE_STATICS_onDontFade
		#define GEODE_STATICS_onDontFade
		GEODE_AS_STATIC_FUNCTION(onDontFade) 
	#endif

	#ifndef GEODE_STATICS_onExtendedCollision
		#define GEODE_STATICS_onExtendedCollision
		GEODE_AS_STATIC_FUNCTION(onExtendedCollision) 
	#endif

	#ifndef GEODE_STATICS_onExtraSticky
		#define GEODE_STATICS_onExtraSticky
		GEODE_AS_STATIC_FUNCTION(onExtraSticky) 
	#endif

	#ifndef GEODE_STATICS_onGripSlope
		#define GEODE_STATICS_onGripSlope
		GEODE_AS_STATIC_FUNCTION(onGripSlope) 
	#endif

	#ifndef GEODE_STATICS_onHideEffects
		#define GEODE_STATICS_onHideEffects
		GEODE_AS_STATIC_FUNCTION(onHideEffects) 
	#endif

	#ifndef GEODE_STATICS_onHighDetail
		#define GEODE_STATICS_onHighDetail
		GEODE_AS_STATIC_FUNCTION(onHighDetail) 
	#endif

	#ifndef GEODE_STATICS_onIceBlock
		#define GEODE_STATICS_onIceBlock
		GEODE_AS_STATIC_FUNCTION(onIceBlock) 
	#endif

	#ifndef GEODE_STATICS_onNoAudioScale
		#define GEODE_STATICS_onNoAudioScale
		GEODE_AS_STATIC_FUNCTION(onNoAudioScale) 
	#endif

	#ifndef GEODE_STATICS_onNonStickX
		#define GEODE_STATICS_onNonStickX
		GEODE_AS_STATIC_FUNCTION(onNonStickX) 
	#endif

	#ifndef GEODE_STATICS_onNonStickY
		#define GEODE_STATICS_onNonStickY
		GEODE_AS_STATIC_FUNCTION(onNonStickY) 
	#endif

	#ifndef GEODE_STATICS_onNoParticle
		#define GEODE_STATICS_onNoParticle
		GEODE_AS_STATIC_FUNCTION(onNoParticle) 
	#endif

	#ifndef GEODE_STATICS_onPassable
		#define GEODE_STATICS_onPassable
		GEODE_AS_STATIC_FUNCTION(onPassable) 
	#endif

	#ifndef GEODE_STATICS_onReverse
		#define GEODE_STATICS_onReverse
		GEODE_AS_STATIC_FUNCTION(onReverse) 
	#endif

	#ifndef GEODE_STATICS_onSinglePlayerTouch
		#define GEODE_STATICS_onSinglePlayerTouch
		GEODE_AS_STATIC_FUNCTION(onSinglePlayerTouch) 
	#endif

	#ifndef GEODE_STATICS_onToggleAreaParent
		#define GEODE_STATICS_onToggleAreaParent
		GEODE_AS_STATIC_FUNCTION(onToggleAreaParent) 
	#endif

	#ifndef GEODE_STATICS_onToggleGroupParent
		#define GEODE_STATICS_onToggleGroupParent
		GEODE_AS_STATIC_FUNCTION(onToggleGroupParent) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAlwaysHide
		#define GEODE_CONCEPT_CHECK_onAlwaysHide
		GEODE_CONCEPT_FUNCTION_CHECK(onAlwaysHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyScaleStick
		#define GEODE_CONCEPT_CHECK_onApplyScaleStick
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyScaleStick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCenterEffect
		#define GEODE_CONCEPT_CHECK_onCenterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(onCenterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDisableGlow
		#define GEODE_CONCEPT_CHECK_onDisableGlow
		GEODE_CONCEPT_FUNCTION_CHECK(onDisableGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDisableObject
		#define GEODE_CONCEPT_CHECK_onDisableObject
		GEODE_CONCEPT_FUNCTION_CHECK(onDisableObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontBoost
		#define GEODE_CONCEPT_CHECK_onDontBoost
		GEODE_CONCEPT_FUNCTION_CHECK(onDontBoost) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontBoostX
		#define GEODE_CONCEPT_CHECK_onDontBoostX
		GEODE_CONCEPT_FUNCTION_CHECK(onDontBoostX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontEnter
		#define GEODE_CONCEPT_CHECK_onDontEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onDontEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontFade
		#define GEODE_CONCEPT_CHECK_onDontFade
		GEODE_CONCEPT_FUNCTION_CHECK(onDontFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExtendedCollision
		#define GEODE_CONCEPT_CHECK_onExtendedCollision
		GEODE_CONCEPT_FUNCTION_CHECK(onExtendedCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExtraSticky
		#define GEODE_CONCEPT_CHECK_onExtraSticky
		GEODE_CONCEPT_FUNCTION_CHECK(onExtraSticky) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGripSlope
		#define GEODE_CONCEPT_CHECK_onGripSlope
		GEODE_CONCEPT_FUNCTION_CHECK(onGripSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHideEffects
		#define GEODE_CONCEPT_CHECK_onHideEffects
		GEODE_CONCEPT_FUNCTION_CHECK(onHideEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHighDetail
		#define GEODE_CONCEPT_CHECK_onHighDetail
		GEODE_CONCEPT_FUNCTION_CHECK(onHighDetail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIceBlock
		#define GEODE_CONCEPT_CHECK_onIceBlock
		GEODE_CONCEPT_FUNCTION_CHECK(onIceBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNoAudioScale
		#define GEODE_CONCEPT_CHECK_onNoAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(onNoAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNonStickX
		#define GEODE_CONCEPT_CHECK_onNonStickX
		GEODE_CONCEPT_FUNCTION_CHECK(onNonStickX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNonStickY
		#define GEODE_CONCEPT_CHECK_onNonStickY
		GEODE_CONCEPT_FUNCTION_CHECK(onNonStickY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNoParticle
		#define GEODE_CONCEPT_CHECK_onNoParticle
		GEODE_CONCEPT_FUNCTION_CHECK(onNoParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPassable
		#define GEODE_CONCEPT_CHECK_onPassable
		GEODE_CONCEPT_FUNCTION_CHECK(onPassable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReverse
		#define GEODE_CONCEPT_CHECK_onReverse
		GEODE_CONCEPT_FUNCTION_CHECK(onReverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSinglePlayerTouch
		#define GEODE_CONCEPT_CHECK_onSinglePlayerTouch
		GEODE_CONCEPT_FUNCTION_CHECK(onSinglePlayerTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAreaParent
		#define GEODE_CONCEPT_CHECK_onToggleAreaParent
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAreaParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGroupParent
		#define GEODE_CONCEPT_CHECK_onToggleGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGroupParent) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupObjectOptionsPopup> : ModifyBase<ModifyDerive<Der, SetupObjectOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupObjectOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupObjectOptionsPopup>>::ModifyBase;
		using Base = SetupObjectOptionsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupObjectOptionsPopup, create, GameObject*, cocos2d::CCArray*, SetGroupIDLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257300, Thiscall, SetupObjectOptionsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8baf0, Thiscall, SetupObjectOptionsPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff910, Thiscall, SetupObjectOptionsPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, SetupObjectOptionsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fdf30, Thiscall, SetupObjectOptionsPopup, init, GameObject*, cocos2d::CCArray*, SetGroupIDLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400140, Thiscall, SetupObjectOptionsPopup, onAlwaysHide, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400530, Thiscall, SetupObjectOptionsPopup, onApplyScaleStick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400a10, Thiscall, SetupObjectOptionsPopup, onCenterEffect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400020, Thiscall, SetupObjectOptionsPopup, onDisableGlow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ffe70, Thiscall, SetupObjectOptionsPopup, onDisableObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400380, Thiscall, SetupObjectOptionsPopup, onDontBoost, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400410, Thiscall, SetupObjectOptionsPopup, onDontBoostX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ffcc0, Thiscall, SetupObjectOptionsPopup, onDontEnter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ffc30, Thiscall, SetupObjectOptionsPopup, onDontFade, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400770, Thiscall, SetupObjectOptionsPopup, onExtendedCollision, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4002f0, Thiscall, SetupObjectOptionsPopup, onExtraSticky, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fff90, Thiscall, SetupObjectOptionsPopup, onGripSlope, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ffd50, Thiscall, SetupObjectOptionsPopup, onHideEffects, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4006e0, Thiscall, SetupObjectOptionsPopup, onHighDetail, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ffba0, Thiscall, SetupObjectOptionsPopup, onIceBlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4004a0, Thiscall, SetupObjectOptionsPopup, onNoAudioScale, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4001d0, Thiscall, SetupObjectOptionsPopup, onNonStickX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400260, Thiscall, SetupObjectOptionsPopup, onNonStickY, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ffde0, Thiscall, SetupObjectOptionsPopup, onNoParticle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4000b0, Thiscall, SetupObjectOptionsPopup, onPassable, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4008a0, Thiscall, SetupObjectOptionsPopup, onReverse, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400960, Thiscall, SetupObjectOptionsPopup, onSinglePlayerTouch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400650, Thiscall, SetupObjectOptionsPopup, onToggleAreaParent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4005c0, Thiscall, SetupObjectOptionsPopup, onToggleGroupParent, cocos2d::CCObject*)
		}
	};
}
