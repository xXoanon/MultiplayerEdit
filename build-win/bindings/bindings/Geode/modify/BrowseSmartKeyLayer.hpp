#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BrowseSmartKeyLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_getAllSelectedBlocks
		#define GEODE_STATICS_getAllSelectedBlocks
		GEODE_AS_STATIC_FUNCTION(getAllSelectedBlocks) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onButton
		#define GEODE_STATICS_onButton
		GEODE_AS_STATIC_FUNCTION(onButton) 
	#endif

	#ifndef GEODE_STATICS_onPrefabObject
		#define GEODE_STATICS_onPrefabObject
		GEODE_AS_STATIC_FUNCTION(onPrefabObject) 
	#endif

	#ifndef GEODE_STATICS_updateChanceValues
		#define GEODE_STATICS_updateChanceValues
		GEODE_AS_STATIC_FUNCTION(updateChanceValues) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChanceToSelected
		#define GEODE_CONCEPT_CHECK_addChanceToSelected
		GEODE_CONCEPT_FUNCTION_CHECK(addChanceToSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTemplateObjects
		#define GEODE_CONCEPT_CHECK_createTemplateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createTemplateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deletedSelectedItems
		#define GEODE_CONCEPT_CHECK_deletedSelectedItems
		GEODE_CONCEPT_FUNCTION_CHECK(deletedSelectedItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSelectedBlocks
		#define GEODE_CONCEPT_CHECK_getAllSelectedBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSelectedBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButton
		#define GEODE_CONCEPT_CHECK_onButton
		GEODE_CONCEPT_FUNCTION_CHECK(onButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrefabObject
		#define GEODE_CONCEPT_CHECK_onPrefabObject
		GEODE_CONCEPT_FUNCTION_CHECK(onPrefabObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChanceValues
		#define GEODE_CONCEPT_CHECK_updateChanceValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateChanceValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BrowseSmartKeyLayer> : ModifyBase<ModifyDerive<Der, BrowseSmartKeyLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BrowseSmartKeyLayer>>;
		using ModifyBase<ModifyDerive<Der, BrowseSmartKeyLayer>>::ModifyBase;
		using Base = BrowseSmartKeyLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BrowseSmartKeyLayer, create, GJSmartTemplate*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45c550, Thiscall, BrowseSmartKeyLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BrowseSmartKeyLayer, addChanceToSelected, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BrowseSmartKeyLayer, createTemplateObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BrowseSmartKeyLayer, deletedSelectedItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45c270, Thiscall, BrowseSmartKeyLayer, getAllSelectedBlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45b470, Thiscall, BrowseSmartKeyLayer, init, GJSmartTemplate*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45be50, Thiscall, BrowseSmartKeyLayer, onButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45c470, Thiscall, BrowseSmartKeyLayer, onPrefabObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45c340, Thiscall, BrowseSmartKeyLayer, updateChanceValues, )
		}
	};
}
