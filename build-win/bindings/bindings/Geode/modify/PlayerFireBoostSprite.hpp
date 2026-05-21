#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerFireBoostSprite.hpp>
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

	#ifndef GEODE_STATICS_loopFireAnimation
		#define GEODE_STATICS_loopFireAnimation
		GEODE_AS_STATIC_FUNCTION(loopFireAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateFireIn
		#define GEODE_CONCEPT_CHECK_animateFireIn
		GEODE_CONCEPT_FUNCTION_CHECK(animateFireIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateFireOut
		#define GEODE_CONCEPT_CHECK_animateFireOut
		GEODE_CONCEPT_FUNCTION_CHECK(animateFireOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loopFireAnimation
		#define GEODE_CONCEPT_CHECK_loopFireAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(loopFireAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerFireBoostSprite> : ModifyBase<ModifyDerive<Der, PlayerFireBoostSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerFireBoostSprite>>;
		using ModifyBase<ModifyDerive<Der, PlayerFireBoostSprite>>::ModifyBase;
		using Base = PlayerFireBoostSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a3d80, Default, PlayerFireBoostSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a3e20, Thiscall, PlayerFireBoostSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerFireBoostSprite, animateFireIn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerFireBoostSprite, animateFireOut, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a3e80, Thiscall, PlayerFireBoostSprite, loopFireAnimation, )
		}
	};
}
