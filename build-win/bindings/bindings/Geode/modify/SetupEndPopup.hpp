#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEndPopup.hpp>
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

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLockY
		#define GEODE_STATICS_onLockY
		GEODE_AS_STATIC_FUNCTION(onLockY) 
	#endif

	#ifndef GEODE_STATICS_onMultiActivate
		#define GEODE_STATICS_onMultiActivate
		GEODE_AS_STATIC_FUNCTION(onMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_onReversed
		#define GEODE_STATICS_onReversed
		GEODE_AS_STATIC_FUNCTION(onReversed) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLockY
		#define GEODE_CONCEPT_CHECK_onLockY
		GEODE_CONCEPT_FUNCTION_CHECK(onLockY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMultiActivate
		#define GEODE_CONCEPT_CHECK_onMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(onMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReversed
		#define GEODE_CONCEPT_CHECK_onReversed
		GEODE_CONCEPT_FUNCTION_CHECK(onReversed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEndPopup> : ModifyBase<ModifyDerive<Der, SetupEndPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEndPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEndPopup>>::ModifyBase;
		using Base = SetupEndPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41ca90, Default, SetupEndPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d580, Thiscall, SetupEndPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413ec0, Thiscall, SetupEndPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b850, Thiscall, SetupEndPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d830, Thiscall, SetupEndPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41cbc0, Thiscall, SetupEndPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d750, Thiscall, SetupEndPopup, onLockY, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d690, Thiscall, SetupEndPopup, onMultiActivate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d6c0, Thiscall, SetupEndPopup, onReversed, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d7e0, Thiscall, SetupEndPopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d9a0, Thiscall, SetupEndPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41d920, Thiscall, SetupEndPopup, updateTextInputLabel, )
		}
	};
}
