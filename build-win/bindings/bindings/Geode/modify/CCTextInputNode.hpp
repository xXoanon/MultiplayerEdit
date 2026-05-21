#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onClickTrackNode
		#define GEODE_STATICS_onClickTrackNode
		GEODE_AS_STATIC_FUNCTION(onClickTrackNode) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillShow
		#define GEODE_STATICS_keyboardWillShow
		GEODE_AS_STATIC_FUNCTION(keyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillHide
		#define GEODE_STATICS_keyboardWillHide
		GEODE_AS_STATIC_FUNCTION(keyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldInsertText
		#define GEODE_STATICS_onTextFieldInsertText
		GEODE_AS_STATIC_FUNCTION(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldAttachWithIME
		#define GEODE_STATICS_onTextFieldAttachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDetachWithIME
		#define GEODE_STATICS_onTextFieldDetachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldDetachWithIME) 
	#endif

	#ifndef GEODE_STATICS_addTextArea
		#define GEODE_STATICS_addTextArea
		GEODE_AS_STATIC_FUNCTION(addTextArea) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabelToChar
		#define GEODE_STATICS_updateBlinkLabelToChar
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_STATICS_updateCursorPosition
		#define GEODE_STATICS_updateCursorPosition
		GEODE_AS_STATIC_FUNCTION(updateCursorPosition) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultFontValues
		#define GEODE_STATICS_updateDefaultFontValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClickTrackNode
		#define GEODE_CONCEPT_CHECK_onClickTrackNode
		GEODE_CONCEPT_FUNCTION_CHECK(onClickTrackNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardWillShow
		#define GEODE_CONCEPT_CHECK_keyboardWillShow
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardWillShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardWillHide
		#define GEODE_CONCEPT_CHECK_keyboardWillHide
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardWillHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldInsertText
		#define GEODE_CONCEPT_CHECK_onTextFieldInsertText
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldAttachWithIME
		#define GEODE_CONCEPT_CHECK_onTextFieldAttachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldDetachWithIME
		#define GEODE_CONCEPT_CHECK_onTextFieldDetachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldDetachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTextArea
		#define GEODE_CONCEPT_CHECK_addTextArea
		GEODE_CONCEPT_FUNCTION_CHECK(addTextArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceOffset
		#define GEODE_CONCEPT_CHECK_forceOffset
		GEODE_CONCEPT_FUNCTION_CHECK(forceOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextLabel
		#define GEODE_CONCEPT_CHECK_getTextLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getTextLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLabel
		#define GEODE_CONCEPT_CHECK_refreshLabel
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAllowedChars
		#define GEODE_CONCEPT_CHECK_setAllowedChars
		GEODE_CONCEPT_FUNCTION_CHECK(setAllowedChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelNormalColor
		#define GEODE_CONCEPT_CHECK_setLabelNormalColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelNormalColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelPlaceholderColor
		#define GEODE_CONCEPT_CHECK_setLabelPlaceholderColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelPlaceholderColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelPlaceholderScale
		#define GEODE_CONCEPT_CHECK_setLabelPlaceholderScale
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelPlaceholderScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelLength
		#define GEODE_CONCEPT_CHECK_setMaxLabelLength
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelLength) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelScale
		#define GEODE_CONCEPT_CHECK_setMaxLabelScale
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelWidth
		#define GEODE_CONCEPT_CHECK_setMaxLabelWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlinkLabel
		#define GEODE_CONCEPT_CHECK_updateBlinkLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlinkLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlinkLabelToChar
		#define GEODE_CONCEPT_CHECK_updateBlinkLabelToChar
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCursorPosition
		#define GEODE_CONCEPT_CHECK_updateCursorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(updateCursorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultFontValues
		#define GEODE_CONCEPT_CHECK_updateDefaultFontValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputNode> : ModifyBase<ModifyDerive<Der, CCTextInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputNode>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputNode>>::ModifyBase;
		using Base = CCTextInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, create, float, float, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, create, float, float, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f160, Default, CCTextInputNode, create, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f7a0, Thiscall, CCTextInputNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51330, Thiscall, CCTextInputNode, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x51540, Thiscall, CCTextInputNode, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50480, Thiscall, CCTextInputNode, textChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50460, Thiscall, CCTextInputNode, onClickTrackNode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50280, Thiscall, CCTextInputNode, keyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x503e0, Thiscall, CCTextInputNode, keyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50510, Thiscall, CCTextInputNode, onTextFieldInsertText, cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x508f0, Thiscall, CCTextInputNode, onTextFieldAttachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50c20, Thiscall, CCTextInputNode, onTextFieldDetachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f5b0, Thiscall, CCTextInputNode, addTextArea, TextArea*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, forceOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, getTextLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f370, Thiscall, CCTextInputNode, init, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4fbb0, Thiscall, CCTextInputNode, refreshLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setAllowedChars, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setDelegate, TextInputDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setLabelNormalColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setLabelPlaceholderColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setLabelPlaceholderScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setMaxLabelLength, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setMaxLabelScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setMaxLabelWidth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f810, Thiscall, CCTextInputNode, setString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, updateBlinkLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4fe90, Thiscall, CCTextInputNode, updateBlinkLabelToChar, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50dd0, Thiscall, CCTextInputNode, updateCursorPosition, cocos2d::CCPoint, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f6a0, Thiscall, CCTextInputNode, updateDefaultFontValues, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f8b0, Thiscall, CCTextInputNode, updateLabel, gd::string)
		}
	};
}
