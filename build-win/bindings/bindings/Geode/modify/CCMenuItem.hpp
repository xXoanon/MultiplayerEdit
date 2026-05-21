#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

	#ifndef GEODE_STATICS_registerScriptTapHandler
		#define GEODE_STATICS_registerScriptTapHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptTapHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptTapHandler
		#define GEODE_STATICS_unregisterScriptTapHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptTapHandler) 
	#endif

	#ifndef GEODE_STATICS_isEnabled
		#define GEODE_STATICS_isEnabled
		GEODE_AS_STATIC_FUNCTION(isEnabled) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_isSelected
		#define GEODE_STATICS_isSelected
		GEODE_AS_STATIC_FUNCTION(isSelected) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

	#ifndef GEODE_STATICS_rect
		#define GEODE_STATICS_rect
		GEODE_AS_STATIC_FUNCTION(rect) 
	#endif

	#ifndef GEODE_STATICS_setTarget
		#define GEODE_STATICS_setTarget
		GEODE_AS_STATIC_FUNCTION(setTarget) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activate
		#define GEODE_CONCEPT_CHECK_activate
		GEODE_CONCEPT_FUNCTION_CHECK(activate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selected
		#define GEODE_CONCEPT_CHECK_selected
		GEODE_CONCEPT_FUNCTION_CHECK(selected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unselected
		#define GEODE_CONCEPT_CHECK_unselected
		GEODE_CONCEPT_FUNCTION_CHECK(unselected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerScriptTapHandler
		#define GEODE_CONCEPT_CHECK_registerScriptTapHandler
		GEODE_CONCEPT_FUNCTION_CHECK(registerScriptTapHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterScriptTapHandler
		#define GEODE_CONCEPT_CHECK_unregisterScriptTapHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterScriptTapHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEnabled
		#define GEODE_CONCEPT_CHECK_isEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSelected
		#define GEODE_CONCEPT_CHECK_isSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTarget
		#define GEODE_CONCEPT_CHECK_initWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rect
		#define GEODE_CONCEPT_CHECK_rect
		GEODE_CONCEPT_FUNCTION_CHECK(rect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTarget
		#define GEODE_CONCEPT_CHECK_setTarget
		GEODE_CONCEPT_FUNCTION_CHECK(setTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItem> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItem>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItem>>::ModifyBase;
		using Base = cocos2d::CCMenuItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCMenuItem@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCMenuItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItem::create)), Default, cocos2d::CCMenuItem, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItem::create)), Default, cocos2d::CCMenuItem, create, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItem::activate)), Thiscall, cocos2d::CCMenuItem, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItem::selected)), Thiscall, cocos2d::CCMenuItem, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItem::unselected)), Thiscall, cocos2d::CCMenuItem, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCMenuItem::registerScriptTapHandler)), Thiscall, cocos2d::CCMenuItem, registerScriptTapHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItem::unregisterScriptTapHandler)), Thiscall, cocos2d::CCMenuItem, unregisterScriptTapHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItem::isEnabled)), Thiscall, cocos2d::CCMenuItem, isEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCMenuItem::setEnabled)), Thiscall, cocos2d::CCMenuItem, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItem::isSelected)), Thiscall, cocos2d::CCMenuItem, isSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItem::initWithTarget)), Thiscall, cocos2d::CCMenuItem, initWithTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItem::rect)), Thiscall, cocos2d::CCMenuItem, rect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItem::setTarget)), Thiscall, cocos2d::CCMenuItem, setTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
		}
	};
}
