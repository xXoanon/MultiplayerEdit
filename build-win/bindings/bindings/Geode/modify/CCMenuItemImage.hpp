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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithNormalImage
		#define GEODE_STATICS_initWithNormalImage
		GEODE_AS_STATIC_FUNCTION(initWithNormalImage) 
	#endif

	#ifndef GEODE_STATICS_setDisabledSpriteFrame
		#define GEODE_STATICS_setDisabledSpriteFrame
		GEODE_AS_STATIC_FUNCTION(setDisabledSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_setNormalSpriteFrame
		#define GEODE_STATICS_setNormalSpriteFrame
		GEODE_AS_STATIC_FUNCTION(setNormalSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_setSelectedSpriteFrame
		#define GEODE_STATICS_setSelectedSpriteFrame
		GEODE_AS_STATIC_FUNCTION(setSelectedSpriteFrame) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithNormalImage
		#define GEODE_CONCEPT_CHECK_initWithNormalImage
		GEODE_CONCEPT_FUNCTION_CHECK(initWithNormalImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisabledSpriteFrame
		#define GEODE_CONCEPT_CHECK_setDisabledSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setDisabledSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNormalSpriteFrame
		#define GEODE_CONCEPT_CHECK_setNormalSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setNormalSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSelectedSpriteFrame
		#define GEODE_CONCEPT_CHECK_setSelectedSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setSelectedSpriteFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItemImage> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemImage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemImage>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemImage>>::ModifyBase;
		using Base = cocos2d::CCMenuItemImage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemImage::create)), Default, cocos2d::CCMenuItemImage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCMenuItemImage::create)), Default, cocos2d::CCMenuItemImage, create, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*>::func(&cocos2d::CCMenuItemImage::create)), Default, cocos2d::CCMenuItemImage, create, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemImage::create)), Default, cocos2d::CCMenuItemImage, create, char const*, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemImage::create)), Default, cocos2d::CCMenuItemImage, create, char const*, char const*, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMenuItemImage::init)), Thiscall, cocos2d::CCMenuItemImage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemImage::initWithNormalImage)), Thiscall, cocos2d::CCMenuItemImage, initWithNormalImage, char const*, char const*, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCMenuItemImage::setDisabledSpriteFrame)), Thiscall, cocos2d::CCMenuItemImage, setDisabledSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCMenuItemImage::setNormalSpriteFrame)), Thiscall, cocos2d::CCMenuItemImage, setNormalSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCMenuItemImage::setSelectedSpriteFrame)), Thiscall, cocos2d::CCMenuItemImage, setSelectedSpriteFrame, cocos2d::CCSpriteFrame*)
		}
	};
}
