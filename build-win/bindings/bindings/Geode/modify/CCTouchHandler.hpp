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

	#ifndef GEODE_STATICS_getEnabledSelectors
		#define GEODE_STATICS_getEnabledSelectors
		GEODE_AS_STATIC_FUNCTION(getEnabledSelectors) 
	#endif

	#ifndef GEODE_STATICS_getPriority
		#define GEODE_STATICS_getPriority
		GEODE_AS_STATIC_FUNCTION(getPriority) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setEnalbedSelectors
		#define GEODE_STATICS_setEnalbedSelectors
		GEODE_AS_STATIC_FUNCTION(setEnalbedSelectors) 
	#endif

	#ifndef GEODE_STATICS_setPriority
		#define GEODE_STATICS_setPriority
		GEODE_AS_STATIC_FUNCTION(setPriority) 
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

	#ifndef GEODE_CONCEPT_CHECK_getEnabledSelectors
		#define GEODE_CONCEPT_CHECK_getEnabledSelectors
		GEODE_CONCEPT_FUNCTION_CHECK(getEnabledSelectors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPriority
		#define GEODE_CONCEPT_CHECK_getPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnalbedSelectors
		#define GEODE_CONCEPT_CHECK_setEnalbedSelectors
		GEODE_CONCEPT_FUNCTION_CHECK(setEnalbedSelectors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPriority
		#define GEODE_CONCEPT_CHECK_setPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setPriority) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchHandler> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchHandler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchHandler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchHandler>>::ModifyBase;
		using Base = cocos2d::CCTouchHandler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTouchHandler@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTouchHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int>::func(&cocos2d::CCTouchHandler::handlerWithDelegate)), Default, cocos2d::CCTouchHandler, handlerWithDelegate, cocos2d::CCTouchDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouchDelegate*, int>::func(&cocos2d::CCTouchHandler::initWithDelegate)), Thiscall, cocos2d::CCTouchHandler, initWithDelegate, cocos2d::CCTouchDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchHandler::getDelegate)), Thiscall, cocos2d::CCTouchHandler, getDelegate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchHandler::getEnabledSelectors)), Thiscall, cocos2d::CCTouchHandler, getEnabledSelectors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchHandler::getPriority)), Thiscall, cocos2d::CCTouchHandler, getPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*>::func(&cocos2d::CCTouchHandler::setDelegate)), Thiscall, cocos2d::CCTouchHandler, setDelegate, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCTouchHandler::setEnalbedSelectors)), Thiscall, cocos2d::CCTouchHandler, setEnalbedSelectors, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCTouchHandler::setPriority)), Thiscall, cocos2d::CCTouchHandler, setPriority, int)
		}
	};
}
