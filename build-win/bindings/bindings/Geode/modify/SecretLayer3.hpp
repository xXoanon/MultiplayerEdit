#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer3.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_animateEyes
		#define GEODE_STATICS_animateEyes
		GEODE_AS_STATIC_FUNCTION(animateEyes) 
	#endif

	#ifndef GEODE_STATICS_firstInteractionStep2
		#define GEODE_STATICS_firstInteractionStep2
		GEODE_AS_STATIC_FUNCTION(firstInteractionStep2) 
	#endif

	#ifndef GEODE_STATICS_firstInteractionStep4
		#define GEODE_STATICS_firstInteractionStep4
		GEODE_AS_STATIC_FUNCTION(firstInteractionStep4) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onChest01
		#define GEODE_STATICS_onChest01
		GEODE_AS_STATIC_FUNCTION(onChest01) 
	#endif

	#ifndef GEODE_STATICS_onChest02
		#define GEODE_STATICS_onChest02
		GEODE_AS_STATIC_FUNCTION(onChest02) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_revealStep1
		#define GEODE_STATICS_revealStep1
		GEODE_AS_STATIC_FUNCTION(revealStep1) 
	#endif

	#ifndef GEODE_STATICS_revealStep2
		#define GEODE_STATICS_revealStep2
		GEODE_AS_STATIC_FUNCTION(revealStep2) 
	#endif

	#ifndef GEODE_STATICS_revealStep4
		#define GEODE_STATICS_revealStep4
		GEODE_AS_STATIC_FUNCTION(revealStep4) 
	#endif

	#ifndef GEODE_STATICS_revealStep5
		#define GEODE_STATICS_revealStep5
		GEODE_AS_STATIC_FUNCTION(revealStep5) 
	#endif

	#ifndef GEODE_STATICS_showUnlockDialog
		#define GEODE_STATICS_showUnlockDialog
		GEODE_AS_STATIC_FUNCTION(showUnlockDialog) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateEyes
		#define GEODE_CONCEPT_CHECK_animateEyes
		GEODE_CONCEPT_FUNCTION_CHECK(animateEyes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstInteractionStep1
		#define GEODE_CONCEPT_CHECK_firstInteractionStep1
		GEODE_CONCEPT_FUNCTION_CHECK(firstInteractionStep1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstInteractionStep2
		#define GEODE_CONCEPT_CHECK_firstInteractionStep2
		GEODE_CONCEPT_FUNCTION_CHECK(firstInteractionStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstInteractionStep3
		#define GEODE_CONCEPT_CHECK_firstInteractionStep3
		GEODE_CONCEPT_FUNCTION_CHECK(firstInteractionStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstInteractionStep4
		#define GEODE_CONCEPT_CHECK_firstInteractionStep4
		GEODE_CONCEPT_FUNCTION_CHECK(firstInteractionStep4) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChest01
		#define GEODE_CONCEPT_CHECK_onChest01
		GEODE_CONCEPT_FUNCTION_CHECK(onChest01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChest02
		#define GEODE_CONCEPT_CHECK_onChest02
		GEODE_CONCEPT_FUNCTION_CHECK(onChest02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClick
		#define GEODE_CONCEPT_CHECK_onClick
		GEODE_CONCEPT_FUNCTION_CHECK(onClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revealStep1
		#define GEODE_CONCEPT_CHECK_revealStep1
		GEODE_CONCEPT_FUNCTION_CHECK(revealStep1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revealStep2
		#define GEODE_CONCEPT_CHECK_revealStep2
		GEODE_CONCEPT_FUNCTION_CHECK(revealStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revealStep3
		#define GEODE_CONCEPT_CHECK_revealStep3
		GEODE_CONCEPT_FUNCTION_CHECK(revealStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revealStep4
		#define GEODE_CONCEPT_CHECK_revealStep4
		GEODE_CONCEPT_FUNCTION_CHECK(revealStep4) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revealStep5
		#define GEODE_CONCEPT_CHECK_revealStep5
		GEODE_CONCEPT_FUNCTION_CHECK(revealStep5) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUnlockDialog
		#define GEODE_CONCEPT_CHECK_showUnlockDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showUnlockDialog) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer3> : ModifyBase<ModifyDerive<Der, SecretLayer3>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer3>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer3>>::ModifyBase;
		using Base = SecretLayer3;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer3, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer3, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9e90, Thiscall, SecretLayer3, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ef7a0, Thiscall, SecretLayer3, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ef790, Thiscall, SecretLayer3, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ef190, Thiscall, SecretLayer3, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eb7f0, Thiscall, SecretLayer3, animateEyes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer3, firstInteractionStep1, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eb910, Thiscall, SecretLayer3, firstInteractionStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer3, firstInteractionStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ebe90, Thiscall, SecretLayer3, firstInteractionStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ef620, Thiscall, SecretLayer3, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eb4f0, Thiscall, SecretLayer3, onChest01, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eb670, Thiscall, SecretLayer3, onChest02, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ec400, Thiscall, SecretLayer3, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3edc20, Thiscall, SecretLayer3, revealStep1, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ede10, Thiscall, SecretLayer3, revealStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SecretLayer3, revealStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ee2a0, Thiscall, SecretLayer3, revealStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eeaf0, Thiscall, SecretLayer3, revealStep5, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ed710, Thiscall, SecretLayer3, showUnlockDialog, )
		}
	};
}
