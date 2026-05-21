#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DialogLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createDialogLayer
		#define GEODE_STATICS_createDialogLayer
		GEODE_AS_STATIC_FUNCTION(createDialogLayer) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_fadeInTextFinished
		#define GEODE_STATICS_fadeInTextFinished
		GEODE_AS_STATIC_FUNCTION(fadeInTextFinished) 
	#endif

	#ifndef GEODE_STATICS_addToMainScene
		#define GEODE_STATICS_addToMainScene
		GEODE_AS_STATIC_FUNCTION(addToMainScene) 
	#endif

	#ifndef GEODE_STATICS_animateInRandomSide
		#define GEODE_STATICS_animateInRandomSide
		GEODE_AS_STATIC_FUNCTION(animateInRandomSide) 
	#endif

	#ifndef GEODE_STATICS_displayDialogObject
		#define GEODE_STATICS_displayDialogObject
		GEODE_AS_STATIC_FUNCTION(displayDialogObject) 
	#endif

	#ifndef GEODE_STATICS_displayNextObject
		#define GEODE_STATICS_displayNextObject
		GEODE_AS_STATIC_FUNCTION(displayNextObject) 
	#endif

	#ifndef GEODE_STATICS_handleDialogTap
		#define GEODE_STATICS_handleDialogTap
		GEODE_AS_STATIC_FUNCTION(handleDialogTap) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateNavButtonFrame
		#define GEODE_STATICS_updateNavButtonFrame
		GEODE_AS_STATIC_FUNCTION(updateNavButtonFrame) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDialogLayer
		#define GEODE_CONCEPT_CHECK_createDialogLayer
		GEODE_CONCEPT_FUNCTION_CHECK(createDialogLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithObjects
		#define GEODE_CONCEPT_CHECK_createWithObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createWithObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInTextFinished
		#define GEODE_CONCEPT_CHECK_fadeInTextFinished
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInTextFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToMainScene
		#define GEODE_CONCEPT_CHECK_addToMainScene
		GEODE_CONCEPT_FUNCTION_CHECK(addToMainScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateIn
		#define GEODE_CONCEPT_CHECK_animateIn
		GEODE_CONCEPT_FUNCTION_CHECK(animateIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInDialog
		#define GEODE_CONCEPT_CHECK_animateInDialog
		GEODE_CONCEPT_FUNCTION_CHECK(animateInDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInRandomSide
		#define GEODE_CONCEPT_CHECK_animateInRandomSide
		GEODE_CONCEPT_FUNCTION_CHECK(animateInRandomSide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayDialogObject
		#define GEODE_CONCEPT_CHECK_displayDialogObject
		GEODE_CONCEPT_FUNCTION_CHECK(displayDialogObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayNextObject
		#define GEODE_CONCEPT_CHECK_displayNextObject
		GEODE_CONCEPT_FUNCTION_CHECK(displayNextObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishCurrentAnimation
		#define GEODE_CONCEPT_CHECK_finishCurrentAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(finishCurrentAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleDialogTap
		#define GEODE_CONCEPT_CHECK_handleDialogTap
		GEODE_CONCEPT_FUNCTION_CHECK(handleDialogTap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChatPlacement
		#define GEODE_CONCEPT_CHECK_updateChatPlacement
		GEODE_CONCEPT_FUNCTION_CHECK(updateChatPlacement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateNavButtonFrame
		#define GEODE_CONCEPT_CHECK_updateNavButtonFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updateNavButtonFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DialogLayer> : ModifyBase<ModifyDerive<Der, DialogLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DialogLayer>>;
		using ModifyBase<ModifyDerive<Der, DialogLayer>>::ModifyBase;
		using Base = DialogLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, create, DialogObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3490, Default, DialogLayer, createDialogLayer, DialogObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, createWithObjects, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52e20, Thiscall, DialogLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4090, Thiscall, DialogLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd40c0, Thiscall, DialogLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd40e0, Thiscall, DialogLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52dd0, Thiscall, DialogLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4000, Thiscall, DialogLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd43b0, Thiscall, DialogLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4100, Thiscall, DialogLayer, fadeInTextFinished, TextArea*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3fa0, Thiscall, DialogLayer, addToMainScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, animateIn, DialogAnimationType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, animateInDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4170, Thiscall, DialogLayer, animateInRandomSide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3aa0, Thiscall, DialogLayer, displayDialogObject, DialogObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3a40, Thiscall, DialogLayer, displayNextObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, finishCurrentAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3e70, Thiscall, DialogLayer, handleDialogTap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd35e0, Thiscall, DialogLayer, init, DialogObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4010, Thiscall, DialogLayer, onClose, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogLayer, updateChatPlacement, DialogChatPlacement)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3df0, Thiscall, DialogLayer, updateNavButtonFrame, )
		}
	};
}
