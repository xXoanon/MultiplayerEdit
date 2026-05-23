#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setSizeMult
		#define GEODE_STATICS_setSizeMult
		GEODE_AS_STATIC_FUNCTION(setSizeMult) 
	#endif

	#ifndef GEODE_STATICS_useAnimationType
		#define GEODE_STATICS_useAnimationType
		GEODE_AS_STATIC_FUNCTION(useAnimationType) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSizeMult
		#define GEODE_CONCEPT_CHECK_setSizeMult
		GEODE_CONCEPT_FUNCTION_CHECK(setSizeMult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSprite
		#define GEODE_CONCEPT_CHECK_setSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSprite
		#define GEODE_CONCEPT_CHECK_updateSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_useAnimationType
		#define GEODE_CONCEPT_CHECK_useAnimationType
		GEODE_CONCEPT_FUNCTION_CHECK(useAnimationType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuItemSpriteExtra> : ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>>;
		using ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>>::ModifyBase;
		using Base = CCMenuItemSpriteExtra;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&CCMenuItemSpriteExtra::create)), Default, CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCMenuItemSpriteExtra::activate)), Default, CCMenuItemSpriteExtra, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCMenuItemSpriteExtra::selected)), Default, CCMenuItemSpriteExtra, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCMenuItemSpriteExtra::unselected)), Default, CCMenuItemSpriteExtra, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&CCMenuItemSpriteExtra::init)), Default, CCMenuItemSpriteExtra, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCMenuItemSpriteExtra::setSizeMult)), Default, CCMenuItemSpriteExtra, setSizeMult, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, setSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, updateSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<MenuAnimationType>::func(&CCMenuItemSpriteExtra::useAnimationType)), Default, CCMenuItemSpriteExtra, useAnimationType, MenuAnimationType)
		}
	};
}
