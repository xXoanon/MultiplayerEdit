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

    
	#ifndef GEODE_CONCEPT_CHECK_handlerWithDelegate
		#define GEODE_CONCEPT_CHECK_handlerWithDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(handlerWithDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDelegate
		#define GEODE_CONCEPT_CHECK_initWithDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDelegate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCStandardTouchHandler> : ModifyBase<ModifyDerive<Der, cocos2d::CCStandardTouchHandler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCStandardTouchHandler>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCStandardTouchHandler>>::ModifyBase;
		using Base = cocos2d::CCStandardTouchHandler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int>::func(&cocos2d::CCStandardTouchHandler::handlerWithDelegate)), Default, cocos2d::CCStandardTouchHandler, handlerWithDelegate, cocos2d::CCTouchDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouchDelegate*, int>::func(&cocos2d::CCStandardTouchHandler::initWithDelegate)), Thiscall, cocos2d::CCStandardTouchHandler, initWithDelegate, cocos2d::CCTouchDelegate*, int)
		}
	};
}
