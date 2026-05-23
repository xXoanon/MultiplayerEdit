#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDifficultySprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyFrame
		#define GEODE_STATICS_getDifficultyFrame
		GEODE_AS_STATIC_FUNCTION(getDifficultyFrame) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateDifficultyFrame
		#define GEODE_STATICS_updateDifficultyFrame
		GEODE_AS_STATIC_FUNCTION(updateDifficultyFrame) 
	#endif

	#ifndef GEODE_STATICS_updateFeatureState
		#define GEODE_STATICS_updateFeatureState
		GEODE_AS_STATIC_FUNCTION(updateFeatureState) 
	#endif

	#ifndef GEODE_STATICS_updateFeatureStateFromLevel
		#define GEODE_STATICS_updateFeatureStateFromLevel
		GEODE_AS_STATIC_FUNCTION(updateFeatureStateFromLevel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDifficultyFrame
		#define GEODE_CONCEPT_CHECK_getDifficultyFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getDifficultyFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDifficultyFrame
		#define GEODE_CONCEPT_CHECK_updateDifficultyFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updateDifficultyFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFeatureState
		#define GEODE_CONCEPT_CHECK_updateFeatureState
		GEODE_CONCEPT_FUNCTION_CHECK(updateFeatureState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFeatureStateFromLevel
		#define GEODE_CONCEPT_CHECK_updateFeatureStateFromLevel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFeatureStateFromLevel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJDifficultySprite> : ModifyBase<ModifyDerive<Der, GJDifficultySprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDifficultySprite>>;
		using ModifyBase<ModifyDerive<Der, GJDifficultySprite>>::ModifyBase;
		using Base = GJDifficultySprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJDifficultyName>::func(&GJDifficultySprite::create)), Default, GJDifficultySprite, create, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJDifficultyName>::func(&GJDifficultySprite::getDifficultyFrame)), Default, GJDifficultySprite, getDifficultyFrame, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJDifficultyName>::func(&GJDifficultySprite::init)), Default, GJDifficultySprite, init, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GJDifficultyName>::func(&GJDifficultySprite::updateDifficultyFrame)), Default, GJDifficultySprite, updateDifficultyFrame, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJFeatureState>::func(&GJDifficultySprite::updateFeatureState)), Default, GJDifficultySprite, updateFeatureState, GJFeatureState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GJDifficultySprite::updateFeatureStateFromLevel)), Default, GJDifficultySprite, updateFeatureStateFromLevel, GJGameLevel*)
		}
	};
}
