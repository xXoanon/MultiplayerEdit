#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSelectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_colorToHex
		#define GEODE_STATICS_colorToHex
		GEODE_AS_STATIC_FUNCTION(colorToHex) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_hexToColor
		#define GEODE_STATICS_hexToColor
		GEODE_AS_STATIC_FUNCTION(hexToColor) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_colorValueChanged
		#define GEODE_STATICS_colorValueChanged
		GEODE_AS_STATIC_FUNCTION(colorValueChanged) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_closeColorSelect
		#define GEODE_STATICS_closeColorSelect
		GEODE_AS_STATIC_FUNCTION(closeColorSelect) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onCopyOpacity
		#define GEODE_STATICS_onCopyOpacity
		GEODE_AS_STATIC_FUNCTION(onCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_onDefault
		#define GEODE_STATICS_onDefault
		GEODE_AS_STATIC_FUNCTION(onDefault) 
	#endif

	#ifndef GEODE_STATICS_onHSVLegacyMode
		#define GEODE_STATICS_onHSVLegacyMode
		GEODE_AS_STATIC_FUNCTION(onHSVLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor1
		#define GEODE_STATICS_onPlayerColor1
		GEODE_AS_STATIC_FUNCTION(onPlayerColor1) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor2
		#define GEODE_STATICS_onPlayerColor2
		GEODE_AS_STATIC_FUNCTION(onPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_onTintGround
		#define GEODE_STATICS_onTintGround
		GEODE_AS_STATIC_FUNCTION(onTintGround) 
	#endif

	#ifndef GEODE_STATICS_onToggleHSVMode
		#define GEODE_STATICS_onToggleHSVMode
		GEODE_AS_STATIC_FUNCTION(onToggleHSVMode) 
	#endif

	#ifndef GEODE_STATICS_onToggleTintMode
		#define GEODE_STATICS_onToggleTintMode
		GEODE_AS_STATIC_FUNCTION(onToggleTintMode) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCopyColor
		#define GEODE_STATICS_onUpdateCopyColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCustomColor
		#define GEODE_STATICS_onUpdateCustomColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateColorLabels
		#define GEODE_STATICS_updateColorLabels
		GEODE_AS_STATIC_FUNCTION(updateColorLabels) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColor
		#define GEODE_STATICS_updateCopyColor
		GEODE_AS_STATIC_FUNCTION(updateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColorTextInputLabel
		#define GEODE_STATICS_updateCopyColorTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorIdx
		#define GEODE_STATICS_updateCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(updateCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateHSVMode
		#define GEODE_STATICS_updateHSVMode
		GEODE_AS_STATIC_FUNCTION(updateHSVMode) 
	#endif

	#ifndef GEODE_STATICS_updateOpacity
		#define GEODE_STATICS_updateOpacity
		GEODE_AS_STATIC_FUNCTION(updateOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityLabel
		#define GEODE_STATICS_updateOpacityLabel
		GEODE_AS_STATIC_FUNCTION(updateOpacityLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_colorToHex
		#define GEODE_CONCEPT_CHECK_colorToHex
		GEODE_CONCEPT_FUNCTION_CHECK(colorToHex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hexToColor
		#define GEODE_CONCEPT_CHECK_hexToColor
		GEODE_CONCEPT_FUNCTION_CHECK(hexToColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorValueChanged
		#define GEODE_CONCEPT_CHECK_colorValueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(colorValueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeColorSelect
		#define GEODE_CONCEPT_CHECK_closeColorSelect
		GEODE_CONCEPT_FUNCTION_CHECK(closeColorSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyOpacity
		#define GEODE_CONCEPT_CHECK_onCopyOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDefault
		#define GEODE_CONCEPT_CHECK_onDefault
		GEODE_CONCEPT_FUNCTION_CHECK(onDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHSVLegacyMode
		#define GEODE_CONCEPT_CHECK_onHSVLegacyMode
		GEODE_CONCEPT_FUNCTION_CHECK(onHSVLegacyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayerColor1
		#define GEODE_CONCEPT_CHECK_onPlayerColor1
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayerColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayerColor2
		#define GEODE_CONCEPT_CHECK_onPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpecialColor
		#define GEODE_CONCEPT_CHECK_onSelectSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTintGround
		#define GEODE_CONCEPT_CHECK_onTintGround
		GEODE_CONCEPT_FUNCTION_CHECK(onTintGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleHSVMode
		#define GEODE_CONCEPT_CHECK_onToggleHSVMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleHSVMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleTintMode
		#define GEODE_CONCEPT_CHECK_onToggleTintMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleTintMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCopyColor
		#define GEODE_CONCEPT_CHECK_onUpdateCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCustomColor
		#define GEODE_CONCEPT_CHECK_onUpdateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectColor
		#define GEODE_CONCEPT_CHECK_selectColor
		GEODE_CONCEPT_FUNCTION_CHECK(selectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorLabels
		#define GEODE_CONCEPT_CHECK_updateColorLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorValue
		#define GEODE_CONCEPT_CHECK_updateColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyColor
		#define GEODE_CONCEPT_CHECK_updateCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyColorTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateCopyColorTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColorIdx
		#define GEODE_CONCEPT_CHECK_updateCustomColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVMode
		#define GEODE_CONCEPT_CHECK_updateHSVMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVValue
		#define GEODE_CONCEPT_CHECK_updateHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacity
		#define GEODE_CONCEPT_CHECK_updateOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityLabel
		#define GEODE_CONCEPT_CHECK_updateOpacityLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSelectPopup> : ModifyBase<ModifyDerive<Der, ColorSelectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSelectPopup>>;
		using ModifyBase<ModifyDerive<Der, ColorSelectPopup>>::ModifyBase;
		using Base = ColorSelectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92790, Default, ColorSelectPopup, colorToHex, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, create, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, create, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8daf0, Default, ColorSelectPopup, create, EffectGameObject*, cocos2d::CCArray*, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91b20, Default, ColorSelectPopup, hexToColor, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92c60, Thiscall, ColorSelectPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90450, Thiscall, ColorSelectPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92d90, Thiscall, ColorSelectPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91810, Thiscall, ColorSelectPopup, colorValueChanged, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93750, Thiscall, ColorSelectPopup, colorSelectClosed, GJSpecialColorSelect*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91800, Thiscall, ColorSelectPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91560, Thiscall, ColorSelectPopup, closeColorSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, getColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8dce0, Thiscall, ColorSelectPopup, init, EffectGameObject*, cocos2d::CCArray*, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90e20, Thiscall, ColorSelectPopup, onCopy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90bc0, Thiscall, ColorSelectPopup, onCopyOpacity, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90f20, Thiscall, ColorSelectPopup, onDefault, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90b30, Thiscall, ColorSelectPopup, onHSVLegacyMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90ea0, Thiscall, ColorSelectPopup, onPaste, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90c60, Thiscall, ColorSelectPopup, onPlayerColor1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90d40, Thiscall, ColorSelectPopup, onPlayerColor2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93550, Thiscall, ColorSelectPopup, onSelectSpecialColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x909e0, Thiscall, ColorSelectPopup, onTintGround, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x935c0, Thiscall, ColorSelectPopup, onToggleHSVMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x90a70, Thiscall, ColorSelectPopup, onToggleTintMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x934e0, Thiscall, ColorSelectPopup, onUpdateCopyColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92d10, Thiscall, ColorSelectPopup, onUpdateCustomColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, selectColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x911f0, Thiscall, ColorSelectPopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91940, Thiscall, ColorSelectPopup, updateColorLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, updateColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x938f0, Thiscall, ColorSelectPopup, updateCopyColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93b60, Thiscall, ColorSelectPopup, updateCopyColorTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93330, Thiscall, ColorSelectPopup, updateCustomColorIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x912e0, Thiscall, ColorSelectPopup, updateDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91420, Thiscall, ColorSelectPopup, updateDurLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93600, Thiscall, ColorSelectPopup, updateHSVMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectPopup, updateHSVValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x91370, Thiscall, ColorSelectPopup, updateOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x914f0, Thiscall, ColorSelectPopup, updateOpacityLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x933d0, Thiscall, ColorSelectPopup, updateTextInputLabel, )
		}
	};
}
