#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_isEnabled
		#define GEODE_STATICS_isEnabled
		GEODE_AS_STATIC_FUNCTION(isEnabled) 
	#endif

	#ifndef GEODE_STATICS_setSelected
		#define GEODE_STATICS_setSelected
		GEODE_AS_STATIC_FUNCTION(setSelected) 
	#endif

	#ifndef GEODE_STATICS_isSelected
		#define GEODE_STATICS_isSelected
		GEODE_AS_STATIC_FUNCTION(isSelected) 
	#endif

	#ifndef GEODE_STATICS_setHighlighted
		#define GEODE_STATICS_setHighlighted
		GEODE_AS_STATIC_FUNCTION(setHighlighted) 
	#endif

	#ifndef GEODE_STATICS_isHighlighted
		#define GEODE_STATICS_isHighlighted
		GEODE_AS_STATIC_FUNCTION(isHighlighted) 
	#endif

	#ifndef GEODE_STATICS_needsLayout
		#define GEODE_STATICS_needsLayout
		GEODE_AS_STATIC_FUNCTION(needsLayout) 
	#endif

	#ifndef GEODE_STATICS_sendActionsForControlEvents
		#define GEODE_STATICS_sendActionsForControlEvents
		GEODE_AS_STATIC_FUNCTION(sendActionsForControlEvents) 
	#endif

	#ifndef GEODE_STATICS_addTargetWithActionForControlEvents
		#define GEODE_STATICS_addTargetWithActionForControlEvents
		GEODE_AS_STATIC_FUNCTION(addTargetWithActionForControlEvents) 
	#endif

	#ifndef GEODE_STATICS_removeTargetWithActionForControlEvents
		#define GEODE_STATICS_removeTargetWithActionForControlEvents
		GEODE_AS_STATIC_FUNCTION(removeTargetWithActionForControlEvents) 
	#endif

	#ifndef GEODE_STATICS_getTouchLocation
		#define GEODE_STATICS_getTouchLocation
		GEODE_AS_STATIC_FUNCTION(getTouchLocation) 
	#endif

	#ifndef GEODE_STATICS_isTouchInside
		#define GEODE_STATICS_isTouchInside
		GEODE_AS_STATIC_FUNCTION(isTouchInside) 
	#endif

	#ifndef GEODE_STATICS_addHandleOfControlEvent
		#define GEODE_STATICS_addHandleOfControlEvent
		GEODE_AS_STATIC_FUNCTION(addHandleOfControlEvent) 
	#endif

	#ifndef GEODE_STATICS_addTargetWithActionForControlEvent
		#define GEODE_STATICS_addTargetWithActionForControlEvent
		GEODE_AS_STATIC_FUNCTION(addTargetWithActionForControlEvent) 
	#endif

	#ifndef GEODE_STATICS_dispatchListforControlEvent
		#define GEODE_STATICS_dispatchListforControlEvent
		GEODE_AS_STATIC_FUNCTION(dispatchListforControlEvent) 
	#endif

	#ifndef GEODE_STATICS_getHandleOfControlEvent
		#define GEODE_STATICS_getHandleOfControlEvent
		GEODE_AS_STATIC_FUNCTION(getHandleOfControlEvent) 
	#endif

	#ifndef GEODE_STATICS_hasVisibleParents
		#define GEODE_STATICS_hasVisibleParents
		GEODE_AS_STATIC_FUNCTION(hasVisibleParents) 
	#endif

	#ifndef GEODE_STATICS_removeHandleOfControlEvent
		#define GEODE_STATICS_removeHandleOfControlEvent
		GEODE_AS_STATIC_FUNCTION(removeHandleOfControlEvent) 
	#endif

	#ifndef GEODE_STATICS_removeTargetWithActionForControlEvent
		#define GEODE_STATICS_removeTargetWithActionForControlEvent
		GEODE_AS_STATIC_FUNCTION(removeTargetWithActionForControlEvent) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEnabled
		#define GEODE_CONCEPT_CHECK_isEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSelected
		#define GEODE_CONCEPT_CHECK_setSelected
		GEODE_CONCEPT_FUNCTION_CHECK(setSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSelected
		#define GEODE_CONCEPT_CHECK_isSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHighlighted
		#define GEODE_CONCEPT_CHECK_setHighlighted
		GEODE_CONCEPT_FUNCTION_CHECK(setHighlighted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isHighlighted
		#define GEODE_CONCEPT_CHECK_isHighlighted
		GEODE_CONCEPT_FUNCTION_CHECK(isHighlighted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_needsLayout
		#define GEODE_CONCEPT_CHECK_needsLayout
		GEODE_CONCEPT_FUNCTION_CHECK(needsLayout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sendActionsForControlEvents
		#define GEODE_CONCEPT_CHECK_sendActionsForControlEvents
		GEODE_CONCEPT_FUNCTION_CHECK(sendActionsForControlEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTargetWithActionForControlEvents
		#define GEODE_CONCEPT_CHECK_addTargetWithActionForControlEvents
		GEODE_CONCEPT_FUNCTION_CHECK(addTargetWithActionForControlEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTargetWithActionForControlEvents
		#define GEODE_CONCEPT_CHECK_removeTargetWithActionForControlEvents
		GEODE_CONCEPT_FUNCTION_CHECK(removeTargetWithActionForControlEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchLocation
		#define GEODE_CONCEPT_CHECK_getTouchLocation
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTouchInside
		#define GEODE_CONCEPT_CHECK_isTouchInside
		GEODE_CONCEPT_FUNCTION_CHECK(isTouchInside) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addHandleOfControlEvent
		#define GEODE_CONCEPT_CHECK_addHandleOfControlEvent
		GEODE_CONCEPT_FUNCTION_CHECK(addHandleOfControlEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTargetWithActionForControlEvent
		#define GEODE_CONCEPT_CHECK_addTargetWithActionForControlEvent
		GEODE_CONCEPT_FUNCTION_CHECK(addTargetWithActionForControlEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchListforControlEvent
		#define GEODE_CONCEPT_CHECK_dispatchListforControlEvent
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchListforControlEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHandleOfControlEvent
		#define GEODE_CONCEPT_CHECK_getHandleOfControlEvent
		GEODE_CONCEPT_FUNCTION_CHECK(getHandleOfControlEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasVisibleParents
		#define GEODE_CONCEPT_CHECK_hasVisibleParents
		GEODE_CONCEPT_FUNCTION_CHECK(hasVisibleParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeHandleOfControlEvent
		#define GEODE_CONCEPT_CHECK_removeHandleOfControlEvent
		GEODE_CONCEPT_FUNCTION_CHECK(removeHandleOfControlEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTargetWithActionForControlEvent
		#define GEODE_CONCEPT_CHECK_removeTargetWithActionForControlEvent
		GEODE_CONCEPT_FUNCTION_CHECK(removeTargetWithActionForControlEvent) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControl> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControl>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControl>>::ModifyBase;
		using Base = cocos2d::extension::CCControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCControl@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCControl, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCControl@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCControl)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControl::create)), Default, cocos2d::extension::CCControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::init)), Thiscall, cocos2d::extension::CCControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::onEnter)), Thiscall, cocos2d::extension::CCControl, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::onExit)), Thiscall, cocos2d::extension::CCControl, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::registerWithTouchDispatcher)), Thiscall, cocos2d::extension::CCControl, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControl::setOpacityModifyRGB)), Thiscall, cocos2d::extension::CCControl, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::isOpacityModifyRGB)), Thiscall, cocos2d::extension::CCControl, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControl::setEnabled)), Thiscall, cocos2d::extension::CCControl, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::isEnabled)), Thiscall, cocos2d::extension::CCControl, isEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControl::setSelected)), Thiscall, cocos2d::extension::CCControl, setSelected, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::isSelected)), Thiscall, cocos2d::extension::CCControl, isSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControl::setHighlighted)), Thiscall, cocos2d::extension::CCControl, setHighlighted, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::isHighlighted)), Thiscall, cocos2d::extension::CCControl, isHighlighted, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControl::needsLayout)), Thiscall, cocos2d::extension::CCControl, needsLayout, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControl::sendActionsForControlEvents)), Thiscall, cocos2d::extension::CCControl, sendActionsForControlEvents, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, unsigned int>::func(&cocos2d::extension::CCControl::addTargetWithActionForControlEvents)), Thiscall, cocos2d::extension::CCControl, addTargetWithActionForControlEvents, cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, unsigned int>::func(&cocos2d::extension::CCControl::removeTargetWithActionForControlEvents)), Thiscall, cocos2d::extension::CCControl, removeTargetWithActionForControlEvents, cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*>::func(&cocos2d::extension::CCControl::getTouchLocation)), Thiscall, cocos2d::extension::CCControl, getTouchLocation, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*>::func(&cocos2d::extension::CCControl::isTouchInside)), Thiscall, cocos2d::extension::CCControl, isTouchInside, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCControl::addHandleOfControlEvent)), Thiscall, cocos2d::extension::CCControl, addHandleOfControlEvent, int, cocos2d::extension::CCControlEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCControl::addTargetWithActionForControlEvent)), Thiscall, cocos2d::extension::CCControl, addTargetWithActionForControlEvent, cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, cocos2d::extension::CCControlEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCControl::dispatchListforControlEvent)), Thiscall, cocos2d::extension::CCControl, dispatchListforControlEvent, cocos2d::extension::CCControlEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCControl::getHandleOfControlEvent)), Thiscall, cocos2d::extension::CCControl, getHandleOfControlEvent, cocos2d::extension::CCControlEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControl::hasVisibleParents)), Thiscall, cocos2d::extension::CCControl, hasVisibleParents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCControl::removeHandleOfControlEvent)), Thiscall, cocos2d::extension::CCControl, removeHandleOfControlEvent, cocos2d::extension::CCControlEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, cocos2d::extension::CCControlEvent>::func(&cocos2d::extension::CCControl::removeTargetWithActionForControlEvent)), Thiscall, cocos2d::extension::CCControl, removeTargetWithActionForControlEvent, cocos2d::CCObject*, cocos2d::extension::SEL_CCControlHandler, cocos2d::extension::CCControlEvent)
		}
	};
}
