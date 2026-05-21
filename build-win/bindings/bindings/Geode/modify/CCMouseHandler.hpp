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
	struct ModifyDerive<Der, cocos2d::CCMouseHandler> : ModifyBase<ModifyDerive<Der, cocos2d::CCMouseHandler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMouseHandler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMouseHandler>>::ModifyBase;
		using Base = cocos2d::CCMouseHandler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCMouseHandler@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCMouseHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseHandler::handlerWithDelegate)), Default, cocos2d::CCMouseHandler, handlerWithDelegate, cocos2d::CCMouseDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseHandler::initWithDelegate)), Thiscall, cocos2d::CCMouseHandler, initWithDelegate, cocos2d::CCMouseDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMouseHandler::getDelegate)), Thiscall, cocos2d::CCMouseHandler, getDelegate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseHandler::setDelegate)), Thiscall, cocos2d::CCMouseHandler, setDelegate, cocos2d::CCMouseDelegate*)
		}
	};
}
