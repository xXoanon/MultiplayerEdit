#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDispatcher
		#define GEODE_STATICS_sharedDispatcher
		GEODE_AS_STATIC_FUNCTION(sharedDispatcher) 
	#endif

	#ifndef GEODE_STATICS_addDelegate
		#define GEODE_STATICS_addDelegate
		GEODE_AS_STATIC_FUNCTION(addDelegate) 
	#endif

	#ifndef GEODE_STATICS_attachDelegateWithIME
		#define GEODE_STATICS_attachDelegateWithIME
		GEODE_AS_STATIC_FUNCTION(attachDelegateWithIME) 
	#endif

	#ifndef GEODE_STATICS_detachDelegateWithIME
		#define GEODE_STATICS_detachDelegateWithIME
		GEODE_AS_STATIC_FUNCTION(detachDelegateWithIME) 
	#endif

	#ifndef GEODE_STATICS_dispatchDeleteBackward
		#define GEODE_STATICS_dispatchDeleteBackward
		GEODE_AS_STATIC_FUNCTION(dispatchDeleteBackward) 
	#endif

	#ifndef GEODE_STATICS_dispatchDeleteForward
		#define GEODE_STATICS_dispatchDeleteForward
		GEODE_AS_STATIC_FUNCTION(dispatchDeleteForward) 
	#endif

	#ifndef GEODE_STATICS_dispatchInsertText
		#define GEODE_STATICS_dispatchInsertText
		GEODE_AS_STATIC_FUNCTION(dispatchInsertText) 
	#endif

	#ifndef GEODE_STATICS_dispatchKeyboardDidHide
		#define GEODE_STATICS_dispatchKeyboardDidHide
		GEODE_AS_STATIC_FUNCTION(dispatchKeyboardDidHide) 
	#endif

	#ifndef GEODE_STATICS_dispatchKeyboardDidShow
		#define GEODE_STATICS_dispatchKeyboardDidShow
		GEODE_AS_STATIC_FUNCTION(dispatchKeyboardDidShow) 
	#endif

	#ifndef GEODE_STATICS_dispatchKeyboardWillHide
		#define GEODE_STATICS_dispatchKeyboardWillHide
		GEODE_AS_STATIC_FUNCTION(dispatchKeyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_dispatchKeyboardWillShow
		#define GEODE_STATICS_dispatchKeyboardWillShow
		GEODE_AS_STATIC_FUNCTION(dispatchKeyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_getContentText
		#define GEODE_STATICS_getContentText
		GEODE_AS_STATIC_FUNCTION(getContentText) 
	#endif

	#ifndef GEODE_STATICS_hasDelegate
		#define GEODE_STATICS_hasDelegate
		GEODE_AS_STATIC_FUNCTION(hasDelegate) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedDispatcher
		#define GEODE_CONCEPT_CHECK_sharedDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(sharedDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDelegate
		#define GEODE_CONCEPT_CHECK_addDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_attachDelegateWithIME
		#define GEODE_CONCEPT_CHECK_attachDelegateWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(attachDelegateWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_detachDelegateWithIME
		#define GEODE_CONCEPT_CHECK_detachDelegateWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(detachDelegateWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchDeleteBackward
		#define GEODE_CONCEPT_CHECK_dispatchDeleteBackward
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchDeleteBackward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchDeleteForward
		#define GEODE_CONCEPT_CHECK_dispatchDeleteForward
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchDeleteForward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchInsertText
		#define GEODE_CONCEPT_CHECK_dispatchInsertText
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchInsertText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchKeyboardDidHide
		#define GEODE_CONCEPT_CHECK_dispatchKeyboardDidHide
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchKeyboardDidHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchKeyboardDidShow
		#define GEODE_CONCEPT_CHECK_dispatchKeyboardDidShow
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchKeyboardDidShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchKeyboardWillHide
		#define GEODE_CONCEPT_CHECK_dispatchKeyboardWillHide
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchKeyboardWillHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchKeyboardWillShow
		#define GEODE_CONCEPT_CHECK_dispatchKeyboardWillShow
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchKeyboardWillShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentText
		#define GEODE_CONCEPT_CHECK_getContentText
		GEODE_CONCEPT_FUNCTION_CHECK(getContentText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDelegate
		#define GEODE_CONCEPT_CHECK_hasDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(hasDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelegate
		#define GEODE_CONCEPT_CHECK_removeDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelegate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCIMEDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCIMEDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCIMEDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCIMEDispatcher>>::ModifyBase;
		using Base = cocos2d::CCIMEDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCIMEDispatcher@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCIMEDispatcher, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCIMEDispatcher@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCIMEDispatcher)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCIMEDispatcher::sharedDispatcher)), Default, cocos2d::CCIMEDispatcher, sharedDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEDelegate*>::func(&cocos2d::CCIMEDispatcher::addDelegate)), Thiscall, cocos2d::CCIMEDispatcher, addDelegate, cocos2d::CCIMEDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEDelegate*>::func(&cocos2d::CCIMEDispatcher::attachDelegateWithIME)), Thiscall, cocos2d::CCIMEDispatcher, attachDelegateWithIME, cocos2d::CCIMEDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEDelegate*>::func(&cocos2d::CCIMEDispatcher::detachDelegateWithIME)), Thiscall, cocos2d::CCIMEDispatcher, detachDelegateWithIME, cocos2d::CCIMEDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCIMEDispatcher::dispatchDeleteBackward)), Thiscall, cocos2d::CCIMEDispatcher, dispatchDeleteBackward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCIMEDispatcher::dispatchDeleteForward)), Thiscall, cocos2d::CCIMEDispatcher, dispatchDeleteForward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int, cocos2d::enumKeyCodes>::func(&cocos2d::CCIMEDispatcher::dispatchInsertText)), Thiscall, cocos2d::CCIMEDispatcher, dispatchInsertText, char const*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEKeyboardNotificationInfo&>::func(&cocos2d::CCIMEDispatcher::dispatchKeyboardDidHide)), Thiscall, cocos2d::CCIMEDispatcher, dispatchKeyboardDidHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEKeyboardNotificationInfo&>::func(&cocos2d::CCIMEDispatcher::dispatchKeyboardDidShow)), Thiscall, cocos2d::CCIMEDispatcher, dispatchKeyboardDidShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCIMEDispatcher::dispatchKeyboardWillHide)), Thiscall, cocos2d::CCIMEDispatcher, dispatchKeyboardWillHide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEKeyboardNotificationInfo&>::func(&cocos2d::CCIMEDispatcher::dispatchKeyboardWillHide)), Thiscall, cocos2d::CCIMEDispatcher, dispatchKeyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEKeyboardNotificationInfo&>::func(&cocos2d::CCIMEDispatcher::dispatchKeyboardWillShow)), Thiscall, cocos2d::CCIMEDispatcher, dispatchKeyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCIMEDispatcher::getContentText)), Thiscall, cocos2d::CCIMEDispatcher, getContentText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCIMEDispatcher::hasDelegate)), Thiscall, cocos2d::CCIMEDispatcher, hasDelegate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCIMEDelegate*>::func(&cocos2d::CCIMEDispatcher::removeDelegate)), Thiscall, cocos2d::CCIMEDispatcher, removeDelegate, cocos2d::CCIMEDelegate*)
		}
	};
}
