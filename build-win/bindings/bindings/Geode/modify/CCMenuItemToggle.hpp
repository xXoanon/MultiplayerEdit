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

	#ifndef GEODE_STATICS_createWithTarget
		#define GEODE_STATICS_createWithTarget
		GEODE_AS_STATIC_FUNCTION(createWithTarget) 
	#endif

	#ifndef GEODE_STATICS_getSelectedIndex
		#define GEODE_STATICS_getSelectedIndex
		GEODE_AS_STATIC_FUNCTION(getSelectedIndex) 
	#endif

	#ifndef GEODE_STATICS_setSelectedIndex
		#define GEODE_STATICS_setSelectedIndex
		GEODE_AS_STATIC_FUNCTION(setSelectedIndex) 
	#endif

	#ifndef GEODE_STATICS_getSubItems
		#define GEODE_STATICS_getSubItems
		GEODE_AS_STATIC_FUNCTION(getSubItems) 
	#endif

	#ifndef GEODE_STATICS_setSubItems
		#define GEODE_STATICS_setSubItems
		GEODE_AS_STATIC_FUNCTION(setSubItems) 
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

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_addSubItem
		#define GEODE_STATICS_addSubItem
		GEODE_AS_STATIC_FUNCTION(addSubItem) 
	#endif

	#ifndef GEODE_STATICS_initWithItem
		#define GEODE_STATICS_initWithItem
		GEODE_AS_STATIC_FUNCTION(initWithItem) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

	#ifndef GEODE_STATICS_selectedItem
		#define GEODE_STATICS_selectedItem
		GEODE_AS_STATIC_FUNCTION(selectedItem) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTarget
		#define GEODE_CONCEPT_CHECK_createWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedIndex
		#define GEODE_CONCEPT_CHECK_getSelectedIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSelectedIndex
		#define GEODE_CONCEPT_CHECK_setSelectedIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setSelectedIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSubItems
		#define GEODE_CONCEPT_CHECK_getSubItems
		GEODE_CONCEPT_FUNCTION_CHECK(getSubItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSubItems
		#define GEODE_CONCEPT_CHECK_setSubItems
		GEODE_CONCEPT_FUNCTION_CHECK(setSubItems) 
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

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSubItem
		#define GEODE_CONCEPT_CHECK_addSubItem
		GEODE_CONCEPT_FUNCTION_CHECK(addSubItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithItem
		#define GEODE_CONCEPT_CHECK_initWithItem
		GEODE_CONCEPT_FUNCTION_CHECK(initWithItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTarget
		#define GEODE_CONCEPT_CHECK_initWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedItem
		#define GEODE_CONCEPT_CHECK_selectedItem
		GEODE_CONCEPT_FUNCTION_CHECK(selectedItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItemToggle> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemToggle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemToggle>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemToggle>>::ModifyBase;
		using Base = cocos2d::CCMenuItemToggle;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCMenuItemToggle@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCMenuItemToggle)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::create)), Default, cocos2d::CCMenuItemToggle, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMenuItem*>::func(&cocos2d::CCMenuItemToggle::create)), Default, cocos2d::CCMenuItemToggle, create, cocos2d::CCMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCArray*>::func(&cocos2d::CCMenuItemToggle::createWithTarget)), Default, cocos2d::CCMenuItemToggle, createWithTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::getSelectedIndex)), Thiscall, cocos2d::CCMenuItemToggle, getSelectedIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCMenuItemToggle::setSelectedIndex)), Thiscall, cocos2d::CCMenuItemToggle, setSelectedIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::getSubItems)), Thiscall, cocos2d::CCMenuItemToggle, getSubItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCMenuItemToggle::setSubItems)), Thiscall, cocos2d::CCMenuItemToggle, setSubItems, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::activate)), Thiscall, cocos2d::CCMenuItemToggle, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::selected)), Thiscall, cocos2d::CCMenuItemToggle, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::unselected)), Thiscall, cocos2d::CCMenuItemToggle, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCMenuItemToggle::setEnabled)), Thiscall, cocos2d::CCMenuItemToggle, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMenuItem*>::func(&cocos2d::CCMenuItemToggle::addSubItem)), Thiscall, cocos2d::CCMenuItemToggle, addSubItem, cocos2d::CCMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMenuItem*>::func(&cocos2d::CCMenuItemToggle::initWithItem)), Thiscall, cocos2d::CCMenuItemToggle, initWithItem, cocos2d::CCMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCMenuItem*, va_list>::func(&cocos2d::CCMenuItemToggle::initWithTarget)), Thiscall, cocos2d::CCMenuItemToggle, initWithTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::CCMenuItem*, va_list)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemToggle::selectedItem)), Thiscall, cocos2d::CCMenuItemToggle, selectedItem, )
		}
	};
}
