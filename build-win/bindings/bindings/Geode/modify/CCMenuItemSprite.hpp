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

	#ifndef GEODE_STATICS_getNormalImage
		#define GEODE_STATICS_getNormalImage
		GEODE_AS_STATIC_FUNCTION(getNormalImage) 
	#endif

	#ifndef GEODE_STATICS_setNormalImage
		#define GEODE_STATICS_setNormalImage
		GEODE_AS_STATIC_FUNCTION(setNormalImage) 
	#endif

	#ifndef GEODE_STATICS_getSelectedImage
		#define GEODE_STATICS_getSelectedImage
		GEODE_AS_STATIC_FUNCTION(getSelectedImage) 
	#endif

	#ifndef GEODE_STATICS_setSelectedImage
		#define GEODE_STATICS_setSelectedImage
		GEODE_AS_STATIC_FUNCTION(setSelectedImage) 
	#endif

	#ifndef GEODE_STATICS_getDisabledImage
		#define GEODE_STATICS_getDisabledImage
		GEODE_AS_STATIC_FUNCTION(getDisabledImage) 
	#endif

	#ifndef GEODE_STATICS_setDisabledImage
		#define GEODE_STATICS_setDisabledImage
		GEODE_AS_STATIC_FUNCTION(setDisabledImage) 
	#endif

	#ifndef GEODE_STATICS_updateImagesVisibility
		#define GEODE_STATICS_updateImagesVisibility
		GEODE_AS_STATIC_FUNCTION(updateImagesVisibility) 
	#endif

	#ifndef GEODE_STATICS_initWithNormalSprite
		#define GEODE_STATICS_initWithNormalSprite
		GEODE_AS_STATIC_FUNCTION(initWithNormalSprite) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_getNormalImage
		#define GEODE_CONCEPT_CHECK_getNormalImage
		GEODE_CONCEPT_FUNCTION_CHECK(getNormalImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNormalImage
		#define GEODE_CONCEPT_CHECK_setNormalImage
		GEODE_CONCEPT_FUNCTION_CHECK(setNormalImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedImage
		#define GEODE_CONCEPT_CHECK_getSelectedImage
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSelectedImage
		#define GEODE_CONCEPT_CHECK_setSelectedImage
		GEODE_CONCEPT_FUNCTION_CHECK(setSelectedImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisabledImage
		#define GEODE_CONCEPT_CHECK_getDisabledImage
		GEODE_CONCEPT_FUNCTION_CHECK(getDisabledImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisabledImage
		#define GEODE_CONCEPT_CHECK_setDisabledImage
		GEODE_CONCEPT_FUNCTION_CHECK(setDisabledImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateImagesVisibility
		#define GEODE_CONCEPT_CHECK_updateImagesVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateImagesVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithNormalSprite
		#define GEODE_CONCEPT_CHECK_initWithNormalSprite
		GEODE_CONCEPT_FUNCTION_CHECK(initWithNormalSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItemSprite> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemSprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemSprite>>::ModifyBase;
		using Base = cocos2d::CCMenuItemSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*>::func(&cocos2d::CCMenuItemSprite::create)), Default, cocos2d::CCMenuItemSprite, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemSprite::create)), Default, cocos2d::CCMenuItemSprite, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemSprite::create)), Default, cocos2d::CCMenuItemSprite, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemSprite::selected)), Thiscall, cocos2d::CCMenuItemSprite, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemSprite::unselected)), Thiscall, cocos2d::CCMenuItemSprite, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCMenuItemSprite::setEnabled)), Thiscall, cocos2d::CCMenuItemSprite, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemSprite::getNormalImage)), Thiscall, cocos2d::CCMenuItemSprite, getNormalImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenuItemSprite::setNormalImage)), Thiscall, cocos2d::CCMenuItemSprite, setNormalImage, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemSprite::getSelectedImage)), Thiscall, cocos2d::CCMenuItemSprite, getSelectedImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenuItemSprite::setSelectedImage)), Thiscall, cocos2d::CCMenuItemSprite, setSelectedImage, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemSprite::getDisabledImage)), Thiscall, cocos2d::CCMenuItemSprite, getDisabledImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenuItemSprite::setDisabledImage)), Thiscall, cocos2d::CCMenuItemSprite, setDisabledImage, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemSprite::updateImagesVisibility)), Thiscall, cocos2d::CCMenuItemSprite, updateImagesVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemSprite::initWithNormalSprite)), Thiscall, cocos2d::CCMenuItemSprite, initWithNormalSprite, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
		}
	};
}
