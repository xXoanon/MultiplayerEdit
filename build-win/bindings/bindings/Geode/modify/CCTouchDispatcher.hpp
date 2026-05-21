#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_touchesBegan
		#define GEODE_STATICS_touchesBegan
		GEODE_AS_STATIC_FUNCTION(touchesBegan) 
	#endif

	#ifndef GEODE_STATICS_touchesMoved
		#define GEODE_STATICS_touchesMoved
		GEODE_AS_STATIC_FUNCTION(touchesMoved) 
	#endif

	#ifndef GEODE_STATICS_touchesEnded
		#define GEODE_STATICS_touchesEnded
		GEODE_AS_STATIC_FUNCTION(touchesEnded) 
	#endif

	#ifndef GEODE_STATICS_touchesCancelled
		#define GEODE_STATICS_touchesCancelled
		GEODE_AS_STATIC_FUNCTION(touchesCancelled) 
	#endif

	#ifndef GEODE_STATICS_addPrioTargetedDelegate
		#define GEODE_STATICS_addPrioTargetedDelegate
		GEODE_AS_STATIC_FUNCTION(addPrioTargetedDelegate) 
	#endif

	#ifndef GEODE_STATICS_addStandardDelegate
		#define GEODE_STATICS_addStandardDelegate
		GEODE_AS_STATIC_FUNCTION(addStandardDelegate) 
	#endif

	#ifndef GEODE_STATICS_addTargetedDelegate
		#define GEODE_STATICS_addTargetedDelegate
		GEODE_AS_STATIC_FUNCTION(addTargetedDelegate) 
	#endif

	#ifndef GEODE_STATICS_decrementForcePrio
		#define GEODE_STATICS_decrementForcePrio
		GEODE_AS_STATIC_FUNCTION(decrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_findHandler
		#define GEODE_STATICS_findHandler
		GEODE_AS_STATIC_FUNCTION(findHandler) 
	#endif

	#ifndef GEODE_STATICS_forceAddHandler
		#define GEODE_STATICS_forceAddHandler
		GEODE_AS_STATIC_FUNCTION(forceAddHandler) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveAllDelegates
		#define GEODE_STATICS_forceRemoveAllDelegates
		GEODE_AS_STATIC_FUNCTION(forceRemoveAllDelegates) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveDelegate
		#define GEODE_STATICS_forceRemoveDelegate
		GEODE_AS_STATIC_FUNCTION(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_STATICS_incrementForcePrio
		#define GEODE_STATICS_incrementForcePrio
		GEODE_AS_STATIC_FUNCTION(incrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isDispatchEvents
		#define GEODE_STATICS_isDispatchEvents
		GEODE_AS_STATIC_FUNCTION(isDispatchEvents) 
	#endif

	#ifndef GEODE_STATICS_isUsingForcePrio
		#define GEODE_STATICS_isUsingForcePrio
		GEODE_AS_STATIC_FUNCTION(isUsingForcePrio) 
	#endif

	#ifndef GEODE_STATICS_rearrangeHandlers
		#define GEODE_STATICS_rearrangeHandlers
		GEODE_AS_STATIC_FUNCTION(rearrangeHandlers) 
	#endif

	#ifndef GEODE_STATICS_registerForcePrio
		#define GEODE_STATICS_registerForcePrio
		GEODE_AS_STATIC_FUNCTION(registerForcePrio) 
	#endif

	#ifndef GEODE_STATICS_removeAllDelegates
		#define GEODE_STATICS_removeAllDelegates
		GEODE_AS_STATIC_FUNCTION(removeAllDelegates) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDispatchEvents
		#define GEODE_STATICS_setDispatchEvents
		GEODE_AS_STATIC_FUNCTION(setDispatchEvents) 
	#endif

	#ifndef GEODE_STATICS_setPriority
		#define GEODE_STATICS_setPriority
		GEODE_AS_STATIC_FUNCTION(setPriority) 
	#endif

	#ifndef GEODE_STATICS_touches
		#define GEODE_STATICS_touches
		GEODE_AS_STATIC_FUNCTION(touches) 
	#endif

	#ifndef GEODE_STATICS_unregisterForcePrio
		#define GEODE_STATICS_unregisterForcePrio
		GEODE_AS_STATIC_FUNCTION(unregisterForcePrio) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_touchesBegan
		#define GEODE_CONCEPT_CHECK_touchesBegan
		GEODE_CONCEPT_FUNCTION_CHECK(touchesBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesMoved
		#define GEODE_CONCEPT_CHECK_touchesMoved
		GEODE_CONCEPT_FUNCTION_CHECK(touchesMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesEnded
		#define GEODE_CONCEPT_CHECK_touchesEnded
		GEODE_CONCEPT_FUNCTION_CHECK(touchesEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesCancelled
		#define GEODE_CONCEPT_CHECK_touchesCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(touchesCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPrioTargetedDelegate
		#define GEODE_CONCEPT_CHECK_addPrioTargetedDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addPrioTargetedDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addStandardDelegate
		#define GEODE_CONCEPT_CHECK_addStandardDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addStandardDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTargetedDelegate
		#define GEODE_CONCEPT_CHECK_addTargetedDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addTargetedDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decrementForcePrio
		#define GEODE_CONCEPT_CHECK_decrementForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(decrementForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findHandler
		#define GEODE_CONCEPT_CHECK_findHandler
		GEODE_CONCEPT_FUNCTION_CHECK(findHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceAddHandler
		#define GEODE_CONCEPT_CHECK_forceAddHandler
		GEODE_CONCEPT_FUNCTION_CHECK(forceAddHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceRemoveAllDelegates
		#define GEODE_CONCEPT_CHECK_forceRemoveAllDelegates
		GEODE_CONCEPT_FUNCTION_CHECK(forceRemoveAllDelegates) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceRemoveDelegate
		#define GEODE_CONCEPT_CHECK_forceRemoveDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementForcePrio
		#define GEODE_CONCEPT_CHECK_incrementForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(incrementForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDispatchEvents
		#define GEODE_CONCEPT_CHECK_isDispatchEvents
		GEODE_CONCEPT_FUNCTION_CHECK(isDispatchEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUsingForcePrio
		#define GEODE_CONCEPT_CHECK_isUsingForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(isUsingForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rearrangeHandlers
		#define GEODE_CONCEPT_CHECK_rearrangeHandlers
		GEODE_CONCEPT_FUNCTION_CHECK(rearrangeHandlers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerForcePrio
		#define GEODE_CONCEPT_CHECK_registerForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(registerForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllDelegates
		#define GEODE_CONCEPT_CHECK_removeAllDelegates
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllDelegates) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelegate
		#define GEODE_CONCEPT_CHECK_removeDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDispatchEvents
		#define GEODE_CONCEPT_CHECK_setDispatchEvents
		GEODE_CONCEPT_FUNCTION_CHECK(setDispatchEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPriority
		#define GEODE_CONCEPT_CHECK_setPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touches
		#define GEODE_CONCEPT_CHECK_touches
		GEODE_CONCEPT_FUNCTION_CHECK(touches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterForcePrio
		#define GEODE_CONCEPT_CHECK_unregisterForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterForcePrio) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>>::ModifyBase;
		using Base = cocos2d::CCTouchDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTouchDispatcher@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTouchDispatcher)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesBegan)), Thiscall, cocos2d::CCTouchDispatcher, touchesBegan, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesMoved)), Thiscall, cocos2d::CCTouchDispatcher, touchesMoved, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesEnded)), Thiscall, cocos2d::CCTouchDispatcher, touchesEnded, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesCancelled)), Thiscall, cocos2d::CCTouchDispatcher, touchesCancelled, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int, bool>::func(&cocos2d::CCTouchDispatcher::addPrioTargetedDelegate)), Thiscall, cocos2d::CCTouchDispatcher, addPrioTargetedDelegate, cocos2d::CCTouchDelegate*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int>::func(&cocos2d::CCTouchDispatcher::addStandardDelegate)), Thiscall, cocos2d::CCTouchDispatcher, addStandardDelegate, cocos2d::CCTouchDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*, int, bool>::func(&cocos2d::CCTouchDispatcher::addTargetedDelegate)), Thiscall, cocos2d::CCTouchDispatcher, addTargetedDelegate, cocos2d::CCTouchDelegate*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCTouchDispatcher::decrementForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, decrementForcePrio, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*>::func(&cocos2d::CCTouchDispatcher::findHandler)), Thiscall, cocos2d::CCTouchDispatcher, findHandler, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, cocos2d::CCTouchDelegate*>::func(&cocos2d::CCTouchDispatcher::findHandler)), Thiscall, cocos2d::CCTouchDispatcher, findHandler, cocos2d::CCArray*, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchHandler*, cocos2d::CCArray*>::func(&cocos2d::CCTouchDispatcher::forceAddHandler)), Thiscall, cocos2d::CCTouchDispatcher, forceAddHandler, cocos2d::CCTouchHandler*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::forceRemoveAllDelegates)), Thiscall, cocos2d::CCTouchDispatcher, forceRemoveAllDelegates, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*>::func(&cocos2d::CCTouchDispatcher::forceRemoveDelegate)), Thiscall, cocos2d::CCTouchDispatcher, forceRemoveDelegate, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCTouchDispatcher::incrementForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, incrementForcePrio, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::init)), Thiscall, cocos2d::CCTouchDispatcher, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::isDispatchEvents)), Thiscall, cocos2d::CCTouchDispatcher, isDispatchEvents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::isUsingForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, isUsingForcePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTouchDispatcher::rearrangeHandlers)), Thiscall, cocos2d::CCTouchDispatcher, rearrangeHandlers, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&cocos2d::CCTouchDispatcher::registerForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, registerForcePrio, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::removeAllDelegates)), Thiscall, cocos2d::CCTouchDispatcher, removeAllDelegates, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouchDelegate*>::func(&cocos2d::CCTouchDispatcher::removeDelegate)), Thiscall, cocos2d::CCTouchDispatcher, removeDelegate, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCTouchDispatcher::setDispatchEvents)), Thiscall, cocos2d::CCTouchDispatcher, setDispatchEvents, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::CCTouchDelegate*>::func(&cocos2d::CCTouchDispatcher::setPriority)), Thiscall, cocos2d::CCTouchDispatcher, setPriority, int, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int>::func(&cocos2d::CCTouchDispatcher::touches)), Thiscall, cocos2d::CCTouchDispatcher, touches, cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCTouchDispatcher::unregisterForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, unregisterForcePrio, cocos2d::CCObject*)
		}
	};
}
