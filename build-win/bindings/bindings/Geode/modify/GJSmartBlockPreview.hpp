#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartBlockPreview.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addChance
		#define GEODE_STATICS_addChance
		GEODE_AS_STATIC_FUNCTION(addChance) 
	#endif

	#ifndef GEODE_STATICS_addPreview
		#define GEODE_STATICS_addPreview
		GEODE_AS_STATIC_FUNCTION(addPreview) 
	#endif

	#ifndef GEODE_STATICS_addTemplateGuide
		#define GEODE_STATICS_addTemplateGuide
		GEODE_AS_STATIC_FUNCTION(addTemplateGuide) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChance
		#define GEODE_CONCEPT_CHECK_addChance
		GEODE_CONCEPT_FUNCTION_CHECK(addChance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCount
		#define GEODE_CONCEPT_CHECK_addCount
		GEODE_CONCEPT_FUNCTION_CHECK(addCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPreview
		#define GEODE_CONCEPT_CHECK_addPreview
		GEODE_CONCEPT_FUNCTION_CHECK(addPreview) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTemplateGuide
		#define GEODE_CONCEPT_CHECK_addTemplateGuide
		GEODE_CONCEPT_FUNCTION_CHECK(addTemplateGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createInfoLabel
		#define GEODE_CONCEPT_CHECK_createInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(createInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSelectItem
		#define GEODE_CONCEPT_CHECK_toggleSelectItem
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSelectItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartBlockPreview> : ModifyBase<ModifyDerive<Der, GJSmartBlockPreview>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartBlockPreview>>;
		using ModifyBase<ModifyDerive<Der, GJSmartBlockPreview>>::ModifyBase;
		using Base = GJSmartBlockPreview;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b59d0, Default, GJSmartBlockPreview, create, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b6770, Thiscall, GJSmartBlockPreview, addChance, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartBlockPreview, addCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b65f0, Thiscall, GJSmartBlockPreview, addPreview, gd::string, gd::string, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b5da0, Thiscall, GJSmartBlockPreview, addTemplateGuide, SmartPrefabResult, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b5b10, Thiscall, GJSmartBlockPreview, addTemplateGuide, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartBlockPreview, createInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartBlockPreview, init, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartBlockPreview, toggleSelectItem, bool)
		}
	};
}
