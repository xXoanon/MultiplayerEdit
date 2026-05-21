#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCheckpointPopup.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SetupCheckpointPopup> : ModifyBase<ModifyDerive<Der, SetupCheckpointPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCheckpointPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCheckpointPopup>>::ModifyBase;
		using Base = SetupCheckpointPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupCheckpointPopup, create, CheckpointGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x468f90, Thiscall, SetupCheckpointPopup, init, CheckpointGameObject*, cocos2d::CCArray*)
		}
	};
}
