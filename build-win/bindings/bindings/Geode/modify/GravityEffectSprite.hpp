#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GravityEffectSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpritesColor
		#define GEODE_CONCEPT_CHECK_updateSpritesColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpritesColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GravityEffectSprite> : ModifyBase<ModifyDerive<Der, GravityEffectSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GravityEffectSprite>>;
		using ModifyBase<ModifyDerive<Der, GravityEffectSprite>>::ModifyBase;
		using Base = GravityEffectSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GravityEffectSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb2b0, Thiscall, GravityEffectSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GravityEffectSprite, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GravityEffectSprite, updateSpritesColor, cocos2d::ccColor3B)
		}
	};
}
