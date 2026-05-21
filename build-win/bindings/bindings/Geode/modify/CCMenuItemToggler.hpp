#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuItemToggler.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_normalTouch
		#define GEODE_STATICS_normalTouch
		GEODE_AS_STATIC_FUNCTION(normalTouch) 
	#endif

	#ifndef GEODE_STATICS_selectedTouch
		#define GEODE_STATICS_selectedTouch
		GEODE_AS_STATIC_FUNCTION(selectedTouch) 
	#endif

	#ifndef GEODE_STATICS_setSizeMult
		#define GEODE_STATICS_setSizeMult
		GEODE_AS_STATIC_FUNCTION(setSizeMult) 
	#endif

	#ifndef GEODE_STATICS_toggle
		#define GEODE_STATICS_toggle
		GEODE_AS_STATIC_FUNCTION(toggle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSize
		#define GEODE_CONCEPT_CHECK_createWithSize
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithStandardSprites
		#define GEODE_CONCEPT_CHECK_createWithStandardSprites
		GEODE_CONCEPT_FUNCTION_CHECK(createWithStandardSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activate
		#define GEODE_CONCEPT_CHECK_activate
		GEODE_CONCEPT_FUNCTION_CHECK(activate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selected
		#define GEODE_CONCEPT_CHECK_selected
		GEODE_CONCEPT_FUNCTION_CHECK(selected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unselected
		#define GEODE_CONCEPT_CHECK_unselected
		GEODE_CONCEPT_FUNCTION_CHECK(unselected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeItem
		#define GEODE_CONCEPT_CHECK_activeItem
		GEODE_CONCEPT_FUNCTION_CHECK(activeItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOn
		#define GEODE_CONCEPT_CHECK_isOn
		GEODE_CONCEPT_FUNCTION_CHECK(isOn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isToggled
		#define GEODE_CONCEPT_CHECK_isToggled
		GEODE_CONCEPT_FUNCTION_CHECK(isToggled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_normalTouch
		#define GEODE_CONCEPT_CHECK_normalTouch
		GEODE_CONCEPT_FUNCTION_CHECK(normalTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedTouch
		#define GEODE_CONCEPT_CHECK_selectedTouch
		GEODE_CONCEPT_FUNCTION_CHECK(selectedTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClickable
		#define GEODE_CONCEPT_CHECK_setClickable
		GEODE_CONCEPT_FUNCTION_CHECK(setClickable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSizeMult
		#define GEODE_CONCEPT_CHECK_setSizeMult
		GEODE_CONCEPT_FUNCTION_CHECK(setSizeMult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggle
		#define GEODE_CONCEPT_CHECK_toggle
		GEODE_CONCEPT_FUNCTION_CHECK(toggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleWithCallback
		#define GEODE_CONCEPT_CHECK_toggleWithCallback
		GEODE_CONCEPT_FUNCTION_CHECK(toggleWithCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSprite
		#define GEODE_CONCEPT_CHECK_updateSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuItemToggler> : ModifyBase<ModifyDerive<Der, CCMenuItemToggler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuItemToggler>>;
		using ModifyBase<ModifyDerive<Der, CCMenuItemToggler>>::ModifyBase;
		using Base = CCMenuItemToggler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45250, Default, CCMenuItemToggler, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, createWithSize, const char*, const char*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, createWithStandardSprites, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45500, Thiscall, CCMenuItemToggler, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454b0, Thiscall, CCMenuItemToggler, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45550, Thiscall, CCMenuItemToggler, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455a0, Thiscall, CCMenuItemToggler, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, activeItem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, isOn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, isToggled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455f0, Thiscall, CCMenuItemToggler, normalTouch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45610, Thiscall, CCMenuItemToggler, selectedTouch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, setClickable, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45480, Thiscall, CCMenuItemToggler, setSizeMult, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45630, Thiscall, CCMenuItemToggler, toggle, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, toggleWithCallback, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemToggler, updateSprite, )
		}
	};
}
