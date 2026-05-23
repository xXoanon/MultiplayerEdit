#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DungeonBarsSprite.hpp>
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

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_animateOutBars
		#define GEODE_STATICS_animateOutBars
		GEODE_AS_STATIC_FUNCTION(animateOutBars) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateOutBars
		#define GEODE_CONCEPT_CHECK_animateOutBars
		GEODE_CONCEPT_FUNCTION_CHECK(animateOutBars) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DungeonBarsSprite> : ModifyBase<ModifyDerive<Der, DungeonBarsSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DungeonBarsSprite>>;
		using ModifyBase<ModifyDerive<Der, DungeonBarsSprite>>::ModifyBase;
		using Base = DungeonBarsSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DungeonBarsSprite::create)), Default, DungeonBarsSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DungeonBarsSprite::init)), Default, DungeonBarsSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DungeonBarsSprite::visit)), Default, DungeonBarsSprite, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DungeonBarsSprite::animateOutBars)), Default, DungeonBarsSprite, animateOutBars, )
		}
	};
}
