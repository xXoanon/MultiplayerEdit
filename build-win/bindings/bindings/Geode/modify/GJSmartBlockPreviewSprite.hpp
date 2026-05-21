#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartBlockPreviewSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartBlockPreviewSprite> : ModifyBase<ModifyDerive<Der, GJSmartBlockPreviewSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartBlockPreviewSprite>>;
		using ModifyBase<ModifyDerive<Der, GJSmartBlockPreviewSprite>>::ModifyBase;
		using Base = GJSmartBlockPreviewSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartBlockPreviewSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77de0, Thiscall, GJSmartBlockPreviewSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b6970, Thiscall, GJSmartBlockPreviewSprite, visit, )
		}
	};
}
