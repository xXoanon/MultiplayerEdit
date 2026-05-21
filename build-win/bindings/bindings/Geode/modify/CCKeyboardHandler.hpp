#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_handlerWithDelegate
		#define GEODE_STATICS_handlerWithDelegate
		GEODE_AS_STATIC_FUNCTION(handlerWithDelegate) 
	#endif

	#ifndef GEODE_STATICS_initWithDelegate
		#define GEODE_STATICS_initWithDelegate
		GEODE_AS_STATIC_FUNCTION(initWithDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_handlerWithDelegate
		#define GEODE_CONCEPT_CHECK_handlerWithDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(handlerWithDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDelegate
		#define GEODE_CONCEPT_CHECK_initWithDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCKeyboardHandler> : ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardHandler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardHandler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardHandler>>::ModifyBase;
		using Base = cocos2d::CCKeyboardHandler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCKeyboardHandler@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCKeyboardHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardHandler::handlerWithDelegate)), Default, cocos2d::CCKeyboardHandler, handlerWithDelegate, cocos2d::CCKeyboardDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardHandler::initWithDelegate)), Thiscall, cocos2d::CCKeyboardHandler, initWithDelegate, cocos2d::CCKeyboardDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCKeyboardHandler::getDelegate)), Thiscall, cocos2d::CCKeyboardHandler, getDelegate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardHandler::setDelegate)), Thiscall, cocos2d::CCKeyboardHandler, setDelegate, cocos2d::CCKeyboardDelegate*)
		}
	};
}
