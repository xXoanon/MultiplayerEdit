#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addRankLabel
		#define GEODE_STATICS_addRankLabel
		GEODE_AS_STATIC_FUNCTION(addRankLabel) 
	#endif

	#ifndef GEODE_STATICS_addShardSprite
		#define GEODE_STATICS_addShardSprite
		GEODE_AS_STATIC_FUNCTION(addShardSprite) 
	#endif

	#ifndef GEODE_STATICS_changeToLockedArt
		#define GEODE_STATICS_changeToLockedArt
		GEODE_AS_STATIC_FUNCTION(changeToLockedArt) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateState
		#define GEODE_STATICS_updateState
		GEODE_AS_STATIC_FUNCTION(updateState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRankLabel
		#define GEODE_CONCEPT_CHECK_addRankLabel
		GEODE_CONCEPT_FUNCTION_CHECK(addRankLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addShardSprite
		#define GEODE_CONCEPT_CHECK_addShardSprite
		GEODE_CONCEPT_FUNCTION_CHECK(addShardSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_changeToLockedArt
		#define GEODE_CONCEPT_CHECK_changeToLockedArt
		GEODE_CONCEPT_FUNCTION_CHECK(changeToLockedArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateState
		#define GEODE_CONCEPT_CHECK_updateState
		GEODE_CONCEPT_FUNCTION_CHECK(updateState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathSprite> : ModifyBase<ModifyDerive<Der, GJPathSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathSprite>>;
		using ModifyBase<ModifyDerive<Der, GJPathSprite>>::ModifyBase;
		using Base = GJPathSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJPathSprite::create)), Default, GJPathSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJPathSprite::addRankLabel)), Default, GJPathSprite, addRankLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJPathSprite::addShardSprite)), Default, GJPathSprite, addShardSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJPathSprite::changeToLockedArt)), Default, GJPathSprite, changeToLockedArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJPathSprite::init)), Default, GJPathSprite, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJPathSprite::updateState)), Default, GJPathSprite, updateState, )
		}
	};
}
