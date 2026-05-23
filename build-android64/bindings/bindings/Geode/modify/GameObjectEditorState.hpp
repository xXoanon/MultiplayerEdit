#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObjectEditorState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadValues
		#define GEODE_STATICS_loadValues
		GEODE_AS_STATIC_FUNCTION(loadValues) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_loadValues
		#define GEODE_CONCEPT_CHECK_loadValues
		GEODE_CONCEPT_FUNCTION_CHECK(loadValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObjectEditorState> : ModifyBase<ModifyDerive<Der, GameObjectEditorState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObjectEditorState>>;
		using ModifyBase<ModifyDerive<Der, GameObjectEditorState>>::ModifyBase;
		using Base = GameObjectEditorState;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&GameObjectEditorState::loadValues)), Default, GameObjectEditorState, loadValues, GameObject*)
		}
	};
}
