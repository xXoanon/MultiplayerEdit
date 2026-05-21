#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CharacterColorPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_activeColorForMode
		#define GEODE_STATICS_activeColorForMode
		GEODE_AS_STATIC_FUNCTION(activeColorForMode) 
	#endif

	#ifndef GEODE_STATICS_colorForIndex
		#define GEODE_STATICS_colorForIndex
		GEODE_AS_STATIC_FUNCTION(colorForIndex) 
	#endif

	#ifndef GEODE_STATICS_createColorMenu
		#define GEODE_STATICS_createColorMenu
		GEODE_AS_STATIC_FUNCTION(createColorMenu) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor
		#define GEODE_STATICS_onPlayerColor
		GEODE_AS_STATIC_FUNCTION(onPlayerColor) 
	#endif

	#ifndef GEODE_STATICS_toggleGlow
		#define GEODE_STATICS_toggleGlow
		GEODE_AS_STATIC_FUNCTION(toggleGlow) 
	#endif

	#ifndef GEODE_STATICS_toggleShip
		#define GEODE_STATICS_toggleShip
		GEODE_AS_STATIC_FUNCTION(toggleShip) 
	#endif

	#ifndef GEODE_STATICS_updateColorMode
		#define GEODE_STATICS_updateColorMode
		GEODE_AS_STATIC_FUNCTION(updateColorMode) 
	#endif

	#ifndef GEODE_STATICS_updateIconColors
		#define GEODE_STATICS_updateIconColors
		GEODE_AS_STATIC_FUNCTION(updateIconColors) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeColorForMode
		#define GEODE_CONCEPT_CHECK_activeColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(activeColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkColor
		#define GEODE_CONCEPT_CHECK_checkColor
		GEODE_CONCEPT_FUNCTION_CHECK(checkColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForIndex
		#define GEODE_CONCEPT_CHECK_colorForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(colorForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createColorMenu
		#define GEODE_CONCEPT_CHECK_createColorMenu
		GEODE_CONCEPT_FUNCTION_CHECK(createColorMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForIndex
		#define GEODE_CONCEPT_CHECK_offsetForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMode
		#define GEODE_CONCEPT_CHECK_onMode
		GEODE_CONCEPT_FUNCTION_CHECK(onMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayerColor
		#define GEODE_CONCEPT_CHECK_onPlayerColor
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayerColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGlow
		#define GEODE_CONCEPT_CHECK_toggleGlow
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGlowItems
		#define GEODE_CONCEPT_CHECK_toggleGlowItems
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGlowItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleShip
		#define GEODE_CONCEPT_CHECK_toggleShip
		GEODE_CONCEPT_FUNCTION_CHECK(toggleShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorMode
		#define GEODE_CONCEPT_CHECK_updateColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateIconColors
		#define GEODE_CONCEPT_CHECK_updateIconColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateIconColors) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CharacterColorPage> : ModifyBase<ModifyDerive<Der, CharacterColorPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CharacterColorPage>>;
		using ModifyBase<ModifyDerive<Der, CharacterColorPage>>::ModifyBase;
		using Base = CharacterColorPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CharacterColorPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x87f80, Thiscall, CharacterColorPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, CharacterColorPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a7f0, Thiscall, CharacterColorPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, CharacterColorPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x89490, Thiscall, CharacterColorPage, activeColorForMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CharacterColorPage, checkColor, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a0a0, Thiscall, CharacterColorPage, colorForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x88ea0, Thiscall, CharacterColorPage, createColorMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CharacterColorPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CharacterColorPage, offsetForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a7b0, Thiscall, CharacterColorPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x895a0, Thiscall, CharacterColorPage, onMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x89db0, Thiscall, CharacterColorPage, onPlayerColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x88df0, Thiscall, CharacterColorPage, toggleGlow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CharacterColorPage, toggleGlowItems, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x88cd0, Thiscall, CharacterColorPage, toggleShip, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x89840, Thiscall, CharacterColorPage, updateColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a590, Thiscall, CharacterColorPage, updateIconColors, )
		}
	};
}
