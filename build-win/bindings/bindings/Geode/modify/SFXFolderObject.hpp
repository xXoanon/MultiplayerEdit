#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXFolderObject.hpp>
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
	struct ModifyDerive<Der, SFXFolderObject> : ModifyBase<ModifyDerive<Der, SFXFolderObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXFolderObject>>;
		using ModifyBase<ModifyDerive<Der, SFXFolderObject>>::ModifyBase;
		using Base = SFXFolderObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXFolderObject, create, int, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXFolderObject, init, int, gd::string, int)
		}
	};
}
