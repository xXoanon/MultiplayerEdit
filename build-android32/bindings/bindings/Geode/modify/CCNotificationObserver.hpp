#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getTarget
		#define GEODE_STATICS_getTarget
		GEODE_AS_STATIC_FUNCTION(getTarget) 
	#endif

	#ifndef GEODE_STATICS_getSelector
		#define GEODE_STATICS_getSelector
		GEODE_AS_STATIC_FUNCTION(getSelector) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_getObject
		#define GEODE_STATICS_getObject
		GEODE_AS_STATIC_FUNCTION(getObject) 
	#endif

	#ifndef GEODE_STATICS_getHandler
		#define GEODE_STATICS_getHandler
		GEODE_AS_STATIC_FUNCTION(getHandler) 
	#endif

	#ifndef GEODE_STATICS_setHandler
		#define GEODE_STATICS_setHandler
		GEODE_AS_STATIC_FUNCTION(setHandler) 
	#endif

	#ifndef GEODE_STATICS_performSelector
		#define GEODE_STATICS_performSelector
		GEODE_AS_STATIC_FUNCTION(performSelector) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getTarget
		#define GEODE_CONCEPT_CHECK_getTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelector
		#define GEODE_CONCEPT_CHECK_getSelector
		GEODE_CONCEPT_FUNCTION_CHECK(getSelector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getName
		#define GEODE_CONCEPT_CHECK_getName
		GEODE_CONCEPT_FUNCTION_CHECK(getName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObject
		#define GEODE_CONCEPT_CHECK_getObject
		GEODE_CONCEPT_FUNCTION_CHECK(getObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHandler
		#define GEODE_CONCEPT_CHECK_getHandler
		GEODE_CONCEPT_FUNCTION_CHECK(getHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHandler
		#define GEODE_CONCEPT_CHECK_setHandler
		GEODE_CONCEPT_FUNCTION_CHECK(setHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performSelector
		#define GEODE_CONCEPT_CHECK_performSelector
		GEODE_CONCEPT_FUNCTION_CHECK(performSelector) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCNotificationObserver> : ModifyBase<ModifyDerive<Der, cocos2d::CCNotificationObserver>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCNotificationObserver>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCNotificationObserver>>::ModifyBase;
		using Base = cocos2d::CCNotificationObserver;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d22CCNotificationObserverC2EPNS_8CCObjectENS_13SEL_CallFuncOEPKcS1_")), Default, cocos2d::CCNotificationObserver, cocos2d::CCObject*, cocos2d::SEL_CallFuncO, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d22CCNotificationObserverD2Ev")), Default, cocos2d::CCNotificationObserver)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNotificationObserver::getTarget)), Default, cocos2d::CCNotificationObserver, getTarget, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNotificationObserver::getSelector)), Default, cocos2d::CCNotificationObserver, getSelector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNotificationObserver::getName)), Default, cocos2d::CCNotificationObserver, getName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNotificationObserver::getObject)), Default, cocos2d::CCNotificationObserver, getObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNotificationObserver::getHandler)), Default, cocos2d::CCNotificationObserver, getHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCNotificationObserver::setHandler)), Default, cocos2d::CCNotificationObserver, setHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCNotificationObserver::performSelector)), Default, cocos2d::CCNotificationObserver, performSelector, cocos2d::CCObject*)
		}
	};
}
