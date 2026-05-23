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

	#ifndef GEODE_STATICS_animateFireIn
		#define GEODE_STATICS_animateFireIn
		GEODE_AS_STATIC_FUNCTION(animateFireIn) 
	#endif

	#ifndef GEODE_STATICS_animateFireOut
		#define GEODE_STATICS_animateFireOut
		GEODE_AS_STATIC_FUNCTION(animateFireOut) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlayerFireBoostSprite::create)), Default, PlayerFireBoostSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&PlayerFireBoostSprite::init)), Default, PlayerFireBoostSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlayerFireBoostSprite::animateFireIn)), Default, PlayerFireBoostSprite, animateFireIn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlayerFireBoostSprite::animateFireOut)), Default, PlayerFireBoostSprite, animateFireOut, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlayerFireBoostSprite::loopFireAnimation)), Default, PlayerFireBoostSprite, loopFireAnimation, )
		}
	};
}
