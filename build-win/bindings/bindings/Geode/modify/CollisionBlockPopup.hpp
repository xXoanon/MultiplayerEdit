#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CollisionBlockPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDynamicBlock
		#define GEODE_STATICS_onDynamicBlock
		GEODE_AS_STATIC_FUNCTION(onDynamicBlock) 
	#endif

	#ifndef GEODE_STATICS_onItemIDArrow
		#define GEODE_STATICS_onItemIDArrow
		GEODE_AS_STATIC_FUNCTION(onItemIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onNextItemID
		#define GEODE_STATICS_onNextItemID
		GEODE_AS_STATIC_FUNCTION(onNextItemID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemID
		#define GEODE_STATICS_updateItemID
		GEODE_AS_STATIC_FUNCTION(updateItemID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDynamicBlock
		#define GEODE_CONCEPT_CHECK_onDynamicBlock
		GEODE_CONCEPT_FUNCTION_CHECK(onDynamicBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onItemIDArrow
		#define GEODE_CONCEPT_CHECK_onItemIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onItemIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextItemID
		#define GEODE_CONCEPT_CHECK_onNextItemID
		GEODE_CONCEPT_FUNCTION_CHECK(onNextItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel
		#define GEODE_CONCEPT_CHECK_updateEditorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID
		#define GEODE_CONCEPT_CHECK_updateItemID
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CollisionBlockPopup> : ModifyBase<ModifyDerive<Der, CollisionBlockPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CollisionBlockPopup>>;
		using ModifyBase<ModifyDerive<Der, CollisionBlockPopup>>::ModifyBase;
		using Base = CollisionBlockPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a920, Default, CollisionBlockPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8bbe0, Thiscall, CollisionBlockPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8baf0, Thiscall, CollisionBlockPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b850, Thiscall, CollisionBlockPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b860, Thiscall, CollisionBlockPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b600, Thiscall, CollisionBlockPopup, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b660, Thiscall, CollisionBlockPopup, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CollisionBlockPopup, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CollisionBlockPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8aa40, Thiscall, CollisionBlockPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8bb40, Thiscall, CollisionBlockPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b5a0, Thiscall, CollisionBlockPopup, onDynamicBlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b650, Thiscall, CollisionBlockPopup, onItemIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b6a0, Thiscall, CollisionBlockPopup, onNextItemID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b950, Thiscall, CollisionBlockPopup, updateEditorLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8ba50, Thiscall, CollisionBlockPopup, updateItemID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b9d0, Thiscall, CollisionBlockPopup, updateTextInputLabel, )
		}
	};
}
