#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretNumberLayer.hpp>
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

	#ifndef GEODE_STATICS_playNumberEffect
		#define GEODE_STATICS_playNumberEffect
		GEODE_AS_STATIC_FUNCTION(playNumberEffect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playNumberEffect
		#define GEODE_CONCEPT_CHECK_playNumberEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playNumberEffect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretNumberLayer> : ModifyBase<ModifyDerive<Der, SecretNumberLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretNumberLayer>>;
		using ModifyBase<ModifyDerive<Der, SecretNumberLayer>>::ModifyBase;
		using Base = SecretNumberLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9960, Default, SecretNumberLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ed00, Thiscall, SecretNumberLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9a20, Thiscall, SecretNumberLayer, playNumberEffect, int)
		}
	};
}
