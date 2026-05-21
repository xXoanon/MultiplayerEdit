#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AnimatedShopKeeper.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_playReactAnimation
		#define GEODE_STATICS_playReactAnimation
		GEODE_AS_STATIC_FUNCTION(playReactAnimation) 
	#endif

	#ifndef GEODE_STATICS_startAnimating
		#define GEODE_STATICS_startAnimating
		GEODE_AS_STATIC_FUNCTION(startAnimating) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playReactAnimation
		#define GEODE_CONCEPT_CHECK_playReactAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playReactAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startAnimating
		#define GEODE_CONCEPT_CHECK_startAnimating
		GEODE_CONCEPT_FUNCTION_CHECK(startAnimating) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AnimatedShopKeeper> : ModifyBase<ModifyDerive<Der, AnimatedShopKeeper>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AnimatedShopKeeper>>;
		using ModifyBase<ModifyDerive<Der, AnimatedShopKeeper>>::ModifyBase;
		using Base = AnimatedShopKeeper;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AnimatedShopKeeper, create, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2aff00, Thiscall, AnimatedShopKeeper, animationFinished, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AnimatedShopKeeper, init, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2afbe0, Thiscall, AnimatedShopKeeper, playReactAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2afe70, Thiscall, AnimatedShopKeeper, startAnimating, )
		}
	};
}
