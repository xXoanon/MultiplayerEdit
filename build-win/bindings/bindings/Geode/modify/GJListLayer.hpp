#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJListLayer.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJListLayer> : ModifyBase<ModifyDerive<Der, GJListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJListLayer>>;
		using ModifyBase<ModifyDerive<Der, GJListLayer>>::ModifyBase;
		using Base = GJListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f7a0, Default, GJListLayer, create, BoomListView*, char const*, cocos2d::ccColor4B, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f8d0, Thiscall, GJListLayer, init, BoomListView*, char const*, cocos2d::ccColor4B, float, float, int)
		}
	};
}
