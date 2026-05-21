#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LocalLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

	#ifndef GEODE_STATICS_getAllLevelsInDict
		#define GEODE_STATICS_getAllLevelsInDict
		GEODE_AS_STATIC_FUNCTION(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_STATICS_getMainLevelString
		#define GEODE_STATICS_getMainLevelString
		GEODE_AS_STATIC_FUNCTION(getMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_tryLoadMainLevelString
		#define GEODE_STATICS_tryLoadMainLevelString
		GEODE_AS_STATIC_FUNCTION(tryLoadMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrder
		#define GEODE_STATICS_updateLevelOrder
		GEODE_AS_STATIC_FUNCTION(updateLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRevision
		#define GEODE_STATICS_updateLevelRevision
		GEODE_AS_STATIC_FUNCTION(updateLevelRevision) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllLevelsInDict
		#define GEODE_CONCEPT_CHECK_getAllLevelsInDict
		GEODE_CONCEPT_FUNCTION_CHECK(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllLevelsWithName
		#define GEODE_CONCEPT_CHECK_getAllLevelsWithName
		GEODE_CONCEPT_FUNCTION_CHECK(getAllLevelsWithName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreatedLevels
		#define GEODE_CONCEPT_CHECK_getCreatedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCreatedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreatedLists
		#define GEODE_CONCEPT_CHECK_getCreatedLists
		GEODE_CONCEPT_FUNCTION_CHECK(getCreatedLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelsInNameGroups
		#define GEODE_CONCEPT_CHECK_getLevelsInNameGroups
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelsInNameGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevelString
		#define GEODE_CONCEPT_CHECK_getMainLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelsAsUnmodified
		#define GEODE_CONCEPT_CHECK_markLevelsAsUnmodified
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelsAsUnmodified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveLevelToTop
		#define GEODE_CONCEPT_CHECK_moveLevelToTop
		GEODE_CONCEPT_FUNCTION_CHECK(moveLevelToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLevels
		#define GEODE_CONCEPT_CHECK_reorderLevels
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLists
		#define GEODE_CONCEPT_CHECK_reorderLists
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadMainLevelString
		#define GEODE_CONCEPT_CHECK_tryLoadMainLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadMainLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelOrder
		#define GEODE_CONCEPT_CHECK_updateLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRevision
		#define GEODE_CONCEPT_CHECK_updateLevelRevision
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRevision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateListOrder
		#define GEODE_CONCEPT_CHECK_updateListOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateListOrder) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LocalLevelManager> : ModifyBase<ModifyDerive<Der, LocalLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LocalLevelManager>>;
		using ModifyBase<ModifyDerive<Der, LocalLevelManager>>::ModifyBase;
		using Base = LocalLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32ff30, Default, LocalLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32ffd0, Thiscall, LocalLevelManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3309a0, Thiscall, LocalLevelManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330a00, Thiscall, LocalLevelManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330910, Thiscall, LocalLevelManager, firstLoad, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3303a0, Thiscall, LocalLevelManager, getAllLevelsInDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getAllLevelsWithName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getCreatedLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getCreatedLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getLevelsInNameGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330290, Thiscall, LocalLevelManager, getMainLevelString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, markLevelsAsUnmodified, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, moveLevelToTop, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, reorderLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, reorderLists, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330010, Thiscall, LocalLevelManager, tryLoadMainLevelString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330890, Thiscall, LocalLevelManager, updateLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330500, Thiscall, LocalLevelManager, updateLevelRevision, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, updateListOrder, )
		}
	};
}
