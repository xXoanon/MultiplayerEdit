#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCountTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEnableGroup
		#define GEODE_STATICS_onEnableGroup
		GEODE_AS_STATIC_FUNCTION(onEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_onItemIDArrow
		#define GEODE_STATICS_onItemIDArrow
		GEODE_AS_STATIC_FUNCTION(onItemIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onMultiActivate
		#define GEODE_STATICS_onMultiActivate
		GEODE_AS_STATIC_FUNCTION(onMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_onTargetCountArrow
		#define GEODE_STATICS_onTargetCountArrow
		GEODE_AS_STATIC_FUNCTION(onTargetCountArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_updateCountTextInputLabel
		#define GEODE_STATICS_updateCountTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCountTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemID
		#define GEODE_STATICS_updateItemID
		GEODE_AS_STATIC_FUNCTION(updateItemID) 
	#endif

	#ifndef GEODE_STATICS_updateItemIDInputLabel
		#define GEODE_STATICS_updateItemIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetCount
		#define GEODE_STATICS_updateTargetCount
		GEODE_AS_STATIC_FUNCTION(updateTargetCount) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetIDInputLabel
		#define GEODE_STATICS_updateTargetIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTargetIDInputLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnableGroup
		#define GEODE_CONCEPT_CHECK_onEnableGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onEnableGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onItemIDArrow
		#define GEODE_CONCEPT_CHECK_onItemIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onItemIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMultiActivate
		#define GEODE_CONCEPT_CHECK_onMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(onMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetCountArrow
		#define GEODE_CONCEPT_CHECK_onTargetCountArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetCountArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCountTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateCountTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCountTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID
		#define GEODE_CONCEPT_CHECK_updateItemID
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemIDInputLabel
		#define GEODE_CONCEPT_CHECK_updateItemIDInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetCount
		#define GEODE_CONCEPT_CHECK_updateTargetCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetIDInputLabel
		#define GEODE_CONCEPT_CHECK_updateTargetIDInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetIDInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCountTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupCountTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCountTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCountTriggerPopup>>::ModifyBase;
		using Base = SetupCountTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41ae70, Default, SetupCountTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c060, Thiscall, SetupCountTriggerPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c800, Thiscall, SetupCountTriggerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c320, Thiscall, SetupCountTriggerPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41afb0, Thiscall, SetupCountTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419330, Thiscall, SetupCountTriggerPopup, onEnableGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c290, Thiscall, SetupCountTriggerPopup, onItemIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c1c0, Thiscall, SetupCountTriggerPopup, onMultiActivate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c250, Thiscall, SetupCountTriggerPopup, onTargetCountArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c2e0, Thiscall, SetupCountTriggerPopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419b80, Thiscall, SetupCountTriggerPopup, updateCountTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419c00, Thiscall, SetupCountTriggerPopup, updateItemID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c5a0, Thiscall, SetupCountTriggerPopup, updateItemIDInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c770, Thiscall, SetupCountTriggerPopup, updateTargetCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c6a0, Thiscall, SetupCountTriggerPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c620, Thiscall, SetupCountTriggerPopup, updateTargetIDInputLabel, )
		}
	};
}
