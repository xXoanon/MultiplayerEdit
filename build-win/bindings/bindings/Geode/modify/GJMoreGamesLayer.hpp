#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMoreGamesLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_getMoreGamesList
		#define GEODE_STATICS_getMoreGamesList
		GEODE_AS_STATIC_FUNCTION(getMoreGamesList) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoreGamesList
		#define GEODE_CONCEPT_CHECK_getMoreGamesList
		GEODE_CONCEPT_FUNCTION_CHECK(getMoreGamesList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMoreGamesLayer> : ModifyBase<ModifyDerive<Der, GJMoreGamesLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMoreGamesLayer>>;
		using ModifyBase<ModifyDerive<Der, GJMoreGamesLayer>>::ModifyBase;
		using Base = GJMoreGamesLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ff40, Default, GJMoreGamesLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280620, Thiscall, GJMoreGamesLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280280, Thiscall, GJMoreGamesLayer, getMoreGamesList, )
		}
	};
}
