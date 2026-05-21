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

	#ifndef GEODE_STATICS_getClaimedTouches
		#define GEODE_STATICS_getClaimedTouches
		GEODE_AS_STATIC_FUNCTION(getClaimedTouches) 
	#endif

	#ifndef GEODE_STATICS_initWithDelegate
		#define GEODE_STATICS_initWithDelegate
		GEODE_AS_STATIC_FUNCTION(initWithDelegate) 
	#endif

	#ifndef GEODE_STATICS_isSwallowsTouches
		#define GEODE_STATICS_isSwallowsTouches
		GEODE_AS_STATIC_FUNCTION(isSwallowsTouches) 
	#endif

	#ifndef GEODE_STATICS_setSwallowsTouches
		#define GEODE_STATICS_setSwallowsTouches
		GEODE_AS_STATIC_FUNCTION(setSwallowsTouches) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_handlerWithDelegate
		#define GEODE_CONCEPT_CHECK_handlerWithDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(handlerWithDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClaimedTouches
		#define GEODE_CONCEPT_CHECK_getClaimedTouches
		GEODE_CONCEPT_FUNCTION_CHECK(getClaimedTouches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDelegate
		#define GEODE_CONCEPT_CHECK_initWithDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSwallowsTouches
		#define GEODE_CONCEPT_CHECK_isSwallowsTouches
		GEODE_CONCEPT_FUNCTION_CHECK(isSwallowsTouches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSwallowsTouches
		#define GEODE_CONCEPT_CHECK_setSwallowsTouches
		GEODE_CONCEPT_FUNCTION_CHECK(setSwallowsTouches) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTargetedTouchHandler> : ModifyBase<ModifyDerive<Der, cocos2d::CCTargetedTouchHandler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTargetedTouchHandler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTargetedTouchHandler>>::ModifyBase;
		using Base = cocos2d::CCTargetedTouchHandler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTargetedTouchHandler@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTargetedTouchHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int, bool>::func(&cocos2d::CCTargetedTouchHandler::handlerWithDelegate)), Default, cocos2d::CCTargetedTouchHandler, handlerWithDelegate, cocos2d::CCTouchDelegate*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTargetedTouchHandler::getClaimedTouches)), Thiscall, cocos2d::CCTargetedTouchHandler, getClaimedTouches, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int, bool>::func(&cocos2d::CCTargetedTouchHandler::initWithDelegate)), Thiscall, cocos2d::CCTargetedTouchHandler, initWithDelegate, cocos2d::CCTouchDelegate*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTargetedTouchHandler::isSwallowsTouches)), Thiscall, cocos2d::CCTargetedTouchHandler, isSwallowsTouches, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCTargetedTouchHandler::setSwallowsTouches)), Thiscall, cocos2d::CCTargetedTouchHandler, setSwallowsTouches, bool)
		}
	};
}
