#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GravityEffectSprite.hpp>
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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateSpritesColor
		#define GEODE_STATICS_updateSpritesColor
		GEODE_AS_STATIC_FUNCTION(updateSpritesColor) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GravityEffectSprite::create)), Default, GravityEffectSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GravityEffectSprite::init)), Default, GravityEffectSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GravityEffectSprite::draw)), Default, GravityEffectSprite, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&GravityEffectSprite::updateSpritesColor)), Default, GravityEffectSprite, updateSpritesColor, cocos2d::ccColor3B)
		}
	};
}
