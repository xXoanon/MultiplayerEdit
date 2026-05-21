#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongObject> : ModifyBase<ModifyDerive<Der, SongObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongObject>>;
		using ModifyBase<ModifyDerive<Der, SongObject>>::ModifyBase;
		using Base = SongObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongObject, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongObject, init, int)
		}
	};
}
