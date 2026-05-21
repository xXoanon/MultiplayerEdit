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

	#ifndef GEODE_STATICS_getDisabledColor
		#define GEODE_STATICS_getDisabledColor
		GEODE_AS_STATIC_FUNCTION(getDisabledColor) 
	#endif

	#ifndef GEODE_STATICS_setDisabledColor
		#define GEODE_STATICS_setDisabledColor
		GEODE_AS_STATIC_FUNCTION(setDisabledColor) 
	#endif

	#ifndef GEODE_STATICS_getLabel
		#define GEODE_STATICS_getLabel
		GEODE_AS_STATIC_FUNCTION(getLabel) 
	#endif

	#ifndef GEODE_STATICS_setLabel
		#define GEODE_STATICS_setLabel
		GEODE_AS_STATIC_FUNCTION(setLabel) 
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

	#ifndef GEODE_STATICS_initWithLabel
		#define GEODE_STATICS_initWithLabel
		GEODE_AS_STATIC_FUNCTION(initWithLabel) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisabledColor
		#define GEODE_CONCEPT_CHECK_getDisabledColor
		GEODE_CONCEPT_FUNCTION_CHECK(getDisabledColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisabledColor
		#define GEODE_CONCEPT_CHECK_setDisabledColor
		GEODE_CONCEPT_FUNCTION_CHECK(setDisabledColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLabel
		#define GEODE_CONCEPT_CHECK_getLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabel
		#define GEODE_CONCEPT_CHECK_setLabel
		GEODE_CONCEPT_FUNCTION_CHECK(setLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_initWithLabel
		#define GEODE_CONCEPT_CHECK_initWithLabel
		GEODE_CONCEPT_FUNCTION_CHECK(initWithLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItemLabel> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemLabel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemLabel>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemLabel>>::ModifyBase;
		using Base = cocos2d::CCMenuItemLabel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCMenuItemLabel@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCMenuItemLabel)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenuItemLabel::create)), Default, cocos2d::CCMenuItemLabel, create, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemLabel::create)), Default, cocos2d::CCMenuItemLabel, create, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemLabel::getDisabledColor)), Thiscall, cocos2d::CCMenuItemLabel, getDisabledColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCMenuItemLabel::setDisabledColor)), Thiscall, cocos2d::CCMenuItemLabel, setDisabledColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemLabel::getLabel)), Thiscall, cocos2d::CCMenuItemLabel, getLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenuItemLabel::setLabel)), Thiscall, cocos2d::CCMenuItemLabel, setLabel, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemLabel::activate)), Thiscall, cocos2d::CCMenuItemLabel, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemLabel::selected)), Thiscall, cocos2d::CCMenuItemLabel, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemLabel::unselected)), Thiscall, cocos2d::CCMenuItemLabel, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCMenuItemLabel::setEnabled)), Thiscall, cocos2d::CCMenuItemLabel, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemLabel::initWithLabel)), Thiscall, cocos2d::CCMenuItemLabel, initWithLabel, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCMenuItemLabel::setString)), Thiscall, cocos2d::CCMenuItemLabel, setString, char const*)
		}
	};
}
