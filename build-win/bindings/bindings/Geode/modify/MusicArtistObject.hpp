#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicArtistObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
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
	struct ModifyDerive<Der, MusicArtistObject> : ModifyBase<ModifyDerive<Der, MusicArtistObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicArtistObject>>;
		using ModifyBase<ModifyDerive<Der, MusicArtistObject>>::ModifyBase;
		using Base = MusicArtistObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347ac0, Default, MusicArtistObject, create, int, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicArtistObject, init, int, gd::string, gd::string, gd::string)
		}
	};
}
