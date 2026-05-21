#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UILayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
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

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_handleKeypress
		#define GEODE_STATICS_handleKeypress
		GEODE_AS_STATIC_FUNCTION(handleKeypress) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCheck
		#define GEODE_STATICS_onCheck
		GEODE_AS_STATIC_FUNCTION(onCheck) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCheck
		#define GEODE_STATICS_onDeleteCheck
		GEODE_AS_STATIC_FUNCTION(onDeleteCheck) 
	#endif

	#ifndef GEODE_STATICS_onPause
		#define GEODE_STATICS_onPause
		GEODE_AS_STATIC_FUNCTION(onPause) 
	#endif

	#ifndef GEODE_STATICS_processUINodesTouch
		#define GEODE_STATICS_processUINodesTouch
		GEODE_AS_STATIC_FUNCTION(processUINodesTouch) 
	#endif

	#ifndef GEODE_STATICS_processUINodeTouch
		#define GEODE_STATICS_processUINodeTouch
		GEODE_AS_STATIC_FUNCTION(processUINodeTouch) 
	#endif

	#ifndef GEODE_STATICS_resetUINodeState
		#define GEODE_STATICS_resetUINodeState
		GEODE_AS_STATIC_FUNCTION(resetUINodeState) 
	#endif

	#ifndef GEODE_STATICS_toggleCheckpointsMenu
		#define GEODE_STATICS_toggleCheckpointsMenu
		GEODE_AS_STATIC_FUNCTION(toggleCheckpointsMenu) 
	#endif

	#ifndef GEODE_STATICS_toggleMenuVisibility
		#define GEODE_STATICS_toggleMenuVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMenuVisibility) 
	#endif

	#ifndef GEODE_STATICS_togglePlatformerMode
		#define GEODE_STATICS_togglePlatformerMode
		GEODE_AS_STATIC_FUNCTION(togglePlatformerMode) 
	#endif

	#ifndef GEODE_STATICS_updateCheckState
		#define GEODE_STATICS_updateCheckState
		GEODE_AS_STATIC_FUNCTION(updateCheckState) 
	#endif

	#ifndef GEODE_STATICS_updateUINodeVisibility
		#define GEODE_STATICS_updateUINodeVisibility
		GEODE_AS_STATIC_FUNCTION(updateUINodeVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableMenu
		#define GEODE_CONCEPT_CHECK_disableMenu
		GEODE_CONCEPT_FUNCTION_CHECK(disableMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doPause
		#define GEODE_CONCEPT_CHECK_doPause
		GEODE_CONCEPT_FUNCTION_CHECK(doPause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorPlaytest
		#define GEODE_CONCEPT_CHECK_editorPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(editorPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableEditorMode
		#define GEODE_CONCEPT_CHECK_enableEditorMode
		GEODE_CONCEPT_FUNCTION_CHECK(enableEditorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableMenu
		#define GEODE_CONCEPT_CHECK_enableMenu
		GEODE_CONCEPT_FUNCTION_CHECK(enableMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleKeypress
		#define GEODE_CONCEPT_CHECK_handleKeypress
		GEODE_CONCEPT_FUNCTION_CHECK(handleKeypress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isJumpButtonPressed
		#define GEODE_CONCEPT_CHECK_isJumpButtonPressed
		GEODE_CONCEPT_FUNCTION_CHECK(isJumpButtonPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCheck
		#define GEODE_CONCEPT_CHECK_onCheck
		GEODE_CONCEPT_FUNCTION_CHECK(onCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCheck
		#define GEODE_CONCEPT_CHECK_onDeleteCheck
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPause
		#define GEODE_CONCEPT_CHECK_onPause
		GEODE_CONCEPT_FUNCTION_CHECK(onPause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processUINodesTouch
		#define GEODE_CONCEPT_CHECK_processUINodesTouch
		GEODE_CONCEPT_FUNCTION_CHECK(processUINodesTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processUINodeTouch
		#define GEODE_CONCEPT_CHECK_processUINodeTouch
		GEODE_CONCEPT_FUNCTION_CHECK(processUINodeTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshDpad
		#define GEODE_CONCEPT_CHECK_refreshDpad
		GEODE_CONCEPT_FUNCTION_CHECK(refreshDpad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllButtons
		#define GEODE_CONCEPT_CHECK_resetAllButtons
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUINodeState
		#define GEODE_CONCEPT_CHECK_resetUINodeState
		GEODE_CONCEPT_FUNCTION_CHECK(resetUINodeState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCheckpointsMenu
		#define GEODE_CONCEPT_CHECK_toggleCheckpointsMenu
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCheckpointsMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMenuVisibility
		#define GEODE_CONCEPT_CHECK_toggleMenuVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMenuVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlatformerMode
		#define GEODE_CONCEPT_CHECK_togglePlatformerMode
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlatformerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCheckState
		#define GEODE_CONCEPT_CHECK_updateCheckState
		GEODE_CONCEPT_FUNCTION_CHECK(updateCheckState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDualMode
		#define GEODE_CONCEPT_CHECK_updateDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUINodeVisibility
		#define GEODE_CONCEPT_CHECK_updateUINodeVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateUINodeVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UILayer> : ModifyBase<ModifyDerive<Der, UILayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UILayer>>;
		using ModifyBase<ModifyDerive<Der, UILayer>>::ModifyBase;
		using Base = UILayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, create, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce230, Thiscall, UILayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce420, Thiscall, UILayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce440, Thiscall, UILayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, UILayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b7d0, Thiscall, UILayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cde90, Thiscall, UILayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cde50, Thiscall, UILayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cde70, Thiscall, UILayer, keyUp, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, disableMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, doPause, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, editorPlaytest, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, enableEditorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, enableMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cd830, Thiscall, UILayer, handleKeypress, cocos2d::enumKeyCodes, bool, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ccb00, Thiscall, UILayer, init, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, isJumpButtonPressed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, isJumpButtonPressed, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce060, Thiscall, UILayer, onCheck, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce0e0, Thiscall, UILayer, onDeleteCheck, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cdf50, Thiscall, UILayer, onPause, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce520, Thiscall, UILayer, processUINodesTouch, GJUITouchEvent, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce5f0, Thiscall, UILayer, processUINodeTouch, GJUITouchEvent, int, cocos2d::CCPoint, GJUINode*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, refreshDpad, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, resetAllButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cd6c0, Thiscall, UILayer, resetUINodeState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cded0, Thiscall, UILayer, toggleCheckpointsMenu, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ce150, Thiscall, UILayer, toggleMenuVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cd610, Thiscall, UILayer, togglePlatformerMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cd420, Thiscall, UILayer, updateCheckState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UILayer, updateDualMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cd7d0, Thiscall, UILayer, updateUINodeVisibility, bool)
		}
	};
}
