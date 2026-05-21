#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif

	#ifndef GEODE_STATICS_selectSettingClosed
		#define GEODE_STATICS_selectSettingClosed
		GEODE_AS_STATIC_FUNCTION(selectSettingClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBGArt
		#define GEODE_STATICS_onBGArt
		GEODE_AS_STATIC_FUNCTION(onBGArt) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCol
		#define GEODE_STATICS_onCol
		GEODE_AS_STATIC_FUNCTION(onCol) 
	#endif

	#ifndef GEODE_STATICS_onDisable
		#define GEODE_STATICS_onDisable
		GEODE_AS_STATIC_FUNCTION(onDisable) 
	#endif

	#ifndef GEODE_STATICS_onFGArt
		#define GEODE_STATICS_onFGArt
		GEODE_AS_STATIC_FUNCTION(onFGArt) 
	#endif

	#ifndef GEODE_STATICS_onGameplayMode
		#define GEODE_STATICS_onGameplayMode
		GEODE_AS_STATIC_FUNCTION(onGameplayMode) 
	#endif

	#ifndef GEODE_STATICS_onGArt
		#define GEODE_STATICS_onGArt
		GEODE_AS_STATIC_FUNCTION(onGArt) 
	#endif

	#ifndef GEODE_STATICS_onLiveEdit
		#define GEODE_STATICS_onLiveEdit
		GEODE_AS_STATIC_FUNCTION(onLiveEdit) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onOptionToggle
		#define GEODE_STATICS_onOptionToggle
		GEODE_AS_STATIC_FUNCTION(onOptionToggle) 
	#endif

	#ifndef GEODE_STATICS_onSelectFont
		#define GEODE_STATICS_onSelectFont
		GEODE_AS_STATIC_FUNCTION(onSelectFont) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpeed
		#define GEODE_STATICS_onSelectSpeed
		GEODE_AS_STATIC_FUNCTION(onSelectSpeed) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShowPicker
		#define GEODE_STATICS_onShowPicker
		GEODE_AS_STATIC_FUNCTION(onShowPicker) 
	#endif

	#ifndef GEODE_STATICS_onSpeed
		#define GEODE_STATICS_onSpeed
		GEODE_AS_STATIC_FUNCTION(onSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprites
		#define GEODE_STATICS_updateColorSprites
		GEODE_AS_STATIC_FUNCTION(updateColorSprites) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayModeButtons
		#define GEODE_STATICS_updateGameplayModeButtons
		GEODE_AS_STATIC_FUNCTION(updateGameplayModeButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArtClosed
		#define GEODE_CONCEPT_CHECK_selectArtClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectArtClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectSettingClosed
		#define GEODE_CONCEPT_CHECK_selectSettingClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectSettingClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBGArt
		#define GEODE_CONCEPT_CHECK_onBGArt
		GEODE_CONCEPT_FUNCTION_CHECK(onBGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCol
		#define GEODE_CONCEPT_CHECK_onCol
		GEODE_CONCEPT_FUNCTION_CHECK(onCol) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDisable
		#define GEODE_CONCEPT_CHECK_onDisable
		GEODE_CONCEPT_FUNCTION_CHECK(onDisable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFGArt
		#define GEODE_CONCEPT_CHECK_onFGArt
		GEODE_CONCEPT_FUNCTION_CHECK(onFGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGameplayMode
		#define GEODE_CONCEPT_CHECK_onGameplayMode
		GEODE_CONCEPT_FUNCTION_CHECK(onGameplayMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGArt
		#define GEODE_CONCEPT_CHECK_onGArt
		GEODE_CONCEPT_FUNCTION_CHECK(onGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLiveEdit
		#define GEODE_CONCEPT_CHECK_onLiveEdit
		GEODE_CONCEPT_FUNCTION_CHECK(onLiveEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMode
		#define GEODE_CONCEPT_CHECK_onMode
		GEODE_CONCEPT_FUNCTION_CHECK(onMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptionToggle
		#define GEODE_CONCEPT_CHECK_onOptionToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onOptionToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectFont
		#define GEODE_CONCEPT_CHECK_onSelectFont
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectMode
		#define GEODE_CONCEPT_CHECK_onSelectMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpeed
		#define GEODE_CONCEPT_CHECK_onSelectSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowPicker
		#define GEODE_CONCEPT_CHECK_onShowPicker
		GEODE_CONCEPT_FUNCTION_CHECK(onShowPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpeed
		#define GEODE_CONCEPT_CHECK_onSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(onSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPicker
		#define GEODE_CONCEPT_CHECK_showPicker
		GEODE_CONCEPT_FUNCTION_CHECK(showPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorSprite
		#define GEODE_CONCEPT_CHECK_updateColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorSprites
		#define GEODE_CONCEPT_CHECK_updateColorSprites
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameplayModeButtons
		#define GEODE_CONCEPT_CHECK_updateGameplayModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameplayModeButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsLayer> : ModifyBase<ModifyDerive<Der, LevelSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsLayer>>::ModifyBase;
		using Base = LevelSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e830, Default, LevelSettingsLayer, create, LevelSettingsObject*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3212e0, Thiscall, LevelSettingsLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322180, Thiscall, LevelSettingsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3e30, Thiscall, LevelSettingsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321a10, Thiscall, LevelSettingsLayer, colorSelectClosed, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321e30, Thiscall, LevelSettingsLayer, selectArtClosed, SelectArtLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321160, Thiscall, LevelSettingsLayer, selectSettingClosed, SelectSettingLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b850, Thiscall, LevelSettingsLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321610, Thiscall, LevelSettingsLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321360, Thiscall, LevelSettingsLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31ea20, Thiscall, LevelSettingsLayer, init, LevelSettingsObject*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321bf0, Thiscall, LevelSettingsLayer, onBGArt, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3217e0, Thiscall, LevelSettingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3219e0, Thiscall, LevelSettingsLayer, onCol, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3215b0, Thiscall, LevelSettingsLayer, onDisable, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321cc0, Thiscall, LevelSettingsLayer, onFGArt, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x320f30, Thiscall, LevelSettingsLayer, onGameplayMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321c40, Thiscall, LevelSettingsLayer, onGArt, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321920, Thiscall, LevelSettingsLayer, onLiveEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321100, Thiscall, LevelSettingsLayer, onMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3215d0, Thiscall, LevelSettingsLayer, onOptionToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321d10, Thiscall, LevelSettingsLayer, onSelectFont, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onSelectMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onSelectSpeed, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321040, Thiscall, LevelSettingsLayer, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321970, Thiscall, LevelSettingsLayer, onShowPicker, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3210b0, Thiscall, LevelSettingsLayer, onSpeed, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsLayer, showPicker, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321a90, Thiscall, LevelSettingsLayer, updateColorSprite, ColorChannelSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321a20, Thiscall, LevelSettingsLayer, updateColorSprites, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x320f70, Thiscall, LevelSettingsLayer, updateGameplayModeButtons, )
		}
	};
}
