#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_textFieldWithPlaceHolder
		#define GEODE_STATICS_textFieldWithPlaceHolder
		GEODE_AS_STATIC_FUNCTION(textFieldWithPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getColorSpaceHolder
		#define GEODE_STATICS_getColorSpaceHolder
		GEODE_AS_STATIC_FUNCTION(getColorSpaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setColorSpaceHolder
		#define GEODE_STATICS_setColorSpaceHolder
		GEODE_AS_STATIC_FUNCTION(setColorSpaceHolder) 
	#endif

	#ifndef GEODE_STATICS_getPlaceHolder
		#define GEODE_STATICS_getPlaceHolder
		GEODE_AS_STATIC_FUNCTION(getPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setPlaceHolder
		#define GEODE_STATICS_setPlaceHolder
		GEODE_AS_STATIC_FUNCTION(setPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setSecureTextEntry
		#define GEODE_STATICS_setSecureTextEntry
		GEODE_AS_STATIC_FUNCTION(setSecureTextEntry) 
	#endif

	#ifndef GEODE_STATICS_isSecureTextEntry
		#define GEODE_STATICS_isSecureTextEntry
		GEODE_AS_STATIC_FUNCTION(isSecureTextEntry) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_attachWithIME
		#define GEODE_STATICS_attachWithIME
		GEODE_AS_STATIC_FUNCTION(attachWithIME) 
	#endif

	#ifndef GEODE_STATICS_detachWithIME
		#define GEODE_STATICS_detachWithIME
		GEODE_AS_STATIC_FUNCTION(detachWithIME) 
	#endif

	#ifndef GEODE_STATICS_canAttachWithIME
		#define GEODE_STATICS_canAttachWithIME
		GEODE_AS_STATIC_FUNCTION(canAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_canDetachWithIME
		#define GEODE_STATICS_canDetachWithIME
		GEODE_AS_STATIC_FUNCTION(canDetachWithIME) 
	#endif

	#ifndef GEODE_STATICS_insertText
		#define GEODE_STATICS_insertText
		GEODE_AS_STATIC_FUNCTION(insertText) 
	#endif

	#ifndef GEODE_STATICS_deleteBackward
		#define GEODE_STATICS_deleteBackward
		GEODE_AS_STATIC_FUNCTION(deleteBackward) 
	#endif

	#ifndef GEODE_STATICS_deleteForward
		#define GEODE_STATICS_deleteForward
		GEODE_AS_STATIC_FUNCTION(deleteForward) 
	#endif

	#ifndef GEODE_STATICS_getContentText
		#define GEODE_STATICS_getContentText
		GEODE_AS_STATIC_FUNCTION(getContentText) 
	#endif

	#ifndef GEODE_STATICS_initWithPlaceHolder
		#define GEODE_STATICS_initWithPlaceHolder
		GEODE_AS_STATIC_FUNCTION(initWithPlaceHolder) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_textFieldWithPlaceHolder
		#define GEODE_CONCEPT_CHECK_textFieldWithPlaceHolder
		GEODE_CONCEPT_FUNCTION_CHECK(textFieldWithPlaceHolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorSpaceHolder
		#define GEODE_CONCEPT_CHECK_getColorSpaceHolder
		GEODE_CONCEPT_FUNCTION_CHECK(getColorSpaceHolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorSpaceHolder
		#define GEODE_CONCEPT_CHECK_setColorSpaceHolder
		GEODE_CONCEPT_FUNCTION_CHECK(setColorSpaceHolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlaceHolder
		#define GEODE_CONCEPT_CHECK_getPlaceHolder
		GEODE_CONCEPT_FUNCTION_CHECK(getPlaceHolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlaceHolder
		#define GEODE_CONCEPT_CHECK_setPlaceHolder
		GEODE_CONCEPT_FUNCTION_CHECK(setPlaceHolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecureTextEntry
		#define GEODE_CONCEPT_CHECK_setSecureTextEntry
		GEODE_CONCEPT_FUNCTION_CHECK(setSecureTextEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSecureTextEntry
		#define GEODE_CONCEPT_CHECK_isSecureTextEntry
		GEODE_CONCEPT_FUNCTION_CHECK(isSecureTextEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_attachWithIME
		#define GEODE_CONCEPT_CHECK_attachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(attachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_detachWithIME
		#define GEODE_CONCEPT_CHECK_detachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(detachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAttachWithIME
		#define GEODE_CONCEPT_CHECK_canAttachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(canAttachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canDetachWithIME
		#define GEODE_CONCEPT_CHECK_canDetachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(canDetachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertText
		#define GEODE_CONCEPT_CHECK_insertText
		GEODE_CONCEPT_FUNCTION_CHECK(insertText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteBackward
		#define GEODE_CONCEPT_CHECK_deleteBackward
		GEODE_CONCEPT_FUNCTION_CHECK(deleteBackward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteForward
		#define GEODE_CONCEPT_CHECK_deleteForward
		GEODE_CONCEPT_FUNCTION_CHECK(deleteForward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentText
		#define GEODE_CONCEPT_CHECK_getContentText
		GEODE_CONCEPT_FUNCTION_CHECK(getContentText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithPlaceHolder
		#define GEODE_CONCEPT_CHECK_initWithPlaceHolder
		GEODE_CONCEPT_FUNCTION_CHECK(initWithPlaceHolder) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTextFieldTTF> : ModifyBase<ModifyDerive<Der, cocos2d::CCTextFieldTTF>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTextFieldTTF>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTextFieldTTF>>::ModifyBase;
		using Base = cocos2d::CCTextFieldTTF;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTextFieldTTF@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTextFieldTTF, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTextFieldTTF@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTextFieldTTF)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, const char*, float>::func(&cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder)), Default, cocos2d::CCTextFieldTTF, textFieldWithPlaceHolder, const char*, const char*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, const cocos2d::CCSize&, cocos2d::CCTextAlignment, const char*, float>::func(&cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder)), Default, cocos2d::CCTextFieldTTF, textFieldWithPlaceHolder, const char*, const cocos2d::CCSize&, cocos2d::CCTextAlignment, const char*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::draw)), Thiscall, cocos2d::CCTextFieldTTF, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::getColorSpaceHolder)), Thiscall, cocos2d::CCTextFieldTTF, getColorSpaceHolder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const cocos2d::ccColor3B&>::func(&cocos2d::CCTextFieldTTF::setColorSpaceHolder)), Thiscall, cocos2d::CCTextFieldTTF, setColorSpaceHolder, const cocos2d::ccColor3B&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::getPlaceHolder)), Thiscall, cocos2d::CCTextFieldTTF, getPlaceHolder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*>::func(&cocos2d::CCTextFieldTTF::setPlaceHolder)), Thiscall, cocos2d::CCTextFieldTTF, setPlaceHolder, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCTextFieldTTF::setSecureTextEntry)), Thiscall, cocos2d::CCTextFieldTTF, setSecureTextEntry, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::isSecureTextEntry)), Thiscall, cocos2d::CCTextFieldTTF, isSecureTextEntry, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*>::func(&cocos2d::CCTextFieldTTF::setString)), Thiscall, cocos2d::CCTextFieldTTF, setString, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::getString)), Thiscall, cocos2d::CCTextFieldTTF, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::attachWithIME)), Thiscall, cocos2d::CCTextFieldTTF, attachWithIME, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::detachWithIME)), Thiscall, cocos2d::CCTextFieldTTF, detachWithIME, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::canAttachWithIME)), Thiscall, cocos2d::CCTextFieldTTF, canAttachWithIME, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::canDetachWithIME)), Thiscall, cocos2d::CCTextFieldTTF, canDetachWithIME, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*, int, cocos2d::enumKeyCodes>::func(&cocos2d::CCTextFieldTTF::insertText)), Thiscall, cocos2d::CCTextFieldTTF, insertText, const char*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::deleteBackward)), Thiscall, cocos2d::CCTextFieldTTF, deleteBackward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::deleteForward)), Thiscall, cocos2d::CCTextFieldTTF, deleteForward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTextFieldTTF::getContentText)), Thiscall, cocos2d::CCTextFieldTTF, getContentText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, const char*, float>::func(&cocos2d::CCTextFieldTTF::initWithPlaceHolder)), Thiscall, cocos2d::CCTextFieldTTF, initWithPlaceHolder, const char*, const char*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, const cocos2d::CCSize&, cocos2d::CCTextAlignment, const char*, float>::func(&cocos2d::CCTextFieldTTF::initWithPlaceHolder)), Thiscall, cocos2d::CCTextFieldTTF, initWithPlaceHolder, const char*, const cocos2d::CCSize&, cocos2d::CCTextAlignment, const char*, float)
		}
	};
}
