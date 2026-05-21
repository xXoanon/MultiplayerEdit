#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJChestSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_switchToState
		#define GEODE_STATICS_switchToState
		GEODE_AS_STATIC_FUNCTION(switchToState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToState
		#define GEODE_CONCEPT_CHECK_switchToState
		GEODE_CONCEPT_FUNCTION_CHECK(switchToState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJChestSprite> : ModifyBase<ModifyDerive<Der, GJChestSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJChestSprite>>;
		using ModifyBase<ModifyDerive<Der, GJChestSprite>>::ModifyBase;
		using Base = GJChestSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d15e0, Default, GJChestSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1770, Thiscall, GJChestSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d16b0, Thiscall, GJChestSprite, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChestSprite, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d17e0, Thiscall, GJChestSprite, switchToState, ChestSpriteState, bool)
		}
	};
}
