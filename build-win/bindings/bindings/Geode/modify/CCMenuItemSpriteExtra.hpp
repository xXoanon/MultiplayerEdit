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

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x44a60, Thiscall, CCMenuItemSpriteExtra, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44bb0, Default, CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44db0, Thiscall, CCMenuItemSpriteExtra, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44ec0, Thiscall, CCMenuItemSpriteExtra, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x450e0, Thiscall, CCMenuItemSpriteExtra, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44c50, Thiscall, CCMenuItemSpriteExtra, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, setSizeMult, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, setSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, updateSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, useAnimationType, MenuAnimationType)
		}
	};
}
